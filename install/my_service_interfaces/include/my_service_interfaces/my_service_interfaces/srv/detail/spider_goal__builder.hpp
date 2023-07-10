// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_service_interfaces:srv/SpiderGoal.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_INTERFACES__SRV__DETAIL__SPIDER_GOAL__BUILDER_HPP_
#define MY_SERVICE_INTERFACES__SRV__DETAIL__SPIDER_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_service_interfaces/srv/detail/spider_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_service_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_service_interfaces::srv::SpiderGoal_Request>()
{
  return ::my_service_interfaces::srv::SpiderGoal_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace my_service_interfaces


namespace my_service_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpiderGoal_Response_volume
{
public:
  explicit Init_SpiderGoal_Response_volume(::my_service_interfaces::srv::SpiderGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_service_interfaces::srv::SpiderGoal_Response volume(::my_service_interfaces::srv::SpiderGoal_Response::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_service_interfaces::srv::SpiderGoal_Response msg_;
};

class Init_SpiderGoal_Response_go_refill
{
public:
  explicit Init_SpiderGoal_Response_go_refill(::my_service_interfaces::srv::SpiderGoal_Response & msg)
  : msg_(msg)
  {}
  Init_SpiderGoal_Response_volume go_refill(::my_service_interfaces::srv::SpiderGoal_Response::_go_refill_type arg)
  {
    msg_.go_refill = std::move(arg);
    return Init_SpiderGoal_Response_volume(msg_);
  }

private:
  ::my_service_interfaces::srv::SpiderGoal_Response msg_;
};

class Init_SpiderGoal_Response_data
{
public:
  Init_SpiderGoal_Response_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpiderGoal_Response_go_refill data(::my_service_interfaces::srv::SpiderGoal_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_SpiderGoal_Response_go_refill(msg_);
  }

private:
  ::my_service_interfaces::srv::SpiderGoal_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_service_interfaces::srv::SpiderGoal_Response>()
{
  return my_service_interfaces::srv::builder::Init_SpiderGoal_Response_data();
}

}  // namespace my_service_interfaces

#endif  // MY_SERVICE_INTERFACES__SRV__DETAIL__SPIDER_GOAL__BUILDER_HPP_
