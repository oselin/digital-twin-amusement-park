VERSION 12.6.1.12
SYSTYPE Conveyor
UNITS Meters Seconds
SYSDEF timeout 60 Seconds confname Config1
FLAGS
	System Inherit
	Text Inherit
	Sections Inherit
	Section Names Inherit
	Direction Inherit
	Fixed Interval Inherit
	Loads Inherit
	Stations Inherit
	Station Names Inherit
	Transfers Inherit
	Photoeyes Inherit
	Photoeye Names Inherit
	Center Line Invisible Inherit
CONVDEF UserId 6
	NEXTSEC name sec_220 type DefaultSection
	NEXTSTA name sta_roller_end4_0 type DefaultStation
	NEXTTRAN name tran167 type DefaultTransfer
	NEXTMOTOR name motor1 type DefaultMotor
	NEXTPHOTOEYE name photoeye1 type DefaultPhotoeye
	ALTERNATE NONE EXTRASECTIONWIDTH 0 Feet
CONVTOL minang 450 maxang 1350
CONVMOTORTYPE name DefaultMotor
CONVMOTOR name M_sec1 type DefaultMotor
CONVSECTIONTYPE name DefaultSection width 4 Feet color -1 motor M_sec1 vel 1 Feet Seconds acc 1 Feet Seconds Seconds dec 1 Feet Seconds Seconds accum load stopsize 1 0 Feet movesize 1 0 Feet inductsize 1 0 Feet nofixed align centered_in_interval attach rigid nav 1
CONVSECTION name sec3 type DefaultSection piece begx 54.864 begy 0.0 endx 48.768 endy 0.0 upz 1
CONVSECTION name sec4 type DefaultSection piece begx 42.672 begy 0.0 endx 38.3568 endy 0.0 upz 1
CONVSECTION name sec6 type DefaultSection piece begx 35.3568 begy -3 endx 35.3568 endy -7 upz 1
CONVSECTION name sec7 type DefaultSection piece cenx 38.3568 ceny -3 begx 38.3568 upz 1 angle 900
CONVSECTION name sec9 type DefaultSection piece begx 55 begy -10 endx 28 endy -10 upz 1
CONVSECTION name sec10 type DefaultSection piece cenx 32.3568 ceny -7 begx 35.3568 begy -7 upz 1 angle -900.000000000001
CONVSECTION name sec11 type DefaultSection piece begx 24 begy -10 endx 20 endy -10 upz 1
CONVSECTION name sec13 type DefaultSection piece begx -15 begy -50 endx -174.5 endy -50 upz 1
CONVSECTION name sec15 type DefaultSection piece begx -174.5 begy 42 endx -15 endy 42 upz 1
CONVSECTION name sec24 type DefaultSection piece cenx -15 ceny 22 begx -15 begy 42 upz 1 angle -900
CONVSECTION name sec25 type DefaultSection piece cenx -15 ceny -30 begx 5 begy -30 upz 1 angle -900
CONVSECTION name sec26 type DefaultSection piece cenx 20 ceny -25 begx 20 begy -10 upz 1 angle 900
CONVSECTION name sec28 type DefaultSection piece begx 20 begy 8 endx 55 endy 8 upz 1
CONVSECTION name sec29 type DefaultSection piece cenx 20 ceny 23 begx 5 begy 23 upz 1 angle 900
CONVSECTION name sec58 type DefaultSection piece begx -194.5 begy -30 endx -194.5 endy 22 upz 1
CONVSECTION name sec59 type DefaultSection piece cenx -174.5 ceny -30 begx -174.5 begy -50 upz 1 angle -900
CONVSECTION name sec60 type DefaultSection piece cenx -174.5 ceny 22 begx -194.5 begy 22 upz 1 angle -900
CONVSECTION name sec68 type DefaultSection piece cenx -23 ceny -52 begx -23 begy -50 upz 1 angle 900
CONVSECTION name sec69 type DefaultSection piece begx -33 begy -61 endx -31 endy -61 upz 1
 piece cenx -31 ceny -59 begx -31 begy -61 upz 1 angle 900
 piece begx -29 begy -59 endx -29 endy -52 upz 1
CONVSECTION name sec70 type DefaultSection piece begx -133 begy -62 endx -131 endy -62 upz 1
 piece cenx -131 ceny -60 begx -131 begy -62 upz 1 angle 900
 piece begx -129 begy -60 endx -129 endy -52 upz 1
CONVSECTION name sec71 type DefaultSection piece begx -225 begy 4 endx -196.5 endy 4 upz 1
CONVSECTION name sec72 type DefaultSection piece begx -155 begy 56 endx -157 endy 56 upz 1
 piece cenx -157 ceny 54 begx -157 begy 56 upz 1 angle 900
 piece begx -159 begy 54 endx -159 endy 44 upz 1
CONVSECTION name sec73 type DefaultSection piece begx -48 begy 58 endx -50 endy 58 upz 1
 piece cenx -50 ceny 56 begx -50 begy 58 upz 1 angle 900
 piece begx -52 begy 56 endx -52 endy 44 upz 1
CONVSECTION name sec74 type DefaultSection piece cenx -31 ceny -52 begx -29 begy -52 upz 1 angle 900
CONVSECTION name sec75 type DefaultSection piece cenx -115 ceny -52 begx -115 begy -50 upz 1 angle 899.999999999996
CONVSECTION name sec76 type DefaultSection piece cenx -122 ceny -52 begx -122 begy -50 upz 1 angle 900.000000000004
CONVSECTION name sec77 type DefaultSection piece cenx -131 ceny -52 begx -129 begy -52 upz 1 angle 900.000000000004
CONVSECTION name sec78 type DefaultSection piece cenx -196.5 ceny -15 begx -194.5 begy -15 upz 1 angle 900
CONVSECTION name sec79 type DefaultSection piece cenx -196.5 ceny -2 begx -194.5 begy -2 upz 1 angle 900.000000000001
CONVSECTION name sec80 type DefaultSection piece cenx -196.5 ceny 6 begx -196.5 begy 4 upz 1 angle 900.000000000001
CONVSECTION name sec81 type DefaultSection piece cenx -172 ceny 44 begx -172 begy 42 upz 1 angle 900
CONVSECTION name sec82 type DefaultSection piece cenx -166 ceny 44 begx -166 begy 42 upz 1 angle 900
CONVSECTION name sec83 type DefaultSection piece cenx -157 ceny 44 begx -159 begy 44 upz 1 angle 900
CONVSECTION name sec84 type DefaultSection piece cenx -50 ceny 44 begx -52 begy 44 upz 1 angle 900
CONVSECTION name sec85 type DefaultSection piece cenx -59 ceny 44 begx -59 begy 42 upz 1 angle 900
CONVSECTION name sec86 type DefaultSection piece cenx -65 ceny 44 begx -65 begy 42 upz 1 angle 900
CONVSECTION name sec89 type DefaultSection piece cenx -17.5 ceny -52 begx -17.5 begy -50 upz 1 angle 900
CONVSECTION name sec91 type DefaultSection piece begx -117 begy -52 endx -117 endy -61.5 upz 1
 piece cenx -115 ceny -61.5 begx -117 begy -61.5 upz 1 angle 900
 piece begx -115 begy -63.5 endx -95 endy -63.5 upz 1
 piece cenx -95 ceny -65.5 begx -95 begy -63.5 upz 1 angle -1800
 piece begx -95 begy -67.5 endx -115 endy -67.5 upz 1
 piece cenx -115 ceny -69.5 begx -115 begy -67.5 upz 1 angle 1800
 piece begx -115 begy -71.5 endx -95 endy -71.5 upz 1
 piece cenx -95 ceny -73.5 begx -95 begy -71.5 upz 1 angle -1800
 piece begx -95 begy -75.5 endx -130 endy -75.5 upz 1
CONVSECTION name sec93 type DefaultSection piece begx -19.5 begy -52 endx -19.5 endy -63 upz 1
 piece cenx -17.5 ceny -63 begx -19.5 begy -63 upz 1 angle 900
 piece begx -17.5 begy -65 endx 2.5 endy -65 upz 1
 piece cenx 2.5 ceny -67 begx 2.5 begy -65 upz 1 angle -1800
 piece begx 2.5 begy -69 endx -17.5 endy -69 upz 1
 piece cenx -17.5 ceny -71 begx -17.5 begy -69 upz 1 angle 1800
 piece begx -17.5 begy -73 endx 2.5 endy -73 upz 1
 piece cenx 2.5 ceny -75 begx 2.5 begy -73 upz 1 angle -1800
 piece begx 2.5 begy -77 endx -30 endy -77 upz 1
CONVSECTION name sec96 type DefaultSection piece begx -196.5 begy -13 endx -206.5 endy -13 upz 1
CONVSECTION name sec96_1 type DefaultSection piece cenx -206.5 ceny -15 begx -206.5 begy -13 upz 1 angle 900
CONVSECTION name sec96_2 type DefaultSection piece begx -208.5 begy -15 endx -208.5 endy -35 upz 1
CONVSECTION name sec96_3 type DefaultSection piece cenx -210.5 ceny -35 begx -208.5 begy -35 upz 1 angle -1800
CONVSECTION name sec96_4 type DefaultSection piece begx -212.5 begy -35 endx -212.5 endy -15 upz 1
CONVSECTION name sec96_5 type DefaultSection piece cenx -214.5 ceny -15 begx -212.5 begy -15 upz 1 angle 1800
CONVSECTION name sec96_6 type DefaultSection piece begx -216.5 begy -15 endx -216.5 endy -35 upz 1
CONVSECTION name sec96_7 type DefaultSection piece cenx -218.5 ceny -35 begx -216.5 begy -35 upz 1 angle -1800
CONVSECTION name sec96_8 type DefaultSection piece begx -220.5 begy -35 endx -220.5 endy -8 upz 1
CONVSECTION name sec96_9 type DefaultSection piece cenx -222.5 ceny -8 begx -220.5 begy -8 upz 1 angle 900
CONVSECTION name sec_roller3_0 type DefaultSection piece begx -222.5 begy -6 endx -225 endy -6 upz 1
CONVSECTION name sec98 type DefaultSection piece begx -170 begy 44 endx -170 endy 54 upz 1
 piece cenx -172 ceny 54 begx -170 begy 54 upz 1 angle 900
 piece begx -172 begy 56 endx -192 endy 56 upz 1
 piece cenx -192 ceny 58 begx -192 begy 56 upz 1 angle -1800
 piece begx -192 begy 60 endx -172 endy 60 upz 1
 piece cenx -172 ceny 62 begx -172 begy 60 upz 1 angle 1800
 piece begx -172 begy 64 endx -192 endy 64 upz 1
 piece cenx -192 ceny 66 begx -192 begy 64 upz 1 angle -1800
 piece begx -192 begy 68 endx -158 endy 68 upz 1
CONVSECTION name sec99 type DefaultSection piece begx -63 begy 44 endx -63 endy 54 upz 1
 piece cenx -65 ceny 54 begx -63 begy 54 upz 1 angle 900
 piece begx -65 begy 56 endx -85 endy 56 upz 1
 piece cenx -85 ceny 58 begx -85 begy 56 upz 1 angle -1800
 piece begx -85 begy 60 endx -65 endy 60 upz 1
 piece cenx -65 ceny 62 begx -65 begy 60 upz 1 angle 1800
 piece begx -65 begy 64 endx -85 endy 64 upz 1
 piece cenx -85 ceny 66 begx -85 begy 64 upz 1 angle -1800
 piece begx -85 begy 68 endx -51 endy 68 upz 1
CONVSECTION name sec_roller1 type DefaultSection piece begx -27 begy -70 endx -33 endy -70 upz 1
CONVSECTION name sec_roller2 type DefaultSection piece begx -126 begy -70 endx -133 endy -70 upz 1
CONVSECTION name sec102 type DefaultSection piece begx -196.5 begy 0.0 endx -221 endy 0.0 upz 1
CONVSECTION name sec_roller3 type DefaultSection piece begx -221 begy 0.0 endx -225 endy 0.0 upz 1
CONVSECTION name sec104 type DefaultSection piece begx -164 begy 44 endx -164 endy 60 upz 1
 piece cenx -162 ceny 60 begx -164 begy 60 upz 1 angle -900
 piece begx -162 begy 62 endx -160 endy 62 upz 1
CONVSECTION name sec_roller4 type DefaultSection piece begx -160 begy 62 endx -155 endy 62 upz 1
CONVSECTION name sec105 type DefaultSection piece begx -57 begy 44 endx -57 endy 61 upz 1
 piece cenx -55 ceny 61 begx -57 begy 61 upz 1 angle -900
 piece begx -55 begy 63 endx -52 endy 63 upz 1
CONVSECTION name sec_roller5 type DefaultSection piece begx -52 begy 63 endx -48 endy 63 upz 1
CONVSECTION name sec101 type DefaultSection piece begx -25 begy -52 endx -25 endy -68 upz 1
 piece cenx -27 ceny -68 begx -25 begy -68 upz 1 angle -900
CONVSECTION name sec103 type DefaultSection piece begx -124 begy -52 endx -124 endy -68 upz 1
 piece cenx -126 ceny -68 begx -124 begy -68 upz 1 angle -900
CONVSECTION name sec_roller1_0 type DefaultSection piece begx -30 begy -77 endx -33 endy -77 upz 1
CONVSECTION name sec_roller2_0 type DefaultSection piece begx -130 begy -75.5 endx -133 endy -75.5 upz 1
CONVSECTION name sec_roller4_0 type DefaultSection piece begx -158 begy 68 endx -155 endy 68 upz 1
CONVSECTION name sec_roller5_0 type DefaultSection piece begx -51 begy 68 endx -48 endy 68 upz 1
CONVSECTION name sec_216 type DefaultSection piece begx 5 begy 22 endx 5 endy -30 upz 1
CONVSTATIONTYPE name DefaultStation raise 0 Seconds lower 0 Seconds dist 0 Feet release norestriction align leading cap Infinite scale 1 color -1 nrot 0 nscale 1
CONVSTATION name sta_enter0 type DefaultStation at sec3 0.864
CONVSTATION name sta_enter1 type DefaultStation at sec9 1
CONVSTATION name sta_desk_in type DefaultStation at sec3 5.364
CONVSTATION name sta_desk_out type DefaultStation at sec4 0.672
CONVSTATION name sta_gate_in type DefaultStation at sec9 26.5
CONVSTATION name sta_gate_out type DefaultStation at sec11 0.5
CONVSTATION name sta_roller_in1_0 type DefaultStation at sec13 2
CONVSTATION name sta_roller_in1_1 type DefaultStation at sec13 8
CONVSTATION name sta_roller_out1 type DefaultStation at sec69 1
CONVSTATION name sta_roller_in2_0 type DefaultStation at sec13 100
CONVSTATION name sta_roller_in2_1 type DefaultStation at sec13 107
CONVSTATION name sta_roller_out2 type DefaultStation at sec70 0.5
CONVSTATION name sta_roller_out3 type DefaultStation at sec71 0.5
CONVSTATION name sta_roller_in4_0 type DefaultStation at sec15 2.5
CONVSTATION name sta_roller_in4_1 type DefaultStation at sec15 8.5
CONVSTATION name sta_roller_out4 type DefaultStation at sec72 0.5
CONVSTATION name sta_roller_out5 type DefaultStation at sec73 0.5
CONVSTATION name sta_roller_in5_0 type DefaultStation at sec15 109.5
CONVSTATION name sta_roller_in5_1 type DefaultStation at sec15 115.5
CONVSTATION name sta_out type DefaultStation at sec28 34.5
CONVSTATION name sta_roller_end1_0 type DefaultStation at sec_roller1_0 2.5
CONVSTATION name sta_roller_end2_0 type DefaultStation at sec_roller2_0 2.5
CONVSTATION name sta_roller_end4_0 type DefaultStation at sec_roller4_0 2.5
CONVSTATION name sta_roller_end5_0 type DefaultStation at sec_roller5_0 2.5
CONVSTATION name sta_roller_in3_0 type DefaultStation at sec78 3.14159265358979
CONVSTATION name sta_roller_end3_0 type DefaultStation at sec_roller3_0 2
CONVSTATION name sta_roller_end1_1 type DefaultStation at sec_roller1 5
CONVSTATION name sta_roller_end2_1 type DefaultStation at sec_roller2 6.5
CONVSTATION name sta_roller_end3_1 type DefaultStation at sec_roller3 3.5
CONVSTATION name sta_roller_in3_1 type DefaultStation at sec79 3.1415926535898
CONVSTATION name sta_roller_end4_1 type DefaultStation at sec_roller4 4.5
CONVSTATION name sta_roller_end5_1 type DefaultStation at sec_roller5 3.5
CONVPHOTOEYETYPE name DefaultPhotoeye blocktimeout 5 Seconds cleartimeout 5 Seconds
CONVTRANSFERTYPE name DefaultTransfer inductsize 1 0 Feet aheadinductsize 1 0 Feet speedadjust Origin starttime 0 Seconds finishtime 0 Seconds style double movemethod movesection
CONVTRANSFER name tran1 type DefaultTransfer from sec4 4.3152 to sec7 0
CONVTRANSFER name tran2 type DefaultTransfer from sec7 4.71238898038469 to sec6 0
CONVTRANSFER name tran5 type DefaultTransfer from sec6 4 to sec10 0
CONVTRANSFER name tran6 type DefaultTransfer from sec10 4.71238898038469 to sec9 22.6432
CONVTRANSFER name tran17 type DefaultTransfer from sec15 159.5 to sec24 0
CONVTRANSFER name tran19 type DefaultTransfer from sec25 31.4159265358979 to sec13 0
CONVTRANSFER name tran21 type DefaultTransfer from sec11 4 to sec26 0
CONVTRANSFER name tran23 type DefaultTransfer from sec24 30.4167586214591 to sec29 0
CONVTRANSFER name tran24 type DefaultTransfer from sec24 31.4159265358979 to sec29 0.998522456637357
CONVTRANSFER name tran25 type DefaultTransfer from sec29 23.5619449019234 to sec28 0
CONVTRANSFER name tran35 type DefaultTransfer from sec13 159.5 to sec59 0
CONVTRANSFER name tran36 type DefaultTransfer from sec59 31.4159265358979 to sec58 0
CONVTRANSFER name tran37 type DefaultTransfer from sec60 31.4159265358979 to sec15 0
CONVTRANSFER name tran38 type DefaultTransfer from sec58 52 to sec60 0
CONVTRANSFER name tran42 type DefaultTransfer from sec13 8 to sec68 0
CONVTRANSFER name tran44 type DefaultTransfer from sec74 3.14159265358979 to sec13 16
CONVTRANSFER name tran45 type DefaultTransfer from sec69 12.1415926535898 to sec74 0
CONVTRANSFER name tran46 type DefaultTransfer from sec13 100 to sec75 0
CONVTRANSFER name tran48 type DefaultTransfer from sec13 107 to sec76 0
CONVTRANSFER name tran50 type DefaultTransfer from sec77 3.14159265358981 to sec13 116
CONVTRANSFER name tran51 type DefaultTransfer from sec70 13.1415926535898 to sec77 0
CONVTRANSFER name tran52 type DefaultTransfer from sec58 15 to sec78 0
CONVTRANSFER name tran54 type DefaultTransfer from sec58 28 to sec79 0
CONVTRANSFER name tran56 type DefaultTransfer from sec80 3.1415926535898 to sec58 36
CONVTRANSFER name tran57 type DefaultTransfer from sec71 28.5 to sec80 0
CONVTRANSFER name tran58 type DefaultTransfer from sec15 2.5 to sec81 0
CONVTRANSFER name tran60 type DefaultTransfer from sec15 8.5 to sec82 0
CONVTRANSFER name tran62 type DefaultTransfer from sec83 3.14159265358979 to sec15 17.5
CONVTRANSFER name tran63 type DefaultTransfer from sec72 15.1415926535898 to sec83 0
CONVTRANSFER name tran64 type DefaultTransfer from sec84 3.14159265358979 to sec15 124.5
CONVTRANSFER name tran65 type DefaultTransfer from sec73 17.1415926535898 to sec84 0
CONVTRANSFER name tran66 type DefaultTransfer from sec15 115.5 to sec85 0
CONVTRANSFER name tran68 type DefaultTransfer from sec15 109.5 to sec86 0
CONVTRANSFER name tran71 type DefaultTransfer from sec13 2.5 to sec89 0
CONVTRANSFER name tran74 type DefaultTransfer from sec75 3.14159265358978 to sec91 0
CONVTRANSFER name tran76 type DefaultTransfer from sec89 3.14159265358979 to sec93 0
CONVTRANSFER name tran79 type DefaultTransfer from sec78 3.14159265358979 to sec96 0
CONVTRANSFER name tran81 type DefaultTransfer from sec96_8 27 to sec96_9 0
CONVTRANSFER name tran82 type DefaultTransfer from sec96_7 6.28318530717958 to sec96_8 0
CONVTRANSFER name tran83 type DefaultTransfer from sec96_6 20 to sec96_7 0
CONVTRANSFER name tran84 type DefaultTransfer from sec96_5 6.28318530717958 to sec96_6 0
CONVTRANSFER name tran85 type DefaultTransfer from sec96_4 20 to sec96_5 0
CONVTRANSFER name tran86 type DefaultTransfer from sec96_3 6.28318530717958 to sec96_4 0
CONVTRANSFER name tran87 type DefaultTransfer from sec96_2 20 to sec96_3 0
CONVTRANSFER name tran88 type DefaultTransfer from sec96_1 3.14159265358979 to sec96_2 0
CONVTRANSFER name tran89 type DefaultTransfer from sec96 10 to sec96_1 0
CONVTRANSFER name tran90 type DefaultTransfer from sec96_9 3.14159265358979 to sec_roller3_0 0
CONVTRANSFER name tran92 type DefaultTransfer from sec81 3.14159265358979 to sec98 0
CONVTRANSFER name tran93 type DefaultTransfer from sec86 3.14159265358979 to sec99 0
CONVTRANSFER name tran101 type DefaultTransfer from sec79 3.1415926535898 to sec102 0
CONVTRANSFER name tran102 type DefaultTransfer from sec102 24.5 to sec_roller3 0
CONVTRANSFER name tran103 type DefaultTransfer from sec82 3.14159265358979 to sec104 0
CONVTRANSFER name tran104 type DefaultTransfer from sec104 21.1415926535898 to sec_roller4 0
CONVTRANSFER name tran105 type DefaultTransfer from sec85 3.14159265358979 to sec105 0
CONVTRANSFER name tran106 type DefaultTransfer from sec105 23.1415926535898 to sec_roller5 0
CONVTRANSFER name tran107 type DefaultTransfer from sec68 3.14159265358979 to sec101 0
CONVTRANSFER name tran108 type DefaultTransfer from sec101 19.1415926535898 to sec_roller1 0
CONVTRANSFER name tran109 type DefaultTransfer from sec76 3.14159265358981 to sec103 0
CONVTRANSFER name tran110 type DefaultTransfer from sec103 19.1415926535898 to sec_roller2 0
CONVTRANSFER name tran119 type DefaultTransfer from sec93 125.491148575129 to sec_roller1_0 0
CONVTRANSFER name tran120 type DefaultTransfer from sec91 126.491148575129 to sec_roller2_0 0
CONVTRANSFER name tran121 type DefaultTransfer from sec98 125.991148575129 to sec_roller4_0 0
CONVTRANSFER name tran122 type DefaultTransfer from sec99 125.991148575129 to sec_roller5_0 0
CONVTRANSFER name tran158 type DefaultTransfer from sec24 31.4159265358979 to sec_216 0
CONVTRANSFER name tran159 type DefaultTransfer from sec_216 52 to sec25 0
CONVTRANSFER name tran160 type DefaultTransfer from sec26 23.5619449019234 to sec_216 47
CONVTRANSFER name tran161 type DefaultTransfer from sec29 0.998522456637357 to sec_216 0
