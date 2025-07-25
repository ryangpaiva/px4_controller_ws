function [data, info] = roverAckermannSetpoint
%RoverAckermannSetpoint gives an empty data for px4_msgs/RoverAckermannSetpoint
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/RoverAckermannSetpoint';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.forward_speed_setpoint, info.forward_speed_setpoint] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.forward_speed_setpoint_normalized, info.forward_speed_setpoint_normalized] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.steering_setpoint, info.steering_setpoint] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.steering_setpoint_normalized, info.steering_setpoint_normalized] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.lateral_acceleration_setpoint, info.lateral_acceleration_setpoint] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/RoverAckermannSetpoint';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'forward_speed_setpoint';
info.MatPath{3} = 'forward_speed_setpoint_normalized';
info.MatPath{4} = 'steering_setpoint';
info.MatPath{5} = 'steering_setpoint_normalized';
info.MatPath{6} = 'lateral_acceleration_setpoint';
