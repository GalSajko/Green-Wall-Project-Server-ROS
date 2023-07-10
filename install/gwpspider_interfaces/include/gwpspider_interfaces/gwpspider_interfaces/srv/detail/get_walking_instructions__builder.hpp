// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:srv/GetWalkingInstructions.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__GET_WALKING_INSTRUCTIONS__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__GET_WALKING_INSTRUCTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/srv/detail/get_walking_instructions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetWalkingInstructions_Request_goal_pose
{
public:
  explicit Init_GetWalkingInstructions_Request_goal_pose(::gwpspider_interfaces::srv::GetWalkingInstructions_Request & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::srv::GetWalkingInstructions_Request goal_pose(::gwpspider_interfaces::srv::GetWalkingInstructions_Request::_goal_pose_type arg)
  {
    msg_.goal_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::GetWalkingInstructions_Request msg_;
};

class Init_GetWalkingInstructions_Request_start_pose
{
public:
  Init_GetWalkingInstructions_Request_start_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetWalkingInstructions_Request_goal_pose start_pose(::gwpspider_interfaces::srv::GetWalkingInstructions_Request::_start_pose_type arg)
  {
    msg_.start_pose = std::move(arg);
    return Init_GetWalkingInstructions_Request_goal_pose(msg_);
  }

private:
  ::gwpspider_interfaces::srv::GetWalkingInstructions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::GetWalkingInstructions_Request>()
{
  return gwpspider_interfaces::srv::builder::Init_GetWalkingInstructions_Request_start_pose();
}

}  // namespace gwpspider_interfaces


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetWalkingInstructions_Response_walking_instructions
{
public:
  Init_GetWalkingInstructions_Response_walking_instructions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::GetWalkingInstructions_Response walking_instructions(::gwpspider_interfaces::srv::GetWalkingInstructions_Response::_walking_instructions_type arg)
  {
    msg_.walking_instructions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::GetWalkingInstructions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::GetWalkingInstructions_Response>()
{
  return gwpspider_interfaces::srv::builder::Init_GetWalkingInstructions_Response_walking_instructions();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__GET_WALKING_INSTRUCTIONS__BUILDER_HPP_
