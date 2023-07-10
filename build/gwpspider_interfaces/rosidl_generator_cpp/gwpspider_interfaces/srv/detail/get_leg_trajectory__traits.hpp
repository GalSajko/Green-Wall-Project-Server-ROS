// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gwpspider_interfaces:srv/GetLegTrajectory.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__GET_LEG_TRAJECTORY__TRAITS_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__GET_LEG_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gwpspider_interfaces/srv/detail/get_leg_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'current_position'
// Member 'goal_position'
#include "std_msgs/msg/detail/float32_multi_array__traits.hpp"

namespace gwpspider_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLegTrajectory_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_position
  {
    out << "current_position: ";
    to_flow_style_yaml(msg.current_position, out);
    out << ", ";
  }

  // member: goal_position
  {
    out << "goal_position: ";
    to_flow_style_yaml(msg.goal_position, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << ", ";
  }

  // member: trajectory_type
  {
    out << "trajectory_type: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetLegTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_position:\n";
    to_block_style_yaml(msg.current_position, out, indentation + 2);
  }

  // member: goal_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_position:\n";
    to_block_style_yaml(msg.goal_position, out, indentation + 2);
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }

  // member: trajectory_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_type: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLegTrajectory_Request & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::srv::GetLegTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::srv::GetLegTrajectory_Request & msg)
{
  return gwpspider_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::srv::GetLegTrajectory_Request>()
{
  return "gwpspider_interfaces::srv::GetLegTrajectory_Request";
}

template<>
inline const char * name<gwpspider_interfaces::srv::GetLegTrajectory_Request>()
{
  return "gwpspider_interfaces/srv/GetLegTrajectory_Request";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::GetLegTrajectory_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::GetLegTrajectory_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gwpspider_interfaces::srv::GetLegTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'trajectories'
#include "gwpspider_interfaces/msg/detail/leg_trajectory__traits.hpp"

namespace gwpspider_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLegTrajectory_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: trajectories
  {
    out << "trajectories: ";
    to_flow_style_yaml(msg.trajectories, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetLegTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trajectories
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectories:\n";
    to_block_style_yaml(msg.trajectories, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLegTrajectory_Response & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::srv::GetLegTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::srv::GetLegTrajectory_Response & msg)
{
  return gwpspider_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::srv::GetLegTrajectory_Response>()
{
  return "gwpspider_interfaces::srv::GetLegTrajectory_Response";
}

template<>
inline const char * name<gwpspider_interfaces::srv::GetLegTrajectory_Response>()
{
  return "gwpspider_interfaces/srv/GetLegTrajectory_Response";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::GetLegTrajectory_Response>
  : std::integral_constant<bool, has_fixed_size<gwpspider_interfaces::msg::LegTrajectory>::value> {};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::GetLegTrajectory_Response>
  : std::integral_constant<bool, has_bounded_size<gwpspider_interfaces::msg::LegTrajectory>::value> {};

template<>
struct is_message<gwpspider_interfaces::srv::GetLegTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gwpspider_interfaces::srv::GetLegTrajectory>()
{
  return "gwpspider_interfaces::srv::GetLegTrajectory";
}

template<>
inline const char * name<gwpspider_interfaces::srv::GetLegTrajectory>()
{
  return "gwpspider_interfaces/srv/GetLegTrajectory";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::GetLegTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<gwpspider_interfaces::srv::GetLegTrajectory_Request>::value &&
    has_fixed_size<gwpspider_interfaces::srv::GetLegTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::GetLegTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<gwpspider_interfaces::srv::GetLegTrajectory_Request>::value &&
    has_bounded_size<gwpspider_interfaces::srv::GetLegTrajectory_Response>::value
  >
{
};

template<>
struct is_service<gwpspider_interfaces::srv::GetLegTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<gwpspider_interfaces::srv::GetLegTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gwpspider_interfaces::srv::GetLegTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__GET_LEG_TRAJECTORY__TRAITS_HPP_
