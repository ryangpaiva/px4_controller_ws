function [data, info] = distanceSensorModeChangeRequest
%DistanceSensorModeChangeRequest gives an empty data for px4_msgs/DistanceSensorModeChangeRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/DistanceSensorModeChangeRequest';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.request_on_off, info.request_on_off] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.REQUEST_OFF, info.REQUEST_OFF] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.REQUEST_ON, info.REQUEST_ON] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 1, [NaN]);
info.MessageType = 'px4_msgs/DistanceSensorModeChangeRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'request_on_off';
info.MatPath{3} = 'REQUEST_OFF';
info.MatPath{4} = 'REQUEST_ON';
