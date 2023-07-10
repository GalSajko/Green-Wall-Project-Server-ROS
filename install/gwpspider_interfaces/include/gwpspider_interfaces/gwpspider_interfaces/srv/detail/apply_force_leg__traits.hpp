// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gwpspider_interfaces:srv/ApplyForceLeg.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__APPLY_FORCE_LEG__TRAITS_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__APPLY_FORCE_LEG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gwpspider_interfaces/srv/detail/apply_force_leg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'desired_force'
#include "std_msgs/msg/detail/float32_multi_array__traits.hpp"

namespace gwpspider_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ApplyForceLeg_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: leg_id
  {
    out << "leg_id: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_id, out);
    out << ", ";
  }

  // member: desired_force
  {
    out << "desired_force: ";
    to_flow_style_yaml(msg.desired_force, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApplyForceLeg_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: leg_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_id: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_id, out);
    out << "\n";
  }

  // member: desired_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_force:\n";
    to_block_style_yaml(msg.desired_force, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApplyForceLeg_Request & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::srv::ApplyForceLeg_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::srv::ApplyForceLeg_Request & msg)
{
  return gwpspider_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::srv::ApplyForceLeg_Request>()
{
  return "gwpspider_interfaces::srv::ApplyForceLeg_Request";
}

template<>
inline const char * name<gwpspider_interfaces::srv::ApplyForceLeg_Request>()
{
  return "gwpspider_interfaces/srv/ApplyForceLeg_Request";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::ApplyForceLeg_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::ApplyForceLeg_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct is_message<gwpspider_interfaces::srv::ApplyForceLeg_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gwpspider_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ApplyForceLeg_Response & msg,
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
  const ApplyForceLeg_Response & msg,
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

inline std::string to_yaml(const ApplyForceLeg_Response & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::srv::ApplyForceLeg_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::srv::ApplyForceLeg_Response & msg)
{
  return gwpspider_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::srv::ApplyForceLeg_Response>()
{
  return "gwpspider_interfaces::srv::ApplyForceLeg_Response";
}

template<>
inline const char * name<gwpspider_interfaces::srv::ApplyForceLeg_Response>()
{
  return "gwpspider_interfaces/srv/ApplyForceLeg_Response";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::ApplyForceLeg_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::ApplyForceLeg_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gwpspider_interfaces::srv::ApplyForceLeg_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gwpspider_interfaces::srv::ApplyForceLeg>()
{
  return "gwpspider_interfaces::srv::ApplyForceLeg";
}

template<>
inline const char * name<gwpspider_interfaces::srv::ApplyForceLeg>()
{
  return "gwpspider_interfaces/srv/ApplyForceLeg";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::ApplyForceLeg>
  : std::integral_constant<
    bool,
    has_fixed_size<gwpspider_interfaces::srv::ApplyForceLeg_Request>::value &&
    has_fixed_size<gwpspider_interfaces::srv::ApplyForceLeg_Response>::value
  >
{
};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::ApplyForceLeg>
  : std::integral_constant<
    bool,
    has_bounded_size<gwpspider_interfaces::srv::ApplyForceLeg_Request>::value &&
    has_bounded_size<gwpspider_interfaces::srv::ApplyForceLeg_Response>::value
  >
{
};

template<>
struct is_service<gwpspider_interfaces::srv::ApplyForceLeg>
  : std::true_type
{
};

template<>
struct is_service_request<gwpspider_interfaces::srv::ApplyForceLeg_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gwpspider_interfaces::srv::ApplyForceLeg_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__APPLY_FORCE_LEG__TRAITS_HPP_
