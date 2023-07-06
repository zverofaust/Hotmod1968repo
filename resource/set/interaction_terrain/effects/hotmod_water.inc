;SDL

(define "water_detonate"
	{if stuff "bomb size4"								; 500kg+ bomb
		{spawn "ex_size4_water"}
	
	else stuff "bomb size5"								; 500kg+ bomb
		{spawn "ex_size4_water"}
		
	else stuff "bomb napalm"								; Napalm bomb
			{spawn "ex_size2_water"}
			{spawn "napalm"}
			{spawn "crater_small" terrain_texmod}
	
	else stuff "bomb wp_bomb"								; White Phosphorous Bomb
			{spawn "ex_size2_water"}
			{spawn "ex_wp_bomb"}
			{spawn "crater_small" terrain_texmod}
			
	else stuff "bomb sizenuke"								; W33 'Davy Crockett' Nuclear Warhead
			{start_sound "detonation/nuke/" use_position}
			{spawn "expluto"}
			{fire radius 50 time 15 heating 25}
			{blastwave c4 50  r0 0 r1 10}
	}
)

(define "shallow_water_detonate"
	{if stuff "bomb size4"								; 500kg+ bomb
		{spawn "ex_he_size6"}
	
	else stuff "bomb size5"								; 1000kg+ bomb
		{spawn "ex_he_size7"}
		
	else stuff "bomb napalm"								; Napalm bomb
			{spawn "ex_he_size2_mud"}
			{spawn "napalm"}
			{spawn "crater_small" terrain_texmod}
		
	else stuff "bomb wp_bomb"								; White Phosphorous Bomb
			{spawn "fuel_die"}
			{spawn "ex_wp_bomb"}
			{spawn "crater_small" terrain_texmod}
			
	else stuff "bomb mininuke"								; W33 Davy Crockett 20-ton warhead
			{start_sound "detonation/nuke/" use_position}
			{spawn "ex_crockett"}
		else stuff "bomb sizenuke"								; W45 0.5 to 5kt Warhead
			{start_sound "detonation/nuke/" use_position}
			{spawn "expluto"}

	}
)

{"puddle"
	{on hit
		{if min_mass 100
			{spawn "spheredust_small"}
		else min_mass 10
			{spawn "spheredust_small"}
		}
	}
	{on detonate

		{if stuff "bomb size4"								; 500kg+ bomb
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "shockwave_sphere"}
			{spawn "ex_he_size5"}
			{spawn "crater_massive" terrain_texmod}
			
		else stuff "bomb size5"								; 1000kg+ bomb
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "shockwave_sphere"}
			{spawn "ex_he_size6"}
			{spawn "crater_massive" terrain_texmod}
			
		else stuff "bomb napalm"								; Napalm bomb
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "shockwave_sphere"}
			{spawn "napalm"}
			{spawn "crater_small" terrain_texmod}
			
		else stuff "bomb wp_bomb"								; White Phosphorous Bomb
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "fuel_die"}
			{spawn "ex_wp_bomb"}
			{spawn "crater_small" terrain_texmod}
			
		else stuff "bomb sizenuke"								; W33 Davy Crockett
			{start_sound "detonation/nuke/" use_position}
			{spawn "expluto"}
			{spawn "crater_massive" terrain_texmod}
			{spawn "shellhole_super"}
			{fire radius 50 time 15 heating 25}
			{blastwave c4 50  r0 0 r1 10}

		}
	}
}
