#!/usr/bin/env python3
"""This is a server that processes data from arduino controllers and sends it to the spider robot.
"""
import os
import sys
file_dir = os.path.dirname(__file__)
sys.path.append(file_dir)
from GeneticAlgorithm import geneticAlgorithm
from sensor import Sensor
import config
import time
from std_msgs.msg import String, Float32MultiArray, Float32
import rclpy 
import json
import threading
from logging import FileHandler, WARNING
from flask import Flask, request, jsonify, render_template, flash, redirect, url_for
import requests
import numpy as np
import chatbot
from flask_sqlalchemy import SQLAlchemy
from flask_migrate import Migrate
import random
from gwpspider_interfaces import gwp_interfaces_data as gid
from datetime import datetime
from gwpspider_interfaces.srv import SpiderGoal, Messages
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from gwpconfig import commconstants
from std_srvs.srv import Empty

#Environment values
app = Flask(__name__)
file_handler = FileHandler('errorlog.txt')
file_handler.setLevel(WARNING)
app.logger.addHandler(file_handler)
app.secret_key = b'asdasgfascajv'
app.config['SQLALCHEMY_DATABASE_URI'] = "postgresql://spiderpi:379579@localhost:5432/plants"
app.config['SQLALCHEMY_TRACK_MODIFICATIONS'] = False
db = SQLAlchemy(app)
migrate = Migrate(app, db)
config.sensorBase = [None for i in range(6*36)]
config.arduino_times = [None for i in range(6)]
config.arduino_status = [None for i in range(6)]
config.update_data = [None for i in range(15)]
config.update_data[14] = 0.0
config.update_data[13] = 0.0
config.deleted = []
config.orderIndex = 0
config.no_of_moves = 0
config.poseData = []
config.empty_tank = True
config.arduino_pings = [False for i in range(6)]
TOKEN = chatbot.CHATBOT_TOKEN
CHAT_ID = chatbot.CHAT_ID
f = open("volume.txt", "r")
lines = f.readlines()
config.used_volume = int(lines[0])
config.reset_time = None
print(config.used_volume )
f.close()

#ROS2 node classes
class WateringSuccessService(Node):
    """Node class for a ROS2 service that updates the index for a plant after it has been watered.

    Args:
        Node (ROS2 Node): ROS2 service node.
    """
    def __init__(self):
        super().__init__('service')
        self.srv = self.create_service(Empty, gid.SET_WATERING_SUCCESS_SERVICE, self.callback)

    def callback(self, request, response):
        try:
            config.used_volume += config.order[config.orderIndex].water
            f = open("volume.txt", "w")
            f.write(str(config.used_volume))
            f.close()
            
        except Exception as e:
            print(e)
        
        try:
            if config.orderIndex != 0:
                with app.app_context():
                    array_ind = config.order[config.orderIndex].index
                    
                    config.sensorBase[array_ind].lastWater = time.time()
                    plant = Plants.query.get(config.sensorBase[array_ind].db_id)
                    plant.date_time = datetime.fromtimestamp(config.sensorBase[array_ind].lastWater)
                    db.session.commit()
        except Exception as e:
            print("error: "+str(e))
        
        config.orderIndex += 1
        return response

class MinimalService(Node):
    """Node class for a ROS2 service that sends plant location to the robot.

    Args:
        Node (ROS2 Node): ROS2 service node.
    """
    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(SpiderGoal, gid.SEND_GOAL_SERVICE ,self.spider_goal_callback)

    def spider_goal_callback(self, request, response):
        try:
            if config.orderIndex<len(config.order) and not config.empty_tank and config.orderIndex != 0:
                response.watering_position = [(config.order[config.orderIndex].x), config.order[config.orderIndex].y, 0.0]
                response.go_refill = False
                
                response.volume = config.order[config.orderIndex].water
                print(config.order[config.orderIndex].y)
            elif config.empty_tank:
                response.watering_position =[]
                response.go_refill = True
                response.volume = config.refill_volume
                config.empty_tank = False
            else:
                if config.orderIndex != 0:
                    print("refilling")
                    refill()
                response.watering_position =[]
                response.go_refill = True
                response.volume = config.refill_volume
                config.empty_tank = False
            
            return response
        except Exception as e:
            print(e)
            send_error_notif("service error: "+str(e))
            
class PositionSubscriber(Node):
    """ROS2 node that listens to a ROS2 topic where the robot sends its own location.

    Args:
        Node (ROS2 Node): ROS2 subscriber node.
    """
    def __init__(self):
        super().__init__('position_subscriber')
        self.subscription = self.create_subscription(
            Float32MultiArray,
            gid.SPIDER_POSE_TOPIC,
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        x, y = msg.data[0], msg.data[1]
        self.get_logger().info("Received data: x={}, y={}".format(x, y))
        if config.poseData == [] or config.update_data[14] == 0.0:
            config.reset_time = time.time()
        if config.poseData != []:
            config.update_data[14]+= np.sqrt((config.poseData[0] - x)**2 + (config.poseData[1] - y)**2)
        if time.time() - config.reset_time >= 3600:
            config.update_data[14] == 0.0
        if config.poseData != [x,y]:
            config.poseData = [x,y]

class MessagesService(Node):
    """ROS2 node that listens to a ROS2 topic where the robot sends information about its own workflow. 

    Args:
        Node (ROS2 Node): ROS2 subscriber node.
    """
    def __init__(self):
        super().__init__('service')
        self.srv = self.create_service(Messages, gid.MESSAGE_SERVICE, self.callback)

    def callback(self, request, response):
        try:
            print("service callback")
            msg = request.message
            messages(msg)
        except Exception as e:
            print(e)
        return response

class VoltageSubscriber(Node):
    """ROS2 node that listens to a ROS2 topic where the robot sends information about the battery voltage. 

    Args:
        Node (ROS2 Node): ROS2 subscriber node.
    """
    def __init__(self):
        super().__init__('voltage_subscriber')
        self.subscription = self.create_subscription(
            Float32,
            gid.BATTERY_VOLTAGE_TOPIC,
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        
        config.update_data[10] = msg.data

#Database table classes
class Plants(db.Model):
    """Class represents the Plants table in the database.

    Args:
        db (database): database instance.
    """
    __tablename__ = 'plants'
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(1000))
    waterInterval= db.Column(db.Integer)
    date_time = db.Column(db.DateTime)
    panel = db.Column(db.Integer)
    line = db.Column(db.Integer)
    sensorNum = db.Column(db.Integer)

class PlantTypes(db.Model):
    """Class represents the Plants table in the database.

    Args:
        db (database): database instance.
    """
    __tablename__ = 'planttypes'
    id = db.Column(db.Integer, primary_key=True)
    plant_type = db.Column(db.Integer)
    min_moisture = db.Column(db.Integer)

class PlantsData(db.Model):
    """Class represents PlantsData table in the database.

    Args:
        db (database): database instance.
    """
    __tablename__ = 'plantsdata'
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(1000))
    name_latin = db.Column(db.String(1000))
    plant_type = db.Column(db.Integer)
    watering_96h = db.Column(db.Integer)
    watering_72h = db.Column(db.Integer)
    quantity = db.Column(db.Integer)
    light_level = db.Column(db.Integer)
    min_moisture = db.Column(db.Integer)
    areas = db.Column(db.String(1000))
    plant_needs = db.Column(db.String(1000))
    characteristics = db.Column(db.String(1000))

#Routes for working with database
@app.route('/updt/<int:id_num>', methods=['GET','POST'])
def updt(id_num):
    """Function updates data for a specific id in the database.

    Args:
        id_num (int): unique number representing an entry in the database table.

    Returns:
        function: serves a HTML page.
    """
    plantsdata = PlantsData.query.all()
    record_to_update = Plants.query.get_or_404(id_num)
    if request.method=='POST':
        record_to_update.name = request.form['name']
        record_to_update.date_time = request.form['waterdate']
        panel = record_to_update.panel
        vrstica = record_to_update.line-1
        sensor_id = record_to_update.sensorNum
        array_ind = ((panel-1)*36+(vrstica)*6+(sensor_id))-1
        config.sensorBase[array_ind].plantName = request.form['name']
        config.sensorBase[array_ind].lastWater = request.form['waterdate']
        try:
            db.session.commit()
            flash("Updated", 'success')
            return redirect(url_for('show_data'))
        except Exception as e:
            print(e)
            return redirect(url_for('show_data'))
    else:
        print(type(record_to_update.date_time))
        return render_template("update.html", record=record_to_update,plantsdata=plantsdata)

@app.route('/data', methods=['GET', 'POST'])
def show_data():
    """Serves a HTML page that show data from the table Plants.

    Returns:
        function: Serves a HTML page that show data from the table Plants.
    """
    plants = Plants.query.all()
    
    return render_template("data.html", plants=plants)

@app.route('/add',methods=['GET', 'POST'])
def ind():
    """Function that serves a HTML page for adding new entries to the Plants table.

    Returns:
        function: serves a HTML page for adding new entries to the Plants table.
        String: confirmation in case of POST request.
    """
    if request.method=='GET':
        posts = Plants.query.all()
        water_date = datetime.now().strftime("%Y-%m-%dT%H:%M")
        plantsdata = PlantsData.query.all()
        position = config.selected.split(':')
        try:
            position = json.loads(request.args['position'])
        except Exception as e:
            print(e)
        print(type(water_date))
        return render_template("plants.html",posts=posts, plantsdata=plantsdata, position=position, water_date=water_date)
    else:
        config.selected = request.get_data().decode()
        return 'OK'
    
@app.route('/addPlantsData',methods=['GET', 'POST'])
def add():
    """Function that serves a HTML page for adding new entries to the Plants table.

    Returns:
        function: serves a HTML page for adding new entries to the Plants table.
        
    """
    plants_data = PlantsData.query.all()
    return render_template("addPlantData.html",plants_data=plants_data)

@app.route('/posts',methods=['GET','POST'])
def add_posts():
    """Function adds an entry to the Plants table and calculates the position for the next entrie if the user wants to add more entries.

    Returns:
        function: serves a HTML page for adding data or showing data, depending on the user action.
    """
    position = []
    if request.method == 'POST':
        name  = request.form['name']
        water_interval = request.form['waterInterval']
        date_time = request.form['waterdate']
        line = request.form['line']
        panel = request.form['panel']
        sensor_num = request.form['sensorNum']
        datetime_object = datetime.strptime(date_time, "%Y-%m-%dT%H:%M")
        date1 = datetime.now()
        delta = date1-datetime_object
        plant_post = Plants(name=name, waterInterval=water_interval, date_time=date_time, panel=panel, line=line, sensorNum=sensor_num)
        if db.session.query(Plants.id).filter(Plants.panel==plant_post.panel,Plants.line==plant_post.line,Plants.sensorNum==plant_post.sensorNum).count()>0:
            flash("error there is already a plant at that location", 'error')
        elif delta.days < 0:
            flash("bad date entry", 'error')
            print("bad date entry")
        else:
            db.session.add(plant_post)
            db.session.commit()
            set_data_from_db()
            flash("Post Added",'success')
    if request.form['action'] == 'Submit Data':
        return redirect(url_for('show_data'))
    else:
        name  = request.form['name']
        water_interval = request.form['waterInterval']
        date_time = request.form['waterdate']
        line = request.form['line']
        panel = request.form['panel']
        sensor_num = request.form['sensorNum']
        if sensor_num == "6" and line != "6":
            sensor_num = str(1)
            line =str(1+int(line))
        elif line != "6" or (line == "6" and sensor_num!="6"):
            sensor_num = str(int(sensor_num)+1)
        position = json.dumps([panel,line,sensor_num])
        return redirect(url_for('ind',position=position))

@app.route('/plantData',methods=['GET','POST'])
def add_plant_data():
    """Function adds an entry to the Plants table and calculates the position for the next entrie if the user wants to add more entries.

    Returns:
        function: serves a HTML page for adding data or showing data, depending on the user action.
    """
    position = []
    if request.method == 'POST':
        name  = request.form['name']
        name_latin = request.form['name_latin']
        plant_type = request.form['type']
        watering_96h = request.form['watering_96h']
        watering_72h = request.form['watering_72h']
        quantity = request.form['quantity']
        light_level = request.form['light_level']
        
        areas = request.form['areas']
        plant_needs = request.form['plant_needs']
        characteristics = request.form['characteristics']
        plant_data_post = PlantsData(name=name, 
                                     name_latin=name_latin,
                                     plant_type=plant_type,
                                     watering_96h=watering_96h,
                                     watering_72h=watering_72h,
                                     quantity=quantity,
                                     light_level=light_level,
                                     areas=areas,
                                     plant_needs=plant_needs,
                                     characteristics=characteristics)
        db.session.add(plant_data_post)
        db.session.commit()
        flash("Post Added",'success')
    
        return redirect(url_for('add'))

@app.route('/getId', methods=['POST', 'GET'])
def get_id():
    """Function maps object location to an entry in the database.

    Returns:
        int: unique id number for a plant position.
    """
    data = request.get_data().decode().split(':')
    id_num = db.session.query(Plants.id).filter(Plants.panel==data[0],Plants.line==data[1],Plants.sensorNum==data[2]).all()
    return str(id_num[0][0])

@app.route('/delete/<int:id_num>', methods=['POST', 'GET'])
def delete(id_num):
    """Function deletes a record from the Plants table.

    Args:
        id_num (int): unique identification number that represents a database entry.

    Returns:
        function: serves a HTML page that shows data from the Plants table.
    """
    record_to_delete = Plants.query.get_or_404(id_num)
    try:
        panel = record_to_delete.panel
        vrstica = record_to_delete.line-1
        sensor_id = record_to_delete.sensorNum
        array_ind = ((panel-1)*36+vrstica*6+sensor_id)-1
        config.deleted.append(array_ind)
        config.sensorBase[array_ind] = None
        db.session.delete(record_to_delete)
        db.session.commit()
        set_data_from_db()
        flash("Plant deleted succesfully", 'success')
        return redirect(url_for('show_data'))
    except Exception as e:
        flash("Error", 'error')
        print(e)
        return redirect(url_for('show_data'))

#Working variables
sensor_ids = [54, 55, 56, 57, 58, 59]
ARDUINO_NUM = 6
startPos = Sensor()
startPos.x = 1.9
startPos.y = 0.1
config.jsons = []
config.order = []
config.need_watering = []
config.watering_queue = []
config.nextRoute = []
config.status = "OFF"
config.refill_volume = 0
config.next_refill_volume = 0
config.lastOrderIndex = 1


#ROS2 initialization
rclpy.init(args=None)
ros2_service_node = MinimalService()
ros2_message_service = MessagesService()
ros2_position_subscriber = PositionSubscriber()
ros2_watering_success_service = WateringSuccessService()
ros2_voltage_subscriber = VoltageSubscriber()
executor = MultiThreadedExecutor()
executor.add_node(ros2_message_service)
executor.add_node(ros2_service_node)
executor.add_node(ros2_position_subscriber)
executor.add_node(ros2_watering_success_service)
executor.add_node(ros2_voltage_subscriber)
executor_thread = threading.Thread(target=executor.spin, daemon=True)
executor_thread.start()

#Arduino data thread
def get_data_thread():
    """Function pings arduinos so they can start sending data

    Returns:
        int : 0
    """
    try:
        while True:
            for i in range(len(config.ARDUIONO_IP_LIST)):
                print("CALLING ARDUINOS")
                try:
                    requests.get(f'http://{config.ARDUIONO_IP_LIST[i]}:5000/zalij', timeout=15)
                    config.arduino_pings[i]=True
                except Exception as e:
                    print(config.ARDUIONO_IP_LIST[i])
                    print(e)
                time.sleep(1)
            time.sleep(60)
        return 0
    except Exception as e:
        send_error_notif("Error in get_data_thread: "+str(e))
        return 0

def checking_arduinos():
    while True:
        try:
            check_arduino_sensor_status()
        except Exception as e:
            print(e)
        time.sleep(60)

th2 = threading.Thread(target=get_data_thread)
th2.start()
th3 = threading.Thread(target=checking_arduinos)
th3.start()

#Main working loop functions
def set_data_from_db():
    """Function takes data from the database and adds it to the Sensor objects in the list of Sensor objects.
    """
    start = 0
    x_dim = 20
    y_dim = 25
    plants = Plants.query.all()
   
    for data in plants:
        start = 0
        panel = data.panel
        vrstica = data.line-1
        sensor_id = data.sensorNum
        name = data.name

        db_id = db.session.query(Plants.id).filter(Plants.panel==panel,Plants.line==data.line,Plants.sensorNum==sensor_id).all()[0][0]
       
        plant_type = 1 #db.session.query(PlantsData.plant_type).filter(PlantsData.name==name).all()[0][0]
        water =db.session.query(PlantsData.watering_96h).filter(PlantsData.name==name).all()[0][0]
      
        areas = db.session.query(PlantsData.areas).filter(PlantsData.name==name).all()[0][0]
        needs = db.session.query(PlantsData.plant_needs).filter(PlantsData.name==name).all()[0][0]
        latin_name = db.session.query(PlantsData.name_latin).filter(PlantsData.name==name).all()[0][0]
        characteristics = db.session.query(PlantsData.characteristics).filter(PlantsData.name==name).all()[0][0]
        offset = 22
        #sensor_id-=1
        if panel == 1 or panel == 4:
            start = 20
        elif panel == 3 or panel == 6:
            start = -20
        if panel < 4:
            y_coordinate = (((5 - vrstica) + 6) * y_dim + offset) / 100.0
            x_coordinate = (start + ((panel - 1) * 7 + (sensor_id-1)) * x_dim + x_dim / 2) / 100.0
        else:
            if (vrstica) == 0:
                offset = 17
                
            y_coordinate = (((5 - vrstica)) * y_dim + offset) / 100.0
            
            x_coordinate = (start + ((panel - 4) * 7 + (sensor_id-1)) * x_dim + x_dim / 2) / 100.0
            
        
        sensor = Sensor()
        sensor.plantName = name
        sensor.arduino = panel
        sensor.line = vrstica
        sensor.sensorID = sensor_id-1
        sensor.x = x_coordinate
        sensor.y = y_coordinate
        sensor.water = water
        sensor.lastWater = data.date_time.timestamp()
        sensor.db_id = db_id
        sensor.areas = areas
        sensor.characteristics = characteristics
        sensor.latin_name = latin_name
        sensor.needs = needs
        array_ind = ((panel-1)*36+vrstica*6+sensor_id)-1
        sensor.index = array_ind
        if config.sensorBase[array_ind] is None:
            config.sensorBase[array_ind] = sensor
        else:
            config.sensorBase[array_ind].plantName = name
            config.sensorBase[array_ind].lastWater = sensor.lastWater
            config.sensorBase[array_ind].water = sensor.water
            config.sensorBase[array_ind].db_id = db_id
            config.sensorBase[array_ind].index = array_ind
            config.sensorBase[array_ind].needs = needs
            config.sensorBase[array_ind].latin_name = latin_name
            config.sensorBase[array_ind].areas = areas
            config.sensorBase[array_ind].characteristics = characteristics
           
def tsp(data, sol):
    """Function that solves the travelling salesperson problem for visiting the sensors.

    Args:
        data (list): list of sensors that need visiting

    Returns:
        list: ordered list of sensors
    """
    try:
        print("here")
        data.insert(0, startPos)
        sol = list(range(len(data)))
        if len(data) <=3:
            return sol 
        x_coordinate = []
        y_coordinate = []
        for i in data:
            x_coordinate.append(i.x)
            y_coordinate.append(i.y)
        best_dots = []
        print("Path generation started")
        best_state = geneticAlgorithm(sol,x_coordinate,y_coordinate,len(data), 200, 500)
        best_state = np.array(best_state)
        zero_ind = np.where(best_state == 0)[0][0]
        best_state = np.roll(best_state, -zero_ind)
        for i in best_state:
            best_dots.append(data[i])
        print("Done generating")
        return best_dots
    except Exception as e:
        msg = String()
        msg.data = "STOP"
        publisher.publish(msg)
        send_error_notif("Path generation error: "+str(e))

def setup_sensor_list(panel, arduino):
    """Function transforms all the sensor data to Sensor objects and inserts them into a list.

    Args:
        panel (Integer): Id number of arduino
        arduino (JSON): Sensor data in JSON format
    """
    start = 0
    for i in range(ARDUINO_NUM):
        for j in sensor_ids:
            start = 0
            try:
                offset = 22
                sensor_id = config.SENSOR_IDS.index(arduino["vrstica" + str(i)]["senzor" + str(j)]["id"])
                vrstica = i
                x_dim = 20
                y_dim = 25
                cap = arduino["vrstica" + str(i)]["senzor" + str(j)]["cap"]
                if panel == 1 or panel == 4:
                    start = 20
                elif panel == 3 or panel == 6:
                    start = -20
                if panel < 4:
                    y_coordinate = (((5 - vrstica) + 6) * y_dim + offset) / 100.0
                    x_coordinate = (start + ((panel - 1) * 7 + (sensor_id)) * x_dim + x_dim / 2) / 100.0
                else:
                    if (vrstica) == 0:
                        offset = 17
                    y_coordinate = (((5 - vrstica)) * y_dim + offset) / 100.0
                    
                    x_coordinate = (start + ((panel - 4) * 7 + (sensor_id)) * x_dim + x_dim / 2) / 100.0
                    
                sensor = Sensor()
                sensor.arduino = panel
                sensor.line = vrstica
                sensor.sensorID = sensor_id
                sensor.x = x_coordinate
                sensor.y = y_coordinate
                sensor.cap = cap
                sensor.lastAlive = time.time()
                array_ind = ((panel-1)*36+vrstica*6+sensor_id)
                sensor.index = array_ind
                if config.sensorBase[array_ind] is None:
                    config.sensorBase[array_ind] = sensor
                else:
                    config.sensorBase[array_ind].cap = sensor.cap
                    config.sensorBase[array_ind].lastAlive = sensor.lastAlive
                    config.sensorBase[array_ind].index = sensor.index
            except Exception as e:
                #print(e)
                pass

def create_order():
    """Selects the plants that will be watered on the path.

    Returns:
        list: Order of plants that will be watered on the path.
    """
    try:
        data = []
        i = 0
        sol = []
        water_sum = 0
        done = 0
        first_time = True
        while True:
            if len(config.watering_queue) < 3 and len(config.watering_queue) != 0 and len(data) == 0:
                data = config.watering_queue[:]
                config.watering_queue = []
                for i in data:
                    print(i)
                    water_sum += i.water
                data.insert(0,startPos) 
                print(data)
                return data
            elif len(config.watering_queue) != 0:
                if water_sum + config.watering_queue[len(config.watering_queue)-1].water <= config.WATER_LIMIT:
                    dot = config.watering_queue.pop()
                    water_sum += dot.water
                    data.append(dot)
                    sol.append(i)
                    i+=1
                else:
                    if config.refill_volume == 0:
                        config.refill_volume = water_sum
                    else:
                        config.next_refill_volume = water_sum
                    break
            else:
                print("no entries")
                with app.app_context():
                    set_data_from_db()
                check_moisture()
                if first_time:
                    first_time = False
                    continue
                return []
        order = tsp(data,sol)
        print(order)
        return order
    except Exception as e:
        print(e)
        msg = String()
        msg.data = "STOP"
        publisher.publish(msg)
        send_error_notif("Sequence build error: "+str(e))

def send_error_notif(notif):
    """Function sends message to a Telegram group chat.

    Args:
        notif (String): Message or message code for the Telegram group chat.
    """
    try:
        message = ""
        if notif in commconstants.STATUS_CODES_DICT:
            message = commconstants.STATUS_CODES_DICT[notif]
        else:
            message = notif
        url = f"https://api.telegram.org/bot{TOKEN}/sendMessage?chat_id={CHAT_ID}&text={message}"
        requests.get(url)
    except Exception as e:
        print("Cant send message to telegram: "+str(e))

def check_moisture():
    """Function makes a list of plants that need watering.
    """
    try:
        must_water = []
        can_wait = []
        for i in config.sensorBase:
            if i is not None:
                try:
                    if i.cap != None:
                        a = datetime.fromtimestamp(i.lastWater)
                        b = datetime.now()
                        delta = b- a
                        if delta.days >=5:
                            must_water.append(i)
                        elif delta.days == 4 and i.cap <= 10:
                            can_wait.append(i)
                except Exception as e:
                    print("There is a database entry without senosr or sensor without database entry" ,e)
        random.shuffle(must_water)
        random.shuffle(can_wait)
        config.watering_queue = can_wait+must_water
    except Exception as e:
        send_error_notif("Problem while checking moisture: "+str(e))

def refill():
    """Function gets the variables ready for a new working loop.
    """
    try:
        if len(config.order) !=0:
            array_ind = config.order[len(config.order)-1].index
            config.sensorBase[array_ind].lastWater = time.time()
            with app.app_context():
                plant = Plants.query.get(config.sensorBase[array_ind].db_id)
                plant.date_time = datetime.fromtimestamp(config.sensorBase[array_ind].lastWater)
                db.session.commit()
            config.jsons=[]
            config.orderIndex = 0
            config.order = config.nextRoute.copy()
            #config.used_volume += config.refill_volume
            config.refill_volume = config.next_refill_volume
            config.nextRoute = create_order()
            if config.nextRoute == [] and not config.end_loop:
                send_error_notif("ALL PLANTS WATERED")
                config.end_loop = True
            config.update_data[13] = 0
    except Exception as e:
        send_error_notif("Refill stup error: "+str(e))

def messages(message):
    """Function checks if the received message is describing the status of the robot.

    Args:
        message (String): Message from robot.
    """
    if message == commconstants.REFILLING_STARTED_MESSAGE:
        refill()
    elif message == commconstants.WORKING_PHASE_STARTED_MESSAGE:
        config.status = "Working"
    elif message == commconstants.RESTING_PHASE_STARTED_MESSAGE:
        config.status = "Resting"
    elif message == commconstants.LEG_MOVE_MESSAGE:
        config.update_data[13]+=1
    elif message[0] == 'E':
        send_error_notif(message)

def check_arduino_sensor_status():
    """Function checks if any arduino or sensor stopped responding.
    """
    timer = time.time()
    for i in range(len(config.arduino_times)):
        try:
            if timer - config.arduino_times[i] > 600 and config.arduino_status[i] != True:
                msg = "Arduino %s not responding" % (i+1)
                send_error_notif(msg)
                config.arduino_status[i] = True 
                for j in config.sensorBase:
                    try:
                        if j.arduino == i+1:
                            j.lastAlive = None
                    except Exception as e:
                        continue
        except:
            continue
    time.sleep(1)
    for i in config.sensorBase:
        try:
            if timer - i.lastAlive > 600 and i.dead != True and config.arduino_status[i.arduino-1]!=True and config.arduino_times[i.arduino-1] - i.lastAlive >30:
                msg = "Sensor %s on line %s on arduino %s is not responding" % (i.sensorID+1, i.line+1,i.arduino)
                send_error_notif(msg)
                i.dead = True
        except Exception as e:
            #print(e)
            continue

def send_goal():
    """Updates data about the path and goal points for the frontend.
    """
    try:
        data = []
        print(config.order)
        for i in config.order:
            data.append(i.toJson())
        config.update_data[1] = data
        config.update_data[2] = config.orderIndex
        
    except Exception as e:
        print(e)
        print("ERROR TRYING TO SEND GOAL VALUE TO FRONTEND")    

def get_plant_num():
    """Funtion counts the number of active sensors.
    """
    count = 0
    for i in config.sensorBase:
        if i is not None:
            count+=1
    config.update_data[5] = count

def get_routes():
    """Function updates data about routes for the frontend
    """
    data_curr = []
    data_next = []
    length = len(config.order)
    try:
        for i in range(length):
            data_curr.append(config.order[i].toJson())
            data_next.append(config.nextRoute[i].toJson())
    except Exception as e:
        pass
    config.update_data[6] = data_curr
    config.update_data[7] = data_next

#Server routes
@app.route('/deleted', methods=['GET'])
def deleted():
    """Sends indexes of deleted entries to the frontend.

    Returns:
       list: indexes of deleted entries.
    """
    temp = config.deleted.copy()
    config.deleted.clear()
    return jsonify(temp)
        
@app.route('/update')
def update():
    """Collects and sends data to frontend.

    Returns:
        JSON: Data for frontend.
    """
    try:
        config.update_data[0] = config.status
        send_goal()
        config.jsons.clear()
        #print(config.sensorBase)
        for i in config.sensorBase:
            if i is not None:
                
                
                config.jsons.append(json.loads(i.toJson()))
        config.update_data[4] = config.jsons
        
        get_plant_num()
        get_routes()
        if len(config.poseData) == 2:
            config.update_data[3] = config.poseData
        config.update_data[8] = config.used_volume
    except Exception as e:
        send_error_notif("Error updating data: "+str(e))
    try:
        return jsonify(config.update_data), 200, {"Access-Control-Allow-Origin": "*"}
    except Exception as e:
        print(e)
        return jsonify([]), 200, {"Access-Control-Allow-Origin": "*"}

@app.route('/test', methods=['POST'])
def handle_data():
    """Receives data from arduinos and calls the function that creates Sensor objects.
    Returns:
        String: Reply to arduino after getting the data.
    """
    try:
        ip_address = request.remote_addr
        panel = int(ip_address[len(ip_address)-1])
        if config.arduino_pings[int(ip_address[len(ip_address)-1])-1] == True:
            config.arduino_times[int(ip_address[len(ip_address)-1])-1] = time.time()
            config.arduino_status[int(ip_address[len(ip_address)-1])-1] = False
            config.arduino_pings[int(ip_address[len(ip_address)-1])-1] = False
        data = request.get_json()
    except Exception as e:
        send_error_notif("Error while receiving sensor data: "+str(e))
    try:
        setup_sensor_list(panel,data)
    except Exception:
        send_error_notif("error processing data")
    return "OK"

@app.route('/station', methods=['POST'])
def station_data():
    """Function receives data from weather stations.

    Returns:
        String: Confirmation that data arrived.
    """
    try:
        ip_address = request.remote_addr
        data = request.get_json()
        if "192.168.1.33" == ip_address:
            config.update_data[9] = data
        elif "192.168.1.34" == ip_address:
            config.update_data[11] = data
        elif "192.168.1.35" == ip_address:
            config.update_data[12] = data
        else:
            print(type(ip_address))
    except Exception as e:
        send_error_notif("Error while receiving station data: "+str(e))
    return "OK"

@app.route('/start', methods=['POST'])
def start_generating():
    """Function generates current and next route.

    Returns:
        String: Confirmation string.
    """
    try:
        config.orderIndex = 0
        with app.app_context():
            set_data_from_db()
        check_moisture()
        config.empty_tank = True
        config.order = create_order()
        config.nextRoute = create_order()
        config.end_loop = False
    except Exception as e:
        send_error_notif("Error at start_generating: "+str(e))
    return 'OK'

@app.route('/svg')
def svg():
    """Route for serving the frontend page in svg.

    Returns:
        render_template: serves a webpage
    """
    #pubMotion.publish("Hello World!")
    set_data_from_db()
    return render_template('svgtest.html')

#Init functions
def ros_init():
    """Sets up ROS2 publisher.
    """
    global node, publisher
    node = rclpy.create_node('flask_node')
    publisher = node.create_publisher(String, 'flask_topic', 10)

def run_flask():
    """Function runs the app.
    """
    config.orderIndex = 0
    app.run(host='192.168.1.20', port=5000)

if __name__ == '__main__':
    with app.app_context():
        db.create_all()
    ros_init()
    run_flask()
