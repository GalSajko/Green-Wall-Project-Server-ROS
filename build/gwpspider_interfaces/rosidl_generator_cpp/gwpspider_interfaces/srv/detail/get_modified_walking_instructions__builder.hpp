// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:srv/GetModifiedWalkingInstructions.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__GET_MODIFIED_WALKING_INSTRUCTIONS__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__GET_MODIFIED_WALKING_INSTRUCTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/srv/detail/get_modified_walking_instructions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetModifiedWalkingInstructions_Request_goal_pose
{
public:
  explicit Init_GetModifiedWalkingInstructions_Request_goal_pose(::gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Request & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Request goal_pose(::gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Request::_goal_pose_type arg)
  {
    msg_.goal_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Request msg_;
};

class Init_GetModifiedWalkingInstructions_Request_start_legs_positions
{
public:
  Init_GetModifiedWalkingInstructions_Request_start_legs_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetModifiedWalkingInstructions_Request_goal_pose start_legs_positions(::gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Request::_start_legs_positions_type arg)
  {
    msg_.start_legs_positions = std::move(arg);
    return Init_GetModifiedWalkingInstructions_Request_goal_pose(msg_);
  }

private:
  ::gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Request>()
{
  return gwpspider_interfaces::srv::builder::Init_GetModifiedWalkingInstructions_Request_start_legs_positions();
}

}  // namespace gwpspider_interfaces


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetModifiedWalkingInstructions_Response_walking_instructions
{
public:
  Init_GetModifiedWalkingInstructions_Response_walking_instructions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Response walking_instructions(::gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Response::_walking_instructions_type arg)
  {
    msg_.walking_instructions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::GetModifiedWalkingInstructions_Response>()
{
  return gwpspider_interfaces::srv::builder::Init_GetModifiedWalkingInstructions_Response_walking_instructions();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__GET_MODIFIED_WALKING_INSTRUCTIONS__BUILDER_HPP_
