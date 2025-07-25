function [data, info] = messageFormatResponse
%MessageFormatResponse gives an empty data for px4_msgs/MessageFormatResponse
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/MessageFormatResponse';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.protocol_version, info.protocol_version] = ros.internal.ros2.messages.ros2.default_type('uint16',1,0);
[data.topic_name, info.topic_name] = ros.internal.ros2.messages.ros2.char('char',50,NaN,0);
[data.success, info.success] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
[data.message_hash, info.message_hash] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
info.MessageType = 'px4_msgs/MessageFormatResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'protocol_version';
info.MatPath{3} = 'topic_name';
info.MatPath{4} = 'success';
info.MatPath{5} = 'message_hash';
