function [data, info] = unregisterExtComponent
%UnregisterExtComponent gives an empty data for px4_msgs/UnregisterExtComponent
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/UnregisterExtComponent';
[data.MESSAGE_VERSION, info.MESSAGE_VERSION] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0, 0, [NaN]);
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.name, info.name] = ros.internal.ros2.messages.ros2.char('char',25,NaN,0);
[data.arming_check_id, info.arming_check_id] = ros.internal.ros2.messages.ros2.default_type('int8',1,0);
[data.mode_id, info.mode_id] = ros.internal.ros2.messages.ros2.default_type('int8',1,0);
[data.mode_executor_id, info.mode_executor_id] = ros.internal.ros2.messages.ros2.default_type('int8',1,0);
info.MessageType = 'px4_msgs/UnregisterExtComponent';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'MESSAGE_VERSION';
info.MatPath{2} = 'timestamp';
info.MatPath{3} = 'name';
info.MatPath{4} = 'arming_check_id';
info.MatPath{5} = 'mode_id';
info.MatPath{6} = 'mode_executor_id';
