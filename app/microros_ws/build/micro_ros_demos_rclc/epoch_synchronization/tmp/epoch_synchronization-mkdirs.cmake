# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/miguel/microros_ws/src/uros/micro-ROS-demos/rclc/epoch_synchronization"
  "/home/miguel/microros_ws/build/micro_ros_demos_rclc/epoch_synchronization/src/epoch_synchronization-build"
  "/home/miguel/microros_ws/build/micro_ros_demos_rclc/temp_install"
  "/home/miguel/microros_ws/build/micro_ros_demos_rclc/epoch_synchronization/tmp"
  "/home/miguel/microros_ws/build/micro_ros_demos_rclc/epoch_synchronization/src/epoch_synchronization-stamp"
  "/home/miguel/microros_ws/build/micro_ros_demos_rclc/epoch_synchronization/src"
  "/home/miguel/microros_ws/build/micro_ros_demos_rclc/epoch_synchronization/src/epoch_synchronization-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/miguel/microros_ws/build/micro_ros_demos_rclc/epoch_synchronization/src/epoch_synchronization-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/miguel/microros_ws/build/micro_ros_demos_rclc/epoch_synchronization/src/epoch_synchronization-stamp${cfgdir}") # cfgdir has leading slash
endif()
