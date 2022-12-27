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
%| Author: Luigi Elia D'Amaro                                             |
%+------------------------------------------------------------------------+
%
% PACKET_TX_RESERVATION_TIME_TABLE
%
% Return a lookup table containing the allowed transmit reservation times
% (in seconds).
%
% Outputs:
%   table    Lookup table.
%
% See also PACKET_TX_INTERVAL_LOOKUP_VALUE, PACKET_TX_INTERVAL_LOOKUP_INDEX.
%

function table = packet_tx_reservation_time_table()
    table = [   0.00332110 %   0   00:00:00.003321100
                0.00365321 %   1   00:00:00.003653210
                0.00401853 %   2   00:00:00.004018530
                0.00442038 %   3   00:00:00.004420380
                0.00486242 %   4   00:00:00.004862420
                0.00534866 %   5   00:00:00.005348660
                0.00588353 %   6   00:00:00.005883530
                0.00647188 %   7   00:00:00.006471880
                0.00711907 %   8   00:00:00.007119070
                0.00783098 %   9   00:00:00.007830980
                0.00861408 %  10   00:00:00.008614080
                0.00947549 %  11   00:00:00.009475490
                0.01042303 %  12   00:00:00.010423030
                0.01146534 %  13   00:00:00.011465340
                0.01261187 %  14   00:00:00.012611870
                0.01387306 %  15   00:00:00.013873060
                0.01526036 %  16   00:00:00.015260360
                0.01678640 %  17   00:00:00.016786400
                0.01846504 %  18   00:00:00.018465040
                0.02031155 %  19   00:00:00.020311550
                0.02234270 %  20   00:00:00.022342700
                0.02457697 %  21   00:00:00.024576970
                0.02703467 %  22   00:00:00.027034670
                0.02973813 %  23   00:00:00.029738130
                0.03271195 %  24   00:00:00.032711950
                0.03598314 %  25   00:00:00.035983140
                0.03958146 %  26   00:00:00.039581460
                0.04353960 %  27   00:00:00.043539600
                0.04789356 %  28   00:00:00.047893560
                0.05268292 %  29   00:00:00.052682920
                0.05795121 %  30   00:00:00.057951210
                0.06374633 %  31   00:00:00.063746330
                0.07012096 %  32   00:00:00.070120960
                0.07713306 %  33   00:00:00.077133060
                0.08484637 %  34   00:00:00.084846370
                0.09333100 %  35   00:00:00.093331000
                0.10266410 %  36   00:00:00.102664100
                0.11293051 %  37   00:00:00.112930510
                0.12422357 %  38   00:00:00.124223570
                0.13664592 %  39   00:00:00.136645920
                0.15031051 %  40   00:00:00.150310510
                0.16534157 %  41   00:00:00.165341570
                0.18187572 %  42   00:00:00.181875720
                0.20006329 %  43   00:00:00.200063290
                0.22006962 %  44   00:00:00.220069620
                0.24207659 %  45   00:00:00.242076590
                0.26628424 %  46   00:00:00.266284240
                0.29291267 %  47   00:00:00.292912670
                0.32220394 %  48   00:00:00.322203940
                0.35442433 %  49   00:00:00.354424330
                0.38986676 %  50   00:00:00.389866760
                0.42885344 %  51   00:00:00.428853440
                0.47173878 %  52   00:00:00.471738780
                0.51891266 %  53   00:00:00.518912660
                0.57080393 %  54   00:00:00.570803930
                0.62788432 %  55   00:00:00.627884320
                0.69067275 %  56   00:00:00.690672750
                0.75974002 %  57   00:00:00.759740020
                0.83571403 %  58   00:00:00.835714030
                0.91928543 %  59   00:00:00.919285430
                1.00000000 %  60   00:00:01.000000000
                1.11233537 %  61   00:00:01.112335370
                1.22356891 %  62   00:00:01.223568910
                1.34592580 %  63   00:00:01.345925800
                1.48051838 %  64   00:00:01.480518380
                1.62857022 %  65   00:00:01.628570220
                1.79142724 %  66   00:00:01.791427240
                1.97056996 %  67   00:00:01.970569960
                2.16762696 %  68   00:00:02.167626960
                2.38438965 %  69   00:00:02.384389650
                2.62282862 %  70   00:00:02.622828620
                2.88511148 %  71   00:00:02.885111480
                3.17362263 %  72   00:00:03.173622630
                3.49098489 %  73   00:00:03.490984890
                3.84008338 %  74   00:00:03.840083380
                4.22409172 %  75   00:00:04.224091720
                4.64650089 %  76   00:00:04.646500890
                5.11115098 %  77   00:00:05.111150980
                5.62226608 %  78   00:00:05.622266080
                6.18449268 %  79   00:00:06.184492680
                6.80294195 %  80   00:00:06.802941950
                7.48323615 %  81   00:00:07.483236150
                8.23155976 %  82   00:00:08.231559760
                9.05471574 %  83   00:00:09.054715740
               10.00000000 %  84   00:00:10.000000000
               10.95620604 %  85   00:00:10.956206040
               12.05182665 %  86   00:00:12.051826650
               13.25700931 %  87   00:00:13.257009310
               14.58271024 %  88   00:00:14.582710240
               16.04098127 %  89   00:00:16.040981270
               17.64507940 %  90   00:00:17.645079400
               19.40958734 %  91   00:00:19.409587340
               21.35054607 %  92   00:00:21.350546070
               23.48560068 %  93   00:00:23.485600680
               25.83416074 %  94   00:00:25.834160740
               28.41757682 %  95   00:00:28.417576820
               31.25933450 %  96   00:00:31.259334500
               34.38526795 %  97   00:00:34.385267950
               37.82379475 %  98   00:00:37.823794750
               41.60617422 %  99   00:00:41.606174220
               45.76679164 % 100   00:00:45.766791640
               50.34347081 % 101   00:00:50.343470810
               55.37781789 % 102   00:00:55.377817890
               60.00000000 % 103   00:01:00.000000000
               67.00715964 % 104   00:01:07.007159640
               73.70787561 % 105   00:01:13.707875610
               81.07866317 % 106   00:01:21.078663170
               89.18652948 % 107   00:01:29.186529480
               98.10518243 % 108   00:01:38.105182430
              107.91570068 % 109   00:01:47.915700680
              118.70727074 % 110   00:01:58.707270740
              130.57799782 % 111   00:02:10.577997820
              143.63579760 % 112   00:02:23.635797600
              157.99937736 % 113   00:02:37.999377360
              173.79931510 % 114   00:02:53.799315100
              191.17924661 % 115   00:03:11.179246610
              210.29717127 % 116   00:03:30.297171270
              231.32688839 % 117   00:03:51.326888390
              254.45957723 % 118   00:04:14.459577230
              279.90553496 % 119   00:04:39.905534960
              307.89608845 % 120   00:05:07.896088450
              338.68569730 % 121   00:05:38.685697300
              372.55426703 % 122   00:06:12.554267030
              409.80969373 % 123   00:06:49.809693730
              450.79066310 % 124   00:07:30.790663100
              495.86972941 % 125   00:08:15.869729410
              545.45670235 % 126   00:09:05.456702350
              600.00000000 % 127   00:10:00.000000000
            ];
end