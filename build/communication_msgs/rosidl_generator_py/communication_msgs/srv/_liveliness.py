# generated from rosidl_generator_py/resource/_idl.py.em
# with input from communication_msgs:srv/Liveliness.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Liveliness_Request(type):
    """Metaclass of message 'Liveliness_Request'."""

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
            module = import_type_support('communication_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'communication_msgs.srv.Liveliness_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__liveliness__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__liveliness__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__liveliness__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__liveliness__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__liveliness__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Liveliness_Request(metaclass=Metaclass_Liveliness_Request):
    """Message class 'Liveliness_Request'."""

    __slots__ = [
        '_sender_id',
        '_request',
    ]

    _fields_and_field_types = {
        'sender_id': 'string',
        'request': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sender_id = kwargs.get('sender_id', str())
        self.request = kwargs.get('request', str())

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
        if self.sender_id != other.sender_id:
            return False
        if self.request != other.request:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sender_id(self):
        """Message field 'sender_id'."""
        return self._sender_id

    @sender_id.setter
    def sender_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sender_id' field must be of type 'str'"
        self._sender_id = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'request' field must be of type 'str'"
        self._request = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Liveliness_Response(type):
    """Metaclass of message 'Liveliness_Response'."""

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
            module = import_type_support('communication_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'communication_msgs.srv.Liveliness_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__liveliness__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__liveliness__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__liveliness__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__liveliness__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__liveliness__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Liveliness_Response(metaclass=Metaclass_Liveliness_Response):
    """Message class 'Liveliness_Response'."""

    __slots__ = [
        '_receiver_id',
        '_requester_id',
        '_reply',
    ]

    _fields_and_field_types = {
        'receiver_id': 'string',
        'requester_id': 'string',
        'reply': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.receiver_id = kwargs.get('receiver_id', str())
        self.requester_id = kwargs.get('requester_id', str())
        self.reply = kwargs.get('reply', str())

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
        if self.receiver_id != other.receiver_id:
            return False
        if self.requester_id != other.requester_id:
            return False
        if self.reply != other.reply:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def receiver_id(self):
        """Message field 'receiver_id'."""
        return self._receiver_id

    @receiver_id.setter
    def receiver_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'receiver_id' field must be of type 'str'"
        self._receiver_id = value

    @builtins.property
    def requester_id(self):
        """Message field 'requester_id'."""
        return self._requester_id

    @requester_id.setter
    def requester_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'requester_id' field must be of type 'str'"
        self._requester_id = value

    @builtins.property
    def reply(self):
        """Message field 'reply'."""
        return self._reply

    @reply.setter
    def reply(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'reply' field must be of type 'str'"
        self._reply = value


class Metaclass_Liveliness(type):
    """Metaclass of service 'Liveliness'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('communication_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'communication_msgs.srv.Liveliness')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__liveliness

            from communication_msgs.srv import _liveliness
            if _liveliness.Metaclass_Liveliness_Request._TYPE_SUPPORT is None:
                _liveliness.Metaclass_Liveliness_Request.__import_type_support__()
            if _liveliness.Metaclass_Liveliness_Response._TYPE_SUPPORT is None:
                _liveliness.Metaclass_Liveliness_Response.__import_type_support__()


class Liveliness(metaclass=Metaclass_Liveliness):
    from communication_msgs.srv._liveliness import Liveliness_Request as Request
    from communication_msgs.srv._liveliness import Liveliness_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
