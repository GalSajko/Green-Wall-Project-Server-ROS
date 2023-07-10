# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gwpspider_interfaces:srv/ControlWaterPump.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlWaterPump_Request(type):
    """Metaclass of message 'ControlWaterPump_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('gwpspider_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gwpspider_interfaces.srv.ControlWaterPump_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__control_water_pump__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__control_water_pump__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__control_water_pump__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__control_water_pump__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__control_water_pump__request

            from gwpspider_interfaces.msg import WaterPumpCommand
            if WaterPumpCommand.__class__._TYPE_SUPPORT is None:
                WaterPumpCommand.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlWaterPump_Request(metaclass=Metaclass_ControlWaterPump_Request):
    """Message class 'ControlWaterPump_Request'."""

    __slots__ = [
        '_instructions',
    ]

    _fields_and_field_types = {
        'instructions': 'gwpspider_interfaces/WaterPumpCommand',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['gwpspider_interfaces', 'msg'], 'WaterPumpCommand'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from gwpspider_interfaces.msg import WaterPumpCommand
        self.instructions = kwargs.get('instructions', WaterPumpCommand())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.instructions != other.instructions:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def instructions(self):
        """Message field 'instructions'."""
        return self._instructions

    @instructions.setter
    def instructions(self, value):
        if __debug__:
            from gwpspider_interfaces.msg import WaterPumpCommand
            assert \
                isinstance(value, WaterPumpCommand), \
                "The 'instructions' field must be a sub message of type 'WaterPumpCommand'"
        self._instructions = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ControlWaterPump_Response(type):
    """Metaclass of message 'ControlWaterPump_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('gwpspider_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gwpspider_interfaces.srv.ControlWaterPump_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__control_water_pump__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__control_water_pump__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__control_water_pump__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__control_water_pump__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__control_water_pump__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlWaterPump_Response(metaclass=Metaclass_ControlWaterPump_Response):
    """Message class 'ControlWaterPump_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_ControlWaterPump(type):
    """Metaclass of service 'ControlWaterPump'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('gwpspider_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gwpspider_interfaces.srv.ControlWaterPump')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__control_water_pump

            from gwpspider_interfaces.srv import _control_water_pump
            if _control_water_pump.Metaclass_ControlWaterPump_Request._TYPE_SUPPORT is None:
                _control_water_pump.Metaclass_ControlWaterPump_Request.__import_type_support__()
            if _control_water_pump.Metaclass_ControlWaterPump_Response._TYPE_SUPPORT is None:
                _control_water_pump.Metaclass_ControlWaterPump_Response.__import_type_support__()


class ControlWaterPump(metaclass=Metaclass_ControlWaterPump):
    from gwpspider_interfaces.srv._control_water_pump import ControlWaterPump_Request as Request
    from gwpspider_interfaces.srv._control_water_pump import ControlWaterPump_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
