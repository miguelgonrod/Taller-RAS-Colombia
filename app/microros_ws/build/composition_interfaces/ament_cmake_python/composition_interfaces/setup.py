from setuptools import find_packages
from setuptools import setup

setup(
    name='composition_interfaces',
    version='2.0.2',
    packages=find_packages(
        include=('composition_interfaces', 'composition_interfaces.*')),
)
