// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:srv/ApplyForcesOnLegs.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__APPLY_FORCES_ON_LEGS__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__APPLY_FORCES_ON_LEGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/srv/detail/apply_forces_on_legs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_ApplyForcesOnLegs_Request_desired_forces
{
public:
  explicit Init_ApplyForcesOnLegs_Request_desired_forces(::gwpspider_interfaces::srv::ApplyForcesOnLegs_Request & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::srv::ApplyForcesOnLegs_Request desired_forces(::gwpspider_interfaces::srv::ApplyForcesOnLegs_Request::_desired_forces_type arg)
  {
    msg_.desired_forces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::ApplyForcesOnLegs_Request msg_;
};

class Init_ApplyForcesOnLegs_Request_legs_ids
{
public:
  Init_ApplyForcesOnLegs_Request_legs_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApplyForcesOnLegs_Request_desired_forces legs_ids(::gwpspider_interfaces::srv::ApplyForcesOnLegs_Request::_legs_ids_type arg)
  {
    msg_.legs_ids = std::move(arg);
    return Init_ApplyForcesOnLegs_Request_desired_forces(msg_);
  }

private:
  ::gwpspider_interfaces::srv::ApplyForcesOnLegs_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::ApplyForcesOnLegs_Request>()
{
  return gwpspider_interfaces::srv::builder::Init_ApplyForcesOnLegs_Request_legs_ids();
}

}  // namespace gwpspider_interfaces


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_ApplyForcesOnLegs_Response_success
{
public:
  Init_ApplyForcesOnLegs_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::ApplyForcesOnLegs_Response success(::gwpspider_interfaces::srv::ApplyForcesOnLegs_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::ApplyForcesOnLegs_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::ApplyForcesOnLegs_Response>()
{
  return gwpspider_interfaces::srv::builder::Init_ApplyForcesOnLegs_Response_success();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__APPLY_FORCES_ON_LEGS__BUILDER_HPP_
