function [data, info] = tiltrotorExtraControls
%TiltrotorExtraControls gives an empty data for px4_msgs/TiltrotorExtraControls
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/TiltrotorExtraControls';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.collective_tilt_normalized_setpoint, info.collective_tilt_normalized_setpoint] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.collective_thrust_normalized_setpoint, info.collective_thrust_normalized_setpoint] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/TiltrotorExtraControls';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'collective_tilt_normalized_setpoint';
info.MatPath{3} = 'collective_thrust_normalized_setpoint';
