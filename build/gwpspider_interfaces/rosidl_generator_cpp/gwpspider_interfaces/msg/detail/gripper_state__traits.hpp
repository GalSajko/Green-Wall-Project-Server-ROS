// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gwpspider_interfaces:msg/GripperState.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPER_STATE__TRAITS_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gwpspider_interfaces/msg/detail/gripper_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gwpspider_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const GripperState & msg,
  std::ostream & out)
{
  out << "{";
  // member: switch_state
  {
    out << "switch_state: ";
    rosidl_generator_traits::value_to_yaml(msg.switch_state, out);
    out << ", ";
  }

  // member: fingers_state
  {
    out << "fingers_state: ";
    rosidl_generator_traits::value_to_yaml(msg.fingers_state, out);
    out << ", ";
  }

  // member: is_attached
  {
    out << "is_attached: ";
    rosidl_generator_traits::value_to_yaml(msg.is_attached, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: switch_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "switch_state: ";
    rosidl_generator_traits::value_to_yaml(msg.switch_state, out);
    out << "\n";
  }

  // member: fingers_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fingers_state: ";
    rosidl_generator_traits::value_to_yaml(msg.fingers_state, out);
    out << "\n";
  }

  // member: is_attached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_attached: ";
    rosidl_generator_traits::value_to_yaml(msg.is_attached, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperState & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::msg::GripperState & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::msg::GripperState & msg)
{
  return gwpspider_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::msg::GripperState>()
{
  return "gwpspider_interfaces::msg::GripperState";
}

template<>
inline const char * name<gwpspider_interfaces::msg::GripperState>()
{
  return "gwpspider_interfaces/msg/GripperState";
}

template<>
struct has_fixed_size<gwpspider_interfaces::msg::GripperState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gwpspider_interfaces::msg::GripperState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gwpspider_interfaces::msg::GripperState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__GRIPPER_STATE__TRAITS_HPP_
