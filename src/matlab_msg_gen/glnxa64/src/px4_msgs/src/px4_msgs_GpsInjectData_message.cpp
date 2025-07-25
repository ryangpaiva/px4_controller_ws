// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/GpsInjectData
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
#include "px4_msgs/msg/gps_inject_data.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_GpsInjectData_common : public MATLABROS2MsgInterface<px4_msgs::msg::GpsInjectData> {
  public:
    virtual ~ros2_px4_msgs_msg_GpsInjectData_common(){}
    virtual void copy_from_struct(px4_msgs::msg::GpsInjectData* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::GpsInjectData* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_GpsInjectData_common::copy_from_struct(px4_msgs::msg::GpsInjectData* msg, const matlab::data::Struct& arr,
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
        //device_id
        const matlab::data::TypedArray<uint32_t> device_id_arr = arr["device_id"];
        msg->device_id = device_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'device_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'device_id' is wrong type; expected a uint32.");
    }
    try {
        //len
        const matlab::data::TypedArray<uint16_t> len_arr = arr["len"];
        msg->len = len_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'len' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'len' is wrong type; expected a uint16.");
    }
    try {
        //flags
        const matlab::data::TypedArray<uint8_t> flags_arr = arr["flags"];
        msg->flags = flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flags' is wrong type; expected a uint8.");
    }
    try {
        //data
        const matlab::data::TypedArray<uint8_t> data_arr = arr["data"];
        size_t nelem = 300;
        	std::copy(data_arr.begin(), data_arr.begin()+nelem, msg->data.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'data' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'data' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_GpsInjectData_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::GpsInjectData* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","device_id","len","flags","data","ORB_QUEUE_LENGTH","MAX_INSTANCES"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/GpsInjectData");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // device_id
    auto currentElement_device_id = (msg + ctr)->device_id;
    outArray[ctr]["device_id"] = factory.createScalar(currentElement_device_id);
    // len
    auto currentElement_len = (msg + ctr)->len;
    outArray[ctr]["len"] = factory.createScalar(currentElement_len);
    // flags
    auto currentElement_flags = (msg + ctr)->flags;
    outArray[ctr]["flags"] = factory.createScalar(currentElement_flags);
    // data
    auto currentElement_data = (msg + ctr)->data;
    outArray[ctr]["data"] = factory.createArray<px4_msgs::msg::GpsInjectData::_data_type::const_iterator, uint8_t>({currentElement_data.size(), 1}, currentElement_data.begin(), currentElement_data.end());
    // ORB_QUEUE_LENGTH
    auto currentElement_ORB_QUEUE_LENGTH = (msg + ctr)->ORB_QUEUE_LENGTH;
    outArray[ctr]["ORB_QUEUE_LENGTH"] = factory.createScalar(currentElement_ORB_QUEUE_LENGTH);
    // MAX_INSTANCES
    auto currentElement_MAX_INSTANCES = (msg + ctr)->MAX_INSTANCES;
    outArray[ctr]["MAX_INSTANCES"] = factory.createScalar(currentElement_MAX_INSTANCES);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_GpsInjectData_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_GpsInjectData_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_GpsInjectData_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::GpsInjectData,ros2_px4_msgs_msg_GpsInjectData_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_GpsInjectData_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::GpsInjectData,ros2_px4_msgs_msg_GpsInjectData_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_GpsInjectData_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::GpsInjectData>();
    ros2_px4_msgs_msg_GpsInjectData_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_GpsInjectData_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_GpsInjectData_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::GpsInjectData*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_GpsInjectData_common, MATLABROS2MsgInterface<px4_msgs::msg::GpsInjectData>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_GpsInjectData_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER