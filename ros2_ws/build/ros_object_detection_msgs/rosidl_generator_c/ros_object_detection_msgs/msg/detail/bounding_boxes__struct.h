// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_object_detection_msgs:msg/BoundingBoxes.idl
// generated code does not contain a copyright notice

#ifndef ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOXES__STRUCT_H_
#define ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOXES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "ros_object_detection_msgs/msg/detail/bounding_box__struct.h"

/// Struct defined in msg/BoundingBoxes in the package ros_object_detection_msgs.
typedef struct ros_object_detection_msgs__msg__BoundingBoxes
{
  ros_object_detection_msgs__msg__BoundingBox__Sequence data;
} ros_object_detection_msgs__msg__BoundingBoxes;

// Struct for a sequence of ros_object_detection_msgs__msg__BoundingBoxes.
typedef struct ros_object_detection_msgs__msg__BoundingBoxes__Sequence
{
  ros_object_detection_msgs__msg__BoundingBoxes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_object_detection_msgs__msg__BoundingBoxes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOXES__STRUCT_H_
