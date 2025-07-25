// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/VehicleLocalPositionSetpoint
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
#include "px4_msgs/msg/vehicle_local_position_setpoint.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_VehicleLocalPositionSetpoint_common : public MATLABROS2MsgInterface<px4_msgs::msg::VehicleLocalPositionSetpoint> {
  public:
    virtual ~ros2_px4_msgs_msg_VehicleLocalPositionSetpoint_common(){}
    virtual void copy_from_struct(px4_msgs::msg::VehicleLocalPositionSetpoint* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleLocalPositionSetpoint* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_VehicleLocalPositionSetpoint_common::copy_from_struct(px4_msgs::msg::VehicleLocalPositionSetpoint* msg, const matlab::data::Struct& arr,
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
        //x
        const matlab::data::TypedArray<float> x_arr = arr["x"];
        msg->x = x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a single.");
    }
    try {
        //y
        const matlab::data::TypedArray<float> y_arr = arr["y"];
        msg->y = y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a single.");
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
        //vx
        const matlab::data::TypedArray<float> vx_arr = arr["vx"];
        msg->vx = vx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vx' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vx' is wrong type; expected a single.");
    }
    try {
        //vy
        const matlab::data::TypedArray<float> vy_arr = arr["vy"];
        msg->vy = vy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vy' is wrong type; expected a single.");
    }
    try {
        //vz
        const matlab::data::TypedArray<float> vz_arr = arr["vz"];
        msg->vz = vz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vz' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vz' is wrong type; expected a single.");
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
        //thrust
        const matlab::data::TypedArray<float> thrust_arr = arr["thrust"];
        size_t nelem = 3;
        	std::copy(thrust_arr.begin(), thrust_arr.begin()+nelem, msg->thrust.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'thrust' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'thrust' is wrong type; expected a single.");
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
  MDArray_T ros2_px4_msgs_msg_VehicleLocalPositionSetpoint_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleLocalPositionSetpoint* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","x","y","z","vx","vy","vz","acceleration","thrust","yaw","yawspeed"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/VehicleLocalPositionSetpoint");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // x
    auto currentElement_x = (msg + ctr)->x;
    outArray[ctr]["x"] = factory.createScalar(currentElement_x);
    // y
    auto currentElement_y = (msg + ctr)->y;
    outArray[ctr]["y"] = factory.createScalar(currentElement_y);
    // z
    auto currentElement_z = (msg + ctr)->z;
    outArray[ctr]["z"] = factory.createScalar(currentElement_z);
    // vx
    auto currentElement_vx = (msg + ctr)->vx;
    outArray[ctr]["vx"] = factory.createScalar(currentElement_vx);
    // vy
    auto currentElement_vy = (msg + ctr)->vy;
    outArray[ctr]["vy"] = factory.createScalar(currentElement_vy);
    // vz
    auto currentElement_vz = (msg + ctr)->vz;
    outArray[ctr]["vz"] = factory.createScalar(currentElement_vz);
    // acceleration
    auto currentElement_acceleration = (msg + ctr)->acceleration;
    outArray[ctr]["acceleration"] = factory.createArray<px4_msgs::msg::VehicleLocalPositionSetpoint::_acceleration_type::const_iterator, float>({currentElement_acceleration.size(), 1}, currentElement_acceleration.begin(), currentElement_acceleration.end());
    // thrust
    auto currentElement_thrust = (msg + ctr)->thrust;
    outArray[ctr]["thrust"] = factory.createArray<px4_msgs::msg::VehicleLocalPositionSetpoint::_thrust_type::const_iterator, float>({currentElement_thrust.size(), 1}, currentElement_thrust.begin(), currentElement_thrust.end());
    // yaw
    auto currentElement_yaw = (msg + ctr)->yaw;
    outArray[ctr]["yaw"] = factory.createScalar(currentElement_yaw);
    // yawspeed
    auto currentElement_yawspeed = (msg + ctr)->yawspeed;
    outArray[ctr]["yawspeed"] = factory.createScalar(currentElement_yawspeed);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_VehicleLocalPositionSetpoint_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_VehicleLocalPositionSetpoint_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_VehicleLocalPositionSetpoint_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::VehicleLocalPositionSetpoint,ros2_px4_msgs_msg_VehicleLocalPositionSetpoint_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_VehicleLocalPositionSetpoint_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::VehicleLocalPositionSetpoint,ros2_px4_msgs_msg_VehicleLocalPositionSetpoint_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_VehicleLocalPositionSetpoint_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::VehicleLocalPositionSetpoint>();
    ros2_px4_msgs_msg_VehicleLocalPositionSetpoint_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_VehicleLocalPositionSetpoint_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_VehicleLocalPositionSetpoint_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::VehicleLocalPositionSetpoint*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_VehicleLocalPositionSetpoint_common, MATLABROS2MsgInterface<px4_msgs::msg::VehicleLocalPositionSetpoint>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_VehicleLocalPositionSetpoint_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER