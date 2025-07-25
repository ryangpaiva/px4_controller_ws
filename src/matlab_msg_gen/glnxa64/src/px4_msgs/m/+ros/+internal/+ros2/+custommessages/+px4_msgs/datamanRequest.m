function [data, info] = datamanRequest
%DatamanRequest gives an empty data for px4_msgs/DatamanRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/DatamanRequest';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.client_id, info.client_id] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.request_type, info.request_type] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.item, info.item] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.index, info.index] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.data, info.data] = ros.internal.ros2.messages.ros2.default_type('uint8',56,0);
[data.data_length, info.data_length] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
info.MessageType = 'px4_msgs/DatamanRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,7);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'client_id';
info.MatPath{3} = 'request_type';
info.MatPath{4} = 'item';
info.MatPath{5} = 'index';
info.MatPath{6} = 'data';
info.MatPath{7} = 'data_length';
