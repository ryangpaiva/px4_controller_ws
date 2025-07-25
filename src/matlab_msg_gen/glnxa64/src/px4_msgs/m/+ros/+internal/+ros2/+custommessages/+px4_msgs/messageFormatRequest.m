function [data, info] = messageFormatRequest
%MessageFormatRequest gives an empty data for px4_msgs/MessageFormatRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/MessageFormatRequest';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.LATEST_PROTOCOL_VERSION, info.LATEST_PROTOCOL_VERSION] = ros.internal.ros2.messages.ros2.default_type('uint16',1,0, 1, [NaN]);
[data.protocol_version, info.protocol_version] = ros.internal.ros2.messages.ros2.default_type('uint16',1,0);
[data.topic_name, info.topic_name] = ros.internal.ros2.messages.ros2.char('char',50,NaN,0);
info.MessageType = 'px4_msgs/MessageFormatRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'LATEST_PROTOCOL_VERSION';
info.MatPath{3} = 'protocol_version';
info.MatPath{4} = 'topic_name';
