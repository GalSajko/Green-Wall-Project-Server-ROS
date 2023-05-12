from setuptools import find_packages, setup

setup(
    name = 'gwpserver',
    packages = find_packages(include = ['server', 'wall']),
    version = '1.0.0',
    description = 'Green-Wall-Project Python library for server side.',
    author = 'Gal Sajko, Jure Pavlovič',
    license = 'MIT',
)