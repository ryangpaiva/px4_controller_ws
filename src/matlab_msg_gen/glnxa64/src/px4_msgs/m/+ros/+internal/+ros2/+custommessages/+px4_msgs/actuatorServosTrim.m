function [data, info] = actuatorServosTrim
%ActuatorServosTrim gives an empty data for px4_msgs/ActuatorServosTrim
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/ActuatorServosTrim';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.NUM_CONTROLS, info.NUM_CONTROLS] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 8, [NaN]);
[data.trim, info.trim] = ros.internal.ros2.messages.ros2.default_type('single',8,0);
info.MessageType = 'px4_msgs/ActuatorServosTrim';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'NUM_CONTROLS';
info.MatPath{3} = 'trim';
