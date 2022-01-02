function [hasTicket, rollerList, priorityPass] = featuresGenerator(NUM, NUM_TOT)

    %ticket, roller, priority
    %% Has ticket
    hasTicket = randi([0 1]);

    %% roller coaster list
    randAttr = randi([1 5], 1, randi([1 NUM]));
    rollerList = [randAttr zeros(1, NUM_TOT-length(randAttr))];

    %% Has priority pass -> boolean vector
    priorityPass = [randi([0 1], 1, NUM) zeros(1, NUM_TOT-NUM)];
    
end