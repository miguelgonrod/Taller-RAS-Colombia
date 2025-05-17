from setuptools import find_packages
from setuptools import setup

setup(
    name='diagnostic_msgs',
    version='5.3.6',
    packages=find_packages(
        include=('diagnostic_msgs', 'diagnostic_msgs.*')),
)
