# autogenerated by genmsg_py from SetMarkerRequest.msg. Do not edit.
import roslib.message
import struct


class SetMarkerRequest(roslib.message.Message):
  _md5sum = "3cb41a2c4416de195dbb95b7777a06fb"
  _type = "rviz_example/SetMarkerRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 x
int32 y
int32 z

"""
  __slots__ = ['x','y','z']
  _slot_types = ['int32','int32','int32']

  ## Constructor. Any message fields that are implicitly/explicitly
  ## set to None will be assigned a default value. The recommend
  ## use is keyword arguments as this is more robust to future message
  ## changes.  You cannot mix in-order arguments and keyword arguments.
  ##
  ## The available fields are:
  ##   x,y,z
  ##
  ## @param self: self
  ## @param args: complete set of field values, in .msg order
  ## @param kwds: use keyword arguments corresponding to message field names
  ## to set specific fields. 
  def __init__(self, *args, **kwds):
    super(SetMarkerRequest, self).__init__(*args, **kwds)
    #message fields cannot be None, assign default values for those that are
    if self.x is None:
      self.x = 0
    if self.y is None:
      self.y = 0
    if self.z is None:
      self.z = 0

  ## internal API method
  ## @param self: self
  def _get_types(self): return SetMarkerRequest._slot_types

  ## serialize message into buffer
  ## @param self: self
  ## @param buff StringIO: buffer
  def serialize(self, buff):
    try:
      buff.write(struct.pack('<3i', self.x, self.y, self.z))
    except struct.error, se: self._check_types(se)
    except TypeError, te: self._check_types(te)

  ## unpack serialized message in str into this message instance
  ## @param self: self
  ## @param str str: byte array of serialized message
  def deserialize(self, str):
    try:
      end = 0
      start = end
      end += 12
      (self.x, self.y, self.z,) = struct.unpack('<3i',str[start:end])
      return self
    except struct.error, e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill


  ## serialize message with numpy array types into buffer
  ## @param self: self
  ## @param buff StringIO: buffer
  ## @param numpy module: numpy python module
  def serialize_numpy(self, buff, numpy):
    try:
      buff.write(struct.pack('<3i', self.x, self.y, self.z))
    except struct.error, se: self._check_types(se)
    except TypeError, te: self._check_types(te)

  ## unpack serialized message in str into this message instance using numpy for array types
  ## @param self: self
  ## @param str str: byte array of serialized message
  ## @param numpy module: numpy python module
  def deserialize_numpy(self, str, numpy):
    try:
      end = 0
      start = end
      end += 12
      (self.x, self.y, self.z,) = struct.unpack('<3i',str[start:end])
      return self
    except struct.error, e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill

# autogenerated by genmsg_py from SetMarkerResponse.msg. Do not edit.
import roslib.message
import struct


class SetMarkerResponse(roslib.message.Message):
  _md5sum = "89bb254424e4cffedbf494e7b0ddbfea"
  _type = "rviz_example/SetMarkerResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool done


"""
  __slots__ = ['done']
  _slot_types = ['bool']

  ## Constructor. Any message fields that are implicitly/explicitly
  ## set to None will be assigned a default value. The recommend
  ## use is keyword arguments as this is more robust to future message
  ## changes.  You cannot mix in-order arguments and keyword arguments.
  ##
  ## The available fields are:
  ##   done
  ##
  ## @param self: self
  ## @param args: complete set of field values, in .msg order
  ## @param kwds: use keyword arguments corresponding to message field names
  ## to set specific fields. 
  def __init__(self, *args, **kwds):
    super(SetMarkerResponse, self).__init__(*args, **kwds)
    #message fields cannot be None, assign default values for those that are
    if self.done is None:
      self.done = False

  ## internal API method
  ## @param self: self
  def _get_types(self): return SetMarkerResponse._slot_types

  ## serialize message into buffer
  ## @param self: self
  ## @param buff StringIO: buffer
  def serialize(self, buff):
    try:
      buff.write(struct.pack('<B', self.done))
    except struct.error, se: self._check_types(se)
    except TypeError, te: self._check_types(te)

  ## unpack serialized message in str into this message instance
  ## @param self: self
  ## @param str str: byte array of serialized message
  def deserialize(self, str):
    try:
      end = 0
      start = end
      end += 1
      (self.done,) = struct.unpack('<B',str[start:end])
      self.done = bool(self.done)
      return self
    except struct.error, e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill


  ## serialize message with numpy array types into buffer
  ## @param self: self
  ## @param buff StringIO: buffer
  ## @param numpy module: numpy python module
  def serialize_numpy(self, buff, numpy):
    try:
      buff.write(struct.pack('<B', self.done))
    except struct.error, se: self._check_types(se)
    except TypeError, te: self._check_types(te)

  ## unpack serialized message in str into this message instance using numpy for array types
  ## @param self: self
  ## @param str str: byte array of serialized message
  ## @param numpy module: numpy python module
  def deserialize_numpy(self, str, numpy):
    try:
      end = 0
      start = end
      end += 1
      (self.done,) = struct.unpack('<B',str[start:end])
      self.done = bool(self.done)
      return self
    except struct.error, e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill

class SetMarker(roslib.message.ServiceDefinition):
  _type          = 'rviz_example/SetMarker'
  _md5sum = '7a2734d98d4226ad93b1f7e845c64822'
  _request_class  = SetMarkerRequest
  _response_class = SetMarkerResponse
