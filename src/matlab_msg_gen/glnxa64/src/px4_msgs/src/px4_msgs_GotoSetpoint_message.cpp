// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/GotoSetpoint
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
#include "px4_msgs/msg/goto_setpoint.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_GotoSetpoint_common : public MATLABROS2MsgInterface<px4_msgs::msg::GotoSetpoint> {
  public:
    virtual ~ros2_px4_msgs_msg_GotoSetpoint_common(){}
    virtual void copy_from_struct(px4_msgs::msg::GotoSetpoint* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::GotoSetpoint* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_GotoSetpoint_common::copy_from_struct(px4_msgs::msg::GotoSetpoint* msg, const matlab::data::Struct& arr,
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
        //flag_control_heading
        const matlab::data::TypedArray<bool> flag_control_heading_arr = arr["flag_control_heading"];
        msg->flag_control_heading = flag_control_heading_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flag_control_heading' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flag_control_heading' is wrong type; expected a logical.");
    }
    try {
        //heading
        const matlab::data::TypedArray<float> heading_arr = arr["heading"];
        msg->heading = heading_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading' is wrong type; expected a single.");
    }
    try {
        //flag_set_max_horizontal_speed
        const matlab::data::TypedArray<bool> flag_set_max_horizontal_speed_arr = arr["flag_set_max_horizontal_speed"];
        msg->flag_set_max_horizontal_speed = flag_set_max_horizontal_speed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flag_set_max_horizontal_speed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flag_set_max_horizontal_speed' is wrong type; expected a logical.");
    }
    try {
        //max_horizontal_speed
        const matlab::data::TypedArray<float> max_horizontal_speed_arr = arr["max_horizontal_speed"];
        msg->max_horizontal_speed = max_horizontal_speed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'max_horizontal_speed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'max_horizontal_speed' is wrong type; expected a single.");
    }
    try {
        //flag_set_max_vertical_speed
        const matlab::data::TypedArray<bool> flag_set_max_vertical_speed_arr = arr["flag_set_max_vertical_speed"];
        msg->flag_set_max_vertical_speed = flag_set_max_vertical_speed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flag_set_max_vertical_speed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flag_set_max_vertical_speed' is wrong type; expected a logical.");
    }
    try {
        //max_vertical_speed
        const matlab::data::TypedArray<float> max_vertical_speed_arr = arr["max_vertical_speed"];
        msg->max_vertical_speed = max_vertical_speed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'max_vertical_speed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'max_vertical_speed' is wrong type; expected a single.");
    }
    try {
        //flag_set_max_heading_rate
        const matlab::data::TypedArray<bool> flag_set_max_heading_rate_arr = arr["flag_set_max_heading_rate"];
        msg->flag_set_max_heading_rate = flag_set_max_heading_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flag_set_max_heading_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flag_set_max_heading_rate' is wrong type; expected a logical.");
    }
    try {
        //max_heading_rate
        const matlab::data::TypedArray<float> max_heading_rate_arr = arr["max_heading_rate"];
        msg->max_heading_rate = max_heading_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'max_heading_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'max_heading_rate' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_GotoSetpoint_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::GotoSetpoint* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","position","flag_control_heading","heading","flag_set_max_horizontal_speed","max_horizontal_speed","flag_set_max_vertical_speed","max_vertical_speed","flag_set_max_heading_rate","max_heading_rate"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/GotoSetpoint");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // position
    auto currentElement_position = (msg + ctr)->position;
    outArray[ctr]["position"] = factory.createArray<px4_msgs::msg::GotoSetpoint::_position_type::const_iterator, float>({currentElement_position.size(), 1}, currentElement_position.begin(), currentElement_position.end());
    // flag_control_heading
    auto currentElement_flag_control_heading = (msg + ctr)->flag_control_heading;
    outArray[ctr]["flag_control_heading"] = factory.createScalar(currentElement_flag_control_heading);
    // heading
    auto currentElement_heading = (msg + ctr)->heading;
    outArray[ctr]["heading"] = factory.createScalar(currentElement_heading);
    // flag_set_max_horizontal_speed
    auto currentElement_flag_set_max_horizontal_speed = (msg + ctr)->flag_set_max_horizontal_speed;
    outArray[ctr]["flag_set_max_horizontal_speed"] = factory.createScalar(currentElement_flag_set_max_horizontal_speed);
    // max_horizontal_speed
    auto currentElement_max_horizontal_speed = (msg + ctr)->max_horizontal_speed;
    outArray[ctr]["max_horizontal_speed"] = factory.createScalar(currentElement_max_horizontal_speed);
    // flag_set_max_vertical_speed
    auto currentElement_flag_set_max_vertical_speed = (msg + ctr)->flag_set_max_vertical_speed;
    outArray[ctr]["flag_set_max_vertical_speed"] = factory.createScalar(currentElement_flag_set_max_vertical_speed);
    // max_vertical_speed
    auto currentElement_max_vertical_speed = (msg + ctr)->max_vertical_speed;
    outArray[ctr]["max_vertical_speed"] = factory.createScalar(currentElement_max_vertical_speed);
    // flag_set_max_heading_rate
    auto currentElement_flag_set_max_heading_rate = (msg + ctr)->flag_set_max_heading_rate;
    outArray[ctr]["flag_set_max_heading_rate"] = factory.createScalar(currentElement_flag_set_max_heading_rate);
    // max_heading_rate
    auto currentElement_max_heading_rate = (msg + ctr)->max_heading_rate;
    outArray[ctr]["max_heading_rate"] = factory.createScalar(currentElement_max_heading_rate);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_GotoSetpoint_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_GotoSetpoint_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_GotoSetpoint_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::GotoSetpoint,ros2_px4_msgs_msg_GotoSetpoint_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_GotoSetpoint_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::GotoSetpoint,ros2_px4_msgs_msg_GotoSetpoint_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_GotoSetpoint_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::GotoSetpoint>();
    ros2_px4_msgs_msg_GotoSetpoint_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_GotoSetpoint_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_GotoSetpoint_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::GotoSetpoint*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_GotoSetpoint_common, MATLABROS2MsgInterface<px4_msgs::msg::GotoSetpoint>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_GotoSetpoint_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER