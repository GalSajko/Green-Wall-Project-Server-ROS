// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:srv/GetSpiderPose.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__GET_SPIDER_POSE__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__GET_SPIDER_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/srv/detail/get_spider_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetSpiderPose_Request_legs_global_positions
{
public:
  explicit Init_GetSpiderPose_Request_legs_global_positions(::gwpspider_interfaces::srv::GetSpiderPose_Request & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::srv::GetSpiderPose_Request legs_global_positions(::gwpspider_interfaces::srv::GetSpiderPose_Request::_legs_global_positions_type arg)
  {
    msg_.legs_global_positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::GetSpiderPose_Request msg_;
};

class Init_GetSpiderPose_Request_legs_ids
{
public:
  Init_GetSpiderPose_Request_legs_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetSpiderPose_Request_legs_global_positions legs_ids(::gwpspider_interfaces::srv::GetSpiderPose_Request::_legs_ids_type arg)
  {
    msg_.legs_ids = std::move(arg);
    return Init_GetSpiderPose_Request_legs_global_positions(msg_);
  }

private:
  ::gwpspider_interfaces::srv::GetSpiderPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::GetSpiderPose_Request>()
{
  return gwpspider_interfaces::srv::builder::Init_GetSpiderPose_Request_legs_ids();
}

}  // namespace gwpspider_interfaces


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetSpiderPose_Response_spider_pose
{
public:
  Init_GetSpiderPose_Response_spider_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::GetSpiderPose_Response spider_pose(::gwpspider_interfaces::srv::GetSpiderPose_Response::_spider_pose_type arg)
  {
    msg_.spider_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::GetSpiderPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::GetSpiderPose_Response>()
{
  return gwpspider_interfaces::srv::builder::Init_GetSpiderPose_Response_spider_pose();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__GET_SPIDER_POSE__BUILDER_HPP_
