// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:srv/RebootMotors.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__REBOOT_MOTORS__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__REBOOT_MOTORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/srv/detail/reboot_motors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_RebootMotors_Request_motors
{
public:
  Init_RebootMotors_Request_motors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::RebootMotors_Request motors(::gwpspider_interfaces::srv::RebootMotors_Request::_motors_type arg)
  {
    msg_.motors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::RebootMotors_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::RebootMotors_Request>()
{
  return gwpspider_interfaces::srv::builder::Init_RebootMotors_Request_motors();
}

}  // namespace gwpspider_interfaces


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_RebootMotors_Response_success
{
public:
  Init_RebootMotors_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::RebootMotors_Response success(::gwpspider_interfaces::srv::RebootMotors_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::RebootMotors_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::RebootMotors_Response>()
{
  return gwpspider_interfaces::srv::builder::Init_RebootMotors_Response_success();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__REBOOT_MOTORS__BUILDER_HPP_
