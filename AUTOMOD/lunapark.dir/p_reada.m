begin
    //-----------------------------------------------
    //  INITIAL PROCESS
    //-----------------------------------------------
    
    
    /*2 for per le 4 run differenti, cambiare flag e karts*/
    
    set flag = 0 /* needed for selection of the sub routines */
    set karts = 0 /* needed for the selection of the number of karts*/
    
    if karts = 0 then
    
    	begin
    		set Q_roll(1) capacity = 30
    		set Q_roll(2) capacity = 30
    		set Q_roll(3) capacity = 30
    		set Q_roll(4) capacity = 30
    		set Q_roll(5) capacity = 30
    		set runtime = 4    	
    	end
    	
    if karts = 1 then 
    
    	begin
    		set Q_roll(1) capacity = 25
    		set Q_roll(2) capacity = 25
    		set Q_roll(3) capacity = 25
    		set Q_roll(4) capacity = 25
    		set Q_roll(5) capacity = 25
    		set runtime = 3    	
    	end	

    open "lunaPark.arc/arrivalData.txt" for reading save result as V_pointer
      
    //NOTE:in the dataset there's an header, so I need to read the first line and to discard it
    read V_useless from V_pointer with delimiter ","
  	print V_useless to message
    while V_pointer eof = false do begin
        read arrival_time, id, ticket, roller, prior from V_pointer with delimiter ","
        //print "***Row reading completed***" to message  
        //A person must be arrive in the proper time, so I need to force that
        wait for (arrival_time - ac) sec
        set cc = 1
        clone 1 load to P_engine
        //print "***CUSTOMER*** at time ", ac, " arrived " to message
    end
end

