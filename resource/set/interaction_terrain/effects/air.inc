;SDL
{"air"
	{on detonate

		{if stuff "grenade fire"							; Molotov Grenades
			{spawn "ex_glass_ic_air"}
			;{spawn "burn_piece" dir_velocity}

		else stuff "grenade size1"							; Anti-Personnel Grenades
			{start_sound "detonation/grenade/bkg/" use_position}
			{spawn "ex_air_norm"}

		else stuff "grenade size2"							; Anti-Tank Grenades
			{start_sound "detonation/he_size1/bkg/" use_position}
			{spawn "ex_air_big"}

		else stuff "grenade size3"							; Dynamite/Satchel Charges
			{start_sound "detonation/he_size2/bkg/" use_position}
			{spawn "ex_grenade_size3"}

		else stuff "mortar"
			{start_sound "detonation/he_size2/bkg/" use_position}
			;{spawn "metal_hit_br"}

		else stuff "big mortar"
			{start_sound "detonation/he_size3/bkg/" use_position}
			;{spawn "metal_hit_br"}

		else stuff "shell size3 he"
			{start_sound "detonation/he_size3/bkg/" use_position}
			{spawn "ex_air_he_size3"}

		else stuff "shell size4 he"
			{start_sound "detonation/he_size4/bkg/" use_position}
			{spawn "ex_air_he_size4"}

		else stuff "shell size5 he"
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "ex_air_he_size5"}

		else stuff "shell wp_size1"							; small WP Smoke shells
			{spawn "ex_wp_size1"}									; initial explosion fx
			{spawn "shell_smoke_wp_size1"}							; actual smoke and vision volumes

		else stuff "shell wp_size2"							; medium WP Smoke shells
			{start_sound "detonation/he_size1/bkg/" use_position}
			{spawn "ex_wp_size2"}									; initial explosion fx
			{spawn "shell_smoke_wp_size2"}							; actual smoke and vision volumes

		else stuff "shell wp_size3"								; big WP Smoke shells
			{start_sound "detonation/he_size2/bkg/" use_position}
			{spawn "ex_wp_size3"}										; initial explosion fx
			{spawn "shell_smoke_wp_size3"}							; actual smoke and vision volumes
			
		else stuff "shell wp_size4"								; big WP Smoke shells
			{start_sound "detonation/he_size3/bkg/" use_position}
			{spawn "ex_wp_size4"}									; initial explosion fx
			{spawn "shell_smoke_wp_size4"}							; actual smoke and vision volumes
			
		else stuff "shell smoke_size2"							; medium Smoke shells
			{start_sound "detonation/he_size1/bkg/" use_position}
			{spawn "ex_sm_size2"}									; initial explosion fx
			{spawn "shell_smoke_size2"}								; actual smoke and vision volumes

		else stuff "shell smoke_size3"								; big Smoke shells
			{start_sound "detonation/he_size2/bkg/" use_position}
			{spawn "ex_sm_size3"}									; initial explosion fx
			{spawn "shell_smoke_size3"}								; actual smoke and vision volumes
			
		else stuff "shell smoke_size4"								; big Smoke shells
			{start_sound "detonation/he_size3/bkg/" use_position}
			{spawn "ex_sm_size4"}									; initial explosion fx
			{spawn "shell_smoke_size4"}								; actual smoke and vision volumes

		else stuff "shell smoke"							; All cannon Smoke shells
			{spawn "mortar_smoke"}									; initial explosion fx
			{spawn "shell_smoke"}									; actual smoke and vision volumes

		else stuff "bomb size1"								; 50-60kg bombs / explosives
			{start_sound "detonation/50kg_bomb/bkg/" use_position}
			{spawn "ex_bomb_50kg"}

		else stuff "bomb size2"								; 100-200kg bombs / explosives
			{start_sound "detonation/100kg_bomb/bkg/" use_position}
			{spawn "ex_bomb_100kg"}

		else stuff "bomb size3"								; 250kg+ bomb
			{start_sound "detonation/250kg_bomb/bkg/" use_position}
			{spawn "ex_bomb_250kg"}

		else stuff "mine antipersonnel"						; Anti-Personnel Mines
			{start_sound "detonation/he_size1/bkg/" use_position}
			{spawn "ex_air_norm"}
			{spawn "grenade_shellhole" terrain_texmod}

		else stuff "glass ic"								; Ampulomet glass ball
			{spawn "ex_glass_ic_air"}
			{spawn "burn_piece" dir_velocity}
			
		else stuff "bomb size4"								; 500kg+ bomb
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
		}
	}
}
