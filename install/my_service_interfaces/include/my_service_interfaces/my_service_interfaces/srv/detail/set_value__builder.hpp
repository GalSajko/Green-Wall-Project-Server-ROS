// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_service_interfaces:srv/SetValue.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_INTERFACES__SRV__DETAIL__SET_VALUE__BUILDER_HPP_
#define MY_SERVICE_INTERFACES__SRV__DETAIL__SET_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_service_interfaces/srv/detail/set_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_service_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetValue_Request_value
{
public:
  Init_SetValue_Request_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_service_interfaces::srv::SetValue_Request value(::my_service_interfaces::srv::SetValue_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_service_interfaces::srv::SetValue_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_service_interfaces::srv::SetValue_Request>()
{
  return my_service_interfaces::srv::builder::Init_SetValue_Request_value();
}

}  // namespace my_service_interfaces


namespace my_service_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetValue_Response_succes
{
public:
  Init_SetValue_Response_succes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_service_interfaces::srv::SetValue_Response succes(::my_service_interfaces::srv::SetValue_Response::_succes_type arg)
  {
    msg_.succes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_service_interfaces::srv::SetValue_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_service_interfaces::srv::SetValue_Response>()
{
  return my_service_interfaces::srv::builder::Init_SetValue_Response_succes();
}

}  // namespace my_service_interfaces

#endif  // MY_SERVICE_INTERFACES__SRV__DETAIL__SET_VALUE__BUILDER_HPP_
