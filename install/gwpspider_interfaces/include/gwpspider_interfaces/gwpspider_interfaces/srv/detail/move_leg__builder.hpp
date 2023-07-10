// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:srv/MoveLeg.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_LEG__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_LEG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/srv/detail/move_leg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveLeg_Request_close_gripper
{
public:
  explicit Init_MoveLeg_Request_close_gripper(::gwpspider_interfaces::srv::MoveLeg_Request & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::srv::MoveLeg_Request close_gripper(::gwpspider_interfaces::srv::MoveLeg_Request::_close_gripper_type arg)
  {
    msg_.close_gripper = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::MoveLeg_Request msg_;
};

class Init_MoveLeg_Request_open_gripper
{
public:
  explicit Init_MoveLeg_Request_open_gripper(::gwpspider_interfaces::srv::MoveLeg_Request & msg)
  : msg_(msg)
  {}
  Init_MoveLeg_Request_close_gripper open_gripper(::gwpspider_interfaces::srv::MoveLeg_Request::_open_gripper_type arg)
  {
    msg_.open_gripper = std::move(arg);
    return Init_MoveLeg_Request_close_gripper(msg_);
  }

private:
  ::gwpspider_interfaces::srv::MoveLeg_Request msg_;
};

class Init_MoveLeg_Request_spider_pose
{
public:
  explicit Init_MoveLeg_Request_spider_pose(::gwpspider_interfaces::srv::MoveLeg_Request & msg)
  : msg_(msg)
  {}
  Init_MoveLeg_Request_open_gripper spider_pose(::gwpspider_interfaces::srv::MoveLeg_Request::_spider_pose_type arg)
  {
    msg_.spider_pose = std::move(arg);
    return Init_MoveLeg_Request_open_gripper(msg_);
  }

private:
  ::gwpspider_interfaces::srv::MoveLeg_Request msg_;
};

class Init_MoveLeg_Request_is_offset
{
public:
  explicit Init_MoveLeg_Request_is_offset(::gwpspider_interfaces::srv::MoveLeg_Request & msg)
  : msg_(msg)
  {}
  Init_MoveLeg_Request_spider_pose is_offset(::gwpspider_interfaces::srv::MoveLeg_Request::_is_offset_type arg)
  {
    msg_.is_offset = std::move(arg);
    return Init_MoveLeg_Request_spider_pose(msg_);
  }

private:
  ::gwpspider_interfaces::srv::MoveLeg_Request msg_;
};

class Init_MoveLeg_Request_duration
{
public:
  explicit Init_MoveLeg_Request_duration(::gwpspider_interfaces::srv::MoveLeg_Request & msg)
  : msg_(msg)
  {}
  Init_MoveLeg_Request_is_offset duration(::gwpspider_interfaces::srv::MoveLeg_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_MoveLeg_Request_is_offset(msg_);
  }

private:
  ::gwpspider_interfaces::srv::MoveLeg_Request msg_;
};

class Init_MoveLeg_Request_origin
{
public:
  explicit Init_MoveLeg_Request_origin(::gwpspider_interfaces::srv::MoveLeg_Request & msg)
  : msg_(msg)
  {}
  Init_MoveLeg_Request_duration origin(::gwpspider_interfaces::srv::MoveLeg_Request::_origin_type arg)
  {
    msg_.origin = std::move(arg);
    return Init_MoveLeg_Request_duration(msg_);
  }

private:
  ::gwpspider_interfaces::srv::MoveLeg_Request msg_;
};

class Init_MoveLeg_Request_trajectory_type
{
public:
  explicit Init_MoveLeg_Request_trajectory_type(::gwpspider_interfaces::srv::MoveLeg_Request & msg)
  : msg_(msg)
  {}
  Init_MoveLeg_Request_origin trajectory_type(::gwpspider_interfaces::srv::MoveLeg_Request::_trajectory_type_type arg)
  {
    msg_.trajectory_type = std::move(arg);
    return Init_MoveLeg_Request_origin(msg_);
  }

private:
  ::gwpspider_interfaces::srv::MoveLeg_Request msg_;
};

class Init_MoveLeg_Request_goal_position
{
public:
  explicit Init_MoveLeg_Request_goal_position(::gwpspider_interfaces::srv::MoveLeg_Request & msg)
  : msg_(msg)
  {}
  Init_MoveLeg_Request_trajectory_type goal_position(::gwpspider_interfaces::srv::MoveLeg_Request::_goal_position_type arg)
  {
    msg_.goal_position = std::move(arg);
    return Init_MoveLeg_Request_trajectory_type(msg_);
  }

private:
  ::gwpspider_interfaces::srv::MoveLeg_Request msg_;
};

class Init_MoveLeg_Request_leg_id
{
public:
  Init_MoveLeg_Request_leg_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveLeg_Request_goal_position leg_id(::gwpspider_interfaces::srv::MoveLeg_Request::_leg_id_type arg)
  {
    msg_.leg_id = std::move(arg);
    return Init_MoveLeg_Request_goal_position(msg_);
  }

private:
  ::gwpspider_interfaces::srv::MoveLeg_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::MoveLeg_Request>()
{
  return gwpspider_interfaces::srv::builder::Init_MoveLeg_Request_leg_id();
}

}  // namespace gwpspider_interfaces


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveLeg_Response_success
{
public:
  Init_MoveLeg_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::MoveLeg_Response success(::gwpspider_interfaces::srv::MoveLeg_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::MoveLeg_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::MoveLeg_Response>()
{
  return gwpspider_interfaces::srv::builder::Init_MoveLeg_Response_success();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_LEG__BUILDER_HPP_
