// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_object_detection_msgs:msg/BoundingBoxes.idl
// generated code does not contain a copyright notice

#ifndef ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOXES__TRAITS_HPP_
#define ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOXES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_object_detection_msgs/msg/detail/bounding_boxes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "ros_object_detection_msgs/msg/detail/bounding_box__traits.hpp"

namespace ros_object_detection_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoundingBoxes & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoundingBoxes & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoundingBoxes & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros_object_detection_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_object_detection_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_object_detection_msgs::msg::BoundingBoxes & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_object_detection_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_object_detection_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_object_detection_msgs::msg::BoundingBoxes & msg)
{
  return ros_object_detection_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_object_detection_msgs::msg::BoundingBoxes>()
{
  return "ros_object_detection_msgs::msg::BoundingBoxes";
}

template<>
inline const char * name<ros_object_detection_msgs::msg::BoundingBoxes>()
{
  return "ros_object_detection_msgs/msg/BoundingBoxes";
}

template<>
struct has_fixed_size<ros_object_detection_msgs::msg::BoundingBoxes>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_object_detection_msgs::msg::BoundingBoxes>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_object_detection_msgs::msg::BoundingBoxes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOXES__TRAITS_HPP_
