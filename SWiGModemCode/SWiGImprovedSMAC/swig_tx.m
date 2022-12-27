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
%| Author: Ricardo Martins                                                |
%+------------------------------------------------------------------------+
%
% SIMPLE_TX Simplified interface to generate a JANUS waveform.
%
% Inputs:
%    pset_file  Parameter set file (CSV).
%    pset_id    Parameter set Id.
%    varargin   Optional parameters.
%
% Outputs:
%    pkt        Encoded packet.
%    state      Structure with info from the encoder.
%
% See also TX, PARAMETERS.
%

function [passband, bband, pkt, state] = swig_tx(Rate_value, Fc_value, params)

    if (nargin < 2)
        error('This function requires at least 2 arguments.');
    end


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



    % Choose the minimum suitable sampling frequency
    % if none is given.
    min_fs = pset.bwidth * 1.1;
    if (params.stream_passband)
        min_fs = min_fs + pset.cfreq * 2.2;
    end
    if (params.stream_fs == 0)
        error('must supply passband sample rate');
    end

    if (params.stream_fs < min_fs)
        error('sampling frequency is too low');
    end

    % Generate baseband signal.
    [bband, pkt, state] = tx(pset, params.stream_fs, params);

    % Pad signal if needed.
    if (params.stream_mul)
        l = length(bband);
        m = rem(l, params.stream_mul);
        if (m ~= 0)
            pad = zeros(params.stream_mul - m, 1);
            bband = [bband; pad];
        end
    end

    % Convert to passband if needed.
    if (params.stream_passband)
        fs = params.stream_fs;
        t = 0 : 1 / fs : (length(bband) - 1) / fs;
        signal = real(bband .* exp(1j * 2 * pi * pset.cfreq .* t'));
    else
        signal = [real(bband) imag(bband)];
    end

    % Apply amplitude factor.
    signal = signal * params.stream_amp;

    % If multichannel
    if (params.stream_channels > 1)
        signalc = signal;
        signal = zeros(length(signalc), params.stream_channels);
        signal(:, params.stream_channel + 1) = signalc;
    end

    passband = signal;
    
end
