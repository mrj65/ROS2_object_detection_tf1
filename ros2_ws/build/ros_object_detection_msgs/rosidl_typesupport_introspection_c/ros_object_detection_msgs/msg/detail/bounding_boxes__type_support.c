// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_object_detection_msgs:msg/BoundingBoxes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_object_detection_msgs/msg/detail/bounding_boxes__rosidl_typesupport_introspection_c.h"
#include "ros_object_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_object_detection_msgs/msg/detail/bounding_boxes__functions.h"
#include "ros_object_detection_msgs/msg/detail/bounding_boxes__struct.h"


// Include directives for member types
// Member `data`
#include "ros_object_detection_msgs/msg/bounding_box.h"
// Member `data`
#include "ros_object_detection_msgs/msg/detail/bounding_box__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_object_detection_msgs__msg__BoundingBoxes__init(message_memory);
}

void ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_fini_function(void * message_memory)
{
  ros_object_detection_msgs__msg__BoundingBoxes__fini(message_memory);
}

size_t ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__size_function__BoundingBoxes__data(
  const void * untyped_member)
{
  const ros_object_detection_msgs__msg__BoundingBox__Sequence * member =
    (const ros_object_detection_msgs__msg__BoundingBox__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__get_const_function__BoundingBoxes__data(
  const void * untyped_member, size_t index)
{
  const ros_object_detection_msgs__msg__BoundingBox__Sequence * member =
    (const ros_object_detection_msgs__msg__BoundingBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__get_function__BoundingBoxes__data(
  void * untyped_member, size_t index)
{
  ros_object_detection_msgs__msg__BoundingBox__Sequence * member =
    (ros_object_detection_msgs__msg__BoundingBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__fetch_function__BoundingBoxes__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_object_detection_msgs__msg__BoundingBox * item =
    ((const ros_object_detection_msgs__msg__BoundingBox *)
    ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__get_const_function__BoundingBoxes__data(untyped_member, index));
  ros_object_detection_msgs__msg__BoundingBox * value =
    (ros_object_detection_msgs__msg__BoundingBox *)(untyped_value);
  *value = *item;
}

void ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__assign_function__BoundingBoxes__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_object_detection_msgs__msg__BoundingBox * item =
    ((ros_object_detection_msgs__msg__BoundingBox *)
    ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__get_function__BoundingBoxes__data(untyped_member, index));
  const ros_object_detection_msgs__msg__BoundingBox * value =
    (const ros_object_detection_msgs__msg__BoundingBox *)(untyped_value);
  *item = *value;
}

bool ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__resize_function__BoundingBoxes__data(
  void * untyped_member, size_t size)
{
  ros_object_detection_msgs__msg__BoundingBox__Sequence * member =
    (ros_object_detection_msgs__msg__BoundingBox__Sequence *)(untyped_member);
  ros_object_detection_msgs__msg__BoundingBox__Sequence__fini(member);
  return ros_object_detection_msgs__msg__BoundingBox__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_object_detection_msgs__msg__BoundingBoxes, data),  // bytes offset in struct
    NULL,  // default value
    ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__size_function__BoundingBoxes__data,  // size() function pointer
    ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__get_const_function__BoundingBoxes__data,  // get_const(index) function pointer
    ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__get_function__BoundingBoxes__data,  // get(index) function pointer
    ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__fetch_function__BoundingBoxes__data,  // fetch(index, &value) function pointer
    ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__assign_function__BoundingBoxes__data,  // assign(index, value) function pointer
    ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__resize_function__BoundingBoxes__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_members = {
  "ros_object_detection_msgs__msg",  // message namespace
  "BoundingBoxes",  // message name
  1,  // number of fields
  sizeof(ros_object_detection_msgs__msg__BoundingBoxes),
  ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_member_array,  // message members
  ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_type_support_handle = {
  0,
  &ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_object_detection_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_object_detection_msgs, msg, BoundingBoxes)() {
  ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_object_detection_msgs, msg, BoundingBox)();
  if (!ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_type_support_handle.typesupport_identifier) {
    ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_object_detection_msgs__msg__BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
