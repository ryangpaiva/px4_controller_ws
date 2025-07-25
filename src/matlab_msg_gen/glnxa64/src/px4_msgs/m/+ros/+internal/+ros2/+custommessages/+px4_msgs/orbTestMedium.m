function [data, info] = orbTestMedium
%OrbTestMedium gives an empty data for px4_msgs/OrbTestMedium
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/OrbTestMedium';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.val, info.val] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.junk, info.junk] = ros.internal.ros2.messages.ros2.default_type('uint8',64,0);
[data.ORB_QUEUE_LENGTH, info.ORB_QUEUE_LENGTH] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 16, [NaN]);
info.MessageType = 'px4_msgs/OrbTestMedium';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'val';
info.MatPath{3} = 'junk';
info.MatPath{4} = 'ORB_QUEUE_LENGTH';
