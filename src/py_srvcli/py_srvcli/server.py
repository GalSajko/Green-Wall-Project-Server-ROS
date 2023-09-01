from gwpspider_interfaces.srv import SpiderGoal, Messages
from gwpspider_interfaces import gwp_interfaces_data as gid
import rclpy
from rclpy.node import Node


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(Messages, gid.MESSAGE_SERVICE)
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Messages.Request()

    def send_request(self):
        text = input("Enter message: ")
        self.req.message = text
        
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args=None):
    rclpy.init(args=args)
    minimal_client = MinimalClientAsync()
    response = minimal_client.send_request()
    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
