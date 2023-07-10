// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gwpspider_interfaces:msg/DynamixelMotorsData.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__DYNAMIXEL_MOTORS_DATA__TRAITS_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__DYNAMIXEL_MOTORS_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gwpspider_interfaces/msg/detail/dynamixel_motors_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'positions'
// Member 'currents'
// Member 'motor_errors'
// Member 'temperatures'
#include "std_msgs/msg/detail/float32_multi_array__traits.hpp"

namespace gwpspider_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DynamixelMotorsData & msg,
  std::ostream & out)
{
  out << "{";
  // member: positions
  {
    out << "positions: ";
    to_flow_style_yaml(msg.positions, out);
    out << ", ";
  }

  // member: currents
  {
    out << "currents: ";
    to_flow_style_yaml(msg.currents, out);
    out << ", ";
  }

  // member: motor_errors
  {
    out << "motor_errors: ";
    to_flow_style_yaml(msg.motor_errors, out);
    out << ", ";
  }

  // member: temperatures
  {
    out << "temperatures: ";
    to_flow_style_yaml(msg.temperatures, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynamixelMotorsData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "positions:\n";
    to_block_style_yaml(msg.positions, out, indentation + 2);
  }

  // member: currents
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "currents:\n";
    to_block_style_yaml(msg.currents, out, indentation + 2);
  }

  // member: motor_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_errors:\n";
    to_block_style_yaml(msg.motor_errors, out, indentation + 2);
  }

  // member: temperatures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperatures:\n";
    to_block_style_yaml(msg.temperatures, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynamixelMotorsData & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::msg::DynamixelMotorsData & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::msg::DynamixelMotorsData & msg)
{
  return gwpspider_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::msg::DynamixelMotorsData>()
{
  return "gwpspider_interfaces::msg::DynamixelMotorsData";
}

template<>
inline const char * name<gwpspider_interfaces::msg::DynamixelMotorsData>()
{
  return "gwpspider_interfaces/msg/DynamixelMotorsData";
}

template<>
struct has_fixed_size<gwpspider_interfaces::msg::DynamixelMotorsData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct has_bounded_size<gwpspider_interfaces::msg::DynamixelMotorsData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct is_message<gwpspider_interfaces::msg::DynamixelMotorsData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__DYNAMIXEL_MOTORS_DATA__TRAITS_HPP_
