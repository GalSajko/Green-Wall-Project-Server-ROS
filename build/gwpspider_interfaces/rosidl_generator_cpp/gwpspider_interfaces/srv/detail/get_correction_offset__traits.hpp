// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gwpspider_interfaces:srv/GetCorrectionOffset.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__GET_CORRECTION_OFFSET__TRAITS_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__GET_CORRECTION_OFFSET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gwpspider_interfaces/srv/detail/get_correction_offset__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'legs_positions'
// Member 'rpy'
// Member 'commanded_position'
#include "std_msgs/msg/detail/float32_multi_array__traits.hpp"
// Member 'one_hot_legs'
#include "std_msgs/msg/detail/int8_multi_array__traits.hpp"

namespace gwpspider_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetCorrectionOffset_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: legs_positions
  {
    out << "legs_positions: ";
    to_flow_style_yaml(msg.legs_positions, out);
    out << ", ";
  }

  // member: rpy
  {
    out << "rpy: ";
    to_flow_style_yaml(msg.rpy, out);
    out << ", ";
  }

  // member: commanded_position
  {
    out << "commanded_position: ";
    to_flow_style_yaml(msg.commanded_position, out);
    out << ", ";
  }

  // member: one_hot_legs
  {
    out << "one_hot_legs: ";
    to_flow_style_yaml(msg.one_hot_legs, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetCorrectionOffset_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: legs_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "legs_positions:\n";
    to_block_style_yaml(msg.legs_positions, out, indentation + 2);
  }

  // member: rpy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpy:\n";
    to_block_style_yaml(msg.rpy, out, indentation + 2);
  }

  // member: commanded_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "commanded_position:\n";
    to_block_style_yaml(msg.commanded_position, out, indentation + 2);
  }

  // member: one_hot_legs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "one_hot_legs:\n";
    to_block_style_yaml(msg.one_hot_legs, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetCorrectionOffset_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gwpspider_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use gwpspider_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gwpspider_interfaces::srv::GetCorrectionOffset_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::srv::GetCorrectionOffset_Request & msg)
{
  return gwpspider_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::srv::GetCorrectionOffset_Request>()
{
  return "gwpspider_interfaces::srv::GetCorrectionOffset_Request";
}

template<>
inline const char * name<gwpspider_interfaces::srv::GetCorrectionOffset_Request>()
{
  return "gwpspider_interfaces/srv/GetCorrectionOffset_Request";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::GetCorrectionOffset_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32MultiArray>::value && has_fixed_size<std_msgs::msg::Int8MultiArray>::value> {};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::GetCorrectionOffset_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32MultiArray>::value && has_bounded_size<std_msgs::msg::Int8MultiArray>::value> {};

template<>
struct is_message<gwpspider_interfaces::srv::GetCorrectionOffset_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'correction_offset'
// already included above
// #include "std_msgs/msg/detail/float32_multi_array__traits.hpp"

namespace gwpspider_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetCorrectionOffset_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: correction_offset
  {
    out << "correction_offset: ";
    to_flow_style_yaml(msg.correction_offset, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetCorrectionOffset_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: correction_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "correction_offset:\n";
    to_block_style_yaml(msg.correction_offset, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetCorrectionOffset_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gwpspider_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use gwpspider_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gwpspider_interfaces::srv::GetCorrectionOffset_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::srv::GetCorrectionOffset_Response & msg)
{
  return gwpspider_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::srv::GetCorrectionOffset_Response>()
{
  return "gwpspider_interfaces::srv::GetCorrectionOffset_Response";
}

template<>
inline const char * name<gwpspider_interfaces::srv::GetCorrectionOffset_Response>()
{
  return "gwpspider_interfaces/srv/GetCorrectionOffset_Response";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::GetCorrectionOffset_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::GetCorrectionOffset_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct is_message<gwpspider_interfaces::srv::GetCorrectionOffset_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gwpspider_interfaces::srv::GetCorrectionOffset>()
{
  return "gwpspider_interfaces::srv::GetCorrectionOffset";
}

template<>
inline const char * name<gwpspider_interfaces::srv::GetCorrectionOffset>()
{
  return "gwpspider_interfaces/srv/GetCorrectionOffset";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::GetCorrectionOffset>
  : std::integral_constant<
    bool,
    has_fixed_size<gwpspider_interfaces::srv::GetCorrectionOffset_Request>::value &&
    has_fixed_size<gwpspider_interfaces::srv::GetCorrectionOffset_Response>::value
  >
{
};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::GetCorrectionOffset>
  : std::integral_constant<
    bool,
    has_bounded_size<gwpspider_interfaces::srv::GetCorrectionOffset_Request>::value &&
    has_bounded_size<gwpspider_interfaces::srv::GetCorrectionOffset_Response>::value
  >
{
};

template<>
struct is_service<gwpspider_interfaces::srv::GetCorrectionOffset>
  : std::true_type
{
};

template<>
struct is_service_request<gwpspider_interfaces::srv::GetCorrectionOffset_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gwpspider_interfaces::srv::GetCorrectionOffset_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__GET_CORRECTION_OFFSET__TRAITS_HPP_
