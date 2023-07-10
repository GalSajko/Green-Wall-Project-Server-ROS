// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from gwpspider_interfaces:srv/InitBno.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "gwpspider_interfaces/srv/detail/init_bno__struct.h"
#include "gwpspider_interfaces/srv/detail/init_bno__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace gwpspider_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _InitBno_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InitBno_Request_type_support_ids_t;

static const _InitBno_Request_type_support_ids_t _InitBno_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _InitBno_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InitBno_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InitBno_Request_type_support_symbol_names_t _InitBno_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gwpspider_interfaces, srv, InitBno_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gwpspider_interfaces, srv, InitBno_Request)),
  }
};

typedef struct _InitBno_Request_type_support_data_t
{
  void * data[2];
} _InitBno_Request_type_support_data_t;

static _InitBno_Request_type_support_data_t _InitBno_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InitBno_Request_message_typesupport_map = {
  2,
  "gwpspider_interfaces",
  &_InitBno_Request_message_typesupport_ids.typesupport_identifier[0],
  &_InitBno_Request_message_typesupport_symbol_names.symbol_name[0],
  &_InitBno_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InitBno_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InitBno_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gwpspider_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, gwpspider_interfaces, srv, InitBno_Request)() {
  return &::gwpspider_interfaces::srv::rosidl_typesupport_c::InitBno_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gwpspider_interfaces/srv/detail/init_bno__struct.h"
// already included above
// #include "gwpspider_interfaces/srv/detail/init_bno__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gwpspider_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _InitBno_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InitBno_Response_type_support_ids_t;

static const _InitBno_Response_type_support_ids_t _InitBno_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _InitBno_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InitBno_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InitBno_Response_type_support_symbol_names_t _InitBno_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gwpspider_interfaces, srv, InitBno_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gwpspider_interfaces, srv, InitBno_Response)),
  }
};

typedef struct _InitBno_Response_type_support_data_t
{
  void * data[2];
} _InitBno_Response_type_support_data_t;

static _InitBno_Response_type_support_data_t _InitBno_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InitBno_Response_message_typesupport_map = {
  2,
  "gwpspider_interfaces",
  &_InitBno_Response_message_typesupport_ids.typesupport_identifier[0],
  &_InitBno_Response_message_typesupport_symbol_names.symbol_name[0],
  &_InitBno_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InitBno_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InitBno_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gwpspider_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, gwpspider_interfaces, srv, InitBno_Response)() {
  return &::gwpspider_interfaces::srv::rosidl_typesupport_c::InitBno_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gwpspider_interfaces/srv/detail/init_bno__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gwpspider_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _InitBno_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InitBno_type_support_ids_t;

static const _InitBno_type_support_ids_t _InitBno_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _InitBno_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InitBno_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InitBno_type_support_symbol_names_t _InitBno_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gwpspider_interfaces, srv, InitBno)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gwpspider_interfaces, srv, InitBno)),
  }
};

typedef struct _InitBno_type_support_data_t
{
  void * data[2];
} _InitBno_type_support_data_t;

static _InitBno_type_support_data_t _InitBno_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InitBno_service_typesupport_map = {
  2,
  "gwpspider_interfaces",
  &_InitBno_service_typesupport_ids.typesupport_identifier[0],
  &_InitBno_service_typesupport_symbol_names.symbol_name[0],
  &_InitBno_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t InitBno_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InitBno_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gwpspider_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, gwpspider_interfaces, srv, InitBno)() {
  return &::gwpspider_interfaces::srv::rosidl_typesupport_c::InitBno_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
