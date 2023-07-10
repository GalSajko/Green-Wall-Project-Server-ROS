// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gwpspider_interfaces:srv/GetModifiedWalkingInstructions.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__GET_MODIFIED_WALKING_INSTRUCTIONS__TRAITS_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__GET_MODIFIED_WALKING_INSTRUCTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gwpspider_interfaces/srv/detail/get_modified_walking_instructions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start_legs_positions'
// Member 'goal_pose'
#include "std_msgs/msg/detail/float32_multi_array__traits.hpp"

namespace gwpspider_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetModifiedWalkingInstructions_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_legs_positions
  {
    out << "start_legs_positions: ";
    to_flow_style_yaml(msg.start_legs_positions, out);
    out << ", ";
  }

  // member: goal_pose
  {
    out << "goal_pose: ";
    to_flow_style_yaml(msg.goal_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetModifiedWalkingInstructions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_legs_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_legs_positions:\n";
    to_block_style_yaml(msg.start_legs_positions, out, indentation + 2);
  }

  // member: goal_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_pose:\n";
    to_block_style_yaml(msg.goal_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetModifiedWalkingInstructions_Request & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Request & msg)
{
  return gwpspider_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Request>()
{
  return "gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Request";
}

template<>
inline const char * name<gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Request>()
{
  return "gwpspider_interfaces/srv/GetModifiedWalkingInstructions_Request";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct is_message<gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'walking_instructions'
#include "gwpspider_interfaces/msg/detail/walking_instructions__traits.hpp"

namespace gwpspider_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetModifiedWalkingInstructions_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: walking_instructions
  {
    out << "walking_instructions: ";
    to_flow_style_yaml(msg.walking_instructions, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetModifiedWalkingInstructions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: walking_instructions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "walking_instructions:\n";
    to_block_style_yaml(msg.walking_instructions, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetModifiedWalkingInstructions_Response & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Response & msg)
{
  return gwpspider_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Response>()
{
  return "gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Response";
}

template<>
inline const char * name<gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Response>()
{
  return "gwpspider_interfaces/srv/GetModifiedWalkingInstructions_Response";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Response>
  : std::integral_constant<bool, has_fixed_size<gwpspider_interfaces::msg::WalkingInstructions>::value> {};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Response>
  : std::integral_constant<bool, has_bounded_size<gwpspider_interfaces::msg::WalkingInstructions>::value> {};

template<>
struct is_message<gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gwpspider_interfaces::srv::GetModifiedWalkingInstructions>()
{
  return "gwpspider_interfaces::srv::GetModifiedWalkingInstructions";
}

template<>
inline const char * name<gwpspider_interfaces::srv::GetModifiedWalkingInstructions>()
{
  return "gwpspider_interfaces/srv/GetModifiedWalkingInstructions";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::GetModifiedWalkingInstructions>
  : std::integral_constant<
    bool,
    has_fixed_size<gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Request>::value &&
    has_fixed_size<gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Response>::value
  >
{
};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::GetModifiedWalkingInstructions>
  : std::integral_constant<
    bool,
    has_bounded_size<gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Request>::value &&
    has_bounded_size<gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Response>::value
  >
{
};

template<>
struct is_service<gwpspider_interfaces::srv::GetModifiedWalkingInstructions>
  : std::true_type
{
};

template<>
struct is_service_request<gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__GET_MODIFIED_WALKING_INSTRUCTIONS__TRAITS_HPP_
