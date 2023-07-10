// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gwpspider_interfaces:srv/ToggleMotorsTorque.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__TOGGLE_MOTORS_TORQUE__TRAITS_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__TOGGLE_MOTORS_TORQUE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gwpspider_interfaces/srv/detail/toggle_motors_torque__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'legs_ids'
#include "std_msgs/msg/detail/int8_multi_array__traits.hpp"

namespace gwpspider_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ToggleMotorsTorque_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: legs_ids
  {
    out << "legs_ids: ";
    to_flow_style_yaml(msg.legs_ids, out);
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ToggleMotorsTorque_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: legs_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "legs_ids:\n";
    to_block_style_yaml(msg.legs_ids, out, indentation + 2);
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ToggleMotorsTorque_Request & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::srv::ToggleMotorsTorque_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::srv::ToggleMotorsTorque_Request & msg)
{
  return gwpspider_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::srv::ToggleMotorsTorque_Request>()
{
  return "gwpspider_interfaces::srv::ToggleMotorsTorque_Request";
}

template<>
inline const char * name<gwpspider_interfaces::srv::ToggleMotorsTorque_Request>()
{
  return "gwpspider_interfaces/srv/ToggleMotorsTorque_Request";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::ToggleMotorsTorque_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::ToggleMotorsTorque_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gwpspider_interfaces::srv::ToggleMotorsTorque_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gwpspider_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ToggleMotorsTorque_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ToggleMotorsTorque_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ToggleMotorsTorque_Response & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::srv::ToggleMotorsTorque_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::srv::ToggleMotorsTorque_Response & msg)
{
  return gwpspider_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::srv::ToggleMotorsTorque_Response>()
{
  return "gwpspider_interfaces::srv::ToggleMotorsTorque_Response";
}

template<>
inline const char * name<gwpspider_interfaces::srv::ToggleMotorsTorque_Response>()
{
  return "gwpspider_interfaces/srv/ToggleMotorsTorque_Response";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::ToggleMotorsTorque_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::ToggleMotorsTorque_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gwpspider_interfaces::srv::ToggleMotorsTorque_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gwpspider_interfaces::srv::ToggleMotorsTorque>()
{
  return "gwpspider_interfaces::srv::ToggleMotorsTorque";
}

template<>
inline const char * name<gwpspider_interfaces::srv::ToggleMotorsTorque>()
{
  return "gwpspider_interfaces/srv/ToggleMotorsTorque";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::ToggleMotorsTorque>
  : std::integral_constant<
    bool,
    has_fixed_size<gwpspider_interfaces::srv::ToggleMotorsTorque_Request>::value &&
    has_fixed_size<gwpspider_interfaces::srv::ToggleMotorsTorque_Response>::value
  >
{
};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::ToggleMotorsTorque>
  : std::integral_constant<
    bool,
    has_bounded_size<gwpspider_interfaces::srv::ToggleMotorsTorque_Request>::value &&
    has_bounded_size<gwpspider_interfaces::srv::ToggleMotorsTorque_Response>::value
  >
{
};

template<>
struct is_service<gwpspider_interfaces::srv::ToggleMotorsTorque>
  : std::true_type
{
};

template<>
struct is_service_request<gwpspider_interfaces::srv::ToggleMotorsTorque_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gwpspider_interfaces::srv::ToggleMotorsTorque_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__TOGGLE_MOTORS_TORQUE__TRAITS_HPP_
