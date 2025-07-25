function [data, info] = cameraTrigger
%CameraTrigger gives an empty data for px4_msgs/CameraTrigger
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/CameraTrigger';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.timestamp_utc, info.timestamp_utc] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.seq, info.seq] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.feedback, info.feedback] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.ORB_QUEUE_LENGTH, info.ORB_QUEUE_LENGTH] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0, 2, [NaN]);
info.MessageType = 'px4_msgs/CameraTrigger';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'timestamp_utc';
info.MatPath{3} = 'seq';
info.MatPath{4} = 'feedback';
info.MatPath{5} = 'ORB_QUEUE_LENGTH';
