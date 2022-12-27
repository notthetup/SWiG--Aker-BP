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
%| Authors: Ricardo Martins, Luigi Elia D'Amaro                           |
%+------------------------------------------------------------------------+
%
% PARAMETERS Retrieve JANUS parameters.
%
%   PARAMETERS() returns a structure with the required default
%   parameters to encode/decode a JANUS compliant waveform.
%
%   PARAMETERS(args) adds all the missing parameters to structure
%   'args'. These parameters are initialized to default JANUS
%   compliant values.
%
%   The user may modify the fields of the returned structure to change
%   the format of the generated waveform and finetune the behaviour
%   of the encoder/decoder. Waveforms generated using user-defined
%   parameters might not be JANUS compliant.
%
% Inputs:
%    iargs     Structure containing parameters.
%
% Outputs:
%    oargs     Structure containing all valid JANUS parameters.
%

function oargs = parameters(iargs)

if (nargin < 1)
    iargs = [];
end

oargs = defaultParameters;

if isempty(iargs)
    return;
end

fields=fieldnames(iargs);
for i=1:length(fields)
%     oargs = setfield(oargs,fields{i},getfield(iargs,fields{i}));
    oargs.(fields{i}) = iargs.(fields{i});
end

oargs.c32_sequence = de2bi(hex2dec(oargs.sequence_32_chips), 32, 'left-msb');

% Chip length dyadic exponent.
if (oargs.chip_len_exp < 0)
    oargs.chip_len_exp = 0;
end
oargs.pset_chip_len_mul = 2 ^ fix(oargs.chip_len_exp);

% Stream parameters.

% Stream: Driver (wav, mat, mem).

% Stream: Driver Arguments.

% Stream: Sampling Frequency (Hz). Zero means 'choose the first
% suitable sampling frequency from a list of common frequencies'.

% Stream: Format (U8, S16, S24, FLOAT).

% Stream: Bits per sample.
switch (oargs.stream_format)
    case 'U8'
        oargs.stream_bps = 8;
    case 'S16'
        oargs.stream_bps = 16;
    case 'S24'
        oargs.stream_bps = 24;
    case 'FLOAT'
        oargs.stream_bps = 32;
    otherwise
        error('janus:parameters:inv_stream', 'unsupported stream format');
end

% Stream: Passband or Baseband Signal.

% Stream: Number of channels

% Stream: Channel to use

% Stream: amplitude factor.

% Stream: force number of output samples to be a multiple
% of a given number.

% Tx parameters.

% Rx parameters.

% Doppler correction: enabled/disabled.
end

function oargs = defaultParameters
defaults = defaultFun;
% Verbose: vebosity level.
oargs.verbose = 0;

% Initial fixed sequence of 32 chips (hex).
sequence_32_chips = 'AEC7CD20'; %10101110110001111100110100100000
oargs.sequence_32_chips = sequence_32_chips;
oargs.c32_sequence = de2bi(hex2dec(sequence_32_chips), 32, 'left-msb');

% Chip length dyadic exponent.
chip_len_exp = 0;
if (chip_len_exp < 0)
    chip_len_exp = 0;
end
oargs.chip_len_exp = chip_len_exp;
oargs.pset_chip_len_mul = 2 ^ fix(chip_len_exp);

% Stream parameters.

% Stream: Driver (wav, mat, mem).
stream_driver = 'wav';
oargs.stream_driver = stream_driver;

% Stream: Driver Arguments.
switch (stream_driver)
    case 'wav'
        oargs.stream_driver_args = 'janus.wav';
    case 'mat'
        oargs.stream_driver_args = 'janus.mat';
end

% Stream: Sampling Frequency (Hz). Zero means 'choose the first
% suitable sampling frequency from a list of common frequencies'.
oargs.stream_fs = 0;

% Stream: Format (U8, S16, S24, FLOAT).
stream_format = 'S16';
oargs.stream_format = stream_format;

% Stream: Bits per sample.
switch (stream_format)
    case 'U8'
        oargs.stream_bps = 8;
    case 'S16'
        oargs.stream_bps = 16;
    case 'S24'
        oargs.stream_bps = 24;
    case 'FLOAT'
        oargs.stream_bps = 32;
    otherwise
        error('janus:parameters:inv_stream', 'unsupported stream format');
end

% Stream: Passband or Baseband Signal.
oargs.stream_passband = 1;

% Stream: Number of channels
oargs.stream_channels = 1;

% Stream: Channel to use
oargs.stream_channel = 0;

% Stream: amplitude factor.
oargs.stream_amp = 0.95;

% Stream: force number of output samples to be a multiple
% of a given number.
oargs.stream_mul = 0;

% Tx parameters.

% Padding: enabled/disabled.
oargs.pad = 1;

% Wake Up Tones: enabled/disabled.
oargs.wut = 0;

% Packet: Mobility Flag.
oargs.packet_mobility = uint64(0);

% Packet: Tx/Rx Flag.
oargs.packet_tx_rx = 1;

% Packet: Forwarding Capability.
oargs.packet_forward = 0;

% Packet: Class User Identifier.
oargs.packet_class_id = defaults.JANUS_RI_CLASS_ID;

% Packet: Application Type.
oargs.packet_app_type = 0;

% Packet: Reservation Time.
oargs.packet_reserv_time = 0.0;

% Packet: Repeat Interval.
oargs.packet_repeat_int = 0.0;

% Packet: Application Data.
oargs.packet_app_data = '';

% Packet: Application Data Fields.
oargs.packet_app_fields = [];


% Rx parameters.

% Doppler correction: enabled/disabled.
oargs.doppler_correction = 1;

% Doppler correction: maximum speed [m/s].
oargs.doppler_max_speed = 5;
end
