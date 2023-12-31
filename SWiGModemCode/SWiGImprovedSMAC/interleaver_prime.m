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
%| Author: Dale Green                                                     |
%+------------------------------------------------------------------------+
%
% INTERLEAVER_PRIME Find a prime number.
%
% This routine is set to find the lowest prime number, above a user-set
% minimum 'k', which is not a factor 'data_len'.
%
% Inputs:
%   data_len  Length of the interleaved sequence.
%   k         Minimum.
%
% Outputs:
%   prime     Prime number.
%
% See also interleaver, deinterleaver.
%

function prime = interleaver_prime(data_len, k)
    if (nargin < 2)
        k = 5;
    end

    done = 0;

    %initialize for coder
    testp = 2;

    while done == 0
        testp = max(primes(k));
        if ((data_len / testp < testp) && rem(data_len, testp) ~= 0)
            done = 1;
        end
        k = k + 1;
    end
    
    prime = testp;
end
