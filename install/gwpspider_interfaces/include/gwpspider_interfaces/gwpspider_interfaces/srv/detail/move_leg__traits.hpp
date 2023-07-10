// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gwpspider_interfaces:srv/MoveLeg.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_LEG__TRAITS_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_LEG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gwpspider_interfaces/srv/detail/move_leg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'goal_position'
// Member 'spider_pose'
#include "std_msgs/msg/detail/float32_multi_array__traits.hpp"

namespace gwpspider_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveLeg_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: leg_id
  {
    out << "leg_id: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_id, out);
    out << ", ";
  }

  // member: goal_position
  {
    out << "goal_position: ";
    to_flow_style_yaml(msg.goal_position, out);
    out << ", ";
  }

  // member: trajectory_type
  {
    out << "trajectory_type: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_type, out);
    out << ", ";
  }

  // member: origin
  {
    out << "origin: ";
    rosidl_generator_traits::value_to_yaml(msg.origin, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << ", ";
  }

  // member: is_offset
  {
    out << "is_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.is_offset, out);
    out << ", ";
  }

  // member: spider_pose
  {
    out << "spider_pose: ";
    to_flow_style_yaml(msg.spider_pose, out);
    out << ", ";
  }

  // member: open_gripper
  {
    out << "open_gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.open_gripper, out);
    out << ", ";
  }

  // member: close_gripper
  {
    out << "close_gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.close_gripper, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveLeg_Request & msg,
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

  // member: goal_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_position:\n";
    to_block_style_yaml(msg.goal_position, out, indentation + 2);
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

  // member: origin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin: ";
    rosidl_generator_traits::value_to_yaml(msg.origin, out);
    out << "\n";
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

  // member: is_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.is_offset, out);
    out << "\n";
  }

  // member: spider_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spider_pose:\n";
    to_block_style_yaml(msg.spider_pose, out, indentation + 2);
  }

  // member: open_gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "open_gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.open_gripper, out);
    out << "\n";
  }

  // member: close_gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "close_gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.close_gripper, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveLeg_Request & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::srv::MoveLeg_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::srv::MoveLeg_Request & msg)
{
  return gwpspider_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::srv::MoveLeg_Request>()
{
  return "gwpspider_interfaces::srv::MoveLeg_Request";
}

template<>
inline const char * name<gwpspider_interfaces::srv::MoveLeg_Request>()
{
  return "gwpspider_interfaces/srv/MoveLeg_Request";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::MoveLeg_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::MoveLeg_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gwpspider_interfaces::srv::MoveLeg_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gwpspider_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveLeg_Response & msg,
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
  const MoveLeg_Response & msg,
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

inline std::string to_yaml(const MoveLeg_Response & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::srv::MoveLeg_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::srv::MoveLeg_Response & msg)
{
  return gwpspider_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::srv::MoveLeg_Response>()
{
  return "gwpspider_interfaces::srv::MoveLeg_Response";
}

template<>
inline const char * name<gwpspider_interfaces::srv::MoveLeg_Response>()
{
  return "gwpspider_interfaces/srv/MoveLeg_Response";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::MoveLeg_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::MoveLeg_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gwpspider_interfaces::srv::MoveLeg_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gwpspider_interfaces::srv::MoveLeg>()
{
  return "gwpspider_interfaces::srv::MoveLeg";
}

template<>
inline const char * name<gwpspider_interfaces::srv::MoveLeg>()
{
  return "gwpspider_interfaces/srv/MoveLeg";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::MoveLeg>
  : std::integral_constant<
    bool,
    has_fixed_size<gwpspider_interfaces::srv::MoveLeg_Request>::value &&
    has_fixed_size<gwpspider_interfaces::srv::MoveLeg_Response>::value
  >
{
};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::MoveLeg>
  : std::integral_constant<
    bool,
    has_bounded_size<gwpspider_interfaces::srv::MoveLeg_Request>::value &&
    has_bounded_size<gwpspider_interfaces::srv::MoveLeg_Response>::value
  >
{
};

template<>
struct is_service<gwpspider_interfaces::srv::MoveLeg>
  : std::true_type
{
};

template<>
struct is_service_request<gwpspider_interfaces::srv::MoveLeg_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gwpspider_interfaces::srv::MoveLeg_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_LEG__TRAITS_HPP_
