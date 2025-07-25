function [data, info] = taskStackInfo
%TaskStackInfo gives an empty data for px4_msgs/TaskStackInfo
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/TaskStackInfo';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.stack_free, info.stack_free] = ros.internal.ros2.messages.ros2.default_type('uint16',1,0);
[data.task_name, info.task_name] = ros.internal.ros2.messages.ros2.char('char',24,NaN,0);
[data.ORB_QUEUE_LENGTH, info.ORB_QUEUE_LENGTH] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 2, [NaN]);
info.MessageType = 'px4_msgs/TaskStackInfo';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'stack_free';
info.MatPath{3} = 'task_name';
info.MatPath{4} = 'ORB_QUEUE_LENGTH';
