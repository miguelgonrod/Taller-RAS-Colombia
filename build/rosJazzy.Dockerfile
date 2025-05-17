FROM osrf/ros:jazzy-desktop-full

RUN apt-get update && \
    apt-get install -y python3 python3-pip python3-venv && \
    apt-get install -y nano && \
    apt-get install -y tmux && \
    apt-get install -y net-tools

WORKDIR /home/app

COPY app/ .

RUN /bin/bash -c "source /opt/ros/jazzy/setup.bash;"

RUN /bin/bash -c "rosdep update;"