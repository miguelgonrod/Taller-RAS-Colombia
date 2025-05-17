#include "MicroROS.h"

rcl_subscription_t integer_status_sub;
std_msgs__msg__Int32 int_received;

rcl_publisher_t integer_pub;
std_msgs__msg__Int32 int_status;

rclc_executor_t executor;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;


MicroROS::MicroROS(){
}

void MicroROS::initialize(){
    Serial.begin(115200);
    Serial.println("taller ras node started");

    // Adding Wifi
    IPAddress agent_ip(192, 168, 238, 198); // change this line to your computer IP
    size_t agent_port = 8888; // Don't change this port unless you know what you are doing and you have 8888 port already in use

    char ssid[] = "Miguel"; // change this line with your wifi name
    char psk[]= "Ruta2005*"; // change this line with your password

    set_microros_wifi_transports(ssid, psk, agent_ip, agent_port);
    //set_microros_serial_transports(Serial);  // uncomment this line if you want to use serial instead of wifi

    delay(2000);

    allocator = rcl_get_default_allocator();
    rclc_support_init(&support, 0, NULL, &allocator);
    rclc_node_init_default(&node, "taller_ras_status_sub", "", &support);
}


void MicroROS::executors_start(){
  rclc_executor_init(&executor, &support.context, 1, &allocator);
  rclc_executor_add_subscription(&executor, &integer_status_sub, &int_received,&MicroROS::integer_status_callback, ON_NEW_DATA);

  Serial.println("Executors Started");
}

void MicroROS::integer_subscriber_define(){

    rclc_subscription_init_default(
    &integer_status_sub,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
    "/microROS/subscriber");

    Serial.println("Subscriptor a /microROS/subscriber definido");

}

void MicroROS::integer_publisher_define() {
    rclc_publisher_init_default(
        &integer_pub,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
        "/microROS/publisher"
    );
    int_status.data = 0;
}

void MicroROS::integer_status_callback(const void *msg_recv){
    const std_msgs__msg__Int32 * recieved_data = (const std_msgs__msg__Int32 *) msg_recv ;
    int number_received = recieved_data->data;

    Serial.print("Recibi: ");
    Serial.println(number_received);
}

void MicroROS::publish_int() {
    rcl_publish(&integer_pub, &int_status, NULL);
    Serial.print("Publicado: ");
    Serial.println(int_status.data);
    int_status.data++;
}

void MicroROS::start_receiving_msgs(){
    rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
    delay(100);
}