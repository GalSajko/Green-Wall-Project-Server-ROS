// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:srv/ToggleMotorsTorque.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__TOGGLE_MOTORS_TORQUE__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__TOGGLE_MOTORS_TORQUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/srv/detail/toggle_motors_torque__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_ToggleMotorsTorque_Request_command
{
public:
  explicit Init_ToggleMotorsTorque_Request_command(::gwpspider_interfaces::srv::ToggleMotorsTorque_Request & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::srv::ToggleMotorsTorque_Request command(::gwpspider_interfaces::srv::ToggleMotorsTorque_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::ToggleMotorsTorque_Request msg_;
};

class Init_ToggleMotorsTorque_Request_legs_ids
{
public:
  Init_ToggleMotorsTorque_Request_legs_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToggleMotorsTorque_Request_command legs_ids(::gwpspider_interfaces::srv::ToggleMotorsTorque_Request::_legs_ids_type arg)
  {
    msg_.legs_ids = std::move(arg);
    return Init_ToggleMotorsTorque_Request_command(msg_);
  }

private:
  ::gwpspider_interfaces::srv::ToggleMotorsTorque_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::ToggleMotorsTorque_Request>()
{
  return gwpspider_interfaces::srv::builder::Init_ToggleMotorsTorque_Request_legs_ids();
}

}  // namespace gwpspider_interfaces


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_ToggleMotorsTorque_Response_success
{
public:
  Init_ToggleMotorsTorque_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::ToggleMotorsTorque_Response success(::gwpspider_interfaces::srv::ToggleMotorsTorque_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::ToggleMotorsTorque_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::ToggleMotorsTorque_Response>()
{
  return gwpspider_interfaces::srv::builder::Init_ToggleMotorsTorque_Response_success();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__TOGGLE_MOTORS_TORQUE__BUILDER_HPP_
