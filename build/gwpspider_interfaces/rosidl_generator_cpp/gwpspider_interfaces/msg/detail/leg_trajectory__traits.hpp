// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gwpspider_interfaces:msg/LegTrajectory.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__LEG_TRAJECTORY__TRAITS_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__LEG_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gwpspider_interfaces/msg/detail/leg_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position_trajectory'
// Member 'velocity_trajectory'
// Member 'acceleration_trajectory'
#include "std_msgs/msg/detail/float32_multi_array__traits.hpp"

namespace gwpspider_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LegTrajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: position_trajectory
  {
    out << "position_trajectory: ";
    to_flow_style_yaml(msg.position_trajectory, out);
    out << ", ";
  }

  // member: velocity_trajectory
  {
    out << "velocity_trajectory: ";
    to_flow_style_yaml(msg.velocity_trajectory, out);
    out << ", ";
  }

  // member: acceleration_trajectory
  {
    out << "acceleration_trajectory: ";
    to_flow_style_yaml(msg.acceleration_trajectory, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LegTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_trajectory:\n";
    to_block_style_yaml(msg.position_trajectory, out, indentation + 2);
  }

  // member: velocity_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_trajectory:\n";
    to_block_style_yaml(msg.velocity_trajectory, out, indentation + 2);
  }

  // member: acceleration_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_trajectory:\n";
    to_block_style_yaml(msg.acceleration_trajectory, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LegTrajectory & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::msg::LegTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::msg::LegTrajectory & msg)
{
  return gwpspider_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::msg::LegTrajectory>()
{
  return "gwpspider_interfaces::msg::LegTrajectory";
}

template<>
inline const char * name<gwpspider_interfaces::msg::LegTrajectory>()
{
  return "gwpspider_interfaces/msg/LegTrajectory";
}

template<>
struct has_fixed_size<gwpspider_interfaces::msg::LegTrajectory>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct has_bounded_size<gwpspider_interfaces::msg::LegTrajectory>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct is_message<gwpspider_interfaces::msg::LegTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__LEG_TRAJECTORY__TRAITS_HPP_
