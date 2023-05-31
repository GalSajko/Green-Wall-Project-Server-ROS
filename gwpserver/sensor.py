import json

class Sensor:
    def __init__(self):
        self.arduino = None
        self.line = None
        self.sensorID = None
        self.x = None
        self.y = None
        self.cap = None
        self.min_moist = None
        self.lastWater = None
        self.lastAlive = None
        self.plantName = None
        self.index = None
        self.water = None
        self.db_id = None
        self.base_index = None
    def toJson(self):
        return json.dumps(self, default=lambda o:o.__dict__)
    