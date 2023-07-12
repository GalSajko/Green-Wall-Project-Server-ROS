// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_service_interfaces:srv/SetValue.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_INTERFACES__SRV__DETAIL__SET_VALUE__TRAITS_HPP_
#define MY_SERVICE_INTERFACES__SRV__DETAIL__SET_VALUE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_service_interfaces/srv/detail/set_value__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_service_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetValue_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetValue_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetValue_Request & msg, bool use_flow_style = false)
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

}  // namespace my_service_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_service_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_service_interfaces::srv::SetValue_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_service_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_service_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_service_interfaces::srv::SetValue_Request & msg)
{
  return my_service_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_service_interfaces::srv::SetValue_Request>()
{
  return "my_service_interfaces::srv::SetValue_Request";
}

template<>
inline const char * name<my_service_interfaces::srv::SetValue_Request>()
{
  return "my_service_interfaces/srv/SetValue_Request";
}

template<>
struct has_fixed_size<my_service_interfaces::srv::SetValue_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_service_interfaces::srv::SetValue_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_service_interfaces::srv::SetValue_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_service_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetValue_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: go_refill
  {
    out << "go_refill: ";
    rosidl_generator_traits::value_to_yaml(msg.go_refill, out);
    out << ", ";
  }

  // member: volume
  {
    out << "volume: ";
    rosidl_generator_traits::value_to_yaml(msg.volume, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetValue_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: go_refill
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "go_refill: ";
    rosidl_generator_traits::value_to_yaml(msg.go_refill, out);
    out << "\n";
  }

  // member: volume
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "volume: ";
    rosidl_generator_traits::value_to_yaml(msg.volume, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetValue_Response & msg, bool use_flow_style = false)
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

}  // namespace my_service_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_service_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_service_interfaces::srv::SetValue_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_service_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_service_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_service_interfaces::srv::SetValue_Response & msg)
{
  return my_service_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_service_interfaces::srv::SetValue_Response>()
{
  return "my_service_interfaces::srv::SetValue_Response";
}

template<>
inline const char * name<my_service_interfaces::srv::SetValue_Response>()
{
  return "my_service_interfaces/srv/SetValue_Response";
}

template<>
struct has_fixed_size<my_service_interfaces::srv::SetValue_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_service_interfaces::srv::SetValue_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_service_interfaces::srv::SetValue_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_service_interfaces::srv::SetValue>()
{
  return "my_service_interfaces::srv::SetValue";
}

template<>
inline const char * name<my_service_interfaces::srv::SetValue>()
{
  return "my_service_interfaces/srv/SetValue";
}

template<>
struct has_fixed_size<my_service_interfaces::srv::SetValue>
  : std::integral_constant<
    bool,
    has_fixed_size<my_service_interfaces::srv::SetValue_Request>::value &&
    has_fixed_size<my_service_interfaces::srv::SetValue_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_service_interfaces::srv::SetValue>
  : std::integral_constant<
    bool,
    has_bounded_size<my_service_interfaces::srv::SetValue_Request>::value &&
    has_bounded_size<my_service_interfaces::srv::SetValue_Response>::value
  >
{
};

template<>
struct is_service<my_service_interfaces::srv::SetValue>
  : std::true_type
{
};

template<>
struct is_service_request<my_service_interfaces::srv::SetValue_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_service_interfaces::srv::SetValue_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_SERVICE_INTERFACES__SRV__DETAIL__SET_VALUE__TRAITS_HPP_
