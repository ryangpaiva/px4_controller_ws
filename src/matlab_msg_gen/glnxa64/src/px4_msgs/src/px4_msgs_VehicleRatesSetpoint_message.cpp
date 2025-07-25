// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/VehicleRatesSetpoint
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
#include "px4_msgs/msg/vehicle_rates_setpoint.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_VehicleRatesSetpoint_common : public MATLABROS2MsgInterface<px4_msgs::msg::VehicleRatesSetpoint> {
  public:
    virtual ~ros2_px4_msgs_msg_VehicleRatesSetpoint_common(){}
    virtual void copy_from_struct(px4_msgs::msg::VehicleRatesSetpoint* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleRatesSetpoint* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_VehicleRatesSetpoint_common::copy_from_struct(px4_msgs::msg::VehicleRatesSetpoint* msg, const matlab::data::Struct& arr,
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
        //roll
        const matlab::data::TypedArray<float> roll_arr = arr["roll"];
        msg->roll = roll_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roll' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'roll' is wrong type; expected a single.");
    }
    try {
        //pitch
        const matlab::data::TypedArray<float> pitch_arr = arr["pitch"];
        msg->pitch = pitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pitch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pitch' is wrong type; expected a single.");
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
        //thrust_body
        const matlab::data::TypedArray<float> thrust_body_arr = arr["thrust_body"];
        size_t nelem = 3;
        	std::copy(thrust_body_arr.begin(), thrust_body_arr.begin()+nelem, msg->thrust_body.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'thrust_body' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'thrust_body' is wrong type; expected a single.");
    }
    try {
        //reset_integral
        const matlab::data::TypedArray<bool> reset_integral_arr = arr["reset_integral"];
        msg->reset_integral = reset_integral_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reset_integral' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reset_integral' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_VehicleRatesSetpoint_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleRatesSetpoint* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","roll","pitch","yaw","thrust_body","reset_integral"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/VehicleRatesSetpoint");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // roll
    auto currentElement_roll = (msg + ctr)->roll;
    outArray[ctr]["roll"] = factory.createScalar(currentElement_roll);
    // pitch
    auto currentElement_pitch = (msg + ctr)->pitch;
    outArray[ctr]["pitch"] = factory.createScalar(currentElement_pitch);
    // yaw
    auto currentElement_yaw = (msg + ctr)->yaw;
    outArray[ctr]["yaw"] = factory.createScalar(currentElement_yaw);
    // thrust_body
    auto currentElement_thrust_body = (msg + ctr)->thrust_body;
    outArray[ctr]["thrust_body"] = factory.createArray<px4_msgs::msg::VehicleRatesSetpoint::_thrust_body_type::const_iterator, float>({currentElement_thrust_body.size(), 1}, currentElement_thrust_body.begin(), currentElement_thrust_body.end());
    // reset_integral
    auto currentElement_reset_integral = (msg + ctr)->reset_integral;
    outArray[ctr]["reset_integral"] = factory.createScalar(currentElement_reset_integral);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_VehicleRatesSetpoint_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_VehicleRatesSetpoint_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_VehicleRatesSetpoint_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::VehicleRatesSetpoint,ros2_px4_msgs_msg_VehicleRatesSetpoint_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_VehicleRatesSetpoint_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::VehicleRatesSetpoint,ros2_px4_msgs_msg_VehicleRatesSetpoint_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_VehicleRatesSetpoint_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::VehicleRatesSetpoint>();
    ros2_px4_msgs_msg_VehicleRatesSetpoint_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_VehicleRatesSetpoint_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_VehicleRatesSetpoint_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::VehicleRatesSetpoint*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_VehicleRatesSetpoint_common, MATLABROS2MsgInterface<px4_msgs::msg::VehicleRatesSetpoint>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_VehicleRatesSetpoint_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER