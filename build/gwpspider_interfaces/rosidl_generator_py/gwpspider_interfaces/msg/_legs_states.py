# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gwpspider_interfaces:msg/LegsStates.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LegsStates(type):
    """Metaclass of message 'LegsStates'."""

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
                'gwpspider_interfaces.msg.LegsStates')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__legs_states
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__legs_states
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__legs_states
            cls._TYPE_SUPPORT = module.type_support_msg__msg__legs_states
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__legs_states

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


class LegsStates(metaclass=Metaclass_LegsStates):
    """Message class 'LegsStates'."""

    __slots__ = [
        '_joints_positions',
        '_legs_local_positions',
        '_forces',
        '_torques',
    ]

    _fields_and_field_types = {
        'joints_positions': 'std_msgs/Float32MultiArray',
        'legs_local_positions': 'std_msgs/Float32MultiArray',
        'forces': 'std_msgs/Float32MultiArray',
        'torques': 'std_msgs/Float32MultiArray',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float32MultiArray
        self.joints_positions = kwargs.get('joints_positions', Float32MultiArray())
        from std_msgs.msg import Float32MultiArray
        self.legs_local_positions = kwargs.get('legs_local_positions', Float32MultiArray())
        from std_msgs.msg import Float32MultiArray
        self.forces = kwargs.get('forces', Float32MultiArray())
        from std_msgs.msg import Float32MultiArray
        self.torques = kwargs.get('torques', Float32MultiArray())

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
        if self.joints_positions != other.joints_positions:
            return False
        if self.legs_local_positions != other.legs_local_positions:
            return False
        if self.forces != other.forces:
            return False
        if self.torques != other.torques:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joints_positions(self):
        """Message field 'joints_positions'."""
        return self._joints_positions

    @joints_positions.setter
    def joints_positions(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'joints_positions' field must be a sub message of type 'Float32MultiArray'"
        self._joints_positions = value

    @builtins.property
    def legs_local_positions(self):
        """Message field 'legs_local_positions'."""
        return self._legs_local_positions

    @legs_local_positions.setter
    def legs_local_positions(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'legs_local_positions' field must be a sub message of type 'Float32MultiArray'"
        self._legs_local_positions = value

    @builtins.property
    def forces(self):
        """Message field 'forces'."""
        return self._forces

    @forces.setter
    def forces(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'forces' field must be a sub message of type 'Float32MultiArray'"
        self._forces = value

    @builtins.property
    def torques(self):
        """Message field 'torques'."""
        return self._torques

    @torques.setter
    def torques(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
            assert \
                isinstance(value, Float32MultiArray), \
                "The 'torques' field must be a sub message of type 'Float32MultiArray'"
        self._torques = value
