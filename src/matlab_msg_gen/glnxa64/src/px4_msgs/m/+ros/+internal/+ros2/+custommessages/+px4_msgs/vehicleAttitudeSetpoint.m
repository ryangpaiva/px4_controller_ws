function [data, info] = vehicleAttitudeSetpoint
%VehicleAttitudeSetpoint gives an empty data for px4_msgs/VehicleAttitudeSetpoint
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/VehicleAttitudeSetpoint';
[data.MESSAGE_VERSION, info.MESSAGE_VERSION] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0, 0, [NaN]);
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.yaw_sp_move_rate, info.yaw_sp_move_rate] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.q_d, info.q_d] = ros.internal.ros2.messages.ros2.default_type('single',4,0);
[data.thrust_body, info.thrust_body] = ros.internal.ros2.messages.ros2.default_type('single',3,0);
[data.reset_integral, info.reset_integral] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.fw_control_yaw_wheel, info.fw_control_yaw_wheel] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
info.MessageType = 'px4_msgs/VehicleAttitudeSetpoint';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,7);
info.MatPath{1} = 'MESSAGE_VERSION';
info.MatPath{2} = 'timestamp';
info.MatPath{3} = 'yaw_sp_move_rate';
info.MatPath{4} = 'q_d';
info.MatPath{5} = 'thrust_body';
info.MatPath{6} = 'reset_integral';
info.MatPath{7} = 'fw_control_yaw_wheel';
