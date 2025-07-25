function [data, info] = logMessage
%LogMessage gives an empty data for px4_msgs/LogMessage
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/LogMessage';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.severity, info.severity] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.text, info.text] = ros.internal.ros2.messages.ros2.char('char',127,NaN,0);
[data.ORB_QUEUE_LENGTH, info.ORB_QUEUE_LENGTH] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 4, [NaN]);
info.MessageType = 'px4_msgs/LogMessage';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'severity';
info.MatPath{3} = 'text';
info.MatPath{4} = 'ORB_QUEUE_LENGTH';
