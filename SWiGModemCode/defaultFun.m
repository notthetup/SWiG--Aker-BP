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

function defaults = defaultFun

% Version of JANUS Matlab implementation.
defaults.JANUS_M_VERSION = '3.0.5';
% JANUS version.
defaults.JANUS_VERSION = uint64(3);
% JANUS Reference Implementation Class Id.
defaults.JANUS_RI_CLASS_ID = 16;
% Minimum number of bits in a packet.
defaults.PKT_MIN_NBIT = 64;
% Alphabet size.
defaults.ALPHABET_SIZE = 2;
% Standard number of frequencies used by a chip.
defaults.CHIP_NFRQ = 13;
% Gap after wake-up tones (s).
defaults.WUT_GAP = 0.4;
% Length of wake-up tones in chips.
defaults.NCHIP_WUT = 4;
% Convolutional encoder: constraint length.
defaults.CONV_ENC_CLEN = 9;
% Convolutional encoder: code generator.
defaults.CONV_ENC_CGEN = [753 561];
% Convolutional encoder: memory.
defaults.CONV_ENC_MEM = 8;
% JANUS CRC8 polynomial: 0x07.
defaults.CRC_POLY = 7;
% List of common sampling frequencies.
defaults.COMMON_FS = [22050 44100 48000 96000 192000];
% Number of chips used for padding.
defaults.PAD_NCHIP = 5;
% JANUS maximum optional packet cargo size in bytes.
defaults.JANUS_MAX_PKT_CRG_SIZE = 4096;