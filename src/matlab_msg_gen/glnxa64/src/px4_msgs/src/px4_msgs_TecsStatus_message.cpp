// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/TecsStatus
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
#include "px4_msgs/msg/tecs_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_TecsStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::TecsStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_TecsStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::TecsStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::TecsStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_TecsStatus_common::copy_from_struct(px4_msgs::msg::TecsStatus* msg, const matlab::data::Struct& arr,
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
        //altitude_sp
        const matlab::data::TypedArray<float> altitude_sp_arr = arr["altitude_sp"];
        msg->altitude_sp = altitude_sp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'altitude_sp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'altitude_sp' is wrong type; expected a single.");
    }
    try {
        //altitude_reference
        const matlab::data::TypedArray<float> altitude_reference_arr = arr["altitude_reference"];
        msg->altitude_reference = altitude_reference_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'altitude_reference' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'altitude_reference' is wrong type; expected a single.");
    }
    try {
        //altitude_time_constant
        const matlab::data::TypedArray<float> altitude_time_constant_arr = arr["altitude_time_constant"];
        msg->altitude_time_constant = altitude_time_constant_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'altitude_time_constant' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'altitude_time_constant' is wrong type; expected a single.");
    }
    try {
        //height_rate_reference
        const matlab::data::TypedArray<float> height_rate_reference_arr = arr["height_rate_reference"];
        msg->height_rate_reference = height_rate_reference_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'height_rate_reference' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'height_rate_reference' is wrong type; expected a single.");
    }
    try {
        //height_rate_direct
        const matlab::data::TypedArray<float> height_rate_direct_arr = arr["height_rate_direct"];
        msg->height_rate_direct = height_rate_direct_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'height_rate_direct' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'height_rate_direct' is wrong type; expected a single.");
    }
    try {
        //height_rate_setpoint
        const matlab::data::TypedArray<float> height_rate_setpoint_arr = arr["height_rate_setpoint"];
        msg->height_rate_setpoint = height_rate_setpoint_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'height_rate_setpoint' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'height_rate_setpoint' is wrong type; expected a single.");
    }
    try {
        //height_rate
        const matlab::data::TypedArray<float> height_rate_arr = arr["height_rate"];
        msg->height_rate = height_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'height_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'height_rate' is wrong type; expected a single.");
    }
    try {
        //equivalent_airspeed_sp
        const matlab::data::TypedArray<float> equivalent_airspeed_sp_arr = arr["equivalent_airspeed_sp"];
        msg->equivalent_airspeed_sp = equivalent_airspeed_sp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'equivalent_airspeed_sp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'equivalent_airspeed_sp' is wrong type; expected a single.");
    }
    try {
        //true_airspeed_sp
        const matlab::data::TypedArray<float> true_airspeed_sp_arr = arr["true_airspeed_sp"];
        msg->true_airspeed_sp = true_airspeed_sp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'true_airspeed_sp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'true_airspeed_sp' is wrong type; expected a single.");
    }
    try {
        //true_airspeed_filtered
        const matlab::data::TypedArray<float> true_airspeed_filtered_arr = arr["true_airspeed_filtered"];
        msg->true_airspeed_filtered = true_airspeed_filtered_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'true_airspeed_filtered' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'true_airspeed_filtered' is wrong type; expected a single.");
    }
    try {
        //true_airspeed_derivative_sp
        const matlab::data::TypedArray<float> true_airspeed_derivative_sp_arr = arr["true_airspeed_derivative_sp"];
        msg->true_airspeed_derivative_sp = true_airspeed_derivative_sp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'true_airspeed_derivative_sp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'true_airspeed_derivative_sp' is wrong type; expected a single.");
    }
    try {
        //true_airspeed_derivative
        const matlab::data::TypedArray<float> true_airspeed_derivative_arr = arr["true_airspeed_derivative"];
        msg->true_airspeed_derivative = true_airspeed_derivative_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'true_airspeed_derivative' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'true_airspeed_derivative' is wrong type; expected a single.");
    }
    try {
        //true_airspeed_derivative_raw
        const matlab::data::TypedArray<float> true_airspeed_derivative_raw_arr = arr["true_airspeed_derivative_raw"];
        msg->true_airspeed_derivative_raw = true_airspeed_derivative_raw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'true_airspeed_derivative_raw' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'true_airspeed_derivative_raw' is wrong type; expected a single.");
    }
    try {
        //total_energy_rate_sp
        const matlab::data::TypedArray<float> total_energy_rate_sp_arr = arr["total_energy_rate_sp"];
        msg->total_energy_rate_sp = total_energy_rate_sp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'total_energy_rate_sp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'total_energy_rate_sp' is wrong type; expected a single.");
    }
    try {
        //total_energy_rate
        const matlab::data::TypedArray<float> total_energy_rate_arr = arr["total_energy_rate"];
        msg->total_energy_rate = total_energy_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'total_energy_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'total_energy_rate' is wrong type; expected a single.");
    }
    try {
        //total_energy_balance_rate_sp
        const matlab::data::TypedArray<float> total_energy_balance_rate_sp_arr = arr["total_energy_balance_rate_sp"];
        msg->total_energy_balance_rate_sp = total_energy_balance_rate_sp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'total_energy_balance_rate_sp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'total_energy_balance_rate_sp' is wrong type; expected a single.");
    }
    try {
        //total_energy_balance_rate
        const matlab::data::TypedArray<float> total_energy_balance_rate_arr = arr["total_energy_balance_rate"];
        msg->total_energy_balance_rate = total_energy_balance_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'total_energy_balance_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'total_energy_balance_rate' is wrong type; expected a single.");
    }
    try {
        //throttle_integ
        const matlab::data::TypedArray<float> throttle_integ_arr = arr["throttle_integ"];
        msg->throttle_integ = throttle_integ_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'throttle_integ' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'throttle_integ' is wrong type; expected a single.");
    }
    try {
        //pitch_integ
        const matlab::data::TypedArray<float> pitch_integ_arr = arr["pitch_integ"];
        msg->pitch_integ = pitch_integ_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pitch_integ' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pitch_integ' is wrong type; expected a single.");
    }
    try {
        //throttle_sp
        const matlab::data::TypedArray<float> throttle_sp_arr = arr["throttle_sp"];
        msg->throttle_sp = throttle_sp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'throttle_sp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'throttle_sp' is wrong type; expected a single.");
    }
    try {
        //pitch_sp_rad
        const matlab::data::TypedArray<float> pitch_sp_rad_arr = arr["pitch_sp_rad"];
        msg->pitch_sp_rad = pitch_sp_rad_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pitch_sp_rad' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pitch_sp_rad' is wrong type; expected a single.");
    }
    try {
        //throttle_trim
        const matlab::data::TypedArray<float> throttle_trim_arr = arr["throttle_trim"];
        msg->throttle_trim = throttle_trim_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'throttle_trim' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'throttle_trim' is wrong type; expected a single.");
    }
    try {
        //underspeed_ratio
        const matlab::data::TypedArray<float> underspeed_ratio_arr = arr["underspeed_ratio"];
        msg->underspeed_ratio = underspeed_ratio_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'underspeed_ratio' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'underspeed_ratio' is wrong type; expected a single.");
    }
    try {
        //fast_descend_ratio
        const matlab::data::TypedArray<float> fast_descend_ratio_arr = arr["fast_descend_ratio"];
        msg->fast_descend_ratio = fast_descend_ratio_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fast_descend_ratio' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fast_descend_ratio' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_TecsStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::TecsStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","altitude_sp","altitude_reference","altitude_time_constant","height_rate_reference","height_rate_direct","height_rate_setpoint","height_rate","equivalent_airspeed_sp","true_airspeed_sp","true_airspeed_filtered","true_airspeed_derivative_sp","true_airspeed_derivative","true_airspeed_derivative_raw","total_energy_rate_sp","total_energy_rate","total_energy_balance_rate_sp","total_energy_balance_rate","throttle_integ","pitch_integ","throttle_sp","pitch_sp_rad","throttle_trim","underspeed_ratio","fast_descend_ratio"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/TecsStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // altitude_sp
    auto currentElement_altitude_sp = (msg + ctr)->altitude_sp;
    outArray[ctr]["altitude_sp"] = factory.createScalar(currentElement_altitude_sp);
    // altitude_reference
    auto currentElement_altitude_reference = (msg + ctr)->altitude_reference;
    outArray[ctr]["altitude_reference"] = factory.createScalar(currentElement_altitude_reference);
    // altitude_time_constant
    auto currentElement_altitude_time_constant = (msg + ctr)->altitude_time_constant;
    outArray[ctr]["altitude_time_constant"] = factory.createScalar(currentElement_altitude_time_constant);
    // height_rate_reference
    auto currentElement_height_rate_reference = (msg + ctr)->height_rate_reference;
    outArray[ctr]["height_rate_reference"] = factory.createScalar(currentElement_height_rate_reference);
    // height_rate_direct
    auto currentElement_height_rate_direct = (msg + ctr)->height_rate_direct;
    outArray[ctr]["height_rate_direct"] = factory.createScalar(currentElement_height_rate_direct);
    // height_rate_setpoint
    auto currentElement_height_rate_setpoint = (msg + ctr)->height_rate_setpoint;
    outArray[ctr]["height_rate_setpoint"] = factory.createScalar(currentElement_height_rate_setpoint);
    // height_rate
    auto currentElement_height_rate = (msg + ctr)->height_rate;
    outArray[ctr]["height_rate"] = factory.createScalar(currentElement_height_rate);
    // equivalent_airspeed_sp
    auto currentElement_equivalent_airspeed_sp = (msg + ctr)->equivalent_airspeed_sp;
    outArray[ctr]["equivalent_airspeed_sp"] = factory.createScalar(currentElement_equivalent_airspeed_sp);
    // true_airspeed_sp
    auto currentElement_true_airspeed_sp = (msg + ctr)->true_airspeed_sp;
    outArray[ctr]["true_airspeed_sp"] = factory.createScalar(currentElement_true_airspeed_sp);
    // true_airspeed_filtered
    auto currentElement_true_airspeed_filtered = (msg + ctr)->true_airspeed_filtered;
    outArray[ctr]["true_airspeed_filtered"] = factory.createScalar(currentElement_true_airspeed_filtered);
    // true_airspeed_derivative_sp
    auto currentElement_true_airspeed_derivative_sp = (msg + ctr)->true_airspeed_derivative_sp;
    outArray[ctr]["true_airspeed_derivative_sp"] = factory.createScalar(currentElement_true_airspeed_derivative_sp);
    // true_airspeed_derivative
    auto currentElement_true_airspeed_derivative = (msg + ctr)->true_airspeed_derivative;
    outArray[ctr]["true_airspeed_derivative"] = factory.createScalar(currentElement_true_airspeed_derivative);
    // true_airspeed_derivative_raw
    auto currentElement_true_airspeed_derivative_raw = (msg + ctr)->true_airspeed_derivative_raw;
    outArray[ctr]["true_airspeed_derivative_raw"] = factory.createScalar(currentElement_true_airspeed_derivative_raw);
    // total_energy_rate_sp
    auto currentElement_total_energy_rate_sp = (msg + ctr)->total_energy_rate_sp;
    outArray[ctr]["total_energy_rate_sp"] = factory.createScalar(currentElement_total_energy_rate_sp);
    // total_energy_rate
    auto currentElement_total_energy_rate = (msg + ctr)->total_energy_rate;
    outArray[ctr]["total_energy_rate"] = factory.createScalar(currentElement_total_energy_rate);
    // total_energy_balance_rate_sp
    auto currentElement_total_energy_balance_rate_sp = (msg + ctr)->total_energy_balance_rate_sp;
    outArray[ctr]["total_energy_balance_rate_sp"] = factory.createScalar(currentElement_total_energy_balance_rate_sp);
    // total_energy_balance_rate
    auto currentElement_total_energy_balance_rate = (msg + ctr)->total_energy_balance_rate;
    outArray[ctr]["total_energy_balance_rate"] = factory.createScalar(currentElement_total_energy_balance_rate);
    // throttle_integ
    auto currentElement_throttle_integ = (msg + ctr)->throttle_integ;
    outArray[ctr]["throttle_integ"] = factory.createScalar(currentElement_throttle_integ);
    // pitch_integ
    auto currentElement_pitch_integ = (msg + ctr)->pitch_integ;
    outArray[ctr]["pitch_integ"] = factory.createScalar(currentElement_pitch_integ);
    // throttle_sp
    auto currentElement_throttle_sp = (msg + ctr)->throttle_sp;
    outArray[ctr]["throttle_sp"] = factory.createScalar(currentElement_throttle_sp);
    // pitch_sp_rad
    auto currentElement_pitch_sp_rad = (msg + ctr)->pitch_sp_rad;
    outArray[ctr]["pitch_sp_rad"] = factory.createScalar(currentElement_pitch_sp_rad);
    // throttle_trim
    auto currentElement_throttle_trim = (msg + ctr)->throttle_trim;
    outArray[ctr]["throttle_trim"] = factory.createScalar(currentElement_throttle_trim);
    // underspeed_ratio
    auto currentElement_underspeed_ratio = (msg + ctr)->underspeed_ratio;
    outArray[ctr]["underspeed_ratio"] = factory.createScalar(currentElement_underspeed_ratio);
    // fast_descend_ratio
    auto currentElement_fast_descend_ratio = (msg + ctr)->fast_descend_ratio;
    outArray[ctr]["fast_descend_ratio"] = factory.createScalar(currentElement_fast_descend_ratio);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_TecsStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_TecsStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_TecsStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::TecsStatus,ros2_px4_msgs_msg_TecsStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_TecsStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::TecsStatus,ros2_px4_msgs_msg_TecsStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_TecsStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::TecsStatus>();
    ros2_px4_msgs_msg_TecsStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_TecsStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_TecsStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::TecsStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_TecsStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::TecsStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_TecsStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER