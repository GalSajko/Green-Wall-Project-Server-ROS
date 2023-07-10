import sys

from my_service_interfaces.srv import SetValue
from gwpspider_interfaces.srv import SpiderGoal
import rclpy
from rclpy.node import Node


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(SpiderGoal, 'spider_goal')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = SpiderGoal.Request()

    def send_request(self):
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args=None):
    rclpy.init(args=args)

    minimal_client = MinimalClientAsync()
    response = minimal_client.send_request()
    minimal_client.get_logger().info("x:%s \n y:%s \n Action:%s \n Volume:%s" %(str(response.data[0]),str(response.data[1]),str(response.go_refill),str(response.volume)))

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()