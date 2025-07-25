// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/OrbitStatus
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4100)
#pragma warning(disable : 4265)
#pragma warning(disable : 4456)
#pragma warning(disable : 4458)
#pragma warning(disable : 4946)
#pragma warning(disable : 4244)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif //_MSC_VER
#include "rclcpp/rclcpp.hpp"
#include "px4_msgs/msg/orbit_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_OrbitStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::OrbitStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_OrbitStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::OrbitStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::OrbitStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_OrbitStatus_common::copy_from_struct(px4_msgs::msg::OrbitStatus* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //timestamp
        const matlab::data::TypedArray<uint64_t> timestamp_arr = arr["timestamp"];
        msg->timestamp = timestamp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timestamp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timestamp' is wrong type; expected a uint64.");
    }
    try {
        //radius
        const matlab::data::TypedArray<float> radius_arr = arr["radius"];
        msg->radius = radius_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'radius' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'radius' is wrong type; expected a single.");
    }
    try {
        //frame
        const matlab::data::TypedArray<uint8_t> frame_arr = arr["frame"];
        msg->frame = frame_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'frame' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'frame' is wrong type; expected a uint8.");
    }
    try {
        //x
        const matlab::data::TypedArray<double> x_arr = arr["x"];
        msg->x = x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    try {
        //y
        const matlab::data::TypedArray<double> y_arr = arr["y"];
        msg->y = y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    try {
        //z
        const matlab::data::TypedArray<float> z_arr = arr["z"];
        msg->z = z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a single.");
    }
    try {
        //yaw_behaviour
        const matlab::data::TypedArray<uint8_t> yaw_behaviour_arr = arr["yaw_behaviour"];
        msg->yaw_behaviour = yaw_behaviour_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw_behaviour' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw_behaviour' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_OrbitStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::OrbitStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER","ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING","ORBIT_YAW_BEHAVIOUR_UNCONTROLLED","ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE","ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED","ORBIT_YAW_BEHAVIOUR_UNCHANGED","timestamp","radius","frame","x","y","z","yaw_behaviour"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/OrbitStatus");
    // ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER
    auto currentElement_ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER = (msg + ctr)->ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER;
    outArray[ctr]["ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER"] = factory.createScalar(currentElement_ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER);
    // ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING
    auto currentElement_ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING = (msg + ctr)->ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING;
    outArray[ctr]["ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING"] = factory.createScalar(currentElement_ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING);
    // ORBIT_YAW_BEHAVIOUR_UNCONTROLLED
    auto currentElement_ORBIT_YAW_BEHAVIOUR_UNCONTROLLED = (msg + ctr)->ORBIT_YAW_BEHAVIOUR_UNCONTROLLED;
    outArray[ctr]["ORBIT_YAW_BEHAVIOUR_UNCONTROLLED"] = factory.createScalar(currentElement_ORBIT_YAW_BEHAVIOUR_UNCONTROLLED);
    // ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE
    auto currentElement_ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE = (msg + ctr)->ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE;
    outArray[ctr]["ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE"] = factory.createScalar(currentElement_ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE);
    // ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED
    auto currentElement_ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED = (msg + ctr)->ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED;
    outArray[ctr]["ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED"] = factory.createScalar(currentElement_ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED);
    // ORBIT_YAW_BEHAVIOUR_UNCHANGED
    auto currentElement_ORBIT_YAW_BEHAVIOUR_UNCHANGED = (msg + ctr)->ORBIT_YAW_BEHAVIOUR_UNCHANGED;
    outArray[ctr]["ORBIT_YAW_BEHAVIOUR_UNCHANGED"] = factory.createScalar(currentElement_ORBIT_YAW_BEHAVIOUR_UNCHANGED);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // radius
    auto currentElement_radius = (msg + ctr)->radius;
    outArray[ctr]["radius"] = factory.createScalar(currentElement_radius);
    // frame
    auto currentElement_frame = (msg + ctr)->frame;
    outArray[ctr]["frame"] = factory.createScalar(currentElement_frame);
    // x
    auto currentElement_x = (msg + ctr)->x;
    outArray[ctr]["x"] = factory.createScalar(currentElement_x);
    // y
    auto currentElement_y = (msg + ctr)->y;
    outArray[ctr]["y"] = factory.createScalar(currentElement_y);
    // z
    auto currentElement_z = (msg + ctr)->z;
    outArray[ctr]["z"] = factory.createScalar(currentElement_z);
    // yaw_behaviour
    auto currentElement_yaw_behaviour = (msg + ctr)->yaw_behaviour;
    outArray[ctr]["yaw_behaviour"] = factory.createScalar(currentElement_yaw_behaviour);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_OrbitStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_OrbitStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_OrbitStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::OrbitStatus,ros2_px4_msgs_msg_OrbitStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_OrbitStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::OrbitStatus,ros2_px4_msgs_msg_OrbitStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_OrbitStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::OrbitStatus>();
    ros2_px4_msgs_msg_OrbitStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_OrbitStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_OrbitStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::OrbitStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_OrbitStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::OrbitStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_OrbitStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER