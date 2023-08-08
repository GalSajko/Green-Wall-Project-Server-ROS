import sys

from gwpspider_interfaces.srv import SpiderGoal
from gwpspider_interfaces import gwp_interfaces_data as gid
import rclpy
from rclpy.node import Node
from std_srvs.srv import Empty
import time


class MyNode(Node):
    def __init__(self):
        super().__init__('my_node')

    def call_service1(self):
        client = self.create_client(SpiderGoal, gid.SEND_GOAL_SERVICE)  # Replace 'AddTwoInts' with your actual service type
        while not client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service 1 not available, waiting...')
        request = SpiderGoal.Request()
        future = client.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        future.add_done_callback(self.service1_response_callback)
    
    def service1_response_callback(self, future):
        try:
            response = future.result()
            if response.go_refill == True:
                print("refill sleep")
                
        except Exception as e:
            print(e)

            
        

    def call_service2(self):
        client = self.create_client(Empty, gid.SET_WATERING_SUCCESS_SERVICE)  # Replace 'AnotherServiceType' and 'another_service' with your actual service type and name
        while not client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service 2 not available, waiting...')
        request = Empty.Request()
        future = client.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        

def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    node.call_service1()
    time.sleep(10)
    while True:
        try:
            node.call_service2()
            time.sleep(3)
            node.call_service1()
            time.sleep(3)
            rclpy.spin_once(node)
        except Exception as e:
            print(e)
            break

    
    rclpy.shutdown()


if __name__ == '__main__':
    main()