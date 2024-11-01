from setuptools import find_packages
from setuptools import setup

setup(
    name='ros_object_detection_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('ros_object_detection_msgs', 'ros_object_detection_msgs.*')),
)
