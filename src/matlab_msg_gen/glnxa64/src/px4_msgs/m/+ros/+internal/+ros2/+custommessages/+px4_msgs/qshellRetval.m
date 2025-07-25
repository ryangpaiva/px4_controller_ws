function [data, info] = qshellRetval
%QshellRetval gives an empty data for px4_msgs/QshellRetval
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/QshellRetval';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.return_value, info.return_value] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.return_sequence, info.return_sequence] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
info.MessageType = 'px4_msgs/QshellRetval';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'return_value';
info.MatPath{3} = 'return_sequence';
