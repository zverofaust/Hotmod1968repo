;SDL

(define "water_bullets"
	{if stuff "bullet_fx"								; Pistol/SMG/Rifle/MG/HMG/ATR Ammo
		{spawn "ex_bul_sm_w"}

	else stuff "mortar"									; 80mm Mortar shell
		{spawn "ex_size3_water"}

	else stuff "auto"									; 20-40mm Autocannon shells
		{spawn "ex_bul_big_w"}

	else stuff "shell size1 he"							; 37-74mm cannon HE shells
		{spawn "ex_size2_water"}

	else stuff "shell size1"							; 37-74mm cannon AP shells
		{spawn "ex_size1_water"}

	else stuff "shell size2 he"							; 75-104mm cannon HE shells
		{spawn "ex_size3_water"}

	else stuff "shell size2"							; 75-104mm cannon AP shells
		{spawn "ex_size2_water"}

	else stuff "shell size3 he"							; 105-149mm cannon HE shells
		{spawn "ex_size4_water"}

	else stuff "shell size3"							; 105-149mm cannon AP shells
		{spawn "ex_size3_water"}

	else stuff "shell size4 he"							; 150-169mm cannon AP shells
		{spawn "ex_size4_water"}

	else stuff "shell size4"							; 150-169mm cannon AP shells
		{spawn "ex_size3_water"}

	else stuff "shell size5"							; 170mm+ cannon HE shells
		{spawn "ex_size4_water"}

	else stuff "shell size6"							; 240mm+ cannon HE shells
		{spawn "ex_size4_water"}

	else stuff "flare marker"							; Special Flare ammo for mission scripts
		{spawn "flare_marker"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare artillery"						; Flare for off-map Artillery
		{spawn "flare_artillery"}
		{spawn "ex_bul_sm_w"}

	else stuff "heat_shell"								; All HEAT Shells / AT Rockets; currently in place for AT rockets
		{spawn "ex_size2_water"}

	else stuff "glass ic"								; Ampulomet glass ball
		{spawn "ex_bul_sm_w"}
	}
)

(define "water_detonate"
	{if stuff "grenade size1"							; Anti-Personnel Grenades
		{spawn "ex_size1_water"}

	else stuff "grenade size2"							; Anti-Tank Grenades
		{spawn "ex_size2_water"}

	else stuff "grenade size3"							; Dynamite/Satchel Charges
		{spawn "ex_size3_water"}

	else stuff "mortar big"								; 120mm Mortar shells
		{spawn "ex_size3_water"}

	else stuff "mortar"									; 80mm Mortar shell
		{spawn "ex_size3_water"}

	else stuff "auto he"								; 20-40mm Autocannon HE shells
		{spawn "ex_bul_big_w"}

	else stuff "bomb size1"								; 50-60kg bombs / explosives
		{spawn "ex_size2_water"}

	else stuff "bomb size2"								; 100-200kg bombs / explosives
		{spawn "ex_size3_water"}

	else stuff "bomb size3"								; 250kg+ bomb
		{spawn "ex_size4_water"}
	
	else stuff "bomb size4"								; 500kg+ bomb
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

	else stuff "mine antipersonnel"						; Anti-Personnel Mines
		{spawn "ex_size1_water"}

	else stuff "mine antitank"							; Anti-Tank Mines
		{spawn "ex_size2_water"}
	}
)

(define "shallow_water_detonate"
	{if stuff "grenade fire"							; Molotov Grenades
		{spawn "spherewater_small"}

	else stuff "grenade size1"							; Anti-Personnel Grenades
		{spawn "ex_ap_size1_mud"}

	else stuff "grenade size2"							; Anti-Tank Grenades
		{spawn "ex_ap_size1_mud"}

	else stuff "grenade size3"							; Dynamite/Satchel Charges
		{spawn "ex_ap_size2_mud"}

	else stuff "mortar big"								; 120mm Mortar shells
		{spawn "ex_ap_size3_mud"}

	else stuff "mortar"									; 80mm Mortar shells
		{spawn "ex_size2_mud"}

	else stuff "auto ap"								; 30-40mm Autocannon HE shells
		{spawn "ex_ap_autocannon_mud"}

	else stuff "auto he"								; 30-40mm Autocannon HE shells
		{spawn "ex_he_autocannon_mud"}

	else stuff "shell size1"							; 37-74mm cannon AP shells
		{spawn "ex_ap_size1_mud"}

	else stuff "shell size2"							; 75-104mm cannon AP shells
		{spawn "ex_ap_size2_mud"}

	else stuff "shell size3"							; 105-149mm cannon AP shells
		{spawn "ex_ap_size3_mud"}

	else stuff "shell size4"							; 150-169mm cannon AP shells
		{spawn "ex_ap_size4_mud"}

	else stuff "shell size5"							; 170mm+ cannon shells
		{spawn "ex_he_size5"}

	else stuff "shell size6"							; 240mm+ cannonshells
		{spawn "ex_he_size6"}

	else stuff "bomb size1"								; 50-60kg bombs / explosives
		{spawn "ex_he_size1_mud"}

	else stuff "bomb size2"								; 100-200kg bombs / explosives
		{spawn "ex_he_size3_mud"}

	else stuff "bomb size3"								; 250kg+ bomb
		{spawn "ex_he_size4"}
		
	else stuff "bomb size4"								; 500kg+ bomb
		{spawn "ex_he_size5"}
	
	else stuff "bomb size5"								; 500kg+ bomb
		{spawn "ex_he_size6"}
		
	else stuff "bomb napalm"								; Napalm bomb
			{spawn "ex_he_size2_mud"}
			{spawn "napalm"}
			{spawn "crater_small" terrain_texmod}
		
	else stuff "bomb wp_bomb"								; White Phosphorous Bomb
			{spawn "fuel_die"}
			{spawn "ex_wp_bomb"}
			{spawn "crater_small" terrain_texmod}
			
	else stuff "bomb sizenuke"								; W33 Davy Crockett
			{start_sound "detonation/nuke/" use_position}
			{spawn "expluto"}
			{fire radius 50 time 15 heating 25}
			{blastwave c4 50  r0 0 r1 10}

	else stuff "mine antipersonnel"						; Anti-Tank Mines
		{spawn "ex_ap_size1_mud"}

	else stuff "mine antitank"							; Anti-Tank Mines
		{spawn "ex_ap_size2_mud"}

	else stuff "glass ic"								; Ampulomet glass ball
		{spawn "spherewater_small"}
	}
)

(define "water_hits"
	{if min_mass 50
		{spawn "spherewater_big"}
	else min_mass 20
		{spawn "spherewater_medium"}
	else min_mass 5
		{spawn "spherewater_small"}
	else min_mass 0.1
		{spawn "spherewater_very_small"}
	else effector "human"
		{spawn "spherewater_big"}
	else effector "steel"
		{spawn "spherewater_small"}
	}
)

{"shallow_water"
	{on hit ("water_hits")}
	{on detonate
		("shallow_water_detonate")
		("water_bullets")
	}
}

{"water"
	{on hit ("water_hits")}
	{on detonate
		("water_detonate")
		("water_bullets")
	}
}

{"underwater"
	{on detonate
		("water_detonate")
		("water_bullets")	;// temp fix unit water depth bug is fixed
	}
}

{"puddle"
	{on hit
		{if min_mass 100
			{spawn "spheredust_small"}
		else min_mass 10
			{spawn "spheredust_small"}
		}
	}
	{on detonate

		{if stuff "grenade fire"							; Molotov Grenades
			{spawn "ex_molot_ground"}

		else stuff "grenade size1"							; Anti-Personnel Grenades
			{start_sound "detonation/grenade/bkg/" use_position}
			{spawn "ex_grenade_size1"}
			{spawn "grenade_shellhole" terrain_texmod}

		else stuff "grenade size2"							; Anti-Tank Grenades
			{start_sound "detonation/he_size1/bkg/" use_position}
			{spawn "ex_grenade_size2"}
			{spawn "grenade_at_shellhole" terrain_texmod}

		else stuff "grenade size3"							; Dynamite/Satchel Charges
			{start_sound "detonation/he_size2/bkg/" use_position}
			{spawn "ex_grenade_size3"}
			{spawn "shellhole_big"}
			{spawn "crater_small" terrain_texmod}

		else stuff "bullet_fx"								; Pistol/SMG/Rifle/MG/HMG/ATR Ammo
			{spawn "ex_bul_sm_w"}

		else stuff "mortar big ic"							; 120mm Mortar incendiary
			{start_sound "detonation/he_size1/bkg/" use_position}
			{start_sound "fire/bush/" use_position}
			{spawn "ex_ic_120_ground"}
			{spawn "burn_piece" dir_velocity}
			{spawn "burned_spot_round2" scale 1.4 random_orientation}
			{fire radius 4 time 20 heating 0.25}
			
		else stuff "mortar big"								; 120mm Mortar shells
			{start_sound "detonation/he_size3/bkg/" use_position}
			{spawn "ex_mort_big"}
			{spawn "crater_small" terrain_texmod}

		else stuff "mortar"									; 80mm Mortar shells
			{start_sound "detonation/he_size2/bkg/" use_position}
			{spawn "ex_mort_sm"}
			{spawn "crater_tiny" terrain_texmod}

		else stuff "heat_shell"									; All HEAT Shells / AT Rockets
			{start_sound "detonation/he_size1/bkg/" use_position}
			{spawn "shockwave"}
			{spawn "ex_heat"}

		else stuff "auto size1 he"							; 20-25mm Autocannon HE shells
			{start_sound "detonation/auto_shell/bkg/" use_position}
			;{play_sound "whistle"}
			{spawn "ex_he_autocannon_mud"}

		else stuff "auto size1 aphe"						; 20-25mm Autocannon APHE shells
			{start_sound "detonation/auto_shell/bkg/" use_position}
			{spawn "ex_he_autocannon_mud"}

		else stuff "auto size1"								; 20-25mm Autocannon AP shells
			;{play_sound "whistle"}
			{spawn "ex_ap_autocannon_mud"}

		else stuff "auto size2 he"							; 37-40mm Autocannon HE shells
			{spawn "ex_he_autocannon_mud"}

		else stuff "auto size2"								; 37-40mm Autocannon AP shells
			;{play_sound "whistle"}
			{spawn "ex_ap_autocannon_mud"}

		else stuff "shell size1 he"							; 37-74mm cannon HE shells
			{start_sound "detonation/he_size1/bkg/" use_position}
			{spawn "ex_he_size1"}
			{spawn "grenade_shellhole" terrain_texmod}

		else stuff "shell size1"							; 37-74mm cannon AP shells
			{spawn "ex_ap_size1"}

		else stuff "shell size2 he"							; 75-104mm cannon HE shells
			{start_sound "detonation/he_size2/bkg/" use_position}
			{spawn "ex_he_size2"}
			{spawn "crater_norm" terrain_texmod}

		else stuff "shell size2"							; 75-104mm cannon AP shells
			{spawn "ex_ap_size2_water"}

		else stuff "shell size3 he"							; 105-149mm cannon HE shells
			{start_sound "detonation/he_size3/bkg/" use_position}
			{spawn "ex_he_size3"}
			{spawn "crater_norm" terrain_texmod}

		else stuff "shell size3"							; 105-149mm cannon AP shells
			{spawn "ex_ap_size3"}

		else stuff "shell size4 he"							; 150-169mm cannon HE shells
			{start_sound "detonation/he_size4/bkg/" use_position}
			{spawn "ex_he_size4"}
			{spawn "crater_big" terrain_texmod}

		else stuff "shell size4"							; 150-169mm cannon AP shells
			{spawn "ex_he_size4"}
			{spawn "crater_tiny" terrain_texmod}

		else stuff "shell size5"							; 170mm+ cannon HE shells
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "ex_he_size5"}
			{spawn "crater_big" terrain_texmod}

		else stuff "shell size6"							; 240mm+ cannon HE shells
			{start_sound "detonation/he_size5/bkg/" use_position}
			{spawn "ex_he_size6"}
			{spawn "crater_massive" terrain_texmod}

		else stuff "shell smoke wp_small"							; small WP Smoke shells
			{spawn "ex_wp_small"}									; initial explosion fx
			{spawn "shell_smoke_wp_small"}							; actual smoke and vision volumes

		else stuff "shell smoke wp_medium"							; medium WP Smoke shells
			{spawn "ex_wp_medium"}									; initial explosion fx
			{spawn "shell_smoke_wp_medium"}							; actual smoke and vision volumes

		else stuff "shell smoke wp_big"								; big WP Smoke shells
			{spawn "ex_wp_big"}										; initial explosion fx
			{spawn "shell_smoke_wp_big"}							; actual smoke and vision volumes

		else stuff "shell smoke"							; All cannon Smoke shells

			{spawn "mortar_smoke"}									; initial explosion fx
			{spawn "shell_smoke"}									; actual smoke and vision volumes

		else stuff "bomb size1"								; 50-60kg bombs / explosives
			{start_sound "detonation/50kg_bomb/bkg/" use_position}
			{spawn "shockwave_sphere"}
			{spawn "ex_he_size1"}
			{spawn "crater_medium" terrain_texmod}

		else stuff "bomb size2"								; 100-200kg bombs / explosives
			{start_sound "detonation/100kg_bomb/bkg/" use_position}
			{spawn "shockwave_sphere"}
			{spawn "ex_he_size3"}
			{spawn "crater_big" terrain_texmod}

		else stuff "bomb size3"								; 250kg+ bomb
			{start_sound "detonation/250kg_bomb/bkg/" use_position}
			{spawn "shockwave_sphere"}
			{spawn "ex_he_size4"}
			{spawn "crater_massive" terrain_texmod}
			
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
			{spawn "crater_massive" terrain_texmod}
			{spawn "shellhole_super"}
			{fire radius 50 time 15 heating 25}
			{blastwave c4 50  r0 0 r1 10}

		else stuff "mine antipersonnel"						; Anti-Personnel Mines
			{start_sound "detonation/he_size1/bkg/" use_position}
			{spawn "ex_grenade_size1"}
			{spawn "grenade_shellhole" terrain_texmod}

		else stuff "mine antitank"							; Anti-Tank Mines
			{start_sound "detonation/he_size2/bkg/" use_position}
			{spawn "ex_at_mine"}
			{spawn "grenade_at_shellhole" terrain_texmod}

		else stuff "flare marker"							; Special Flare ammo for mission scripts
			{spawn "flare_marker"}
			{spawn "spheredust_small"}

		else stuff "flare artillery"						; Flare for off-map Artillery
			{spawn "flare_artillery"}
			{spawn "spheredust_small"}


		else stuff "glass ic"								; Ampulomet glass ball
			{spawn "ex_glass_ic_ground"}
			{spawn "burn_piece" dir_velocity}
			{spawn "burned_spot_round2" random_orientation}
			{fire radius 2 time 20 heating 0.25}
		}
	}
}

(define "swamp_terrain"
	{on hit ("water_hits")}
	{on bullet ("water_bullets")}
	{on detonate
		("water_detonate")
		("water_bullets")
	}
)

{"swamp"
	("swamp_terrain")
}
