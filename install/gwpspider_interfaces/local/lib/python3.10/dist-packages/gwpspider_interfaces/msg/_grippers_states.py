# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gwpspider_interfaces:msg/GrippersStates.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GrippersStates(type):
    """Metaclass of message 'GrippersStates'."""

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
                'gwpspider_interfaces.msg.GrippersStates')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__grippers_states
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__grippers_states
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__grippers_states
            cls._TYPE_SUPPORT = module.type_support_msg__msg__grippers_states
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__grippers_states

            from gwpspider_interfaces.msg import GripperState
            if GripperState.__class__._TYPE_SUPPORT is None:
                GripperState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GrippersStates(metaclass=Metaclass_GrippersStates):
    """Message class 'GrippersStates'."""

    __slots__ = [
        '_first_gripper',
        '_second_gripper',
        '_third_gripper',
        '_fourth_gripper',
        '_fifth_gripper',
    ]

    _fields_and_field_types = {
        'first_gripper': 'gwpspider_interfaces/GripperState',
        'second_gripper': 'gwpspider_interfaces/GripperState',
        'third_gripper': 'gwpspider_interfaces/GripperState',
        'fourth_gripper': 'gwpspider_interfaces/GripperState',
        'fifth_gripper': 'gwpspider_interfaces/GripperState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['gwpspider_interfaces', 'msg'], 'GripperState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['gwpspider_interfaces', 'msg'], 'GripperState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['gwpspider_interfaces', 'msg'], 'GripperState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['gwpspider_interfaces', 'msg'], 'GripperState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['gwpspider_interfaces', 'msg'], 'GripperState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from gwpspider_interfaces.msg import GripperState
        self.first_gripper = kwargs.get('first_gripper', GripperState())
        from gwpspider_interfaces.msg import GripperState
        self.second_gripper = kwargs.get('second_gripper', GripperState())
        from gwpspider_interfaces.msg import GripperState
        self.third_gripper = kwargs.get('third_gripper', GripperState())
        from gwpspider_interfaces.msg import GripperState
        self.fourth_gripper = kwargs.get('fourth_gripper', GripperState())
        from gwpspider_interfaces.msg import GripperState
        self.fifth_gripper = kwargs.get('fifth_gripper', GripperState())

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
        if self.first_gripper != other.first_gripper:
            return False
        if self.second_gripper != other.second_gripper:
            return False
        if self.third_gripper != other.third_gripper:
            return False
        if self.fourth_gripper != other.fourth_gripper:
            return False
        if self.fifth_gripper != other.fifth_gripper:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def first_gripper(self):
        """Message field 'first_gripper'."""
        return self._first_gripper

    @first_gripper.setter
    def first_gripper(self, value):
        if __debug__:
            from gwpspider_interfaces.msg import GripperState
            assert \
                isinstance(value, GripperState), \
                "The 'first_gripper' field must be a sub message of type 'GripperState'"
        self._first_gripper = value

    @builtins.property
    def second_gripper(self):
        """Message field 'second_gripper'."""
        return self._second_gripper

    @second_gripper.setter
    def second_gripper(self, value):
        if __debug__:
            from gwpspider_interfaces.msg import GripperState
            assert \
                isinstance(value, GripperState), \
                "The 'second_gripper' field must be a sub message of type 'GripperState'"
        self._second_gripper = value

    @builtins.property
    def third_gripper(self):
        """Message field 'third_gripper'."""
        return self._third_gripper

    @third_gripper.setter
    def third_gripper(self, value):
        if __debug__:
            from gwpspider_interfaces.msg import GripperState
            assert \
                isinstance(value, GripperState), \
                "The 'third_gripper' field must be a sub message of type 'GripperState'"
        self._third_gripper = value

    @builtins.property
    def fourth_gripper(self):
        """Message field 'fourth_gripper'."""
        return self._fourth_gripper

    @fourth_gripper.setter
    def fourth_gripper(self, value):
        if __debug__:
            from gwpspider_interfaces.msg import GripperState
            assert \
                isinstance(value, GripperState), \
                "The 'fourth_gripper' field must be a sub message of type 'GripperState'"
        self._fourth_gripper = value

    @builtins.property
    def fifth_gripper(self):
        """Message field 'fifth_gripper'."""
        return self._fifth_gripper

    @fifth_gripper.setter
    def fifth_gripper(self, value):
        if __debug__:
            from gwpspider_interfaces.msg import GripperState
            assert \
                isinstance(value, GripperState), \
                "The 'fifth_gripper' field must be a sub message of type 'GripperState'"
        self._fifth_gripper = value
