function [data, info] = roverMecanumSetpoint
%RoverMecanumSetpoint gives an empty data for px4_msgs/RoverMecanumSetpoint
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/RoverMecanumSetpoint';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.forward_speed_setpoint, info.forward_speed_setpoint] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.forward_speed_setpoint_normalized, info.forward_speed_setpoint_normalized] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.lateral_speed_setpoint, info.lateral_speed_setpoint] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.lateral_speed_setpoint_normalized, info.lateral_speed_setpoint_normalized] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.yaw_rate_setpoint, info.yaw_rate_setpoint] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.speed_diff_setpoint_normalized, info.speed_diff_setpoint_normalized] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.yaw_setpoint, info.yaw_setpoint] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/RoverMecanumSetpoint';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'forward_speed_setpoint';
info.MatPath{3} = 'forward_speed_setpoint_normalized';
info.MatPath{4} = 'lateral_speed_setpoint';
info.MatPath{5} = 'lateral_speed_setpoint_normalized';
info.MatPath{6} = 'yaw_rate_setpoint';
info.MatPath{7} = 'speed_diff_setpoint_normalized';
info.MatPath{8} = 'yaw_setpoint';
