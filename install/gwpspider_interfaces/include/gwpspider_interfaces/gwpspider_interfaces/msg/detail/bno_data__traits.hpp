// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gwpspider_interfaces:msg/BnoData.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__MSG__DETAIL__BNO_DATA__TRAITS_HPP_
#define GWPSPIDER_INTERFACES__MSG__DETAIL__BNO_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gwpspider_interfaces/msg/detail/bno_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'rpy'
// Member 'gravity_vector'
#include "std_msgs/msg/detail/float32_multi_array__traits.hpp"

namespace gwpspider_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BnoData & msg,
  std::ostream & out)
{
  out << "{";
  // member: rpy
  {
    out << "rpy: ";
    to_flow_style_yaml(msg.rpy, out);
    out << ", ";
  }

  // member: gravity_vector
  {
    out << "gravity_vector: ";
    to_flow_style_yaml(msg.gravity_vector, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BnoData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rpy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpy:\n";
    to_block_style_yaml(msg.rpy, out, indentation + 2);
  }

  // member: gravity_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gravity_vector:\n";
    to_block_style_yaml(msg.gravity_vector, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BnoData & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::msg::BnoData & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::msg::BnoData & msg)
{
  return gwpspider_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::msg::BnoData>()
{
  return "gwpspider_interfaces::msg::BnoData";
}

template<>
inline const char * name<gwpspider_interfaces::msg::BnoData>()
{
  return "gwpspider_interfaces/msg/BnoData";
}

template<>
struct has_fixed_size<gwpspider_interfaces::msg::BnoData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct has_bounded_size<gwpspider_interfaces::msg::BnoData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct is_message<gwpspider_interfaces::msg::BnoData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GWPSPIDER_INTERFACES__MSG__DETAIL__BNO_DATA__TRAITS_HPP_
