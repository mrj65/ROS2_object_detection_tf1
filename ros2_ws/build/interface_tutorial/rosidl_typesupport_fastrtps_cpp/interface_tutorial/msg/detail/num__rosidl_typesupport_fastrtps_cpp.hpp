// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from interface_tutorial:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_TUTORIAL__MSG__DETAIL__NUM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define INTERFACE_TUTORIAL__MSG__DETAIL__NUM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "interface_tutorial/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "interface_tutorial/msg/detail/num__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace interface_tutorial
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_tutorial
cdr_serialize(
  const interface_tutorial::msg::Num & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_tutorial
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interface_tutorial::msg::Num & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_tutorial
get_serialized_size(
  const interface_tutorial::msg::Num & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_tutorial
max_serialized_size_Num(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interface_tutorial

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_tutorial
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_tutorial, msg, Num)();

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_TUTORIAL__MSG__DETAIL__NUM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
