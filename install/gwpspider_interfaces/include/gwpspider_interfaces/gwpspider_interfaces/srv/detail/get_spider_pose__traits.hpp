// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gwpspider_interfaces:srv/GetSpiderPose.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__GET_SPIDER_POSE__TRAITS_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__GET_SPIDER_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gwpspider_interfaces/srv/detail/get_spider_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'legs_ids'
#include "std_msgs/msg/detail/int8_multi_array__traits.hpp"
// Member 'legs_global_positions'
#include "std_msgs/msg/detail/float32_multi_array__traits.hpp"

namespace gwpspider_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetSpiderPose_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: legs_ids
  {
    out << "legs_ids: ";
    to_flow_style_yaml(msg.legs_ids, out);
    out << ", ";
  }

  // member: legs_global_positions
  {
    out << "legs_global_positions: ";
    to_flow_style_yaml(msg.legs_global_positions, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetSpiderPose_Request & msg,
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

  // member: legs_global_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "legs_global_positions:\n";
    to_block_style_yaml(msg.legs_global_positions, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetSpiderPose_Request & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::srv::GetSpiderPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::srv::GetSpiderPose_Request & msg)
{
  return gwpspider_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::srv::GetSpiderPose_Request>()
{
  return "gwpspider_interfaces::srv::GetSpiderPose_Request";
}

template<>
inline const char * name<gwpspider_interfaces::srv::GetSpiderPose_Request>()
{
  return "gwpspider_interfaces/srv/GetSpiderPose_Request";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::GetSpiderPose_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32MultiArray>::value && has_fixed_size<std_msgs::msg::Int8MultiArray>::value> {};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::GetSpiderPose_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32MultiArray>::value && has_bounded_size<std_msgs::msg::Int8MultiArray>::value> {};

template<>
struct is_message<gwpspider_interfaces::srv::GetSpiderPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'spider_pose'
// already included above
// #include "std_msgs/msg/detail/float32_multi_array__traits.hpp"

namespace gwpspider_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetSpiderPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: spider_pose
  {
    out << "spider_pose: ";
    to_flow_style_yaml(msg.spider_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetSpiderPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: spider_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spider_pose:\n";
    to_block_style_yaml(msg.spider_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetSpiderPose_Response & msg, bool use_flow_style = false)
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
  const gwpspider_interfaces::srv::GetSpiderPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gwpspider_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gwpspider_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gwpspider_interfaces::srv::GetSpiderPose_Response & msg)
{
  return gwpspider_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gwpspider_interfaces::srv::GetSpiderPose_Response>()
{
  return "gwpspider_interfaces::srv::GetSpiderPose_Response";
}

template<>
inline const char * name<gwpspider_interfaces::srv::GetSpiderPose_Response>()
{
  return "gwpspider_interfaces/srv/GetSpiderPose_Response";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::GetSpiderPose_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::GetSpiderPose_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct is_message<gwpspider_interfaces::srv::GetSpiderPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gwpspider_interfaces::srv::GetSpiderPose>()
{
  return "gwpspider_interfaces::srv::GetSpiderPose";
}

template<>
inline const char * name<gwpspider_interfaces::srv::GetSpiderPose>()
{
  return "gwpspider_interfaces/srv/GetSpiderPose";
}

template<>
struct has_fixed_size<gwpspider_interfaces::srv::GetSpiderPose>
  : std::integral_constant<
    bool,
    has_fixed_size<gwpspider_interfaces::srv::GetSpiderPose_Request>::value &&
    has_fixed_size<gwpspider_interfaces::srv::GetSpiderPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<gwpspider_interfaces::srv::GetSpiderPose>
  : std::integral_constant<
    bool,
    has_bounded_size<gwpspider_interfaces::srv::GetSpiderPose_Request>::value &&
    has_bounded_size<gwpspider_interfaces::srv::GetSpiderPose_Response>::value
  >
{
};

template<>
struct is_service<gwpspider_interfaces::srv::GetSpiderPose>
  : std::true_type
{
};

template<>
struct is_service_request<gwpspider_interfaces::srv::GetSpiderPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gwpspider_interfaces::srv::GetSpiderPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__GET_SPIDER_POSE__TRAITS_HPP_
