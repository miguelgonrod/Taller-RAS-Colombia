from setuptools import find_packages
from setuptools import setup

setup(
    name='geometry_msgs',
    version='5.3.6',
    packages=find_packages(
        include=('geometry_msgs', 'geometry_msgs.*')),
)
