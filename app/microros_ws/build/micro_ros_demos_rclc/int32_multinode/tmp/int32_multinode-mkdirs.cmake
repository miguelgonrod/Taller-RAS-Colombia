# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/miguel/microros_ws/src/uros/micro-ROS-demos/rclc/int32_multinode"
  "/home/miguel/microros_ws/build/micro_ros_demos_rclc/int32_multinode/src/int32_multinode-build"
  "/home/miguel/microros_ws/build/micro_ros_demos_rclc/temp_install"
  "/home/miguel/microros_ws/build/micro_ros_demos_rclc/int32_multinode/tmp"
  "/home/miguel/microros_ws/build/micro_ros_demos_rclc/int32_multinode/src/int32_multinode-stamp"
  "/home/miguel/microros_ws/build/micro_ros_demos_rclc/int32_multinode/src"
  "/home/miguel/microros_ws/build/micro_ros_demos_rclc/int32_multinode/src/int32_multinode-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/miguel/microros_ws/build/micro_ros_demos_rclc/int32_multinode/src/int32_multinode-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/miguel/microros_ws/build/micro_ros_demos_rclc/int32_multinode/src/int32_multinode-stamp${cfgdir}") # cfgdir has leading slash
endif()
