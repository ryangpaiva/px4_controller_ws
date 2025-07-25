function [data, info] = debugValue
%DebugValue gives an empty data for px4_msgs/DebugValue
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/DebugValue';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.ind, info.ind] = ros.internal.ros2.messages.ros2.default_type('int8',1,0);
[data.value, info.value] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/DebugValue';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'ind';
info.MatPath{3} = 'value';
