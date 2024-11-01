// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_object_detection_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_
#define ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BoundingBox in the package ros_object_detection_msgs.
typedef struct ros_object_detection_msgs__msg__BoundingBox
{
  double xmin;
  double ymin;
  double xmax;
  double ymax;
  rosidl_runtime_c__String data;
  double confidence;
} ros_object_detection_msgs__msg__BoundingBox;

// Struct for a sequence of ros_object_detection_msgs__msg__BoundingBox.
typedef struct ros_object_detection_msgs__msg__BoundingBox__Sequence
{
  ros_object_detection_msgs__msg__BoundingBox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_object_detection_msgs__msg__BoundingBox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_
