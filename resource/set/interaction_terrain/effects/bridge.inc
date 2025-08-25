;SDL
{"bridge"		;// clone of "rock" without craters
	(include "\set\interaction_terrain\effects\effects-defines.inc")
	{on hit
		{if effector "shell_s1"
			{start_sound "hit/casing/s1/hard/concrete/" use_position}

		else effector "shell_s2"
			{start_sound "hit/casing/s2/hard/concrete/" use_position}

		else effector "shell_s3"
			{start_sound "hit/casing/s3/hard/concrete/" use_position}

		else effector "shell_cannon"
			{spawn "spheredust_shell"}

		else min_mass 100
			{if effector "tree"
				{spawn "tree_crush"}
			else
				{spawn "spheredust_small"}
			}

		else min_mass 10
			{spawn "spheredust_tiny"}
		}
	}
	{on detonate
		(include "killzones.inc")
		(include "hotmod_ground.inc")
		{if stuff "grenade fire"							; Molotov Grenades
			{spawn "ex_molot_ground"}

		else stuff "grapple_fx"								; grapple hook
			{spawn "ex_ap_size2"}
			{spawn "ap_shellhole" scale 0.4}

		else stuff "bullet_fx size1"						; Pistol Caliber
			{spawn "ex_bul_puff"}

		else stuff "bullet_fx size2 intermediate"			; Rifle Caliber
			("sonic_crack_s1")
			{spawn "ex_bul_puff"}

		else stuff "bullet_fx size2"						; Rifle Caliber
			("sonic_crack_s2")
			{spawn "ex_bul_puff"}

		else stuff "bullet_fx size3 api"					; Large Rifle Caliber API
			("sonic_crack_s3")
			{spawn "ex_bul_puff"}
			{spawn "ex_bul_heavy_ex"}

		else stuff "bullet_fx size3"						; Large Rifle Caliber
			("sonic_crack_s3")
			{spawn "ex_bul_puff"}

		else stuff "rifle_grenade_at"						; HEAT rifle Grenades
			{spawn "ex_heat_rock"}
			{spawn "grenade_shellhole" scale 0.6 texmod "ground"}

		else stuff "grenade size1"							; Anti-Personnel Grenades Size 1
			{spawn "ex_grenade_size1_rock"}
			{spawn "grenade_shellhole" scale 0.6 texmod "ground"}

		else stuff "grenade size2"							; Anti-Personnel Grenades Size 2
			{spawn "ex_grenade_size2_rock"}
			{spawn "grenade_shellhole" scale 0.8 texmod "ground"}

		else stuff "grenade size3"							; Anti-Tank Grenades
			{spawn "ex_grenade_size3_rock"}
			{spawn "grenade_shellhole" texmod "ground"}

		else stuff "grenade size4"							; Dynamite/Satchel Charges
			{spawn "shockwave_sphere"}
			{spawn "ex_mort_big_rock"}
			{spawn "grenade_at_shellhole" scale 0.8 texmod "ground"}

		else stuff "mortar big ic"							; 120mm Mortar incendiary
			{spawn "ex_ic_120_rock"}
			{spawn "burn_piece" dir_velocity}
			{spawn "burned_spot_round2" scale 1.4 random_orientation}
			{fire radius 4 time 20 heating 0.25}

		else stuff "mortar big bomb size1"					; 200mm Mortar shells
			{spawn "shockwave_sphere"}
			{spawn "ex_bomb_50kg_rock"}
			{spawn "grenade_at_shellhole" texmod "ground"}

		else stuff "mortar big bomb size2"					; 170mm Mortar shells
			{spawn "shockwave_sphere"}
			{spawn "ex_bomb_100kg_rock"}
			{spawn "grenade_at_shellhole" texmod "ground"}

		else stuff "mortar big bomb size3"					; 300 Mortar shell
			{spawn "shockwave_sphere"}
			{spawn "ex_bomb_100kg_rock"}
			{spawn "grenade_at_shellhole" texmod "ground"}

		else stuff "mortar big"								; 120mm Mortar shells
			{spawn "ex_he_size3_rock"}
			{spawn "grenade_shellhole" texmod "ground"}

		else stuff "mortar small"							; 50-60mm Mortar shells
			{spawn "ex_grenade_size1_rock"}
			{spawn "grenade_shellhole" scale 0.6 texmod "ground"}

		else stuff "mortar"									; 80mm Mortar shells
			{spawn "ex_mort_sm_rock"}
			{spawn "grenade_shellhole" scale 0.8 texmod "ground"}

		else stuff "shell size2 heat_shell"					; 75-104mm cannon HEAT shells
			{spawn "ex_heat_size2_rock"}
			{spawn "grenade_shellhole" texmod "ground"}

		else stuff "shell size3 heat_shell"					; 105-149mm cannon HEAT shells
			{spawn "ex_heat_size3_rock"}
			{spawn "shockwave_sphere"}
			{spawn "grenade_at_shellhole" scale 0.8 texmod "ground"}

		else stuff "shell size4 heat_shell"					; 150mm cannon HEAT shells
			{spawn "ex_heat_size3_rock"}
			{spawn "shockwave_sphere"}
			{spawn "grenade_at_shellhole" texmod "ground"}

		else stuff "rocketlauncher heat_shell size1"		; 60mm AT Rockets
			{spawn "shockwave"}
			{spawn "ex_heat_rock"}
			{spawn "grenade_shellhole" scale 0.6 texmod "ground"}
			{blastwave c4 2.5 r0 2 r1 3.5 position}		; needs blast because ammo is pierce

		else stuff "rocketlauncher heat_shell size2"		; AT Rockets
			{spawn "shockwave"}
			{spawn "ex_heat_size2_rock"}
			{spawn "grenade_shellhole" texmod "ground"}
			{blastwave c4 2.5 r0 2 r1 3.5 position}		; needs blast because ammo is pierce

		else stuff "heat_shell"								; All Other HEAT Shells
			{spawn "shockwave"}
			{spawn "ex_heat_rock"}
			{spawn "grenade_shellhole" scale 0.6 texmod "ground"}

		else stuff "auto 15mm he"							; 15mm Autocannon HE shells
			{spawn "ex_he_15mm"}

		else stuff "auto size1 he"							; 20-25mm Autocannon HE shells
			{spawn "ex_he_autocannon"}

		else stuff "auto size1 aphe"						; 20-25mm Autocannon APHE shells
			{spawn "ex_he_autocannon"}

		else stuff "auto size1"								; 20-25mm Autocannon AP shells
			{spawn "ex_ap_autocannon"}

		else stuff "auto size2 he"							; 37-40mm Autocannon HE shells
			{spawn "ex_grenade_size1_rock"}
			{spawn "grenade_shellhole" scale 0.4 terrain_texmod}

		else stuff "auto size2"								; 37-40mm Autocannon AP shells
			{spawn "ex_ap_size1_rock"}

		else stuff "shell size1 he"							; 37-74mm cannon HE shells
			{spawn "ex_he_size1_rock"}
			{spawn "grenade_shellhole" scale 0.6 terrain_texmod}

		else stuff "shell size1"							; 37-74mm cannon AP shells
			{spawn "ex_ap_size1_rock"}
			{spawn "ap_shellhole" scale 0.2}

		else stuff "shell size2 he"							; 75-104mm cannon HE shells
			{spawn "ex_he_size2_rock"}
			{spawn "grenade_shellhole" texmod "ground"}

		else stuff "shell size2"							; 75-104mm cannon AP shells
			{spawn "ex_ap_size2_rock"}
			{spawn "ap_shellhole" scale 0.4}

		else stuff "shell size3 he"							; 105-149mm cannon HE shells
			{spawn "ex_he_size3_rock"}
			{spawn "grenade_at_shellhole" scale 0.8 texmod "ground"}

		else stuff "shell size3"							; 105-149mm cannon AP shells
			{spawn "ex_ap_size3_rock"}
			{spawn "ap_shellhole" scale 0.6}

		else stuff "shell size4 he"							; 150-169mm cannon HE shells
			{spawn "ex_he_size4_rock"}
			{spawn "grenade_at_shellhole" texmod "ground"}

		else stuff "shell size4"							; 150-169mm cannon AP shells
			{spawn "ex_ap_size4_rock"}
			{spawn "ap_shellhole" scale 0.8}

		else stuff "shell size5"							; 170mm+ cannon HE shells
			{spawn "ex_he_size5_rock"}
			{spawn "shockwave_sphere"}
			{spawn "grenade_at_shellhole" texmod "ground"}

		else stuff "shell size6"							; 240mm+ cannon HE shells
			{spawn "ex_he_size6_rock"}
			{spawn "shockwave_sphere"}
			{spawn "grenade_at_shellhole" texmod "ground"}

		else stuff "shell size7"							; 600mm cannon HE shells
			{spawn "ex_he_size7_rock"}
			{spawn "shockwave_sphere"}
			{spawn "grenade_at_shellhole" texmod "ground"}

		else stuff "shell wp_size1"							; 50mm WP shells
			{spawn "ex_wp_size1_rock"}							; initial explosion fx
			{spawn "shell_smoke_wp_size1"}						; actual smoke and vision volumes

		else stuff "shell wp_size2"							; 75-95mm WP shells
			{spawn "ex_wp_size2_rock"}							; initial explosion fx
			{spawn "shell_smoke_wp_size2"}						; actual smoke and vision volumes
			{spawn "ap_shellhole"}

		else stuff "shell wp_size3"							; 100-149mm WP shells
			{spawn "ex_wp_size3_rock"}							; initial explosion fx
			{spawn "shell_smoke_wp_size3"}						; actual smoke and vision volumes
			{spawn "grenade_shellhole" texmod "ground"}

		else stuff "shell wp_size4"							; 150+mm WP shells
			{spawn "ex_wp_size4_rock"}							; initial explosion fx
			{spawn "shell_smoke_wp_size4"}						; actual smoke and vision volumes
			{spawn "grenade_at_shellhole" scale 0.8 texmod "ground"}

		else stuff "shell smoke_size1"						; 50mm Smoke shells
			{spawn "mortar_smoke"}								; initial explosion fx
			{spawn "shell_smoke"}								; actual smoke and vision volumes

		else stuff "shell smoke_size2"						; 75-95mm Smoke shells
			{spawn "ex_sm_size2_rock"}							; initial explosion fx
			{spawn "shell_smoke_size2"}							; actual smoke and vision volumes
			{spawn "ap_shellhole"}

		else stuff "shell smoke_size3"						; 100-149mm Smoke shells
			{spawn "ex_sm_size3_rock"}							; initial explosion fx
			{spawn "shell_smoke_size3"}							; actual smoke and vision volumes
			{spawn "grenade_shellhole" texmod "ground"}

		else stuff "shell smoke_size4"						; 150+mm Smoke shells
			{spawn "ex_sm_size4_rock"}							; initial explosion fx
			{spawn "shell_smoke_size4"}							; actual smoke and vision volumes
			{spawn "grenade_at_shellhole" scale 0.8 texmod "ground"}

		else stuff "bomb size1"								; 50-60kg bombs / explosives
			{spawn "ex_bomb_50kg_rock"}
			{spawn "grenade_at_shellhole" texmod "ground"}

		else stuff "bomb size2"								; 100-200kg bombs / explosives
			{spawn "ex_bomb_100kg_rock"}
			{spawn "grenade_at_shellhole" texmod "ground"}

		else stuff "bomb size3"								; 250kg+ bomb
			{spawn "ex_bomb_250kg_rock"}
			{spawn "grenade_at_shellhole" texmod "ground"}

		else stuff "mine antipersonnel"						; Anti-Personnel Mines
			{spawn "ex_grenade_size2_rock"}
			{spawn "grenade_shellhole" scale 0.8 texmod "ground"}

		else stuff "mine antitank"							; Anti-Tank Mines
			{spawn "ex_at_mine_rock"}
			{spawn "grenade_shellhole" texmod "ground"}

		else stuff "flare marker"							; Special Flare ammo for mission scripts
			{spawn "flare_marker"}
			{spawn "ex_bul_puff"}

		else stuff "flare artillery"						; Flare for off-map Artillery
			{spawn "flare_artillery"}
			{spawn "ex_bul_puff"}

		else stuff "flare_usa mortar_60"					; Flare for off-map 60mm mortar
			{spawn "flare_mortar_60"}
			{spawn "ex_bul_puff"}

		else stuff "flare_usa mortar_81"					; Flare for off-map 81mm mortar
			{spawn "flare_mortar_81"}
			{spawn "ex_bul_puff"}

		else stuff "flare_usa artillery_105"				; Flare for off-map 105mm
			{spawn "flare_artillery_105"}
			{spawn "ex_bul_puff"}

		else stuff "flare_usa artillery_105_vt"				; Flare for off-map 105mm VT airburst
			{spawn "flare_artillery_105_vt"}
			{spawn "ex_bul_puff"}

		else stuff "flare_usa artillery_155"				; Flare for off-map 155mm
			{spawn "flare_artillery_155"}
			{spawn "ex_bul_puff"}

		else stuff "flare_usa artillery_155_vt"				; Flare for off-map 155mm VT airburst
			{spawn "flare_artillery_155_vt"}
			{spawn "ex_bul_puff"}

		else stuff "flare_usa artillery_203"				; Flare for off-map 203mm
			{spawn "flare_artillery_203"}
			{spawn "ex_bul_puff"}

		else stuff "flare_usa artillery_203_vt"				; Flare for off-map 203mm VT airburst
			{spawn "flare_artillery_203_vt"}
			{spawn "ex_bul_puff"}

		else stuff "flare_usa artillery_240"				; Flare for off-map 240mm VT airburst
			{spawn "flare_artillery_240"}
			{spawn "ex_bul_puff"}

		else stuff "glass ic"								; Ampulomet glass ball
			{spawn "ex_glass_ic_ground"}
			{spawn "burn_piece" dir_velocity}
			{spawn "burned_spot_round2" random_orientation}
			{fire radius 2 time 20 heating 0.25}
		}
	}
}

{"bridge_wood"
	(include "\set\interaction_terrain\effects\effects-defines.inc")
	{on hit
		{if effector "shell_s1"
			{start_sound "hit/casing/s1/soft/dirt/" use_position}

		else effector "shell_s2"
			{start_sound "hit/casing/s2/soft/dirt/" use_position}

		else effector "shell_s3"
			{start_sound "hit/casing/s3/soft/dirt/" use_position}

		else effector "shell_cannon"
			{spawn "spheredust_shell"}

		else min_mass 100
			{if effector "tree"
				{spawn "tree_crush"}
			else
				{spawn "spheredust_small"}
			}

		else min_mass 10
			{spawn "spheredust_tiny"}
		}
	}
	{on detonate
		(include "killzones.inc")
		(include "hotmod_ground.inc")
		{if stuff "grenade fire"							; Molotov Grenades
			{spawn "ex_molot_ground"}

		else stuff "grapple_fx"								; grapple hook
			{spawn "ex_ap_size2"}
			{spawn "ap_shellhole" scale 0.4}

		else stuff "bullet_fx size1"						; Pistol Caliber
			{spawn "wood_hit_bul"}

		else stuff "bullet_fx size2 intermediate"			; Rifle Caliber
			("sonic_crack_s1")
			{spawn "wood_hit_bul"}

		else stuff "bullet_fx size2"						; Rifle Caliber
			("sonic_crack_s2")
			{spawn "wood_hit_bul"}

		else stuff "bullet_fx size3 api"					; Large Rifle Caliber API
			("sonic_crack_s3")
			{spawn "ex_bul_heavy"}
			{spawn "ex_bul_heavy_ex"}

		else stuff "bullet_fx size3"						; Large Rifle Caliber
			("sonic_crack_s3")
			{spawn "ex_bul_heavy"}

		else stuff "rifle_grenade_at"						; HEAT rifle Grenades
			{spawn "ex_heat"}

		else stuff "grenade size1"							; Anti-Personnel Grenades Size 1
			{spawn "ex_grenade_size1"}

		else stuff "grenade size2"							; Anti-Personnel Grenades Size 2
			{spawn "ex_grenade_size2"}

		else stuff "grenade size3"							; Anti-Tank Grenades
			{spawn "ex_grenade_size3"}

		else stuff "grenade size4"							; Dynamite/Satchel Charges
			{spawn "shockwave_sphere"}
			{spawn "ex_at_mine"}

		else stuff "mortar big ic"							; 120mm Mortar incendiary
			{spawn "ex_ic_120_ground"}
			{spawn "burn_piece" dir_velocity}
			{spawn "burned_spot_round2" scale 1.4 random_orientation}
			{fire radius 4 time 20 heating 0.25}

		else stuff "mortar big bomb size1"					; 200mm Mortar shells
			{spawn "shockwave_sphere"}
			{spawn "ex_bomb_50kg"}

		else stuff "mortar big bomb size2"					; 170mm Mortar shells
			{spawn "shockwave_sphere"}
			{spawn "ex_bomb_100kg"}

		else stuff "mortar big bomb size3"					; 300 Mortar shell
			{spawn "shockwave_sphere"}
			{spawn "ex_bomb_100kg"}

		else stuff "mortar big"								; 120mm Mortar shells
			{spawn "ex_mort_big_wood"}

		else stuff "mortar small"							; 50-60mm Mortar shells
			{spawn "ex_mort_sm_wood"}

		else stuff "mortar"									; 80mm Mortar shells
			{spawn "ex_mort_sm_wood"}

		else stuff "shell size2 heat_shell"					; 75-104mm cannon HEAT shells
			{spawn "ex_heat_size2"}

		else stuff "shell size3 heat_shell"					; 105-149mm cannon HEAT shells
			{spawn "ex_heat_size3"}
			{spawn "shockwave_sphere"}

		else stuff "shell size4 heat_shell"					; 150mm cannon HEAT shells
			{spawn "ex_heat_size3"}
			{spawn "shockwave_sphere"}

		else stuff "rocketlauncher heat_shell size1"		; 60mm AT Rockets
			{spawn "shockwave"}
			{spawn "ex_heat"}
			{blastwave c4 2.5 r0 2 r1 3.5 position}		; needs blast because ammo is pierce

		else stuff "rocketlauncher heat_shell size2"		; AT Rockets
			{spawn "shockwave"}
			{spawn "ex_heat_size2"}
			{blastwave c4 2.5 r0 2 r1 3.5 position}		; needs blast because ammo is pierce

		else stuff "heat_shell"								; All Other HEAT Shells
			{spawn "shockwave"}
			{spawn "ex_heat"}

		else stuff "auto 15mm he"							; 15mm Autocannon HE shells
			{spawn "ex_he_15mm"}

		else stuff "auto size1 he"							; 20-25mm Autocannon HE shells
			{spawn "ex_he_autocannon"}

		else stuff "auto size1 aphe"						; 20-25mm Autocannon APHE shells
			{spawn "ex_he_autocannon"}

		else stuff "auto size1"								; 20-25mm Autocannon AP shells
			{spawn "ex_ap_autocannon"}

		else stuff "auto size2 he"							; 37-40mm Autocannon HE shells
			{spawn "ex_grenade_size1"}

		else stuff "auto size2"								; 37-40mm Autocannon AP shells
			{spawn "ex_ap_size1"}

		else stuff "shell size1 he"							; 37-74mm cannon HE shells
			{spawn "ex_he_size1_wood"}

		else stuff "shell size1"							; 37-74mm cannon AP shells
			{spawn "ex_ap_size1"}

		else stuff "shell size2 he"							; 75-104mm cannon HE shells
			{spawn "ex_he_size2_wood"}

		else stuff "shell size2"							; 75-104mm cannon AP shells
			{spawn "ex_ap_size2"}

		else stuff "shell size3 he"							; 105-149mm cannon HE shells
			{spawn "ex_he_size3_wood"}

		else stuff "shell size3"							; 105-149mm cannon AP shells
			{spawn "ex_ap_size3"}

		else stuff "shell size4 he"							; 150-169mm cannon HE shells
			{spawn "ex_he_size4"}

		else stuff "shell size4"							; 150-169mm cannon AP shells
			{spawn "ex_ap_size4"}

		else stuff "shell size5"							; 170mm+ cannon HE shells
			{spawn "ex_he_size5"}
			{spawn "shockwave_sphere"}

		else stuff "shell size6"							; 240mm+ cannon HE shells
			{spawn "ex_he_size6"}
			{spawn "shockwave_sphere"}

		else stuff "shell size7"							; 600mm cannon HE shells
			{spawn "ex_he_size7"}
			{spawn "shockwave_sphere"}

		else stuff "shell wp_size1"							; 50mm WP shells
			{spawn "ex_wp_size1"}								; initial explosion fx
			{spawn "shell_smoke_wp_size1"}						; actual smoke and vision volumes

		else stuff "shell wp_size2"							; 75-95mm WP shells
			{spawn "ex_wp_size2"}								; initial explosion fx
			{spawn "shell_smoke_wp_size2"}						; actual smoke and vision volumes

		else stuff "shell wp_size3"							; 100-149mm WP shells
			{spawn "ex_wp_size3"}								; initial explosion fx
			{spawn "shell_smoke_wp_size3"}						; actual smoke and vision volumes

		else stuff "shell wp_size4"							; 150+mm WP shells
			{spawn "ex_wp_size4"}								; initial explosion fx
			{spawn "shell_smoke_wp_size4"}						; actual smoke and vision volumes

		else stuff "shell smoke_size1"						; 50mm Smoke shells
			{spawn "mortar_smoke"}								; initial explosion fx
			{spawn "shell_smoke"}								; actual smoke and vision volumes

		else stuff "shell smoke_size2"						; 75-95mm Smoke shells
			{spawn "ex_sm_size2"}								; initial explosion fx
			{spawn "shell_smoke_size2"}							; actual smoke and vision volumes

		else stuff "shell smoke_size3"						; 100-149mm Smoke shells
			{spawn "ex_sm_size3"}								; initial explosion fx
			{spawn "shell_smoke_size3"}							; actual smoke and vision volumes

		else stuff "shell smoke_size4"						; 150+mm Smoke shells
			{spawn "ex_sm_size4"}								; initial explosion fx
			{spawn "shell_smoke_size4"}							; actual smoke and vision volumes

		else stuff "bomb size1"								; 50-60kg bombs / explosives
			{spawn "ex_bomb_50kg_wood"}

		else stuff "bomb size2"								; 100-200kg bombs / explosives
			{spawn "ex_bomb_100kg"}

		else stuff "bomb size3"								; 250kg+ bomb
			{spawn "ex_bomb_250kg"}

		else stuff "mine antipersonnel"						; Anti-Personnel Mines
			{spawn "ex_grenade_size2"}

		else stuff "mine antitank"							; Anti-Tank Mines
			{spawn "ex_at_mine"}

		else stuff "flare marker"							; Special Flare ammo for mission scripts
			{spawn "flare_marker"}
			{spawn "wood_hit_bul"}

		else stuff "flare artillery"						; Flare for off-map Artillery
			{spawn "flare_artillery"}
			{spawn "wood_hit_bul"}

		else stuff "flare_usa mortar_60"					; Flare for off-map 60mm mortar
			{spawn "flare_mortar_60"}
			{spawn "wood_hit_bul"}

		else stuff "flare_usa mortar_81"					; Flare for off-map 81mm mortar
			{spawn "flare_mortar_81"}
			{spawn "wood_hit_bul"}

		else stuff "flare_usa artillery_105"				; Flare for off-map 105mm
			{spawn "flare_artillery_105"}
			{spawn "wood_hit_bul"}

		else stuff "flare_usa artillery_105_vt"				; Flare for off-map 105mm VT airburst
			{spawn "flare_artillery_105_vt"}
			{spawn "wood_hit_bul"}

		else stuff "flare_usa artillery_155"				; Flare for off-map 155mm
			{spawn "flare_artillery_155"}
			{spawn "wood_hit_bul"}

		else stuff "flare_usa artillery_155_vt"				; Flare for off-map 155mm VT airburst
			{spawn "flare_artillery_155_vt"}
			{spawn "wood_hit_bul"}

		else stuff "flare_usa artillery_203"				; Flare for off-map 203mm
			{spawn "flare_artillery_203"}
			{spawn "wood_hit_bul"}

		else stuff "flare_usa artillery_203_vt"				; Flare for off-map 203mm VT airburst
			{spawn "flare_artillery_203_vt"}
			{spawn "wood_hit_bul"}

		else stuff "flare_usa artillery_240"				; Flare for off-map 240mm VT airburst
			{spawn "flare_artillery_240"}
			{spawn "wood_hit_bul"}

		else stuff "glass ic"								; Ampulomet glass ball
			{spawn "ex_glass_ic_ground"}
			{spawn "burn_piece" dir_velocity}
			{spawn "burned_spot_round2" random_orientation}
			{fire radius 2 time 20 heating 0.25}
		}
	}
}


{"bridge_steel"
	(include "\set\interaction_terrain\effects\effects-defines.inc")
	{on hit
		{if effector "shell_s1"
			{start_sound "hit/casing/s1/hard/concrete/" use_position}

		else effector "shell_s2"
			{start_sound "hit/casing/s2/hard/concrete/" use_position}

		else effector "shell_s3"
			{start_sound "hit/casing/s3/hard/concrete/" use_position}

		else effector "shell_cannon"
			{spawn "spheredust_shell"}

		else min_mass 100
			{if effector "tree"
				{spawn "tree_crush"}
			else
				{spawn "spheredust_small"}
			}

		else min_mass 10
			{spawn "spheredust_tiny"}
		}
	}
	{on detonate
		(include "killzones.inc")
		(include "hotmod_ground.inc")
		{if stuff "grenade fire"							; Molotov Grenades
			{spawn "ex_molot_ground"}

		else stuff "grapple_fx"								; grapple hook
			{spawn "ex_ap_size2"}
			{spawn "ap_shellhole" scale 0.4}

		else stuff "bullet_fx size1"						; Pistol Caliber
			{spawn "metal_hit_bul"}

		else stuff "bullet_fx size2 intermediate"			; Rifle Caliber
			("sonic_crack_s1")
			{spawn "metal_hit_bul"}

		else stuff "bullet_fx size2"						; Rifle Caliber
			("sonic_crack_s2")
			{spawn "metal_hit_bul"}

		else stuff "bullet_fx size3 api"					; Large Rifle Caliber API
			("sonic_crack_s3")
			{spawn "metal_hit_bul_at"}
			{spawn "ex_bul_heavy_ex"}

		else stuff "bullet_fx size3"						; Large Rifle Caliber
			("sonic_crack_s3")
			{spawn "metal_hit_bul_heavy"}

		else stuff "rifle_grenade_at"						; HEAT rifle Grenades
			{spawn "ex_heat"}

		else stuff "grenade size1"							; Anti-Personnel Grenades Size 1
			{spawn "ex_grenade_size1"}

		else stuff "grenade size2"							; Anti-Personnel Grenades Size 2
			{spawn "ex_grenade_size2"}

		else stuff "grenade size3"							; Anti-Tank Grenades
			{spawn "ex_grenade_size3"}

		else stuff "grenade size4"							; Dynamite/Satchel Charges
			{spawn "shockwave_sphere"}
			{spawn "ex_at_mine"}

		else stuff "mortar big ic"							; 120mm Mortar incendiary
			{spawn "ex_ic_120_ground"}
			{spawn "burn_piece" dir_velocity}
			{spawn "burned_spot_round2" scale 1.4 random_orientation}
			{fire radius 4 time 20 heating 0.25}

		else stuff "mortar big bomb size1"					; 200mm Mortar shells
			{spawn "shockwave_sphere"}
			{spawn "ex_bomb_50kg"}

		else stuff "mortar big bomb size2"					; 170mm Mortar shells
			{spawn "shockwave_sphere"}
			{spawn "ex_bomb_100kg"}

		else stuff "mortar big bomb size3"					; 300 Mortar shell
			{spawn "shockwave_sphere"}
			{spawn "ex_bomb_100kg"}

		else stuff "mortar big"								; 120mm Mortar shells
			{spawn "ex_mort_big_wood"}

		else stuff "mortar small"							; 50-60mm Mortar shells
			{spawn "ex_grenade_size1"}

		else stuff "mortar"									; 80mm Mortar shells
			{spawn "ex_mort_sm_wood"}

		else stuff "shell size2 heat_shell"					; 75-104mm cannon HEAT shells
			{spawn "ex_heat_size2"}

		else stuff "shell size3 heat_shell"					; 105-149mm cannon HEAT shells
			{spawn "ex_heat_size3"}
			{spawn "shockwave_sphere"}

		else stuff "shell size4 heat_shell"					; 150mm cannon HEAT shells
			{spawn "ex_heat_size3"}
			{spawn "shockwave_sphere"}

		else stuff "rocketlauncher heat_shell size1"		; 60mm AT Rockets
			{spawn "shockwave"}
			{spawn "ex_heat"}
			{blastwave c4 2.5 r0 2 r1 3.5 position}		; needs blast because ammo is pierce

		else stuff "rocketlauncher heat_shell size2"		; AT Rockets
			{spawn "shockwave"}
			{spawn "ex_heat_size2"}
			{blastwave c4 2.5 r0 2 r1 3.5 position}		; needs blast because ammo is pierce

		else stuff "heat_shell"								; All Other HEAT Shells
			{spawn "shockwave"}
			{spawn "ex_heat"}

		else stuff "auto 15mm he"							; 15mm Autocannon HE shells
			{spawn "ex_he_15mm"}

		else stuff "auto size1 he"							; 20-25mm Autocannon HE shells
			{spawn "ex_he_autocannon"}

		else stuff "auto size1 aphe"						; 20-25mm Autocannon APHE shells
			{spawn "ex_he_autocannon"}

		else stuff "auto size1"								; 20-25mm Autocannon AP shells
			{spawn "ex_ap_autocannon"}

		else stuff "auto size2 he"							; 37-40mm Autocannon HE shells
			{spawn "ex_grenade_size1"}

		else stuff "auto size2"								; 37-40mm Autocannon AP shells
			{spawn "ex_ap_size1"}

		else stuff "shell size1 he"							; 37-74mm cannon HE shells
			{spawn "ex_he_size1_wood"}

		else stuff "shell size1"							; 37-74mm cannon AP shells
			{spawn "ex_ap_size1"}

		else stuff "shell size2 he"							; 75-104mm cannon HE shells
			{spawn "ex_he_size2_wood"}

		else stuff "shell size2"							; 75-104mm cannon AP shells
			{spawn "ex_ap_size2"}

		else stuff "shell size3 he"							; 105-149mm cannon HE shells
			{spawn "ex_he_size3_wood"}

		else stuff "shell size3"							; 105-149mm cannon AP shells
			{spawn "ex_ap_size3"}

		else stuff "shell size4 he"							; 150-169mm cannon HE shells
			{spawn "ex_he_size4"}

		else stuff "shell size4"							; 150-169mm cannon AP shells
			{spawn "ex_ap_size4"}

		else stuff "shell size5"							; 170mm+ cannon HE shells
			{spawn "ex_he_size5"}
			{spawn "shockwave_sphere"}

		else stuff "shell size6"							; 240mm+ cannon HE shells
			{spawn "ex_he_size6"}
			{spawn "shockwave_sphere"}

		else stuff "shell size7"							; 600mm cannon HE shells
			{spawn "ex_he_size7"}
			{spawn "shockwave_sphere"}

		else stuff "shell wp_size1"							; 50mm WP shells
			{spawn "ex_wp_size1"}								; initial explosion fx
			{spawn "shell_smoke_wp_size1"}						; actual smoke and vision volumes

		else stuff "shell wp_size2"							; 75-95mm WP shells
			{spawn "ex_wp_size2"}								; initial explosion fx
			{spawn "shell_smoke_wp_size2"}						; actual smoke and vision volumes

		else stuff "shell wp_size3"							; 100-149mm WP shells
			{spawn "ex_wp_size3"}								; initial explosion fx
			{spawn "shell_smoke_wp_size3"}						; actual smoke and vision volumes

		else stuff "shell wp_size4"							; 150+mm WP shells
			{spawn "ex_wp_size4"}								; initial explosion fx
			{spawn "shell_smoke_wp_size4"}						; actual smoke and vision volumes

		else stuff "shell smoke_size1"						; 50mm Smoke shells
			{spawn "mortar_smoke"}								; initial explosion fx
			{spawn "shell_smoke"}								; actual smoke and vision volumes

		else stuff "shell smoke_size2"						; 75-95mm Smoke shells
			{spawn "ex_sm_size2"}								; initial explosion fx
			{spawn "shell_smoke_size2"}							; actual smoke and vision volumes

		else stuff "shell smoke_size3"						; 100-149mm Smoke shells
			{spawn "ex_sm_size3"}								; initial explosion fx
			{spawn "shell_smoke_size3"}							; actual smoke and vision volumes

		else stuff "shell smoke_size4"						; 150+mm Smoke shells
			{spawn "ex_sm_size4"}								; initial explosion fx
			{spawn "shell_smoke_size4"}							; actual smoke and vision volumes

		else stuff "bomb size1"								; 50-60kg bombs / explosives
			{spawn "ex_bomb_50kg_wood"}

		else stuff "bomb size2"								; 100-200kg bombs / explosives
			{spawn "ex_bomb_100kg"}

		else stuff "bomb size3"								; 250kg+ bomb
			{spawn "ex_bomb_250kg"}

		else stuff "mine antipersonnel"						; Anti-Personnel Mines
			{spawn "ex_grenade_size2"}

		else stuff "mine antitank"							; Anti-Tank Mines
			{spawn "ex_at_mine"}

		else stuff "flare marker"							; Special Flare ammo for mission scripts
			{spawn "flare_marker"}
			{spawn "ex_bul_puff"}

		else stuff "flare artillery"						; Flare for off-map Artillery
			{spawn "flare_artillery"}
			{spawn "ex_bul_puff"}

		else stuff "flare_usa mortar_60"					; Flare for off-map 60mm mortar
			{spawn "flare_mortar_60"}
			{spawn "ex_bul_puff"}

		else stuff "flare_usa mortar_81"					; Flare for off-map 81mm mortar
			{spawn "flare_mortar_81"}
			{spawn "ex_bul_puff"}

		else stuff "flare_usa artillery_105"				; Flare for off-map 105mm
			{spawn "flare_artillery_105"}
			{spawn "ex_bul_puff"}

		else stuff "flare_usa artillery_105_vt"				; Flare for off-map 105mm VT airburst
			{spawn "flare_artillery_105_vt"}
			{spawn "ex_bul_puff"}

		else stuff "flare_usa artillery_155"				; Flare for off-map 155mm
			{spawn "flare_artillery_155"}
			{spawn "ex_bul_puff"}

		else stuff "flare_usa artillery_155_vt"				; Flare for off-map 155mm VT airburst
			{spawn "flare_artillery_155_vt"}
			{spawn "ex_bul_puff"}

		else stuff "flare_usa artillery_203"				; Flare for off-map 203mm
			{spawn "flare_artillery_203"}
			{spawn "ex_bul_puff"}

		else stuff "flare_usa artillery_203_vt"				; Flare for off-map 203mm VT airburst
			{spawn "flare_artillery_203_vt"}
			{spawn "ex_bul_puff"}

		else stuff "flare_usa artillery_240"				; Flare for off-map 240mm VT airburst
			{spawn "flare_artillery_240"}
			{spawn "ex_bul_puff"}

		else stuff "glass ic"								; Ampulomet glass ball
			{spawn "ex_glass_ic_ground"}
			{spawn "burn_piece" dir_velocity}
			{spawn "burned_spot_round2" random_orientation}
			{fire radius 2 time 20 heating 0.25}
		}
	}
}

{"bridge_snow"		;// clone of "ice"
	(include "\set\interaction_terrain\effects\effects-defines.inc")
	{on hit
		{if effector "shell_s1"
			{start_sound "hit/casing/s1/hard/concrete/" use_position}

		else effector "shell_s2"
			{start_sound "hit/casing/s2/hard/concrete/" use_position}

		else effector "shell_s3"
			{start_sound "hit/casing/s3/hard/concrete/" use_position}

		else effector "shell_cannon"
			{spawn "spheredust_shell"}

		else min_mass 100
			{if effector "tree"
				{spawn "tree_crush"}
			else
				{spawn "spheredust_small"}
			}

		else min_mass 10
			{spawn "spheredust_tiny_snow"}
		}
	}
	{on detonate
		(include "killzones.inc")
		(include "hotmod_ground.inc")
		{if stuff "grenade fire"							; Molotov Grenades
			{spawn "ex_molot_ground"}

		else stuff "grapple_fx"								; grapple hook
			{spawn "ex_ap_size2_snow"}
			{spawn "ap_shellhole" scale 0.4 texmod "snow"}

		else stuff "bullet_fx size1"						; Pistol Caliber
			{spawn "ex_bul_sm_snow"}

		else stuff "bullet_fx size2 intermediate"			; Rifle Caliber
			("sonic_crack_s1")
			{spawn "ex_bul_big_snow"}

		else stuff "bullet_fx size2"						; Rifle Caliber
			("sonic_crack_s2")
			{spawn "ex_bul_big_snow"}

		else stuff "bullet_fx size3 api"					; Large Rifle Caliber API
			("sonic_crack_s3")
			{spawn "ex_bul_heavy_snow"}
			{spawn "ex_bul_heavy_ex"}

		else stuff "bullet_fx size3"						; Large Rifle Caliber
			("sonic_crack_s3")
			{spawn "ex_bul_heavy_snow"}

		else stuff "rifle_grenade_at"						; HEAT rifle Grenades
			{spawn "ex_heat"}
			{spawn "grenade_shellhole" scale 0.6 texmod "snow"}

		else stuff "grenade size1"							; Anti-Personnel Grenades Size 1
			{spawn "ex_grenade_size1_snow"}
			{spawn "grenade_shellhole" scale 0.6 texmod "snow"}

		else stuff "grenade size2"							; Anti-Personnel Grenades Size 2
			{spawn "ex_grenade_size2_snow"}
			{spawn "grenade_shellhole" scale 0.8 texmod "snow"}

		else stuff "grenade size3"							; Anti-Tank Grenades
			{spawn "ex_grenade_size3_snow"}
			{spawn "grenade_shellhole" texmod "snow"}

		else stuff "grenade size4"							; Dynamite/Satchel Charges
			{spawn "shockwave_sphere"}
			{spawn "ex_at_mine_snow"}
			{spawn "grenade_at_shellhole" scale 0.8 texmod "snow"}

		else stuff "mortar big ic"							; 120mm Mortar incendiary
			{spawn "ex_ic_120_ground"}
			{spawn "burn_piece" dir_velocity}
			{spawn "burned_spot_round2" scale 1.4 random_orientation}
			{fire radius 4 time 20 heating 0.25}

		else stuff "mortar big bomb size1"					; 200mm Mortar shells
			{spawn "shockwave_sphere"}
			{spawn "ex_bomb_50kg_snow"}
			{spawn "grenade_at_shellhole" texmod "snow"}

		else stuff "mortar big bomb size2"					; 170mm Mortar shells
			{spawn "shockwave_sphere"}
			{spawn "ex_bomb_100kg_snow"}
			{spawn "grenade_at_shellhole" texmod "snow"}

		else stuff "mortar big bomb size3"					; 300 Mortar shell
			{spawn "shockwave_sphere"}
			{spawn "ex_bomb_100kg_snow"}
			{spawn "grenade_at_shellhole" texmod "snow"}

		else stuff "mortar big"								; 120mm Mortar shells
			{spawn "ex_he_size3_snow"}
			{spawn "grenade_shellhole" texmod "snow"}

		else stuff "mortar small"							; 50-60mm Mortar shells
			{spawn "ex_grenade_size1_snow"}
			{spawn "grenade_shellhole" scale 0.6 texmod "snow"}

		else stuff "mortar"									; 80mm Mortar shells
			{spawn "ex_mort_sm_snow"}
			{spawn "grenade_shellhole" scale 0.8 texmod "snow"}

		else stuff "shell size2 heat_shell"					; 75-104mm cannon HEAT shells
			{spawn "ex_heat_size2_snow"}
			{spawn "grenade_shellhole" texmod "snow"}

		else stuff "shell size3 heat_shell"					; 105-149mm cannon HEAT shells
			{spawn "shockwave_sphere"}
			{spawn "ex_heat_size3_snow"}
			{spawn "grenade_at_shellhole" scale 0.8 texmod "snow"}

		else stuff "shell size4 heat_shell"					; 150mm cannon HEAT shells
			{spawn "shockwave_sphere"}
			{spawn "ex_heat_size4_snow"}
			{spawn "grenade_at_shellhole" texmod "snow"}

		else stuff "rocketlauncher heat_shell size1"		; 60mm AT Rockets
			{spawn "shockwave"}
			{spawn "ex_heat_snow"}
			{spawn "grenade_shellhole" scale 0.6 texmod "snow"}
			{blastwave c4 2.5 r0 2 r1 3.5 position}		; needs blast because ammo is pierce

		else stuff "rocketlauncher heat_shell size2"		; AT Rockets
			{spawn "shockwave"}
			{spawn "ex_heat_size2_snow"}
			{spawn "grenade_shellhole" texmod "snow"}
			{blastwave c4 2.5 r0 2 r1 3.5 position}		; needs blast because ammo is pierce

		else stuff "heat_shell"								; All Other HEAT Shells
			{spawn "shockwave"}
			{spawn "ex_heat_snow"}
			{spawn "grenade_shellhole" scale 0.6 texmod "snow"}

		else stuff "auto 15mm he"							; 15mm Autocannon HE shells
			{spawn "ex_he_15mm_snow"}

		else stuff "auto size1 he"							; 20-25mm Autocannon HE shells
			{spawn "ex_he_autocannon_snow"}

		else stuff "auto size1 aphe"						; 20-25mm Autocannon APHE shells
			{spawn "ex_he_autocannon_snow"}

		else stuff "auto size1"								; 20-25mm Autocannon AP shells
			{spawn "ex_ap_autocannon_snow"}

		else stuff "auto size2 he"							; 37-40mm Autocannon HE shells
			{spawn "ex_grenade_size1_snow"}
			{spawn "grenade_shellhole" scale 0.4 texmod "snow"}

		else stuff "auto size2"								; 37-40mm Autocannon AP shells
			{spawn "ex_ap_size1_snow"}

		else stuff "shell size1 he"							; 37-74mm cannon HE shells
			{spawn "ex_he_size1_snow"}
			{spawn "grenade_shellhole" scale 0.6 texmod "snow"}

		else stuff "shell size1"							; 37-74mm cannon AP shells
			{spawn "ex_ap_size1_snow"}
			{spawn "ap_shellhole" scale 0.2 texmod "snow"}

		else stuff "shell size2 he"							; 75-104mm cannon HE shells
			{spawn "ex_he_size2_snow"}
			{spawn "grenade_shellhole" texmod "snow"}

		else stuff "shell size2"							; 75-104mm cannon AP shells
			{spawn "ex_ap_size2_snow"}
			{spawn "ap_shellhole" scale 0.4 texmod "snow"}

		else stuff "shell size3 he"							; 105-149mm cannon HE shells
			{spawn "ex_he_size3_snow"}
			{spawn "grenade_at_shellhole" scale 0.8 texmod "snow"}

		else stuff "shell size3"							; 105-149mm cannon AP shells
			{spawn "ex_ap_size3_snow"}
			{spawn "ap_shellhole" scale 0.6 texmod "snow"}

		else stuff "shell size4 he"							; 150-169mm cannon HE shells
			{spawn "ex_he_size4_snow"}
			{spawn "grenade_at_shellhole" texmod "snow"}

		else stuff "shell size4"							; 150-169mm cannon AP shells
			{spawn "ex_ap_size4_snow"}
			{spawn "ap_shellhole" scale 0.8 texmod "snow"}

		else stuff "shell size5"							; 170mm+ cannon HE shells
			{spawn "ex_he_size5_snow"}
			{spawn "shockwave_sphere"}
			{spawn "grenade_at_shellhole" texmod "snow"}

		else stuff "shell size6"							; 240mm+ cannon HE shells
			{spawn "ex_he_size6_snow"}
			{spawn "shockwave_sphere"}
			{spawn "grenade_at_shellhole" texmod "snow"}

		else stuff "shell size7"							; 600mm cannon HE shells
			{spawn "ex_he_size7_snow"}
			{spawn "shockwave_sphere"}
			{spawn "grenade_at_shellhole" texmod "snow"}

		else stuff "shell wp_size1"							; 50mm WP shells
			{spawn "ex_wp_size1"}								; initial explosion fx
			{spawn "shell_smoke_wp_size1"}						; actual smoke and vision volumes
			{spawn "ap_shellhole" texmod "snow"}

		else stuff "shell wp_size2"							; 75-95mm WP shells
			{spawn "ex_wp_size2"}								; initial explosion fx
			{spawn "shell_smoke_wp_size2"}						; actual smoke and vision volumes
			{spawn "ap_shellhole" texmod "snow"}

		else stuff "shell wp_size3"							; 100-149mm WP shells
			{spawn "ex_wp_size3"}								; initial explosion fx
			{spawn "shell_smoke_wp_size3"}						; actual smoke and vision volumes
			{spawn "grenade_shellhole" texmod "snow"}

		else stuff "shell wp_size4"							; 150+mm WP shells
			{spawn "ex_wp_size4"}								; initial explosion fx
			{spawn "shell_smoke_wp_size4"}						; actual smoke and vision volumes
			{spawn "grenade_at_shellhole" scale 0.8 texmod "snow"}

		else stuff "shell smoke_size1"						; 50mm Smoke shells
			{spawn "mortar_smoke"}								; initial explosion fx
			{spawn "shell_smoke"}								; actual smoke and vision volumes

		else stuff "shell smoke_size2"						; 75-95mm Smoke shells
			{spawn "ex_sm_size2"}								; initial explosion fx
			{spawn "shell_smoke_size2"}							; actual smoke and vision volumes
			{spawn "ap_shellhole" texmod "snow"}

		else stuff "shell smoke_size3"						; 100-149mm Smoke shells
			{spawn "ex_sm_size3"}								; initial explosion fx
			{spawn "shell_smoke_size3"}							; actual smoke and vision volumes
			{spawn "grenade_shellhole" texmod "snow"}

		else stuff "shell smoke_size4"						; 150+mm Smoke shells
			{spawn "ex_sm_size4"}								; initial explosion fx
			{spawn "shell_smoke_size4"}							; actual smoke and vision volumes
			{spawn "grenade_at_shellhole" scale 0.8 texmod "snow"}

		else stuff "bomb size1"								; 50-60kg bombs / explosives
			{spawn "ex_bomb_50kg_snow"}
			{spawn "grenade_at_shellhole" texmod "snow"}

		else stuff "bomb size2"								; 100-200kg bombs / explosives
			{spawn "ex_bomb_100kg_snow"}
			{spawn "grenade_at_shellhole" texmod "snow"}

		else stuff "bomb size3"								; 250kg+ bomb
			{spawn "ex_bomb_250kg_snow"}
			{spawn "grenade_at_shellhole" texmod "snow"}

		else stuff "mine antipersonnel"						; Anti-Personnel Mines
			{spawn "ex_grenade_size2_snow"}
			{spawn "grenade_shellhole" scale 0.8 texmod "snow"}

		else stuff "mine antitank"							; Anti-Tank Mines
			{spawn "ex_at_mine_snow"}
			{spawn "grenade_shellhole" texmod "snow"}

		else stuff "flare marker"							; Special Flare ammo for mission scripts
			{spawn "flare_marker"}
			{spawn "ex_bul_sm_snow"}

		else stuff "flare artillery"						; Flare for off-map Artillery
			{spawn "flare_artillery"}
			{spawn "ex_bul_sm_snow"}

		else stuff "flare_usa mortar_60"					; Flare for off-map 60mm mortar
			{spawn "flare_mortar_60"}
			{spawn "ex_bul_sm_snow"}

		else stuff "flare_usa mortar_81"					; Flare for off-map 81mm mortar
			{spawn "flare_mortar_81"}
			{spawn "ex_bul_sm_snow"}

		else stuff "flare_usa artillery_105"				; Flare for off-map 105mm
			{spawn "flare_artillery_105"}
			{spawn "ex_bul_sm_snow"}

		else stuff "flare_usa artillery_105_vt"				; Flare for off-map 105mm VT airburst
			{spawn "flare_artillery_105_vt"}
			{spawn "ex_bul_sm_snow"}

		else stuff "flare_usa artillery_155"				; Flare for off-map 155mm
			{spawn "flare_artillery_155"}
			{spawn "ex_bul_sm_snow"}

		else stuff "flare_usa artillery_155_vt"				; Flare for off-map 155mm VT airburst
			{spawn "flare_artillery_155_vt"}
			{spawn "ex_bul_sm_snow"}

		else stuff "flare_usa artillery_203"				; Flare for off-map 203mm
			{spawn "flare_artillery_203"}
			{spawn "ex_bul_sm_snow"}

		else stuff "flare_usa artillery_203_vt"				; Flare for off-map 203mm VT airburst
			{spawn "flare_artillery_203_vt"}
			{spawn "ex_bul_sm_snow"}

		else stuff "flare_usa artillery_240"				; Flare for off-map 240mm VT airburst
			{spawn "flare_artillery_240"}
			{spawn "ex_bul_sm_snow"}

		else stuff "glass ic"								; Ampulomet glass ball
			{spawn "ex_glass_ic_ground"}
			{spawn "burn_piece" dir_velocity}
			{spawn "burned_spot_round2" random_orientation}
			{fire radius 2 time 20 heating 0.25}
		}
	}
}
