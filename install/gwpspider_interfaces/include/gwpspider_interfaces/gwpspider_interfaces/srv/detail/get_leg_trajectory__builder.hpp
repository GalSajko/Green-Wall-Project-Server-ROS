// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:srv/GetLegTrajectory.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__GET_LEG_TRAJECTORY__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__GET_LEG_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/srv/detail/get_leg_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetLegTrajectory_Request_trajectory_type
{
public:
  explicit Init_GetLegTrajectory_Request_trajectory_type(::gwpspider_interfaces::srv::GetLegTrajectory_Request & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::srv::GetLegTrajectory_Request trajectory_type(::gwpspider_interfaces::srv::GetLegTrajectory_Request::_trajectory_type_type arg)
  {
    msg_.trajectory_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::GetLegTrajectory_Request msg_;
};

class Init_GetLegTrajectory_Request_duration
{
public:
  explicit Init_GetLegTrajectory_Request_duration(::gwpspider_interfaces::srv::GetLegTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_GetLegTrajectory_Request_trajectory_type duration(::gwpspider_interfaces::srv::GetLegTrajectory_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_GetLegTrajectory_Request_trajectory_type(msg_);
  }

private:
  ::gwpspider_interfaces::srv::GetLegTrajectory_Request msg_;
};

class Init_GetLegTrajectory_Request_goal_position
{
public:
  explicit Init_GetLegTrajectory_Request_goal_position(::gwpspider_interfaces::srv::GetLegTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_GetLegTrajectory_Request_duration goal_position(::gwpspider_interfaces::srv::GetLegTrajectory_Request::_goal_position_type arg)
  {
    msg_.goal_position = std::move(arg);
    return Init_GetLegTrajectory_Request_duration(msg_);
  }

private:
  ::gwpspider_interfaces::srv::GetLegTrajectory_Request msg_;
};

class Init_GetLegTrajectory_Request_current_position
{
public:
  Init_GetLegTrajectory_Request_current_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLegTrajectory_Request_goal_position current_position(::gwpspider_interfaces::srv::GetLegTrajectory_Request::_current_position_type arg)
  {
    msg_.current_position = std::move(arg);
    return Init_GetLegTrajectory_Request_goal_position(msg_);
  }

private:
  ::gwpspider_interfaces::srv::GetLegTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::GetLegTrajectory_Request>()
{
  return gwpspider_interfaces::srv::builder::Init_GetLegTrajectory_Request_current_position();
}

}  // namespace gwpspider_interfaces


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetLegTrajectory_Response_trajectories
{
public:
  Init_GetLegTrajectory_Response_trajectories()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::GetLegTrajectory_Response trajectories(::gwpspider_interfaces::srv::GetLegTrajectory_Response::_trajectories_type arg)
  {
    msg_.trajectories = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::GetLegTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::GetLegTrajectory_Response>()
{
  return gwpspider_interfaces::srv::builder::Init_GetLegTrajectory_Response_trajectories();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__GET_LEG_TRAJECTORY__BUILDER_HPP_
