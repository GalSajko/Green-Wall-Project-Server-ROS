// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:srv/ToggleController.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__TOGGLE_CONTROLLER__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__TOGGLE_CONTROLLER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/srv/detail/toggle_controller__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_ToggleController_Request_command
{
public:
  Init_ToggleController_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::ToggleController_Request command(::gwpspider_interfaces::srv::ToggleController_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::ToggleController_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::ToggleController_Request>()
{
  return gwpspider_interfaces::srv::builder::Init_ToggleController_Request_command();
}

}  // namespace gwpspider_interfaces


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_ToggleController_Response_success
{
public:
  Init_ToggleController_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::ToggleController_Response success(::gwpspider_interfaces::srv::ToggleController_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::ToggleController_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::ToggleController_Response>()
{
  return gwpspider_interfaces::srv::builder::Init_ToggleController_Response_success();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__TOGGLE_CONTROLLER__BUILDER_HPP_
