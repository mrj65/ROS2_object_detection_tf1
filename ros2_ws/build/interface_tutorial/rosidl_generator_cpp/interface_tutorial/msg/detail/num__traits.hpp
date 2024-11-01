// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_tutorial:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_TUTORIAL__MSG__DETAIL__NUM__TRAITS_HPP_
#define INTERFACE_TUTORIAL__MSG__DETAIL__NUM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_tutorial/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_tutorial
{

namespace msg
{

inline void to_flow_style_yaml(
  const Num & msg,
  std::ostream & out)
{
  out << "{";
  // member: numb
  {
    out << "numb: ";
    rosidl_generator_traits::value_to_yaml(msg.numb, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: numb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "numb: ";
    rosidl_generator_traits::value_to_yaml(msg.numb, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Num & msg, bool use_flow_style = false)
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

}  // namespace interface_tutorial

namespace rosidl_generator_traits
{

[[deprecated("use interface_tutorial::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_tutorial::msg::Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_tutorial::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_tutorial::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_tutorial::msg::Num & msg)
{
  return interface_tutorial::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_tutorial::msg::Num>()
{
  return "interface_tutorial::msg::Num";
}

template<>
inline const char * name<interface_tutorial::msg::Num>()
{
  return "interface_tutorial/msg/Num";
}

template<>
struct has_fixed_size<interface_tutorial::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_tutorial::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_tutorial::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_TUTORIAL__MSG__DETAIL__NUM__TRAITS_HPP_
