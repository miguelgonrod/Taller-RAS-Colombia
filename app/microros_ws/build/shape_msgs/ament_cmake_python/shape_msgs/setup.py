from setuptools import find_packages
from setuptools import setup

setup(
    name='shape_msgs',
    version='5.3.6',
    packages=find_packages(
        include=('shape_msgs', 'shape_msgs.*')),
)
