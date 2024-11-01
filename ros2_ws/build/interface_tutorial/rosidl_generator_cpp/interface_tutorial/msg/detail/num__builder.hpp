// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_tutorial:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_TUTORIAL__MSG__DETAIL__NUM__BUILDER_HPP_
#define INTERFACE_TUTORIAL__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_tutorial/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_tutorial
{

namespace msg
{

namespace builder
{

class Init_Num_numb
{
public:
  Init_Num_numb()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_tutorial::msg::Num numb(::interface_tutorial::msg::Num::_numb_type arg)
  {
    msg_.numb = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_tutorial::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_tutorial::msg::Num>()
{
  return interface_tutorial::msg::builder::Init_Num_numb();
}

}  // namespace interface_tutorial

#endif  // INTERFACE_TUTORIAL__MSG__DETAIL__NUM__BUILDER_HPP_
