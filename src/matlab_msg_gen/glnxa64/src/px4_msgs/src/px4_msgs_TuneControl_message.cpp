// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/TuneControl
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
#include "px4_msgs/msg/tune_control.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_TuneControl_common : public MATLABROS2MsgInterface<px4_msgs::msg::TuneControl> {
  public:
    virtual ~ros2_px4_msgs_msg_TuneControl_common(){}
    virtual void copy_from_struct(px4_msgs::msg::TuneControl* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::TuneControl* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_TuneControl_common::copy_from_struct(px4_msgs::msg::TuneControl* msg, const matlab::data::Struct& arr,
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
        //tune_id
        const matlab::data::TypedArray<uint8_t> tune_id_arr = arr["tune_id"];
        msg->tune_id = tune_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tune_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tune_id' is wrong type; expected a uint8.");
    }
    try {
        //tune_override
        const matlab::data::TypedArray<bool> tune_override_arr = arr["tune_override"];
        msg->tune_override = tune_override_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tune_override' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tune_override' is wrong type; expected a logical.");
    }
    try {
        //frequency
        const matlab::data::TypedArray<uint16_t> frequency_arr = arr["frequency"];
        msg->frequency = frequency_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'frequency' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'frequency' is wrong type; expected a uint16.");
    }
    try {
        //duration
        const matlab::data::TypedArray<uint32_t> duration_arr = arr["duration"];
        msg->duration = duration_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'duration' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'duration' is wrong type; expected a uint32.");
    }
    try {
        //silence
        const matlab::data::TypedArray<uint32_t> silence_arr = arr["silence"];
        msg->silence = silence_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'silence' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'silence' is wrong type; expected a uint32.");
    }
    try {
        //volume
        const matlab::data::TypedArray<uint8_t> volume_arr = arr["volume"];
        msg->volume = volume_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'volume' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'volume' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_TuneControl_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::TuneControl* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","TUNE_ID_STOP","TUNE_ID_STARTUP","TUNE_ID_ERROR","TUNE_ID_NOTIFY_POSITIVE","TUNE_ID_NOTIFY_NEUTRAL","TUNE_ID_NOTIFY_NEGATIVE","TUNE_ID_ARMING_WARNING","TUNE_ID_BATTERY_WARNING_SLOW","TUNE_ID_BATTERY_WARNING_FAST","TUNE_ID_GPS_WARNING","TUNE_ID_ARMING_FAILURE","TUNE_ID_PARACHUTE_RELEASE","TUNE_ID_SINGLE_BEEP","TUNE_ID_HOME_SET","TUNE_ID_SD_INIT","TUNE_ID_SD_ERROR","TUNE_ID_PROG_PX4IO","TUNE_ID_PROG_PX4IO_OK","TUNE_ID_PROG_PX4IO_ERR","TUNE_ID_POWER_OFF","NUMBER_OF_TUNES","tune_id","tune_override","frequency","duration","silence","volume","VOLUME_LEVEL_MIN","VOLUME_LEVEL_DEFAULT","VOLUME_LEVEL_MAX","ORB_QUEUE_LENGTH"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/TuneControl");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // TUNE_ID_STOP
    auto currentElement_TUNE_ID_STOP = (msg + ctr)->TUNE_ID_STOP;
    outArray[ctr]["TUNE_ID_STOP"] = factory.createScalar(currentElement_TUNE_ID_STOP);
    // TUNE_ID_STARTUP
    auto currentElement_TUNE_ID_STARTUP = (msg + ctr)->TUNE_ID_STARTUP;
    outArray[ctr]["TUNE_ID_STARTUP"] = factory.createScalar(currentElement_TUNE_ID_STARTUP);
    // TUNE_ID_ERROR
    auto currentElement_TUNE_ID_ERROR = (msg + ctr)->TUNE_ID_ERROR;
    outArray[ctr]["TUNE_ID_ERROR"] = factory.createScalar(currentElement_TUNE_ID_ERROR);
    // TUNE_ID_NOTIFY_POSITIVE
    auto currentElement_TUNE_ID_NOTIFY_POSITIVE = (msg + ctr)->TUNE_ID_NOTIFY_POSITIVE;
    outArray[ctr]["TUNE_ID_NOTIFY_POSITIVE"] = factory.createScalar(currentElement_TUNE_ID_NOTIFY_POSITIVE);
    // TUNE_ID_NOTIFY_NEUTRAL
    auto currentElement_TUNE_ID_NOTIFY_NEUTRAL = (msg + ctr)->TUNE_ID_NOTIFY_NEUTRAL;
    outArray[ctr]["TUNE_ID_NOTIFY_NEUTRAL"] = factory.createScalar(currentElement_TUNE_ID_NOTIFY_NEUTRAL);
    // TUNE_ID_NOTIFY_NEGATIVE
    auto currentElement_TUNE_ID_NOTIFY_NEGATIVE = (msg + ctr)->TUNE_ID_NOTIFY_NEGATIVE;
    outArray[ctr]["TUNE_ID_NOTIFY_NEGATIVE"] = factory.createScalar(currentElement_TUNE_ID_NOTIFY_NEGATIVE);
    // TUNE_ID_ARMING_WARNING
    auto currentElement_TUNE_ID_ARMING_WARNING = (msg + ctr)->TUNE_ID_ARMING_WARNING;
    outArray[ctr]["TUNE_ID_ARMING_WARNING"] = factory.createScalar(currentElement_TUNE_ID_ARMING_WARNING);
    // TUNE_ID_BATTERY_WARNING_SLOW
    auto currentElement_TUNE_ID_BATTERY_WARNING_SLOW = (msg + ctr)->TUNE_ID_BATTERY_WARNING_SLOW;
    outArray[ctr]["TUNE_ID_BATTERY_WARNING_SLOW"] = factory.createScalar(currentElement_TUNE_ID_BATTERY_WARNING_SLOW);
    // TUNE_ID_BATTERY_WARNING_FAST
    auto currentElement_TUNE_ID_BATTERY_WARNING_FAST = (msg + ctr)->TUNE_ID_BATTERY_WARNING_FAST;
    outArray[ctr]["TUNE_ID_BATTERY_WARNING_FAST"] = factory.createScalar(currentElement_TUNE_ID_BATTERY_WARNING_FAST);
    // TUNE_ID_GPS_WARNING
    auto currentElement_TUNE_ID_GPS_WARNING = (msg + ctr)->TUNE_ID_GPS_WARNING;
    outArray[ctr]["TUNE_ID_GPS_WARNING"] = factory.createScalar(currentElement_TUNE_ID_GPS_WARNING);
    // TUNE_ID_ARMING_FAILURE
    auto currentElement_TUNE_ID_ARMING_FAILURE = (msg + ctr)->TUNE_ID_ARMING_FAILURE;
    outArray[ctr]["TUNE_ID_ARMING_FAILURE"] = factory.createScalar(currentElement_TUNE_ID_ARMING_FAILURE);
    // TUNE_ID_PARACHUTE_RELEASE
    auto currentElement_TUNE_ID_PARACHUTE_RELEASE = (msg + ctr)->TUNE_ID_PARACHUTE_RELEASE;
    outArray[ctr]["TUNE_ID_PARACHUTE_RELEASE"] = factory.createScalar(currentElement_TUNE_ID_PARACHUTE_RELEASE);
    // TUNE_ID_SINGLE_BEEP
    auto currentElement_TUNE_ID_SINGLE_BEEP = (msg + ctr)->TUNE_ID_SINGLE_BEEP;
    outArray[ctr]["TUNE_ID_SINGLE_BEEP"] = factory.createScalar(currentElement_TUNE_ID_SINGLE_BEEP);
    // TUNE_ID_HOME_SET
    auto currentElement_TUNE_ID_HOME_SET = (msg + ctr)->TUNE_ID_HOME_SET;
    outArray[ctr]["TUNE_ID_HOME_SET"] = factory.createScalar(currentElement_TUNE_ID_HOME_SET);
    // TUNE_ID_SD_INIT
    auto currentElement_TUNE_ID_SD_INIT = (msg + ctr)->TUNE_ID_SD_INIT;
    outArray[ctr]["TUNE_ID_SD_INIT"] = factory.createScalar(currentElement_TUNE_ID_SD_INIT);
    // TUNE_ID_SD_ERROR
    auto currentElement_TUNE_ID_SD_ERROR = (msg + ctr)->TUNE_ID_SD_ERROR;
    outArray[ctr]["TUNE_ID_SD_ERROR"] = factory.createScalar(currentElement_TUNE_ID_SD_ERROR);
    // TUNE_ID_PROG_PX4IO
    auto currentElement_TUNE_ID_PROG_PX4IO = (msg + ctr)->TUNE_ID_PROG_PX4IO;
    outArray[ctr]["TUNE_ID_PROG_PX4IO"] = factory.createScalar(currentElement_TUNE_ID_PROG_PX4IO);
    // TUNE_ID_PROG_PX4IO_OK
    auto currentElement_TUNE_ID_PROG_PX4IO_OK = (msg + ctr)->TUNE_ID_PROG_PX4IO_OK;
    outArray[ctr]["TUNE_ID_PROG_PX4IO_OK"] = factory.createScalar(currentElement_TUNE_ID_PROG_PX4IO_OK);
    // TUNE_ID_PROG_PX4IO_ERR
    auto currentElement_TUNE_ID_PROG_PX4IO_ERR = (msg + ctr)->TUNE_ID_PROG_PX4IO_ERR;
    outArray[ctr]["TUNE_ID_PROG_PX4IO_ERR"] = factory.createScalar(currentElement_TUNE_ID_PROG_PX4IO_ERR);
    // TUNE_ID_POWER_OFF
    auto currentElement_TUNE_ID_POWER_OFF = (msg + ctr)->TUNE_ID_POWER_OFF;
    outArray[ctr]["TUNE_ID_POWER_OFF"] = factory.createScalar(currentElement_TUNE_ID_POWER_OFF);
    // NUMBER_OF_TUNES
    auto currentElement_NUMBER_OF_TUNES = (msg + ctr)->NUMBER_OF_TUNES;
    outArray[ctr]["NUMBER_OF_TUNES"] = factory.createScalar(currentElement_NUMBER_OF_TUNES);
    // tune_id
    auto currentElement_tune_id = (msg + ctr)->tune_id;
    outArray[ctr]["tune_id"] = factory.createScalar(currentElement_tune_id);
    // tune_override
    auto currentElement_tune_override = (msg + ctr)->tune_override;
    outArray[ctr]["tune_override"] = factory.createScalar(currentElement_tune_override);
    // frequency
    auto currentElement_frequency = (msg + ctr)->frequency;
    outArray[ctr]["frequency"] = factory.createScalar(currentElement_frequency);
    // duration
    auto currentElement_duration = (msg + ctr)->duration;
    outArray[ctr]["duration"] = factory.createScalar(currentElement_duration);
    // silence
    auto currentElement_silence = (msg + ctr)->silence;
    outArray[ctr]["silence"] = factory.createScalar(currentElement_silence);
    // volume
    auto currentElement_volume = (msg + ctr)->volume;
    outArray[ctr]["volume"] = factory.createScalar(currentElement_volume);
    // VOLUME_LEVEL_MIN
    auto currentElement_VOLUME_LEVEL_MIN = (msg + ctr)->VOLUME_LEVEL_MIN;
    outArray[ctr]["VOLUME_LEVEL_MIN"] = factory.createScalar(currentElement_VOLUME_LEVEL_MIN);
    // VOLUME_LEVEL_DEFAULT
    auto currentElement_VOLUME_LEVEL_DEFAULT = (msg + ctr)->VOLUME_LEVEL_DEFAULT;
    outArray[ctr]["VOLUME_LEVEL_DEFAULT"] = factory.createScalar(currentElement_VOLUME_LEVEL_DEFAULT);
    // VOLUME_LEVEL_MAX
    auto currentElement_VOLUME_LEVEL_MAX = (msg + ctr)->VOLUME_LEVEL_MAX;
    outArray[ctr]["VOLUME_LEVEL_MAX"] = factory.createScalar(currentElement_VOLUME_LEVEL_MAX);
    // ORB_QUEUE_LENGTH
    auto currentElement_ORB_QUEUE_LENGTH = (msg + ctr)->ORB_QUEUE_LENGTH;
    outArray[ctr]["ORB_QUEUE_LENGTH"] = factory.createScalar(currentElement_ORB_QUEUE_LENGTH);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_TuneControl_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_TuneControl_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_TuneControl_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::TuneControl,ros2_px4_msgs_msg_TuneControl_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_TuneControl_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::TuneControl,ros2_px4_msgs_msg_TuneControl_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_TuneControl_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::TuneControl>();
    ros2_px4_msgs_msg_TuneControl_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_TuneControl_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_TuneControl_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::TuneControl*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_TuneControl_common, MATLABROS2MsgInterface<px4_msgs::msg::TuneControl>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_TuneControl_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER