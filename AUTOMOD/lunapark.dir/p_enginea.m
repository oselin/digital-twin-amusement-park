/* 
P_engine
    procedure to enable the movement of the humans (aka loads) in the park
    cc -> its a load attribute (must be seen by all the procedures called)
 
*/

begin

	move into Q_park 
    wait for 1 sec
    move into conv.sta_enter(ticket)		
    if ticket = 0 then
		    
	    begin
	        travel to conv.sta_desk_in		
	        move into Q_desk
	        wait for normal 30, 3 sec
	        move into conv.sta_desk_out
	    end
		
    travel to conv.sta_gate_in		
    move into Q_gate
    wait for normal 1, 0 sec
    move into conv.sta_gate_out
			   
    while roller(cc) > 0 do
    
        begin
            travel to conv.sta_roller_in(roller(cc)prior(cc))
            /*set timer(cc) = ac*/
            travel to conv.sta_roller_end(roller(cc)prior(cc))
            if prior(cc) = 1 then
            	begin
            		if flag = 0 then
            			call S_priority
            		else
            			call S_priority1	             	
            	end
                   	           		                        
            else
            	begin
            		if flag = 0 then
            			call S_normal 
            		else
            			call S_normal1	            	
            	end
            	       
			                   
            /*set timer(cc) = ac-timer(cc)*/       
            wait for runtime min
            move into conv.sta_roller_out(roller(cc))
            inc cc by 1
        end
            	 
	travel to conv.sta_out
	send to die
		    
end




