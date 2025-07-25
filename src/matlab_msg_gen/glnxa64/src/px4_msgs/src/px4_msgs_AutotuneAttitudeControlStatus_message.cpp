// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/AutotuneAttitudeControlStatus
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
#include "px4_msgs/msg/autotune_attitude_control_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_AutotuneAttitudeControlStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::AutotuneAttitudeControlStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_AutotuneAttitudeControlStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::AutotuneAttitudeControlStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::AutotuneAttitudeControlStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_AutotuneAttitudeControlStatus_common::copy_from_struct(px4_msgs::msg::AutotuneAttitudeControlStatus* msg, const matlab::data::Struct& arr,
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
        //coeff
        const matlab::data::TypedArray<float> coeff_arr = arr["coeff"];
        size_t nelem = 5;
        	std::copy(coeff_arr.begin(), coeff_arr.begin()+nelem, msg->coeff.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'coeff' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'coeff' is wrong type; expected a single.");
    }
    try {
        //coeff_var
        const matlab::data::TypedArray<float> coeff_var_arr = arr["coeff_var"];
        size_t nelem = 5;
        	std::copy(coeff_var_arr.begin(), coeff_var_arr.begin()+nelem, msg->coeff_var.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'coeff_var' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'coeff_var' is wrong type; expected a single.");
    }
    try {
        //fitness
        const matlab::data::TypedArray<float> fitness_arr = arr["fitness"];
        msg->fitness = fitness_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fitness' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fitness' is wrong type; expected a single.");
    }
    try {
        //innov
        const matlab::data::TypedArray<float> innov_arr = arr["innov"];
        msg->innov = innov_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'innov' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'innov' is wrong type; expected a single.");
    }
    try {
        //dt_model
        const matlab::data::TypedArray<float> dt_model_arr = arr["dt_model"];
        msg->dt_model = dt_model_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dt_model' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'dt_model' is wrong type; expected a single.");
    }
    try {
        //kc
        const matlab::data::TypedArray<float> kc_arr = arr["kc"];
        msg->kc = kc_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'kc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'kc' is wrong type; expected a single.");
    }
    try {
        //ki
        const matlab::data::TypedArray<float> ki_arr = arr["ki"];
        msg->ki = ki_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ki' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ki' is wrong type; expected a single.");
    }
    try {
        //kd
        const matlab::data::TypedArray<float> kd_arr = arr["kd"];
        msg->kd = kd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'kd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'kd' is wrong type; expected a single.");
    }
    try {
        //kff
        const matlab::data::TypedArray<float> kff_arr = arr["kff"];
        msg->kff = kff_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'kff' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'kff' is wrong type; expected a single.");
    }
    try {
        //att_p
        const matlab::data::TypedArray<float> att_p_arr = arr["att_p"];
        msg->att_p = att_p_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'att_p' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'att_p' is wrong type; expected a single.");
    }
    try {
        //rate_sp
        const matlab::data::TypedArray<float> rate_sp_arr = arr["rate_sp"];
        size_t nelem = 3;
        	std::copy(rate_sp_arr.begin(), rate_sp_arr.begin()+nelem, msg->rate_sp.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rate_sp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rate_sp' is wrong type; expected a single.");
    }
    try {
        //u_filt
        const matlab::data::TypedArray<float> u_filt_arr = arr["u_filt"];
        msg->u_filt = u_filt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'u_filt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'u_filt' is wrong type; expected a single.");
    }
    try {
        //y_filt
        const matlab::data::TypedArray<float> y_filt_arr = arr["y_filt"];
        msg->y_filt = y_filt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_filt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'y_filt' is wrong type; expected a single.");
    }
    try {
        //state
        const matlab::data::TypedArray<uint8_t> state_arr = arr["state"];
        msg->state = state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'state' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'state' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_AutotuneAttitudeControlStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::AutotuneAttitudeControlStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","coeff","coeff_var","fitness","innov","dt_model","kc","ki","kd","kff","att_p","rate_sp","u_filt","y_filt","STATE_IDLE","STATE_INIT","STATE_ROLL","STATE_ROLL_PAUSE","STATE_PITCH","STATE_PITCH_PAUSE","STATE_YAW","STATE_YAW_PAUSE","STATE_VERIFICATION","STATE_APPLY","STATE_TEST","STATE_COMPLETE","STATE_FAIL","STATE_WAIT_FOR_DISARM","state"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/AutotuneAttitudeControlStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // coeff
    auto currentElement_coeff = (msg + ctr)->coeff;
    outArray[ctr]["coeff"] = factory.createArray<px4_msgs::msg::AutotuneAttitudeControlStatus::_coeff_type::const_iterator, float>({currentElement_coeff.size(), 1}, currentElement_coeff.begin(), currentElement_coeff.end());
    // coeff_var
    auto currentElement_coeff_var = (msg + ctr)->coeff_var;
    outArray[ctr]["coeff_var"] = factory.createArray<px4_msgs::msg::AutotuneAttitudeControlStatus::_coeff_var_type::const_iterator, float>({currentElement_coeff_var.size(), 1}, currentElement_coeff_var.begin(), currentElement_coeff_var.end());
    // fitness
    auto currentElement_fitness = (msg + ctr)->fitness;
    outArray[ctr]["fitness"] = factory.createScalar(currentElement_fitness);
    // innov
    auto currentElement_innov = (msg + ctr)->innov;
    outArray[ctr]["innov"] = factory.createScalar(currentElement_innov);
    // dt_model
    auto currentElement_dt_model = (msg + ctr)->dt_model;
    outArray[ctr]["dt_model"] = factory.createScalar(currentElement_dt_model);
    // kc
    auto currentElement_kc = (msg + ctr)->kc;
    outArray[ctr]["kc"] = factory.createScalar(currentElement_kc);
    // ki
    auto currentElement_ki = (msg + ctr)->ki;
    outArray[ctr]["ki"] = factory.createScalar(currentElement_ki);
    // kd
    auto currentElement_kd = (msg + ctr)->kd;
    outArray[ctr]["kd"] = factory.createScalar(currentElement_kd);
    // kff
    auto currentElement_kff = (msg + ctr)->kff;
    outArray[ctr]["kff"] = factory.createScalar(currentElement_kff);
    // att_p
    auto currentElement_att_p = (msg + ctr)->att_p;
    outArray[ctr]["att_p"] = factory.createScalar(currentElement_att_p);
    // rate_sp
    auto currentElement_rate_sp = (msg + ctr)->rate_sp;
    outArray[ctr]["rate_sp"] = factory.createArray<px4_msgs::msg::AutotuneAttitudeControlStatus::_rate_sp_type::const_iterator, float>({currentElement_rate_sp.size(), 1}, currentElement_rate_sp.begin(), currentElement_rate_sp.end());
    // u_filt
    auto currentElement_u_filt = (msg + ctr)->u_filt;
    outArray[ctr]["u_filt"] = factory.createScalar(currentElement_u_filt);
    // y_filt
    auto currentElement_y_filt = (msg + ctr)->y_filt;
    outArray[ctr]["y_filt"] = factory.createScalar(currentElement_y_filt);
    // STATE_IDLE
    auto currentElement_STATE_IDLE = (msg + ctr)->STATE_IDLE;
    outArray[ctr]["STATE_IDLE"] = factory.createScalar(currentElement_STATE_IDLE);
    // STATE_INIT
    auto currentElement_STATE_INIT = (msg + ctr)->STATE_INIT;
    outArray[ctr]["STATE_INIT"] = factory.createScalar(currentElement_STATE_INIT);
    // STATE_ROLL
    auto currentElement_STATE_ROLL = (msg + ctr)->STATE_ROLL;
    outArray[ctr]["STATE_ROLL"] = factory.createScalar(currentElement_STATE_ROLL);
    // STATE_ROLL_PAUSE
    auto currentElement_STATE_ROLL_PAUSE = (msg + ctr)->STATE_ROLL_PAUSE;
    outArray[ctr]["STATE_ROLL_PAUSE"] = factory.createScalar(currentElement_STATE_ROLL_PAUSE);
    // STATE_PITCH
    auto currentElement_STATE_PITCH = (msg + ctr)->STATE_PITCH;
    outArray[ctr]["STATE_PITCH"] = factory.createScalar(currentElement_STATE_PITCH);
    // STATE_PITCH_PAUSE
    auto currentElement_STATE_PITCH_PAUSE = (msg + ctr)->STATE_PITCH_PAUSE;
    outArray[ctr]["STATE_PITCH_PAUSE"] = factory.createScalar(currentElement_STATE_PITCH_PAUSE);
    // STATE_YAW
    auto currentElement_STATE_YAW = (msg + ctr)->STATE_YAW;
    outArray[ctr]["STATE_YAW"] = factory.createScalar(currentElement_STATE_YAW);
    // STATE_YAW_PAUSE
    auto currentElement_STATE_YAW_PAUSE = (msg + ctr)->STATE_YAW_PAUSE;
    outArray[ctr]["STATE_YAW_PAUSE"] = factory.createScalar(currentElement_STATE_YAW_PAUSE);
    // STATE_VERIFICATION
    auto currentElement_STATE_VERIFICATION = (msg + ctr)->STATE_VERIFICATION;
    outArray[ctr]["STATE_VERIFICATION"] = factory.createScalar(currentElement_STATE_VERIFICATION);
    // STATE_APPLY
    auto currentElement_STATE_APPLY = (msg + ctr)->STATE_APPLY;
    outArray[ctr]["STATE_APPLY"] = factory.createScalar(currentElement_STATE_APPLY);
    // STATE_TEST
    auto currentElement_STATE_TEST = (msg + ctr)->STATE_TEST;
    outArray[ctr]["STATE_TEST"] = factory.createScalar(currentElement_STATE_TEST);
    // STATE_COMPLETE
    auto currentElement_STATE_COMPLETE = (msg + ctr)->STATE_COMPLETE;
    outArray[ctr]["STATE_COMPLETE"] = factory.createScalar(currentElement_STATE_COMPLETE);
    // STATE_FAIL
    auto currentElement_STATE_FAIL = (msg + ctr)->STATE_FAIL;
    outArray[ctr]["STATE_FAIL"] = factory.createScalar(currentElement_STATE_FAIL);
    // STATE_WAIT_FOR_DISARM
    auto currentElement_STATE_WAIT_FOR_DISARM = (msg + ctr)->STATE_WAIT_FOR_DISARM;
    outArray[ctr]["STATE_WAIT_FOR_DISARM"] = factory.createScalar(currentElement_STATE_WAIT_FOR_DISARM);
    // state
    auto currentElement_state = (msg + ctr)->state;
    outArray[ctr]["state"] = factory.createScalar(currentElement_state);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_AutotuneAttitudeControlStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_AutotuneAttitudeControlStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_AutotuneAttitudeControlStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::AutotuneAttitudeControlStatus,ros2_px4_msgs_msg_AutotuneAttitudeControlStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_AutotuneAttitudeControlStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::AutotuneAttitudeControlStatus,ros2_px4_msgs_msg_AutotuneAttitudeControlStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_AutotuneAttitudeControlStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::AutotuneAttitudeControlStatus>();
    ros2_px4_msgs_msg_AutotuneAttitudeControlStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_AutotuneAttitudeControlStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_AutotuneAttitudeControlStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::AutotuneAttitudeControlStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_AutotuneAttitudeControlStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::AutotuneAttitudeControlStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_AutotuneAttitudeControlStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER