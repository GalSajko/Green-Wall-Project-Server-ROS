// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:srv/ApplyForceLeg.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__APPLY_FORCE_LEG__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__APPLY_FORCE_LEG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/srv/detail/apply_force_leg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_ApplyForceLeg_Request_desired_force
{
public:
  explicit Init_ApplyForceLeg_Request_desired_force(::gwpspider_interfaces::srv::ApplyForceLeg_Request & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::srv::ApplyForceLeg_Request desired_force(::gwpspider_interfaces::srv::ApplyForceLeg_Request::_desired_force_type arg)
  {
    msg_.desired_force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::ApplyForceLeg_Request msg_;
};

class Init_ApplyForceLeg_Request_leg_id
{
public:
  Init_ApplyForceLeg_Request_leg_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApplyForceLeg_Request_desired_force leg_id(::gwpspider_interfaces::srv::ApplyForceLeg_Request::_leg_id_type arg)
  {
    msg_.leg_id = std::move(arg);
    return Init_ApplyForceLeg_Request_desired_force(msg_);
  }

private:
  ::gwpspider_interfaces::srv::ApplyForceLeg_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::ApplyForceLeg_Request>()
{
  return gwpspider_interfaces::srv::builder::Init_ApplyForceLeg_Request_leg_id();
}

}  // namespace gwpspider_interfaces


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_ApplyForceLeg_Response_success
{
public:
  Init_ApplyForceLeg_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::ApplyForceLeg_Response success(::gwpspider_interfaces::srv::ApplyForceLeg_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::ApplyForceLeg_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::ApplyForceLeg_Response>()
{
  return gwpspider_interfaces::srv::builder::Init_ApplyForceLeg_Response_success();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__APPLY_FORCE_LEG__BUILDER_HPP_
