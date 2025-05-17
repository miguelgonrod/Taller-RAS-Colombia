# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/miguel/microros_ws/src/uros/micro-ROS-demos/rclc/ping_uros_agent"
  "/home/miguel/microros_ws/build/micro_ros_demos_rclc/ping_uros_agent/src/ping_uros_agent-build"
  "/home/miguel/microros_ws/build/micro_ros_demos_rclc/temp_install"
  "/home/miguel/microros_ws/build/micro_ros_demos_rclc/ping_uros_agent/tmp"
  "/home/miguel/microros_ws/build/micro_ros_demos_rclc/ping_uros_agent/src/ping_uros_agent-stamp"
  "/home/miguel/microros_ws/build/micro_ros_demos_rclc/ping_uros_agent/src"
  "/home/miguel/microros_ws/build/micro_ros_demos_rclc/ping_uros_agent/src/ping_uros_agent-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/miguel/microros_ws/build/micro_ros_demos_rclc/ping_uros_agent/src/ping_uros_agent-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/miguel/microros_ws/build/micro_ros_demos_rclc/ping_uros_agent/src/ping_uros_agent-stamp${cfgdir}") # cfgdir has leading slash
endif()
