function [data, info] = orbTest
%OrbTest gives an empty data for px4_msgs/OrbTest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/OrbTest';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.val, info.val] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
info.MessageType = 'px4_msgs/OrbTest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'val';
