// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:srv/ToggleAdditionalControllerMode.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__TOGGLE_ADDITIONAL_CONTROLLER_MODE__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__TOGGLE_ADDITIONAL_CONTROLLER_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/srv/detail/toggle_additional_controller_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_ToggleAdditionalControllerMode_Request_command
{
public:
  explicit Init_ToggleAdditionalControllerMode_Request_command(::gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Request & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Request command(::gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Request msg_;
};

class Init_ToggleAdditionalControllerMode_Request_mode
{
public:
  Init_ToggleAdditionalControllerMode_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToggleAdditionalControllerMode_Request_command mode(::gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_ToggleAdditionalControllerMode_Request_command(msg_);
  }

private:
  ::gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Request>()
{
  return gwpspider_interfaces::srv::builder::Init_ToggleAdditionalControllerMode_Request_mode();
}

}  // namespace gwpspider_interfaces


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_ToggleAdditionalControllerMode_Response_success
{
public:
  Init_ToggleAdditionalControllerMode_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Response success(::gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::ToggleAdditionalControllerMode_Response>()
{
  return gwpspider_interfaces::srv::builder::Init_ToggleAdditionalControllerMode_Response_success();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__TOGGLE_ADDITIONAL_CONTROLLER_MODE__BUILDER_HPP_
