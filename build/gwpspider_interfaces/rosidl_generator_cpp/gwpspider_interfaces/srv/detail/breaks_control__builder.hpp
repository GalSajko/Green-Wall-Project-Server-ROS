// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:srv/BreaksControl.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__BREAKS_CONTROL__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__BREAKS_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/srv/detail/breaks_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_BreaksControl_Request_break_id
{
public:
  explicit Init_BreaksControl_Request_break_id(::gwpspider_interfaces::srv::BreaksControl_Request & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::srv::BreaksControl_Request break_id(::gwpspider_interfaces::srv::BreaksControl_Request::_break_id_type arg)
  {
    msg_.break_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::BreaksControl_Request msg_;
};

class Init_BreaksControl_Request_command
{
public:
  Init_BreaksControl_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BreaksControl_Request_break_id command(::gwpspider_interfaces::srv::BreaksControl_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_BreaksControl_Request_break_id(msg_);
  }

private:
  ::gwpspider_interfaces::srv::BreaksControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::BreaksControl_Request>()
{
  return gwpspider_interfaces::srv::builder::Init_BreaksControl_Request_command();
}

}  // namespace gwpspider_interfaces


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_BreaksControl_Response_success
{
public:
  Init_BreaksControl_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::BreaksControl_Response success(::gwpspider_interfaces::srv::BreaksControl_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::BreaksControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::BreaksControl_Response>()
{
  return gwpspider_interfaces::srv::builder::Init_BreaksControl_Response_success();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__BREAKS_CONTROL__BUILDER_HPP_
