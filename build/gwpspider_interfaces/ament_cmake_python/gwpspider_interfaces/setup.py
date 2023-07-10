from setuptools import find_packages
from setuptools import setup

setup(
    name='gwpspider_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('gwpspider_interfaces', 'gwpspider_interfaces.*')),
)
