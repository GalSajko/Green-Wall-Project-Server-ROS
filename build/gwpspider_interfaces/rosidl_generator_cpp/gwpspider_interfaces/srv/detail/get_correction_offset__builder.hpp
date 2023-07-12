// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gwpspider_interfaces:srv/GetCorrectionOffset.idl
// generated code does not contain a copyright notice

#ifndef GWPSPIDER_INTERFACES__SRV__DETAIL__GET_CORRECTION_OFFSET__BUILDER_HPP_
#define GWPSPIDER_INTERFACES__SRV__DETAIL__GET_CORRECTION_OFFSET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gwpspider_interfaces/srv/detail/get_correction_offset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetCorrectionOffset_Request_one_hot_legs
{
public:
  explicit Init_GetCorrectionOffset_Request_one_hot_legs(::gwpspider_interfaces::srv::GetCorrectionOffset_Request & msg)
  : msg_(msg)
  {}
  ::gwpspider_interfaces::srv::GetCorrectionOffset_Request one_hot_legs(::gwpspider_interfaces::srv::GetCorrectionOffset_Request::_one_hot_legs_type arg)
  {
    msg_.one_hot_legs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::GetCorrectionOffset_Request msg_;
};

class Init_GetCorrectionOffset_Request_commanded_position
{
public:
  explicit Init_GetCorrectionOffset_Request_commanded_position(::gwpspider_interfaces::srv::GetCorrectionOffset_Request & msg)
  : msg_(msg)
  {}
  Init_GetCorrectionOffset_Request_one_hot_legs commanded_position(::gwpspider_interfaces::srv::GetCorrectionOffset_Request::_commanded_position_type arg)
  {
    msg_.commanded_position = std::move(arg);
    return Init_GetCorrectionOffset_Request_one_hot_legs(msg_);
  }

private:
  ::gwpspider_interfaces::srv::GetCorrectionOffset_Request msg_;
};

class Init_GetCorrectionOffset_Request_rpy
{
public:
  explicit Init_GetCorrectionOffset_Request_rpy(::gwpspider_interfaces::srv::GetCorrectionOffset_Request & msg)
  : msg_(msg)
  {}
  Init_GetCorrectionOffset_Request_commanded_position rpy(::gwpspider_interfaces::srv::GetCorrectionOffset_Request::_rpy_type arg)
  {
    msg_.rpy = std::move(arg);
    return Init_GetCorrectionOffset_Request_commanded_position(msg_);
  }

private:
  ::gwpspider_interfaces::srv::GetCorrectionOffset_Request msg_;
};

class Init_GetCorrectionOffset_Request_legs_positions
{
public:
  Init_GetCorrectionOffset_Request_legs_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCorrectionOffset_Request_rpy legs_positions(::gwpspider_interfaces::srv::GetCorrectionOffset_Request::_legs_positions_type arg)
  {
    msg_.legs_positions = std::move(arg);
    return Init_GetCorrectionOffset_Request_rpy(msg_);
  }

private:
  ::gwpspider_interfaces::srv::GetCorrectionOffset_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::GetCorrectionOffset_Request>()
{
  return gwpspider_interfaces::srv::builder::Init_GetCorrectionOffset_Request_legs_positions();
}

}  // namespace gwpspider_interfaces


namespace gwpspider_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetCorrectionOffset_Response_correction_offset
{
public:
  Init_GetCorrectionOffset_Response_correction_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gwpspider_interfaces::srv::GetCorrectionOffset_Response correction_offset(::gwpspider_interfaces::srv::GetCorrectionOffset_Response::_correction_offset_type arg)
  {
    msg_.correction_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gwpspider_interfaces::srv::GetCorrectionOffset_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gwpspider_interfaces::srv::GetCorrectionOffset_Response>()
{
  return gwpspider_interfaces::srv::builder::Init_GetCorrectionOffset_Response_correction_offset();
}

}  // namespace gwpspider_interfaces

#endif  // GWPSPIDER_INTERFACES__SRV__DETAIL__GET_CORRECTION_OFFSET__BUILDER_HPP_
