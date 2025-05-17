from setuptools import find_packages
from setuptools import setup

setup(
    name='service_msgs',
    version='2.0.2',
    packages=find_packages(
        include=('service_msgs', 'service_msgs.*')),
)
