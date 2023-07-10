from example_interfaces.srv import AddTwoInts
from my_service_interfaces.srv import SetValue
import rclpy
from rclpy.node import Node


class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(SetValue, 'set_value', self.add_two_ints_callback)

    def add_two_ints_callback(self, request, response):
        response.succes = True
        self.get_logger().info(request.value)

        return response


def main(args=None):
    rclpy.init(args=args)

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()