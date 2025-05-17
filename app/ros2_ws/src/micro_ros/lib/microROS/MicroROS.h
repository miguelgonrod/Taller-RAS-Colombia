#ifndef MICROROS_H
#define MICROROS_H

#include <Arduino.h>
#include <micro_ros_platformio.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <std_msgs/msg/int32.h>

class MicroROS {
public:
    MicroROS();
    void initialize();
    void integer_subscriber_define();
    void integer_publisher_define();
    static void integer_status_callback(const void *msg_recv);
    void publish_int();
    void start_receiving_msgs();
    void executors_start();

private:
};

#endif