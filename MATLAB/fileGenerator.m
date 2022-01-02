close all;
clear all;
clc;

%% MACROS
%GARDALAND OPENING HOURS: from 08:00 to 23:00
%We have 15 hours -> 54k seconds
mySeconds = 54000;
%noon tickets start from 17:00
NOON = 32400;
%Total number of people in a day
TOT_PEOP = 3000;
TIME_INTERVAL = 10;
graphicsEnabled = 0;
NUM = 7;
NUM_TOT = 10;

%% 1st Beta distribution [DAILY TICKETS]
% A beta distribution is defined only in the [0,1] interval
% I choose the time step of 1/mySeconds+considering people arriving each 10 sec
time = 0:TIME_INTERVAL/mySeconds:1;
beta1 = betapdf(time, 2,7);

%% 2nd Beta distribution [NOON TICKETS]
beta2 = betapdf(time,1.2,4);

%% Let's scale the timeframe to the real one
time = time*mySeconds;

%% Let's see how the two distributions look like
if graphicsEnabled
    figure(1);
    plot(time, beta1); hold on;
    plot(time+NOON, beta2);
    xline(NOON);
    xline(mySeconds);
    hold off;
end

%% Merge the curves in one array
mybetadistr = [beta1(1:NOON/TIME_INTERVAL) beta2(1:(mySeconds - NOON)/TIME_INTERVAL+1)];
if graphicsEnabled
    figure(2)
    plot(time, mybetadistr);
end

%% Get the scale factor
% Let's suppose in a day Gardaland has TOT_PEOP visitors. The integral (total
% number of people should be rescaled to TOT_PEOP
integ=trapz(mybetadistr);
scaleFactor = TOT_PEOP/integ;

% Therefore the total number of incoming people at each timestep is
mybetadistr=ceil(mybetadistr*scaleFactor);
mypeak = max(mybetadistr) + 1;
%% Generating the table
N = sum(mybetadistr);
index = 1;
same_time = 0;
t        = zeros(N,1);
ID       = zeros(N,1);
TICKET   = zeros(N,1);
ROLLER   = zeros(N,NUM_TOT);
PRIORITY = zeros(N,NUM_TOT);
for row = 1:N
    while (mybetadistr(index)<1)
        index = index + 1;
        same_time = 0;
    end
    t(row)  = time(index) + same_time*(1/mypeak) ;
    ID(row) = row;
    [TICKET(row), ROLLER(row,:), PRIORITY(row,:)] = featuresGenerator(NUM,NUM_TOT);
    mybetadistr(index) = mybetadistr(index) - 1;
    same_time = same_time + 1;    
end
mytable = table(t, ID, TICKET, ROLLER, PRIORITY);
writetable(mytable, "../AUTOMOD/lunapark.arc/arrivalData");
disp("File generated successfully");