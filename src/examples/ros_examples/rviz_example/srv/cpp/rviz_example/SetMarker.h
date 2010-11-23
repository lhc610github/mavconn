/* auto-generated by gensrv_cpp from /home/pixhawk/pixhawk/embedded/src/examples/ros_examples/rviz_example/srv/SetMarker.srv.  Do not edit! */
#ifndef SRV_RVIZ_EXAMPLE_SETMARKER_H
#define SRV_RVIZ_EXAMPLE_SETMARKER_H

#include <string>
#include <cstring>
#include <vector>
#include <map>
#include "ros/message.h"
#include "ros/time.h"

namespace rviz_example
{

struct SetMarker
{

inline static std::string getDataType() { return "rviz_example/SetMarker"; }
inline static std::string getMD5Sum() { return "7a2734d98d4226ad93b1f7e845c64822"; }

//! \htmlinclude Request.msg.html

class Request : public ros::Message
{
public:
  typedef boost::shared_ptr<Request> Ptr;
  typedef boost::shared_ptr<Request const> ConstPtr;

  typedef int32_t _x_type;
  typedef int32_t _y_type;
  typedef int32_t _z_type;

  int32_t x;
  int32_t y;
  int32_t z;

  Request() : ros::Message(),
    x(0),
    y(0),
    z(0)
  {
  }
  Request(const Request &copy) : ros::Message(),
    x(copy.x),
    y(copy.y),
    z(copy.z)
  {
    (void)copy;
  }
  Request &operator =(const Request &copy)
  {
    if (this == &copy)
      return *this;
    x = copy.x;
    y = copy.y;
    z = copy.z;
    return *this;
  }
  virtual ~Request() 
  {
  }
  inline static std::string __s_getDataType() { return std::string("rviz_example/SetMarkerRequest"); }
  inline static std::string __s_getMD5Sum() { return std::string(""); }
  inline static std::string __s_getMessageDefinition()
  {
    return std::string(
    "int32 x\n"
    "int32 y\n"
    "int32 z\n"
    "\n"
    );
  }
  inline virtual const std::string __getDataType() const { return __s_getDataType(); }
  inline virtual const std::string __getMD5Sum() const { return __s_getMD5Sum(); }
  inline virtual const std::string __getMessageDefinition() const { return __s_getMessageDefinition(); }
  inline static std::string __s_getServerMD5Sum() { return std::string("7a2734d98d4226ad93b1f7e845c64822"); }
  inline virtual const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum(); }
  inline static std::string __s_getServiceDataType() { return std::string("rviz_example/SetMarker"); }
  inline virtual const std::string __getServiceDataType() const { return __s_getServiceDataType(); }
  inline uint32_t serializationLength() const
  {
    unsigned __l = 0;
    __l += 4; // x
    __l += 4; // y
    __l += 4; // z
    return __l;
  }
  virtual uint8_t *serialize(uint8_t *write_ptr,
#if defined(__GNUC__)
                             __attribute__((unused)) uint32_t seq) const
#else
                             uint32_t seq) const
#endif
  {
    SROS_SERIALIZE_PRIMITIVE(write_ptr, x);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, y);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, z);
    return write_ptr;
  }
  virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, x);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, y);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, z);
    return read_ptr;
  }
};

typedef boost::shared_ptr<Request> RequestPtr;
typedef boost::shared_ptr<Request const> RequestConstPtr;

//! \htmlinclude Response.msg.html

class Response : public ros::Message
{
public:
  typedef boost::shared_ptr<Response> Ptr;
  typedef boost::shared_ptr<Response const> ConstPtr;

  typedef uint8_t _done_type;

  uint8_t done;

  Response() : ros::Message(),
    done(0)
  {
  }
  Response(const Response &copy) : ros::Message(),
    done(copy.done)
  {
    (void)copy;
  }
  Response &operator =(const Response &copy)
  {
    if (this == &copy)
      return *this;
    done = copy.done;
    return *this;
  }
  virtual ~Response() 
  {
  }
  inline static std::string __s_getDataType() { return std::string("rviz_example/SetMarkerResponse"); }
  inline static std::string __s_getMD5Sum() { return std::string(""); }
  inline static std::string __s_getMessageDefinition()
  {
    return std::string(
    "bool done\n"
    "\n"
    "\n"
    );
  }
  inline virtual const std::string __getDataType() const { return __s_getDataType(); }
  inline virtual const std::string __getMD5Sum() const { return __s_getMD5Sum(); }
  inline virtual const std::string __getMessageDefinition() const { return __s_getMessageDefinition(); }
  inline static std::string __s_getServerMD5Sum() { return std::string("7a2734d98d4226ad93b1f7e845c64822"); }
  inline virtual const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum(); }
  inline static std::string __s_getServiceDataType() { return std::string("rviz_example/SetMarker"); }
  inline virtual const std::string __getServiceDataType() const { return __s_getServiceDataType(); }
  inline uint32_t serializationLength() const
  {
    unsigned __l = 0;
    __l += 1; // done
    return __l;
  }
  virtual uint8_t *serialize(uint8_t *write_ptr,
#if defined(__GNUC__)
                             __attribute__((unused)) uint32_t seq) const
#else
                             uint32_t seq) const
#endif
  {
    SROS_SERIALIZE_PRIMITIVE(write_ptr, done);
    return write_ptr;
  }
  virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, done);
    return read_ptr;
  }
};

typedef boost::shared_ptr<Response> ResponsePtr;
typedef boost::shared_ptr<Response const> ResponseConstPtr;

Request request;
Response response;

};

}

#endif
