// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gwpspider_interfaces:msg/LegsStates.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__LEGS_STATES__TRAITS_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__LEGS_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gwpspider_interfaces/msg/detail/legs_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'joints_positions'
// Member 'legs_local_positions'
// Member 'forces'
// Member 'torques'
#include "std_msgs/msg/detail/float32_multi_array__traits.hpp"

namespace gwpspider_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LegsStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: joints_positions
  {
    out << "joints_positions: ";
    to_flow_style_yaml(msg.joints_positions, out);
    out << ", ";
  }

  // member: legs_local_positions
  {
    out << "legs_local_positions: ";
    to_flow_style_yaml(msg.legs_local_positions, out);
    out << ", ";
  }

  // member: forces
  {
    out << "forces: ";
    to_flow_style_yaml(msg.forces, out);
    out << ", ";
  }

  // member: torques
  {
    out << "torques: ";
    to_flow_style_yaml(msg.torques, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LegsStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joints_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joints_positions:\n";
    to_block_style_yaml(msg.joints_positions, out, indentation + 2);
  }

  // member: legs_local_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "legs_local_positions:\n";
    to_block_style_yaml(msg.legs_local_positions, out, indentation + 2);
  }

  // member: forces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forces:\n";
    to_block_style_yaml(msg.forces, out, indentation + 2);
  }

  // member: torques
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torques:\n";
    to_block_style_yaml(msg.torques, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LegsStates & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::msg::LegsStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::msg::LegsStates & msg)
{
  return gwpspider_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::msg::LegsStates>()
{
  return "gwpspider_interfaces::msg::LegsStates";
}

template<>
inline const char * name<gwpspider_interfaces::msg::LegsStates>()
{
  return "gwpspider_interfaces/msg/LegsStates";
}

template<>
struct has_fixed_size<gwpspider_interfaces::msg::LegsStates>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct has_bounded_size<gwpspider_interfaces::msg::LegsStates>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct is_message<gwpspider_interfaces::msg::LegsStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__LEGS_STATES__TRAITS_HPP_
