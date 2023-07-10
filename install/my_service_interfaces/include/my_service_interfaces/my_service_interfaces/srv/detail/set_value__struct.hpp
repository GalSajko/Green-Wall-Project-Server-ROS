// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_service_interfaces:srv/SetValue.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_INTERFACES__SRV__DETAIL__SET_VALUE__STRUCT_HPP_
#define MY_SERVICE_INTERFACES__SRV__DETAIL__SET_VALUE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_service_interfaces__srv__SetValue_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_service_interfaces__srv__SetValue_Request __declspec(deprecated)
#endif

namespace my_service_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetValue_Request_
{
  using Type = SetValue_Request_<ContainerAllocator>;

  explicit SetValue_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = "";
    }
  }

  explicit SetValue_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : value(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = "";
    }
  }

  // field types and members
  using _value_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_service_interfaces::srv::SetValue_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_service_interfaces::srv::SetValue_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_service_interfaces::srv::SetValue_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_service_interfaces::srv::SetValue_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_service_interfaces::srv::SetValue_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_service_interfaces::srv::SetValue_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_service_interfaces::srv::SetValue_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_service_interfaces::srv::SetValue_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_service_interfaces::srv::SetValue_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_service_interfaces::srv::SetValue_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_service_interfaces__srv__SetValue_Request
    std::shared_ptr<my_service_interfaces::srv::SetValue_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_service_interfaces__srv__SetValue_Request
    std::shared_ptr<my_service_interfaces::srv::SetValue_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetValue_Request_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetValue_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetValue_Request_

// alias to use template instance with default allocator
using SetValue_Request =
  my_service_interfaces::srv::SetValue_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_service_interfaces


#ifndef _WIN32
# define DEPRECATED__my_service_interfaces__srv__SetValue_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_service_interfaces__srv__SetValue_Response __declspec(deprecated)
#endif

namespace my_service_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetValue_Response_
{
  using Type = SetValue_Response_<ContainerAllocator>;

  explicit SetValue_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->succes = false;
    }
  }

  explicit SetValue_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->succes = false;
    }
  }

  // field types and members
  using _succes_type =
    bool;
  _succes_type succes;

  // setters for named parameter idiom
  Type & set__succes(
    const bool & _arg)
  {
    this->succes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_service_interfaces::srv::SetValue_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_service_interfaces::srv::SetValue_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_service_interfaces::srv::SetValue_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_service_interfaces::srv::SetValue_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_service_interfaces::srv::SetValue_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_service_interfaces::srv::SetValue_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_service_interfaces::srv::SetValue_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_service_interfaces::srv::SetValue_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_service_interfaces::srv::SetValue_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_service_interfaces::srv::SetValue_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_service_interfaces__srv__SetValue_Response
    std::shared_ptr<my_service_interfaces::srv::SetValue_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_service_interfaces__srv__SetValue_Response
    std::shared_ptr<my_service_interfaces::srv::SetValue_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetValue_Response_ & other) const
  {
    if (this->succes != other.succes) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetValue_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetValue_Response_

// alias to use template instance with default allocator
using SetValue_Response =
  my_service_interfaces::srv::SetValue_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_service_interfaces

namespace my_service_interfaces
{

namespace srv
{

struct SetValue
{
  using Request = my_service_interfaces::srv::SetValue_Request;
  using Response = my_service_interfaces::srv::SetValue_Response;
};

}  // namespace srv

}  // namespace my_service_interfaces

#endif  // MY_SERVICE_INTERFACES__SRV__DETAIL__SET_VALUE__STRUCT_HPP_
