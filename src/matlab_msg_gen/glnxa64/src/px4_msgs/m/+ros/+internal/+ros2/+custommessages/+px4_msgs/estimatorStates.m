function [data, info] = estimatorStates
%EstimatorStates gives an empty data for px4_msgs/EstimatorStates
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/EstimatorStates';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.timestamp_sample, info.timestamp_sample] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.states, info.states] = ros.internal.ros2.messages.ros2.default_type('single',25,0);
[data.n_states, info.n_states] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.covariances, info.covariances] = ros.internal.ros2.messages.ros2.default_type('single',24,0);
info.MessageType = 'px4_msgs/EstimatorStates';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'timestamp_sample';
info.MatPath{3} = 'states';
info.MatPath{4} = 'n_states';
info.MatPath{5} = 'covariances';
