// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:srv/MoveSpider.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_SPIDER__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_SPIDER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/srv/detail/move_spider__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveSpider_Request_duration
{
public:
  explicit Init_MoveSpider_Request_duration(::gwpspider_interfaces::srv::MoveSpider_Request & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::srv::MoveSpider_Request duration(::gwpspider_interfaces::srv::MoveSpider_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::MoveSpider_Request msg_;
};

class Init_MoveSpider_Request_goal_spider_pose
{
public:
  explicit Init_MoveSpider_Request_goal_spider_pose(::gwpspider_interfaces::srv::MoveSpider_Request & msg)
  : msg_(msg)
  {}
  Init_MoveSpider_Request_duration goal_spider_pose(::gwpspider_interfaces::srv::MoveSpider_Request::_goal_spider_pose_type arg)
  {
    msg_.goal_spider_pose = std::move(arg);
    return Init_MoveSpider_Request_duration(msg_);
  }

private:
  ::gwpspider_interfaces::srv::MoveSpider_Request msg_;
};

class Init_MoveSpider_Request_used_pins_positions
{
public:
  explicit Init_MoveSpider_Request_used_pins_positions(::gwpspider_interfaces::srv::MoveSpider_Request & msg)
  : msg_(msg)
  {}
  Init_MoveSpider_Request_goal_spider_pose used_pins_positions(::gwpspider_interfaces::srv::MoveSpider_Request::_used_pins_positions_type arg)
  {
    msg_.used_pins_positions = std::move(arg);
    return Init_MoveSpider_Request_goal_spider_pose(msg_);
  }

private:
  ::gwpspider_interfaces::srv::MoveSpider_Request msg_;
};

class Init_MoveSpider_Request_legs_ids
{
public:
  Init_MoveSpider_Request_legs_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveSpider_Request_used_pins_positions legs_ids(::gwpspider_interfaces::srv::MoveSpider_Request::_legs_ids_type arg)
  {
    msg_.legs_ids = std::move(arg);
    return Init_MoveSpider_Request_used_pins_positions(msg_);
  }

private:
  ::gwpspider_interfaces::srv::MoveSpider_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::MoveSpider_Request>()
{
  return gwpspider_interfaces::srv::builder::Init_MoveSpider_Request_legs_ids();
}

}  // namespace gwpspider_interfaces


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveSpider_Response_success
{
public:
  Init_MoveSpider_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::MoveSpider_Response success(::gwpspider_interfaces::srv::MoveSpider_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::MoveSpider_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::MoveSpider_Response>()
{
  return gwpspider_interfaces::srv::builder::Init_MoveSpider_Response_success();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__MOVE_SPIDER__BUILDER_HPP_
