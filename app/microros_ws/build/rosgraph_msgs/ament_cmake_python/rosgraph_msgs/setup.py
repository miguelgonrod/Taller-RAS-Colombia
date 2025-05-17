from setuptools import find_packages
from setuptools import setup

setup(
    name='rosgraph_msgs',
    version='2.0.2',
    packages=find_packages(
        include=('rosgraph_msgs', 'rosgraph_msgs.*')),
)
