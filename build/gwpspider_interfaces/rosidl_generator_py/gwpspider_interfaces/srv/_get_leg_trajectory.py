# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gwpspider_interfaces:srv/GetLegTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetLegTrajectory_Request(type):
    """Metaclass of message 'GetLegTrajectory_Request'."""

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
                'gwpspider_interfaces.srv.GetLegTrajectory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_leg_trajectory__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_leg_trajectory__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_leg_trajectory__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_leg_trajectory__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_leg_trajectory__request

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


class GetLegTrajectory_Request(metaclass=Metaclass_GetLegTrajectory_Request):
    """Message class 'GetLegTrajectory_Request'."""

    __slots__ = [
        '_current_position',
        '_goal_position',
        '_duration',
        '_trajectory_type',
    ]

    _fields_and_field_types = {
        'current_position': 'std_msgs/Float32MultiArray',
        'goal_position': 'std_msgs/Float32MultiArray',
        'duration': 'float',
        'trajectory_type': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float32MultiArray
        self.current_position = kwargs.get('current_position', Float32MultiArray())
        from std_msgs.msg import Float32MultiArray
        self.goal_position = kwargs.get('goal_position', Float32MultiArray())
        self.duration = kwargs.get('duration', float())
        self.trajectory_type = kwargs.get('trajectory_type', str())

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
        if self.current_position != other.current_position:
            return False
        if self.goal_position != other.goal_position:
            return False
        if self.duration != other.duration:
            return False
        if self.trajectory_type != other.trajectory_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_position(self):
        """Message field 'current_position'."""
        return self._current_position

    @current_position.setter
    def current_position(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'current_position' field must be a sub message of type 'Float32MultiArray'"
        self._current_position = value

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetLegTrajectory_Response(type):
    """Metaclass of message 'GetLegTrajectory_Response'."""

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
                'gwpspider_interfaces.srv.GetLegTrajectory_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_leg_trajectory__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_leg_trajectory__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_leg_trajectory__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_leg_trajectory__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_leg_trajectory__response

            from gwpspider_interfaces.msg import LegTrajectory
            if LegTrajectory.__class__._TYPE_SUPPORT is None:
                LegTrajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetLegTrajectory_Response(metaclass=Metaclass_GetLegTrajectory_Response):
    """Message class 'GetLegTrajectory_Response'."""

    __slots__ = [
        '_trajectories',
    ]

    _fields_and_field_types = {
        'trajectories': 'gwpspider_interfaces/LegTrajectory',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['gwpspider_interfaces', 'msg'], 'LegTrajectory'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from gwpspider_interfaces.msg import LegTrajectory
        self.trajectories = kwargs.get('trajectories', LegTrajectory())

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
        if self.trajectories != other.trajectories:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def trajectories(self):
        """Message field 'trajectories'."""
        return self._trajectories

    @trajectories.setter
    def trajectories(self, value):
        if __debug__:
            from gwpspider_interfaces.msg import LegTrajectory
            assert \
                isinstance(value, LegTrajectory), \
                "The 'trajectories' field must be a sub message of type 'LegTrajectory'"
        self._trajectories = value


class Metaclass_GetLegTrajectory(type):
    """Metaclass of service 'GetLegTrajectory'."""

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
                'gwpspider_interfaces.srv.GetLegTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_leg_trajectory

            from gwpspider_interfaces.srv import _get_leg_trajectory
            if _get_leg_trajectory.Metaclass_GetLegTrajectory_Request._TYPE_SUPPORT is None:
                _get_leg_trajectory.Metaclass_GetLegTrajectory_Request.__import_type_support__()
            if _get_leg_trajectory.Metaclass_GetLegTrajectory_Response._TYPE_SUPPORT is None:
                _get_leg_trajectory.Metaclass_GetLegTrajectory_Response.__import_type_support__()


class GetLegTrajectory(metaclass=Metaclass_GetLegTrajectory):
    from gwpspider_interfaces.srv._get_leg_trajectory import GetLegTrajectory_Request as Request
    from gwpspider_interfaces.srv._get_leg_trajectory import GetLegTrajectory_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
