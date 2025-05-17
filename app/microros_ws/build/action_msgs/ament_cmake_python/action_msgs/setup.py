from setuptools import find_packages
from setuptools import setup

setup(
    name='action_msgs',
    version='2.0.2',
    packages=find_packages(
        include=('action_msgs', 'action_msgs.*')),
)
