# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gwpspider_interfaces:srv/SpiderGoal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpiderGoal_Request(type):
    """Metaclass of message 'SpiderGoal_Request'."""

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
                'gwpspider_interfaces.srv.SpiderGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__spider_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__spider_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__spider_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__spider_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__spider_goal__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpiderGoal_Request(metaclass=Metaclass_SpiderGoal_Request):
    """Message class 'SpiderGoal_Request'."""

    __slots__ = [
        '_request_new_goal',
    ]

    _fields_and_field_types = {
        'request_new_goal': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.request_new_goal = kwargs.get('request_new_goal', bool())

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
        if self.request_new_goal != other.request_new_goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def request_new_goal(self):
        """Message field 'request_new_goal'."""
        return self._request_new_goal

    @request_new_goal.setter
    def request_new_goal(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'request_new_goal' field must be of type 'bool'"
        self._request_new_goal = value


# Import statements for member types

# Member 'watering_position'
import array  # noqa: E402, I100

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_SpiderGoal_Response(type):
    """Metaclass of message 'SpiderGoal_Response'."""

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
                'gwpspider_interfaces.srv.SpiderGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__spider_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__spider_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__spider_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__spider_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__spider_goal__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpiderGoal_Response(metaclass=Metaclass_SpiderGoal_Response):
    """Message class 'SpiderGoal_Response'."""

    __slots__ = [
        '_watering_position',
        '_go_refill',
        '_volume',
    ]

    _fields_and_field_types = {
        'watering_position': 'sequence<float>',
        'go_refill': 'boolean',
        'volume': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.watering_position = array.array('f', kwargs.get('watering_position', []))
        self.go_refill = kwargs.get('go_refill', bool())
        self.volume = kwargs.get('volume', int())

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
        if self.watering_position != other.watering_position:
            return False
        if self.go_refill != other.go_refill:
            return False
        if self.volume != other.volume:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def watering_position(self):
        """Message field 'watering_position'."""
        return self._watering_position

    @watering_position.setter
    def watering_position(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'watering_position' array.array() must have the type code of 'f'"
            self._watering_position = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'watering_position' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._watering_position = array.array('f', value)

    @builtins.property
    def go_refill(self):
        """Message field 'go_refill'."""
        return self._go_refill

    @go_refill.setter
    def go_refill(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'go_refill' field must be of type 'bool'"
        self._go_refill = value

    @builtins.property
    def volume(self):
        """Message field 'volume'."""
        return self._volume

    @volume.setter
    def volume(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'volume' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'volume' field must be an integer in [-2147483648, 2147483647]"
        self._volume = value


class Metaclass_SpiderGoal(type):
    """Metaclass of service 'SpiderGoal'."""

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
                'gwpspider_interfaces.srv.SpiderGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__spider_goal

            from gwpspider_interfaces.srv import _spider_goal
            if _spider_goal.Metaclass_SpiderGoal_Request._TYPE_SUPPORT is None:
                _spider_goal.Metaclass_SpiderGoal_Request.__import_type_support__()
            if _spider_goal.Metaclass_SpiderGoal_Response._TYPE_SUPPORT is None:
                _spider_goal.Metaclass_SpiderGoal_Response.__import_type_support__()


class SpiderGoal(metaclass=Metaclass_SpiderGoal):
    from gwpspider_interfaces.srv._spider_goal import SpiderGoal_Request as Request
    from gwpspider_interfaces.srv._spider_goal import SpiderGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
