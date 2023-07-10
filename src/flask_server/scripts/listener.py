import rclpy
from std_msgs.msg import String

def message_callback(msg):
    # Implement the desired logic to handle the received message
    print('Received message:', msg.data)

def main(args=None):
    rclpy.init(args=args)

    node = rclpy.create_node('listener_node')
    subscriber = node.create_subscription(
        String,
        'flask_topic',
        message_callback,
        10
    )

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
