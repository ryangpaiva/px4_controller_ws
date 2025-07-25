function [data, info] = buffer128
%Buffer128 gives an empty data for px4_msgs/Buffer128
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/Buffer128';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.len, info.len] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.MAX_BUFLEN, info.MAX_BUFLEN] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0, 128, [NaN]);
[data.data, info.data] = ros.internal.ros2.messages.ros2.default_type('uint8',128,0);
info.MessageType = 'px4_msgs/Buffer128';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'len';
info.MatPath{3} = 'MAX_BUFLEN';
info.MatPath{4} = 'data';
