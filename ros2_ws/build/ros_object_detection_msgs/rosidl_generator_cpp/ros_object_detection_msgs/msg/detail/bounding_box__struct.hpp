// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_object_detection_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_HPP_
#define ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_object_detection_msgs__msg__BoundingBox __attribute__((deprecated))
#else
# define DEPRECATED__ros_object_detection_msgs__msg__BoundingBox __declspec(deprecated)
#endif

namespace ros_object_detection_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoundingBox_
{
  using Type = BoundingBox_<ContainerAllocator>;

  explicit BoundingBox_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xmin = 0.0;
      this->ymin = 0.0;
      this->xmax = 0.0;
      this->ymax = 0.0;
      this->data = "";
      this->confidence = 0.0;
    }
  }

  explicit BoundingBox_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xmin = 0.0;
      this->ymin = 0.0;
      this->xmax = 0.0;
      this->ymax = 0.0;
      this->data = "";
      this->confidence = 0.0;
    }
  }

  // field types and members
  using _xmin_type =
    double;
  _xmin_type xmin;
  using _ymin_type =
    double;
  _ymin_type ymin;
  using _xmax_type =
    double;
  _xmax_type xmax;
  using _ymax_type =
    double;
  _ymax_type ymax;
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;
  using _confidence_type =
    double;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__xmin(
    const double & _arg)
  {
    this->xmin = _arg;
    return *this;
  }
  Type & set__ymin(
    const double & _arg)
  {
    this->ymin = _arg;
    return *this;
  }
  Type & set__xmax(
    const double & _arg)
  {
    this->xmax = _arg;
    return *this;
  }
  Type & set__ymax(
    const double & _arg)
  {
    this->ymax = _arg;
    return *this;
  }
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_object_detection_msgs::msg::BoundingBox_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_object_detection_msgs::msg::BoundingBox_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_object_detection_msgs::msg::BoundingBox_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_object_detection_msgs::msg::BoundingBox_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_object_detection_msgs::msg::BoundingBox_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_object_detection_msgs::msg::BoundingBox_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_object_detection_msgs::msg::BoundingBox_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_object_detection_msgs::msg::BoundingBox_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_object_detection_msgs::msg::BoundingBox_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_object_detection_msgs::msg::BoundingBox_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_object_detection_msgs__msg__BoundingBox
    std::shared_ptr<ros_object_detection_msgs::msg::BoundingBox_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_object_detection_msgs__msg__BoundingBox
    std::shared_ptr<ros_object_detection_msgs::msg::BoundingBox_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundingBox_ & other) const
  {
    if (this->xmin != other.xmin) {
      return false;
    }
    if (this->ymin != other.ymin) {
      return false;
    }
    if (this->xmax != other.xmax) {
      return false;
    }
    if (this->ymax != other.ymax) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundingBox_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoundingBox_

// alias to use template instance with default allocator
using BoundingBox =
  ros_object_detection_msgs::msg::BoundingBox_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_object_detection_msgs

#endif  // ROS_OBJECT_DETECTION_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_HPP_
