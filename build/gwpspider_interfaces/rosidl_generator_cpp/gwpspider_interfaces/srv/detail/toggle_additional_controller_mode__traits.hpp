// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gwpspider_interfaces:srv/ToggleAdditionalControllerMode.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__TOGGLE_ADDITIONAL_CONTROLLER_MODE__TRAITS_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__TOGGLE_ADDITIONAL_CONTROLLER_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gwpspider_interfaces/srv/detail/toggle_additional_controller_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gwpspider_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ToggleAdditionalControllerMode_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
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
  const ToggleAdditionalControllerMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
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

inline std::string to_yaml(const ToggleAdditionalControllerMode_Request & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Request & msg)
{
  return gwpspider_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Request>()
{
  return "gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Request";
}

template<>
inline const char * name<gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Request>()
{
  return "gwpspider_interfaces/srv/ToggleAdditionalControllerMode_Request";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gwpspider_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ToggleAdditionalControllerMode_Response & msg,
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
  const ToggleAdditionalControllerMode_Response & msg,
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

inline std::string to_yaml(const ToggleAdditionalControllerMode_Response & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Response & msg)
{
  return gwpspider_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Response>()
{
  return "gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Response";
}

template<>
inline const char * name<gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Response>()
{
  return "gwpspider_interfaces/srv/ToggleAdditionalControllerMode_Response";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gwpspider_interfaces::srv::ToggleAdditionalControllerMode>()
{
  return "gwpspider_interfaces::srv::ToggleAdditionalControllerMode";
}

template<>
inline const char * name<gwpspider_interfaces::srv::ToggleAdditionalControllerMode>()
{
  return "gwpspider_interfaces/srv/ToggleAdditionalControllerMode";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::ToggleAdditionalControllerMode>
  : std::integral_constant<
    bool,
    has_fixed_size<gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Request>::value &&
    has_fixed_size<gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::ToggleAdditionalControllerMode>
  : std::integral_constant<
    bool,
    has_bounded_size<gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Request>::value &&
    has_bounded_size<gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Response>::value
  >
{
};

template<>
struct is_service<gwpspider_interfaces::srv::ToggleAdditionalControllerMode>
  : std::true_type
{
};

template<>
struct is_service_request<gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__TOGGLE_ADDITIONAL_CONTROLLER_MODE__TRAITS_HPP_
