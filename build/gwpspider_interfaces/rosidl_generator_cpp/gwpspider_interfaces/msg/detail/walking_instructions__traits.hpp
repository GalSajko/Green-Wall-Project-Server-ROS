// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gwpspider_interfaces:msg/WalkingInstructions.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__WALKING_INSTRUCTIONS__TRAITS_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__WALKING_INSTRUCTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gwpspider_interfaces/msg/detail/walking_instructions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'poses'
// Member 'pins_instructions'
#include "std_msgs/msg/detail/float32_multi_array__traits.hpp"

namespace gwpspider_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const WalkingInstructions & msg,
  std::ostream & out)
{
  out << "{";
  // member: poses
  {
    out << "poses: ";
    to_flow_style_yaml(msg.poses, out);
    out << ", ";
  }

  // member: pins_instructions
  {
    out << "pins_instructions: ";
    to_flow_style_yaml(msg.pins_instructions, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WalkingInstructions & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poses:\n";
    to_block_style_yaml(msg.poses, out, indentation + 2);
  }

  // member: pins_instructions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pins_instructions:\n";
    to_block_style_yaml(msg.pins_instructions, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WalkingInstructions & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::msg::WalkingInstructions & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::msg::WalkingInstructions & msg)
{
  return gwpspider_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::msg::WalkingInstructions>()
{
  return "gwpspider_interfaces::msg::WalkingInstructions";
}

template<>
inline const char * name<gwpspider_interfaces::msg::WalkingInstructions>()
{
  return "gwpspider_interfaces/msg/WalkingInstructions";
}

template<>
struct has_fixed_size<gwpspider_interfaces::msg::WalkingInstructions>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct has_bounded_size<gwpspider_interfaces::msg::WalkingInstructions>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct is_message<gwpspider_interfaces::msg::WalkingInstructions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__WALKING_INSTRUCTIONS__TRAITS_HPP_
