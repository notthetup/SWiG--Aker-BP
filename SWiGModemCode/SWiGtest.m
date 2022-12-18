tx_path = fileparts(mfilename('fullpath'));
addpath([tx_path '/plugins']);


RateCode = 4;
FcCode = 4;

FsPassband = 96000;

baseparams.verbose = 1;
baseparams.stream_fs = FsPassband;
baseparams.packet_app_data = char(zeros(1,0,'uint64'));
baseparams.stream_passband = 1;
params = parameters(baseparams);
[passband, baseband, tx_pkt, tx_state] = swig_tx(RateCode, FcCode, ...
    params);

% Write output.
audiowrite('test_swig.wav', passband, FsPassband);

[rx_pkt, rx_state] = swig_rx(RateCode, FcCode, params,passband);
    

