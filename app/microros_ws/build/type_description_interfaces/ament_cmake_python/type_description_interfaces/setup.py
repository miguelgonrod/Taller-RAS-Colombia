from setuptools import find_packages
from setuptools import setup

setup(
    name='type_description_interfaces',
    version='2.0.2',
    packages=find_packages(
        include=('type_description_interfaces', 'type_description_interfaces.*')),
)
