%+------------------------------------------------------------------------+
%| SWiG extended is a simple, robust, open standard signalling method for |
%| underwater communications. Based on JANUS physical layer |
%+------------------------------------------------------------------------+

%Modified from original JANUS 3.0.5 code for compatibility with Matlab
%Coder and extensible time/frequency scaling SWiG


%+------------------------------------------------------------------------+
%| JANUS is a simple, robust, open standard signalling method for         |
%| underwater communications. See <http://www.januswiki.org> for details. |
%+------------------------------------------------------------------------+
%| Example software implementations provided by STO CMRE are subject to   |
%| Copyright (C) 2008-2018 STO Centre for Maritime Research and           |
%| Experimentation (CMRE)                                                 |
%|                                                                        |
%| This is free software: you can redistribute it and/or modify it        |
%| under the terms of the GNU General Public License version 3 as         |
%| published by the Free Software Foundation.                             |
%|                                                                        |
%| This program is distributed in the hope that it will be useful, but    |
%| WITHOUT ANY WARRANTY; without even the implied warranty of FITNESS     |
%| FOR A PARTICULAR PURPOSE. See the GNU General Public License for       |
%| more details.                                                          |
%|                                                                        |
%| You should have received a copy of the GNU General Public License      |
%| along with this program. If not, see <http://www.gnu.org/licenses/>.   |
%+------------------------------------------------------------------------+
%| Authors: Ricardo Martins, Giovanni Zappa, Luigi Elia D'Amaro           |
%+------------------------------------------------------------------------+
%
% SIMPLE_RX Simplified interface to decode a JANUS waveform.
%
% Inputs:
%    pset_file  Parameter set file (CSV).
%    pset_id    Parameter set Id.
%    varargin   Optional parameters.
%
% Outputs:
%    pkt        Decoded packet.
%    state      Structure with info from the decoder.
%    
% See also RX, TX, SIMPLE_TX, PARAMETERS.
%

function [pkt, state] = swig_rx(Rate_value, Fc_value, params, signalIn)
    if (nargin < 2)
        error('This function requires at least 2 arguments.');
    end

    bband = [];
    pband = [];
    
  
    % Load parameter set configuration.
    pset.id = 1;  %required
    pset.name = 'SWiG time/frequency scaling';
    pset.prim_q = 13;
    pset.prim_a = 2;
    pset.nblock = 12;

    %time-frequency scaling
    switch Fc_value
        case 0
            pset.cfreq = 18795;
        case 1
            pset.cfreq = 19640;
        case 2
            pset.cfreq = 20485;
        case 3
            pset.cfreq = 21330;
        case 4
            pset.cfreq = 23465;
        case 5
            pset.cfreq = 24310;
        case 6
            pset.cfreq = 25155;
        case 7
            pset.cfreq = 26000;
        otherwise
            pset.cfreq = 26000;
    end

    switch Rate_value
        case 0
            Fsw = 65;
        case 1
            Fsw = 130;
        case 2
            Fsw = 195;
        case 3
            Fsw = 260;
        case 4
            Fsw = 325;
        case 5
            Fsw = 390;
        case 6
            Fsw = 455;
        case 7
            Fsw = 520;
        otherwise
            Fsw = 520;
    end

    pset.chip_frq = Fsw;
    pset.chip_dur = 1.0 / Fsw;
    pset.bwidth = 26 * Fsw;


    
    pband_fs = params.stream_fs;
    bband_fs = params.stream_fs;
    if (params.stream_passband)
        params.stream_fs = pband_fs;
        pband = signalIn;
        if (params.stream_channels > 1)
            pband = pband(:, params.stream_channel + 1);
        end
        [bband, bband_fs] = ddc(pband, pband_fs, pset.cfreq, pset.bwidth, params);
    else
        params.stream_fs = bband_fs;
        bband = complex(signalIn(:, 1), signalIn(:, 2));
    end

    [pkt, pkt_bytes, state] = rx(pset, bband, bband_fs, params);
    
    if (params.stream_passband)
        state.after = state.after + (1024 - 128) / pband_fs;
    end

end
