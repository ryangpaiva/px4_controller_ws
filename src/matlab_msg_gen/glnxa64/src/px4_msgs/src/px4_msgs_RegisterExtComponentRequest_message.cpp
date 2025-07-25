// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/RegisterExtComponentRequest
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
#include "px4_msgs/msg/register_ext_component_request.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_RegisterExtComponentRequest_common : public MATLABROS2MsgInterface<px4_msgs::msg::RegisterExtComponentRequest> {
  public:
    virtual ~ros2_px4_msgs_msg_RegisterExtComponentRequest_common(){}
    virtual void copy_from_struct(px4_msgs::msg::RegisterExtComponentRequest* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::RegisterExtComponentRequest* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_RegisterExtComponentRequest_common::copy_from_struct(px4_msgs::msg::RegisterExtComponentRequest* msg, const matlab::data::Struct& arr,
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
        //request_id
        const matlab::data::TypedArray<uint64_t> request_id_arr = arr["request_id"];
        msg->request_id = request_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'request_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'request_id' is wrong type; expected a uint64.");
    }
    try {
        //name
        const matlab::data::CharArray name_arr = arr["name"];
        const std::string name_str = name_arr.toAscii();
        size_t nelem = 25;
        	std::copy(name_arr.begin(), name_arr.begin()+nelem, msg->name.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a char.");
    }
    try {
        //px4_ros2_api_version
        const matlab::data::TypedArray<uint16_t> px4_ros2_api_version_arr = arr["px4_ros2_api_version"];
        msg->px4_ros2_api_version = px4_ros2_api_version_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'px4_ros2_api_version' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'px4_ros2_api_version' is wrong type; expected a uint16.");
    }
    try {
        //register_arming_check
        const matlab::data::TypedArray<bool> register_arming_check_arr = arr["register_arming_check"];
        msg->register_arming_check = register_arming_check_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'register_arming_check' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'register_arming_check' is wrong type; expected a logical.");
    }
    try {
        //register_mode
        const matlab::data::TypedArray<bool> register_mode_arr = arr["register_mode"];
        msg->register_mode = register_mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'register_mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'register_mode' is wrong type; expected a logical.");
    }
    try {
        //register_mode_executor
        const matlab::data::TypedArray<bool> register_mode_executor_arr = arr["register_mode_executor"];
        msg->register_mode_executor = register_mode_executor_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'register_mode_executor' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'register_mode_executor' is wrong type; expected a logical.");
    }
    try {
        //enable_replace_internal_mode
        const matlab::data::TypedArray<bool> enable_replace_internal_mode_arr = arr["enable_replace_internal_mode"];
        msg->enable_replace_internal_mode = enable_replace_internal_mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'enable_replace_internal_mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'enable_replace_internal_mode' is wrong type; expected a logical.");
    }
    try {
        //replace_internal_mode
        const matlab::data::TypedArray<uint8_t> replace_internal_mode_arr = arr["replace_internal_mode"];
        msg->replace_internal_mode = replace_internal_mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'replace_internal_mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'replace_internal_mode' is wrong type; expected a uint8.");
    }
    try {
        //activate_mode_immediately
        const matlab::data::TypedArray<bool> activate_mode_immediately_arr = arr["activate_mode_immediately"];
        msg->activate_mode_immediately = activate_mode_immediately_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'activate_mode_immediately' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'activate_mode_immediately' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_RegisterExtComponentRequest_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::RegisterExtComponentRequest* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","request_id","name","LATEST_PX4_ROS2_API_VERSION","px4_ros2_api_version","register_arming_check","register_mode","register_mode_executor","enable_replace_internal_mode","replace_internal_mode","activate_mode_immediately","ORB_QUEUE_LENGTH"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/RegisterExtComponentRequest");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // request_id
    auto currentElement_request_id = (msg + ctr)->request_id;
    outArray[ctr]["request_id"] = factory.createScalar(currentElement_request_id);
    // name
    auto currentElement_name = (msg + ctr)->name;
    outArray[ctr]["name"] = factory.createCharArray(std::string(currentElement_name.begin(),currentElement_name.end()));
    // LATEST_PX4_ROS2_API_VERSION
    auto currentElement_LATEST_PX4_ROS2_API_VERSION = (msg + ctr)->LATEST_PX4_ROS2_API_VERSION;
    outArray[ctr]["LATEST_PX4_ROS2_API_VERSION"] = factory.createScalar(currentElement_LATEST_PX4_ROS2_API_VERSION);
    // px4_ros2_api_version
    auto currentElement_px4_ros2_api_version = (msg + ctr)->px4_ros2_api_version;
    outArray[ctr]["px4_ros2_api_version"] = factory.createScalar(currentElement_px4_ros2_api_version);
    // register_arming_check
    auto currentElement_register_arming_check = (msg + ctr)->register_arming_check;
    outArray[ctr]["register_arming_check"] = factory.createScalar(currentElement_register_arming_check);
    // register_mode
    auto currentElement_register_mode = (msg + ctr)->register_mode;
    outArray[ctr]["register_mode"] = factory.createScalar(currentElement_register_mode);
    // register_mode_executor
    auto currentElement_register_mode_executor = (msg + ctr)->register_mode_executor;
    outArray[ctr]["register_mode_executor"] = factory.createScalar(currentElement_register_mode_executor);
    // enable_replace_internal_mode
    auto currentElement_enable_replace_internal_mode = (msg + ctr)->enable_replace_internal_mode;
    outArray[ctr]["enable_replace_internal_mode"] = factory.createScalar(currentElement_enable_replace_internal_mode);
    // replace_internal_mode
    auto currentElement_replace_internal_mode = (msg + ctr)->replace_internal_mode;
    outArray[ctr]["replace_internal_mode"] = factory.createScalar(currentElement_replace_internal_mode);
    // activate_mode_immediately
    auto currentElement_activate_mode_immediately = (msg + ctr)->activate_mode_immediately;
    outArray[ctr]["activate_mode_immediately"] = factory.createScalar(currentElement_activate_mode_immediately);
    // ORB_QUEUE_LENGTH
    auto currentElement_ORB_QUEUE_LENGTH = (msg + ctr)->ORB_QUEUE_LENGTH;
    outArray[ctr]["ORB_QUEUE_LENGTH"] = factory.createScalar(currentElement_ORB_QUEUE_LENGTH);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_RegisterExtComponentRequest_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_RegisterExtComponentRequest_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_RegisterExtComponentRequest_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::RegisterExtComponentRequest,ros2_px4_msgs_msg_RegisterExtComponentRequest_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_RegisterExtComponentRequest_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::RegisterExtComponentRequest,ros2_px4_msgs_msg_RegisterExtComponentRequest_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_RegisterExtComponentRequest_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::RegisterExtComponentRequest>();
    ros2_px4_msgs_msg_RegisterExtComponentRequest_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_RegisterExtComponentRequest_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_RegisterExtComponentRequest_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::RegisterExtComponentRequest*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_RegisterExtComponentRequest_common, MATLABROS2MsgInterface<px4_msgs::msg::RegisterExtComponentRequest>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_RegisterExtComponentRequest_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER