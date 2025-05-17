from setuptools import find_packages
from setuptools import setup

setup(
    name='builtin_interfaces',
    version='2.0.2',
    packages=find_packages(
        include=('builtin_interfaces', 'builtin_interfaces.*')),
)
