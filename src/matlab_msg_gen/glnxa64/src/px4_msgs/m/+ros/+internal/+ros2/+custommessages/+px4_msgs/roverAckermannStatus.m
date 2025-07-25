function [data, info] = roverAckermannStatus
%RoverAckermannStatus gives an empty data for px4_msgs/RoverAckermannStatus
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/RoverAckermannStatus';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.measured_forward_speed, info.measured_forward_speed] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.adjusted_forward_speed_setpoint, info.adjusted_forward_speed_setpoint] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.steering_setpoint_normalized, info.steering_setpoint_normalized] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.adjusted_steering_setpoint_normalized, info.adjusted_steering_setpoint_normalized] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.measured_lateral_acceleration, info.measured_lateral_acceleration] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.pid_throttle_integral, info.pid_throttle_integral] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.pid_lat_accel_integral, info.pid_lat_accel_integral] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/RoverAckermannStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'measured_forward_speed';
info.MatPath{3} = 'adjusted_forward_speed_setpoint';
info.MatPath{4} = 'steering_setpoint_normalized';
info.MatPath{5} = 'adjusted_steering_setpoint_normalized';
info.MatPath{6} = 'measured_lateral_acceleration';
info.MatPath{7} = 'pid_throttle_integral';
info.MatPath{8} = 'pid_lat_accel_integral';
