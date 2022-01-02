begin
	wait until numpriority(roller(cc)) < 10 or conv.sec_roller(roller(cc)0) current = 0
	
	move into Q_roll(roller(cc))  				
	if que(roller(cc)) < Q_roll(roller(cc)) capacity -1 then
					
		begin
			inc que(roller(cc)) by 1  /*general queue*/	
			inc numpriority(roller(cc)) by 1 /* number of prioirty loads inside*/            
			wait to be ordered on OL_roller(roller(cc))    
		end 
					           
	else
					
		begin
			set que(roller(cc)) = 0 /*to avoid problems with queue*/
			set numpriority(roller(cc)) = 0
			order Q_roll(roller(cc)) capacity loads from OL_roller(roller(cc)) to continue
		end						    					    				    					    
end

