// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/TrajectorySetpoint
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
#include "px4_msgs/msg/trajectory_setpoint.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_TrajectorySetpoint_common : public MATLABROS2MsgInterface<px4_msgs::msg::TrajectorySetpoint> {
  public:
    virtual ~ros2_px4_msgs_msg_TrajectorySetpoint_common(){}
    virtual void copy_from_struct(px4_msgs::msg::TrajectorySetpoint* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::TrajectorySetpoint* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_TrajectorySetpoint_common::copy_from_struct(px4_msgs::msg::TrajectorySetpoint* msg, const matlab::data::Struct& arr,
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
        //position
        const matlab::data::TypedArray<float> position_arr = arr["position"];
        size_t nelem = 3;
        	std::copy(position_arr.begin(), position_arr.begin()+nelem, msg->position.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'position' is wrong type; expected a single.");
    }
    try {
        //velocity
        const matlab::data::TypedArray<float> velocity_arr = arr["velocity"];
        size_t nelem = 3;
        	std::copy(velocity_arr.begin(), velocity_arr.begin()+nelem, msg->velocity.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'velocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'velocity' is wrong type; expected a single.");
    }
    try {
        //acceleration
        const matlab::data::TypedArray<float> acceleration_arr = arr["acceleration"];
        size_t nelem = 3;
        	std::copy(acceleration_arr.begin(), acceleration_arr.begin()+nelem, msg->acceleration.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'acceleration' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'acceleration' is wrong type; expected a single.");
    }
    try {
        //jerk
        const matlab::data::TypedArray<float> jerk_arr = arr["jerk"];
        size_t nelem = 3;
        	std::copy(jerk_arr.begin(), jerk_arr.begin()+nelem, msg->jerk.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'jerk' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'jerk' is wrong type; expected a single.");
    }
    try {
        //yaw
        const matlab::data::TypedArray<float> yaw_arr = arr["yaw"];
        msg->yaw = yaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw' is wrong type; expected a single.");
    }
    try {
        //yawspeed
        const matlab::data::TypedArray<float> yawspeed_arr = arr["yawspeed"];
        msg->yawspeed = yawspeed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yawspeed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yawspeed' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_TrajectorySetpoint_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::TrajectorySetpoint* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","position","velocity","acceleration","jerk","yaw","yawspeed"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/TrajectorySetpoint");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // position
    auto currentElement_position = (msg + ctr)->position;
    outArray[ctr]["position"] = factory.createArray<px4_msgs::msg::TrajectorySetpoint::_position_type::const_iterator, float>({currentElement_position.size(), 1}, currentElement_position.begin(), currentElement_position.end());
    // velocity
    auto currentElement_velocity = (msg + ctr)->velocity;
    outArray[ctr]["velocity"] = factory.createArray<px4_msgs::msg::TrajectorySetpoint::_velocity_type::const_iterator, float>({currentElement_velocity.size(), 1}, currentElement_velocity.begin(), currentElement_velocity.end());
    // acceleration
    auto currentElement_acceleration = (msg + ctr)->acceleration;
    outArray[ctr]["acceleration"] = factory.createArray<px4_msgs::msg::TrajectorySetpoint::_acceleration_type::const_iterator, float>({currentElement_acceleration.size(), 1}, currentElement_acceleration.begin(), currentElement_acceleration.end());
    // jerk
    auto currentElement_jerk = (msg + ctr)->jerk;
    outArray[ctr]["jerk"] = factory.createArray<px4_msgs::msg::TrajectorySetpoint::_jerk_type::const_iterator, float>({currentElement_jerk.size(), 1}, currentElement_jerk.begin(), currentElement_jerk.end());
    // yaw
    auto currentElement_yaw = (msg + ctr)->yaw;
    outArray[ctr]["yaw"] = factory.createScalar(currentElement_yaw);
    // yawspeed
    auto currentElement_yawspeed = (msg + ctr)->yawspeed;
    outArray[ctr]["yawspeed"] = factory.createScalar(currentElement_yawspeed);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_TrajectorySetpoint_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_TrajectorySetpoint_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_TrajectorySetpoint_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::TrajectorySetpoint,ros2_px4_msgs_msg_TrajectorySetpoint_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_TrajectorySetpoint_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::TrajectorySetpoint,ros2_px4_msgs_msg_TrajectorySetpoint_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_TrajectorySetpoint_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::TrajectorySetpoint>();
    ros2_px4_msgs_msg_TrajectorySetpoint_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_TrajectorySetpoint_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_TrajectorySetpoint_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::TrajectorySetpoint*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_TrajectorySetpoint_common, MATLABROS2MsgInterface<px4_msgs::msg::TrajectorySetpoint>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_TrajectorySetpoint_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER