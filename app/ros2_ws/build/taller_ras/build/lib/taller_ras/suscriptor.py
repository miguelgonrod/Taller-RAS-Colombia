import rclpy
from rclpy.node import Node

from std_msgs.msg import String


class Suscriptor(Node):

    def __init__(self):
        super().__init__('Suscriptor')
        self.subscription = self.create_subscription(
            String,
            'topico_ras',
            self.listener_callback,
            10)
        self.subscription

    def listener_callback(self, msg):
        self.get_logger().info('Recibi: "%s"' % msg.data)


def main(args=None):
    rclpy.init(args=args)

    suscriptor = Suscriptor()

    rclpy.spin(suscriptor)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    suscriptor.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()