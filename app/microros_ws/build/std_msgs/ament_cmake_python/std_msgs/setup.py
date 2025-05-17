from setuptools import find_packages
from setuptools import setup

setup(
    name='std_msgs',
    version='5.3.6',
    packages=find_packages(
        include=('std_msgs', 'std_msgs.*')),
)
