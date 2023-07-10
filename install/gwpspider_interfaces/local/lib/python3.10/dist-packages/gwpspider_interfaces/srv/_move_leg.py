# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gwpspider_interfaces:srv/MoveLeg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoveLeg_Request(type):
    """Metaclass of message 'MoveLeg_Request'."""

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
                'gwpspider_interfaces.srv.MoveLeg_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_leg__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_leg__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_leg__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_leg__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_leg__request

            from std_msgs.msg import Float32MultiArray
            if Float32MultiArray.__class__._TYPE_SUPPORT is None:
                Float32MultiArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveLeg_Request(metaclass=Metaclass_MoveLeg_Request):
    """Message class 'MoveLeg_Request'."""

    __slots__ = [
        '_leg_id',
        '_goal_position',
        '_trajectory_type',
        '_origin',
        '_duration',
        '_is_offset',
        '_spider_pose',
        '_open_gripper',
        '_close_gripper',
    ]

    _fields_and_field_types = {
        'leg_id': 'int8',
        'goal_position': 'std_msgs/Float32MultiArray',
        'trajectory_type': 'string',
        'origin': 'string',
        'duration': 'float',
        'is_offset': 'boolean',
        'spider_pose': 'std_msgs/Float32MultiArray',
        'open_gripper': 'boolean',
        'close_gripper': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.leg_id = kwargs.get('leg_id', int())
        from std_msgs.msg import Float32MultiArray
        self.goal_position = kwargs.get('goal_position', Float32MultiArray())
        self.trajectory_type = kwargs.get('trajectory_type', str())
        self.origin = kwargs.get('origin', str())
        self.duration = kwargs.get('duration', float())
        self.is_offset = kwargs.get('is_offset', bool())
        from std_msgs.msg import Float32MultiArray
        self.spider_pose = kwargs.get('spider_pose', Float32MultiArray())
        self.open_gripper = kwargs.get('open_gripper', bool())
        self.close_gripper = kwargs.get('close_gripper', bool())

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
        if self.leg_id != other.leg_id:
            return False
        if self.goal_position != other.goal_position:
            return False
        if self.trajectory_type != other.trajectory_type:
            return False
        if self.origin != other.origin:
            return False
        if self.duration != other.duration:
            return False
        if self.is_offset != other.is_offset:
            return False
        if self.spider_pose != other.spider_pose:
            return False
        if self.open_gripper != other.open_gripper:
            return False
        if self.close_gripper != other.close_gripper:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def leg_id(self):
        """Message field 'leg_id'."""
        return self._leg_id

    @leg_id.setter
    def leg_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'leg_id' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'leg_id' field must be an integer in [-128, 127]"
        self._leg_id = value

    @builtins.property
    def goal_position(self):
        """Message field 'goal_position'."""
        return self._goal_position

    @goal_position.setter
    def goal_position(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'goal_position' field must be a sub message of type 'Float32MultiArray'"
        self._goal_position = value

    @builtins.property
    def trajectory_type(self):
        """Message field 'trajectory_type'."""
        return self._trajectory_type

    @trajectory_type.setter
    def trajectory_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'trajectory_type' field must be of type 'str'"
        self._trajectory_type = value

    @builtins.property
    def origin(self):
        """Message field 'origin'."""
        return self._origin

    @origin.setter
    def origin(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'origin' field must be of type 'str'"
        self._origin = value

    @builtins.property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'duration' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'duration' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._duration = value

    @builtins.property
    def is_offset(self):
        """Message field 'is_offset'."""
        return self._is_offset

    @is_offset.setter
    def is_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_offset' field must be of type 'bool'"
        self._is_offset = value

    @builtins.property
    def spider_pose(self):
        """Message field 'spider_pose'."""
        return self._spider_pose

    @spider_pose.setter
    def spider_pose(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'spider_pose' field must be a sub message of type 'Float32MultiArray'"
        self._spider_pose = value

    @builtins.property
    def open_gripper(self):
        """Message field 'open_gripper'."""
        return self._open_gripper

    @open_gripper.setter
    def open_gripper(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'open_gripper' field must be of type 'bool'"
        self._open_gripper = value

    @builtins.property
    def close_gripper(self):
        """Message field 'close_gripper'."""
        return self._close_gripper

    @close_gripper.setter
    def close_gripper(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'close_gripper' field must be of type 'bool'"
        self._close_gripper = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveLeg_Response(type):
    """Metaclass of message 'MoveLeg_Response'."""

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
                'gwpspider_interfaces.srv.MoveLeg_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_leg__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_leg__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_leg__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_leg__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_leg__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveLeg_Response(metaclass=Metaclass_MoveLeg_Response):
    """Message class 'MoveLeg_Response'."""

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


class Metaclass_MoveLeg(type):
    """Metaclass of service 'MoveLeg'."""

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
                'gwpspider_interfaces.srv.MoveLeg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__move_leg

            from gwpspider_interfaces.srv import _move_leg
            if _move_leg.Metaclass_MoveLeg_Request._TYPE_SUPPORT is None:
                _move_leg.Metaclass_MoveLeg_Request.__import_type_support__()
            if _move_leg.Metaclass_MoveLeg_Response._TYPE_SUPPORT is None:
                _move_leg.Metaclass_MoveLeg_Response.__import_type_support__()


class MoveLeg(metaclass=Metaclass_MoveLeg):
    from gwpspider_interfaces.srv._move_leg import MoveLeg_Request as Request
    from gwpspider_interfaces.srv._move_leg import MoveLeg_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
