tx_path = fileparts(mfilename('fullpath'));
addpath([tx_path '/plugins']);

%add two non-intersecting rate/fc and decode both


%low end, fairly low bitrate
RateCode1 = 2;
FcCode1 = 2;

FsPassband = 96000;

baseparams.verbose = 1;
baseparams.stream_fs = FsPassband;
baseparams.packet_app_data = char(zeros(1,0,'uint64'));
baseparams.stream_passband = 1;
params = parameters(baseparams);
[passband1, baseband, tx_pkt, tx_state] = swig_tx(RateCode1, FcCode1, ...
    params);

%second one
RateCode2 = 2;
FcCode2 = 7;


[passband2, baseband2, tx_pkt2, tx_state2] = swig_tx(RateCode2, FcCode2, ...
    params);

passband = passband1 + passband2;

[rx_pkt1, rx_state1] = swig_rx(RateCode1, FcCode1, params,passband);
[rx_pkt2, rx_state2] = swig_rx(RateCode2, FcCode2,params,passband);
    

