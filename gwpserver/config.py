SERVER_IP = '192.168.1.20'
ARDUIONO_IP_LIST = ['192.168.1.11','192.168.1.12','192.168.1.13','192.168.1.14','192.168.1.15','192.168.1.16']

global visualisationValues
global dataJson
global poseData
global arduinoValues
global arduinoTimes
global minValues
global generate
global sensoraBase
global selected
global deleted
global sensors
global goal
global rnd
global sensorList
global orderIndex
global order
global jsons
global nextRoute
global need_watering
global watering_queue
global already_selected
global status
WATER_LIMIT = 450
SENSOR_IDS = [54, 55, 56, 57, 58, 59]
GET_SENSOR_POSITION_ADDR = 'http://192.168.1.25:5000/zalij'
POST_SPIDER_POSITION = 'http://192.168.1.25:5000/spiderPos'
ARDUINO_DATA = 'http://192.168.1.25:5000/test'

