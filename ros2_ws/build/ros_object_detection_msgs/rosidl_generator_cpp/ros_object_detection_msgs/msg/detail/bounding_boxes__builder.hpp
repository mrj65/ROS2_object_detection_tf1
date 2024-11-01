// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_object_detection_msgs:msg/BoundingBoxes.idl
// generated code does not contain a copyright notice

#ifndef ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOXES__BUILDER_HPP_
#define ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOXES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_object_detection_msgs/msg/detail/bounding_boxes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_object_detection_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingBoxes_data
{
public:
  Init_BoundingBoxes_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_object_detection_msgs::msg::BoundingBoxes data(::ros_object_detection_msgs::msg::BoundingBoxes::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_object_detection_msgs::msg::BoundingBoxes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_object_detection_msgs::msg::BoundingBoxes>()
{
  return ros_object_detection_msgs::msg::builder::Init_BoundingBoxes_data();
}

}  // namespace ros_object_detection_msgs

#endif  // ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOXES__BUILDER_HPP_
