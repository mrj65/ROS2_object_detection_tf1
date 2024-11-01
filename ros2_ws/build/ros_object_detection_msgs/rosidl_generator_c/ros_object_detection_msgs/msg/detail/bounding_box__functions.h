// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros_object_detection_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOX__FUNCTIONS_H_
#define ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOX__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros_object_detection_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ros_object_detection_msgs/msg/detail/bounding_box__struct.h"

/// Initialize msg/BoundingBox message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_object_detection_msgs__msg__BoundingBox
 * )) before or use
 * ros_object_detection_msgs__msg__BoundingBox__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_object_detection_msgs
bool
ros_object_detection_msgs__msg__BoundingBox__init(ros_object_detection_msgs__msg__BoundingBox * msg);

/// Finalize msg/BoundingBox message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_object_detection_msgs
void
ros_object_detection_msgs__msg__BoundingBox__fini(ros_object_detection_msgs__msg__BoundingBox * msg);

/// Create msg/BoundingBox message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_object_detection_msgs__msg__BoundingBox__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_object_detection_msgs
ros_object_detection_msgs__msg__BoundingBox *
ros_object_detection_msgs__msg__BoundingBox__create();

/// Destroy msg/BoundingBox message.
/**
 * It calls
 * ros_object_detection_msgs__msg__BoundingBox__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_object_detection_msgs
void
ros_object_detection_msgs__msg__BoundingBox__destroy(ros_object_detection_msgs__msg__BoundingBox * msg);

/// Check for msg/BoundingBox message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_object_detection_msgs
bool
ros_object_detection_msgs__msg__BoundingBox__are_equal(const ros_object_detection_msgs__msg__BoundingBox * lhs, const ros_object_detection_msgs__msg__BoundingBox * rhs);

/// Copy a msg/BoundingBox message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_object_detection_msgs
bool
ros_object_detection_msgs__msg__BoundingBox__copy(
  const ros_object_detection_msgs__msg__BoundingBox * input,
  ros_object_detection_msgs__msg__BoundingBox * output);

/// Initialize array of msg/BoundingBox messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_object_detection_msgs__msg__BoundingBox__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_object_detection_msgs
bool
ros_object_detection_msgs__msg__BoundingBox__Sequence__init(ros_object_detection_msgs__msg__BoundingBox__Sequence * array, size_t size);

/// Finalize array of msg/BoundingBox messages.
/**
 * It calls
 * ros_object_detection_msgs__msg__BoundingBox__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_object_detection_msgs
void
ros_object_detection_msgs__msg__BoundingBox__Sequence__fini(ros_object_detection_msgs__msg__BoundingBox__Sequence * array);

/// Create array of msg/BoundingBox messages.
/**
 * It allocates the memory for the array and calls
 * ros_object_detection_msgs__msg__BoundingBox__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_object_detection_msgs
ros_object_detection_msgs__msg__BoundingBox__Sequence *
ros_object_detection_msgs__msg__BoundingBox__Sequence__create(size_t size);

/// Destroy array of msg/BoundingBox messages.
/**
 * It calls
 * ros_object_detection_msgs__msg__BoundingBox__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_object_detection_msgs
void
ros_object_detection_msgs__msg__BoundingBox__Sequence__destroy(ros_object_detection_msgs__msg__BoundingBox__Sequence * array);

/// Check for msg/BoundingBox message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_object_detection_msgs
bool
ros_object_detection_msgs__msg__BoundingBox__Sequence__are_equal(const ros_object_detection_msgs__msg__BoundingBox__Sequence * lhs, const ros_object_detection_msgs__msg__BoundingBox__Sequence * rhs);

/// Copy an array of msg/BoundingBox messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_object_detection_msgs
bool
ros_object_detection_msgs__msg__BoundingBox__Sequence__copy(
  const ros_object_detection_msgs__msg__BoundingBox__Sequence * input,
  ros_object_detection_msgs__msg__BoundingBox__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOX__FUNCTIONS_H_
