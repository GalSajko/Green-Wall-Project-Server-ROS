// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:srv/MoveLegVelocityMode.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_LEG_VELOCITY_MODE__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_LEG_VELOCITY_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/srv/detail/move_leg_velocity_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveLegVelocityMode_Request_velocity_mode_direction
{
public:
  explicit Init_MoveLegVelocityMode_Request_velocity_mode_direction(::gwpspider_interfaces::srv::MoveLegVelocityMode_Request & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::srv::MoveLegVelocityMode_Request velocity_mode_direction(::gwpspider_interfaces::srv::MoveLegVelocityMode_Request::_velocity_mode_direction_type arg)
  {
    msg_.velocity_mode_direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::MoveLegVelocityMode_Request msg_;
};

class Init_MoveLegVelocityMode_Request_leg_id
{
public:
  Init_MoveLegVelocityMode_Request_leg_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveLegVelocityMode_Request_velocity_mode_direction leg_id(::gwpspider_interfaces::srv::MoveLegVelocityMode_Request::_leg_id_type arg)
  {
    msg_.leg_id = std::move(arg);
    return Init_MoveLegVelocityMode_Request_velocity_mode_direction(msg_);
  }

private:
  ::gwpspider_interfaces::srv::MoveLegVelocityMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::MoveLegVelocityMode_Request>()
{
  return gwpspider_interfaces::srv::builder::Init_MoveLegVelocityMode_Request_leg_id();
}

}  // namespace gwpspider_interfaces


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveLegVelocityMode_Response_success
{
public:
  Init_MoveLegVelocityMode_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::MoveLegVelocityMode_Response success(::gwpspider_interfaces::srv::MoveLegVelocityMode_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::MoveLegVelocityMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::MoveLegVelocityMode_Response>()
{
  return gwpspider_interfaces::srv::builder::Init_MoveLegVelocityMode_Response_success();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_LEG_VELOCITY_MODE__BUILDER_HPP_
