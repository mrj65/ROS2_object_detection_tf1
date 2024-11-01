from setuptools import find_packages
from setuptools import setup

setup(
    name='interface_tutorial',
    version='0.0.0',
    packages=find_packages(
        include=('interface_tutorial', 'interface_tutorial.*')),
)
