
		{if stuff "bomb size4"								; 500kg+ bomb
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "shockwave_sphere"}
			{spawn "ex_he_size6"}
			{spawn "crater_massive" terrain_texmod}
			
		else stuff "handflammpatrone"							; 50mm WP shells
			{spawn "ex_wp_size1"}								; initial explosion fx
			
		else stuff "bomb size5"								; 1000kg+ bomb
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "shockwave_sphere"}
			{spawn "ex_he_size7"}
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
			
		else stuff "mininuke"								; W33 Davy Crockett 20-ton warhead
			{start_sound "detonation/nuke/" use_position}
			{spawn "ex_crockett"}
			{spawn "crater_massive" terrain_texmod}
			{spawn "shellhole_super"}
			{spawn "shell_radiation"}
			
		else stuff "sizenuke"								; W45 0.5 to 5kt Warhead
			{start_sound "detonation/nuke/" use_position}
			{spawn "expluto"}
			{spawn "crater_massive" terrain_texmod}
			{spawn "shellhole_super"}
			
		else stuff "vx"													
			{spawn "shell_chemical"}									
			{spawn "ap_shellhole"}
			{spawn "ex_air_he_size3"}
		}
