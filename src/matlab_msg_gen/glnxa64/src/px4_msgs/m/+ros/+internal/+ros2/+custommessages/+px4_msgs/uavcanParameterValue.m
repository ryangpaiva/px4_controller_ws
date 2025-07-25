function [data, info] = uavcanParameterValue
%UavcanParameterValue gives an empty data for px4_msgs/UavcanParameterValue
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/UavcanParameterValue';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.node_id, info.node_id] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.param_id, info.param_id] = ros.internal.ros2.messages.ros2.char('char',17,NaN,0);
[data.param_index, info.param_index] = ros.internal.ros2.messages.ros2.default_type('int16',1,0);
[data.param_count, info.param_count] = ros.internal.ros2.messages.ros2.default_type('uint16',1,0);
[data.param_type, info.param_type] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.int_value, info.int_value] = ros.internal.ros2.messages.ros2.default_type('int64',1,0);
[data.real_value, info.real_value] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/UavcanParameterValue';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'node_id';
info.MatPath{3} = 'param_id';
info.MatPath{4} = 'param_index';
info.MatPath{5} = 'param_count';
info.MatPath{6} = 'param_type';
info.MatPath{7} = 'int_value';
info.MatPath{8} = 'real_value';
