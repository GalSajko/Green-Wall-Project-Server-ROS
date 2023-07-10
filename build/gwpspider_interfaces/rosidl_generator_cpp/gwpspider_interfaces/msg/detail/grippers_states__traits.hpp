// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gwpspider_interfaces:msg/GrippersStates.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPERS_STATES__TRAITS_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPERS_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gwpspider_interfaces/msg/detail/grippers_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'first_gripper'
// Member 'second_gripper'
// Member 'third_gripper'
// Member 'fourth_gripper'
// Member 'fifth_gripper'
#include "gwpspider_interfaces/msg/detail/gripper_state__traits.hpp"

namespace gwpspider_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const GrippersStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: first_gripper
  {
    out << "first_gripper: ";
    to_flow_style_yaml(msg.first_gripper, out);
    out << ", ";
  }

  // member: second_gripper
  {
    out << "second_gripper: ";
    to_flow_style_yaml(msg.second_gripper, out);
    out << ", ";
  }

  // member: third_gripper
  {
    out << "third_gripper: ";
    to_flow_style_yaml(msg.third_gripper, out);
    out << ", ";
  }

  // member: fourth_gripper
  {
    out << "fourth_gripper: ";
    to_flow_style_yaml(msg.fourth_gripper, out);
    out << ", ";
  }

  // member: fifth_gripper
  {
    out << "fifth_gripper: ";
    to_flow_style_yaml(msg.fifth_gripper, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GrippersStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: first_gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first_gripper:\n";
    to_block_style_yaml(msg.first_gripper, out, indentation + 2);
  }

  // member: second_gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "second_gripper:\n";
    to_block_style_yaml(msg.second_gripper, out, indentation + 2);
  }

  // member: third_gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "third_gripper:\n";
    to_block_style_yaml(msg.third_gripper, out, indentation + 2);
  }

  // member: fourth_gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fourth_gripper:\n";
    to_block_style_yaml(msg.fourth_gripper, out, indentation + 2);
  }

  // member: fifth_gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fifth_gripper:\n";
    to_block_style_yaml(msg.fifth_gripper, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GrippersStates & msg, bool use_flow_style = false)
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

}  // namespace gwpspider_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use gwpspider_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gwpspider_interfaces::msg::GrippersStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::msg::GrippersStates & msg)
{
  return gwpspider_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::msg::GrippersStates>()
{
  return "gwpspider_interfaces::msg::GrippersStates";
}

template<>
inline const char * name<gwpspider_interfaces::msg::GrippersStates>()
{
  return "gwpspider_interfaces/msg/GrippersStates";
}

template<>
struct has_fixed_size<gwpspider_interfaces::msg::GrippersStates>
  : std::integral_constant<bool, has_fixed_size<gwpspider_interfaces::msg::GripperState>::value> {};

template<>
struct has_bounded_size<gwpspider_interfaces::msg::GrippersStates>
  : std::integral_constant<bool, has_bounded_size<gwpspider_interfaces::msg::GripperState>::value> {};

template<>
struct is_message<gwpspider_interfaces::msg::GrippersStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPERS_STATES__TRAITS_HPP_
