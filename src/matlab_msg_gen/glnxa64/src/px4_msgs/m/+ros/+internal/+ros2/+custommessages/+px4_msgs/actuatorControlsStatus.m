function [data, info] = actuatorControlsStatus
%ActuatorControlsStatus gives an empty data for px4_msgs/ActuatorControlsStatus
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/ActuatorControlsStatus';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.control_power, info.control_power] = ros.internal.ros2.messages.ros2.default_type('single',3,0);
info.MessageType = 'px4_msgs/ActuatorControlsStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'control_power';
