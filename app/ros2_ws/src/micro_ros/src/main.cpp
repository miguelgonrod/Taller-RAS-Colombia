#include <Arduino.h>
#include "MicroROS.h"

MicroROS microAgent ;

void setup() {
    microAgent.initialize();
    microAgent.integer_subscriber_define();
    microAgent.integer_publisher_define();
    microAgent.executors_start();
}

void loop() {
  microAgent.start_receiving_msgs();
  microAgent.publish_int();
}