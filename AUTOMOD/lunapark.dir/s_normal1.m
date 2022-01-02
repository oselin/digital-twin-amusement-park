begin
	
	wait until conv.sec_roller(roller(cc)) current = 0 or numpriority(roller(cc)) > 9
			
	move into Q_roll(roller(cc))		
	if que(roller(cc)) < Q_roll(roller(cc)) capacity -1 then 
					
		begin					    
			inc que(roller(cc)) by 1
			wait to be ordered on OL_roller(roller(cc)) 
		end 
		
	else
					
		begin
			set que(roller(cc)) = 0
			set numpriority(roller(cc)) = 0
			order Q_roll(roller(cc)) capacity loads from OL_roller(roller(cc)) to continue
		end
end

