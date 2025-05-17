# Taller-RAS-Colombia

## Table of contents
* [Description](#description)
* [Technologies](#technologies)
* [Setup](#setup)
* [Licence](#licence)

## Description
This repository provides a ready-to-use Docker environment for a hands-on, beginner-level workshop on ROS 2 and micro-ROS, focusing on publisher/subscriber patterns. Developed and delivered by RAS Colombia, it includes:

A Dockerfile that builds a ROS 2 Jazzy container preconfigured with all necessary dependencies

Example publisher and subscriber nodes in both native ROS 2 (Python) and micro-ROS (on an embedded target)

Step-by-step instructions to build, launch and interact with the demo applications

Guidance on connecting a microcontroller or micro-ROS client to the ROS 2 network over Wi-Fi

Use this setup to jump straight into learning ROS 2 concepts—no manual installation required!

## Technologies
This project was created with:
* python: 3.12
* ros: jazzy

## Setup

### Run on your computer
To run this project on your computer you need to have installed ROS2 Jazzy on Ubuntu 24.04, <a href="https://docs.ros.org/en/jazzy/Installation.html" target="_blank">installation guide</a> and platformio extension on Vscode

First step is to clone the repository in your workspace
```
$ git clone https://github.com/miguelgonrod/Taller-RAS-Colombia
$ mv Taller-RAS-Colombia/app/ros2_ws/src/taller_ras ~/ros2_ws/src
```

Now you need to compile your workspace
```
$ cd ~/ros2_ws
$ colcon build
$ source install/setup.bash
```

In one terminal you need to run the publisher
```
$ ros2 run taller_ras publicador
```

And in another the subscriber
```
$ ros2 run taller_ras suscriptor
```

Now to test Micro-ROS package open your vscode, and in platformio extension open proyect located in Taller-RAS-Colombia/app/ros2_ws/src/micro_ros

If you want to use Wifi, change your ipaddress, network ssid, and network password in lib/microROS/MicroROS.cpp line 23, 26 and 27
If you want to use serial change in platformio.ini 'board_microros_transport = wifi' to 'board_microros_transport = serial' and in lib/microROS/MicroROS.cpp comment line 29 and uncomment line 30

now load your code using platformio upload to your esp32

### Run on docker
To run this package on docker make sure you have docker installed (either if tou are using <a href="https://docs.docker.com/desktop/setup/install/windows-install/" target="_blank">windows</a>, <a href="https://docs.docker.com/engine/install/ubuntu/" target="_blank">linux</a>, or <a href="https://docs.docker.com/desktop/setup/install/mac-install/" target="_blank">linux</a>)

First step is to clone the repository:
```
$ git clone https://github.com/miguelgonrod/Taller-RAS-Colombia
$ cd Taller-RAS-Colombia
```

Now if you are using ubuntu you need to run the container using the script I provided or using docker build and docker run:
```
$ chmod u+x run.sh
$ ./run.sh
```

If you are on windows run this commands on Docker desktop terminal:
```
$ docker build -f build/rosJazzy.Dockerfile -t rosjazzyimage .
$ docker run -it -v ${PWD}/app:/home/app rosjazzyimage
```


wait for it to compile and run, and after you are inside the container compile workspace:
```
$ cd /app/ros2_ws
$ colcon build
$ source install/setup.bash
```

In one terminal you need to run the publisher
```
$ ros2 run taller_ras publicador
```

And in another the subscriber
```
$ ros2 run taller_ras suscriptor
```


## Licence
Taller-RAS-Colombia is available under the BSD-3-Clause license. See the LICENSE file for more details.
