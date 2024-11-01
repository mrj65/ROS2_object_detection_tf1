// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_object_detection_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
#define ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_object_detection_msgs/msg/detail/bounding_box__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_object_detection_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingBox_confidence
{
public:
  explicit Init_BoundingBox_confidence(::ros_object_detection_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  ::ros_object_detection_msgs::msg::BoundingBox confidence(::ros_object_detection_msgs::msg::BoundingBox::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_object_detection_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_data
{
public:
  explicit Init_BoundingBox_data(::ros_object_detection_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_confidence data(::ros_object_detection_msgs::msg::BoundingBox::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_BoundingBox_confidence(msg_);
  }

private:
  ::ros_object_detection_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_ymax
{
public:
  explicit Init_BoundingBox_ymax(::ros_object_detection_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_data ymax(::ros_object_detection_msgs::msg::BoundingBox::_ymax_type arg)
  {
    msg_.ymax = std::move(arg);
    return Init_BoundingBox_data(msg_);
  }

private:
  ::ros_object_detection_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_xmax
{
public:
  explicit Init_BoundingBox_xmax(::ros_object_detection_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_ymax xmax(::ros_object_detection_msgs::msg::BoundingBox::_xmax_type arg)
  {
    msg_.xmax = std::move(arg);
    return Init_BoundingBox_ymax(msg_);
  }

private:
  ::ros_object_detection_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_ymin
{
public:
  explicit Init_BoundingBox_ymin(::ros_object_detection_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_xmax ymin(::ros_object_detection_msgs::msg::BoundingBox::_ymin_type arg)
  {
    msg_.ymin = std::move(arg);
    return Init_BoundingBox_xmax(msg_);
  }

private:
  ::ros_object_detection_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_xmin
{
public:
  Init_BoundingBox_xmin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBox_ymin xmin(::ros_object_detection_msgs::msg::BoundingBox::_xmin_type arg)
  {
    msg_.xmin = std::move(arg);
    return Init_BoundingBox_ymin(msg_);
  }

private:
  ::ros_object_detection_msgs::msg::BoundingBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_object_detection_msgs::msg::BoundingBox>()
{
  return ros_object_detection_msgs::msg::builder::Init_BoundingBox_xmin();
}

}  // namespace ros_object_detection_msgs

#endif  // ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
