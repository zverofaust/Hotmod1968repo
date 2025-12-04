;SDL

(define "water_detonate"
	{if stuff "grenade fire"							; Molotov Grenades
		{spawn "spherewater_small"}

	else stuff "grapple_fx"								; grapple hook
		{spawn "ex_size1_water"}

	else stuff "rifle_grenade_at"						; HEAT rifle Grenades
		{spawn "ex_size1_water"}

	else stuff "grenade size1"							; Anti-Personnel Grenades Size 1
		{spawn "ex_size1_water"}

	else stuff "grenade size2"							; Anti-Personnel Grenades Size 2
		{spawn "ex_size1_water"}

	else stuff "grenade size3"							; Anti-Tank Grenades
		{spawn "ex_size2_water"}

	else stuff "grenade size4"							; Dynamite/Satchel Charges
		{spawn "ex_size3_water"}

	else stuff "mortar big ic"							; 120mm Mortar incendiary
		{spawn "ex_ic_120_water"}
		{spawn "ex_size3_water"}
		{fire radius 4 time 20 heating 0.25}

	else stuff "mortar big bomb size1"					; 200 Mortar shells
		{spawn "ex_size4_water"}

	else stuff "mortar big bomb size2"					; 170 Mortar shell
		{spawn "ex_size4_water"}

	else stuff "mortar big bomb size3"					; 300 Mortar shell
		{spawn "ex_size4_water"}

	else stuff "mortar big"								; 120mm Mortar shells
		{spawn "ex_size3_water"}

	else stuff "mortar small"							; 50-60mm Mortar shells
		{spawn "ex_size1_water"}

	else stuff "mortar"									; 80mm Mortar shell
		{spawn "ex_size2_water"}

	else stuff "shell size2 heat_shell"					; 75-104mm cannon HEAT shells
		{spawn "ex_size2_water"}

	else stuff "shell size3 heat_shell"					; 105-149mm cannon HEAT shells
		{spawn "shockwave_sphere"}
		{spawn "ex_size3_water"}

	else stuff "shell size4 heat_shell"					; 150mm cannon HEAT shells
		{spawn "shockwave_sphere"}
		{spawn "ex_size4_water"}

	else stuff "rocketlauncher heat_shell size1"		; 60mm AT Rockets
		{spawn "shockwave"}
		{spawn "ex_size1_water"}
		;{blastwave c4 2.5 r0 2 r1 3.5 position}		; needs blast because ammo is pierce

	else stuff "rocketlauncher heat_shell size2"		; AT Rockets
		{spawn "shockwave"}
		{spawn "ex_size2_water"}
		;{blastwave c4 2.5 r0 2 r1 3.5 position}		; needs blast because ammo is pierce

	else stuff "heat_shell"								; All Other HEAT Shells
		{spawn "shockwave"}
		{spawn "ex_size1_water"}

	else stuff "auto 15mm he"							; 15mm Autocannon HE shells
		{spawn "ex_bul_big_w"}

	else stuff "auto size1 he"							; 20-25mm Autocannon HE shells
		{spawn "ex_bul_big_w"}

	else stuff "auto size1 aphe"						; 20-25mm Autocannon APHE shells
		{spawn "ex_bul_big_w"}

	else stuff "auto size2 he"							; 37-40mm Autocannon HE shells
		{spawn "ex_size1_water"}

	else stuff "shell size1 he"							; 37-74mm cannon HE shells
		{spawn "ex_size1_water"}

	else stuff "shell size2 he"							; 75-104mm cannon HE shells
		{spawn "ex_size2_water"}

	else stuff "shell size3 he"							; 105-149mm cannon HE shells
		{spawn "ex_size3_water"}

	else stuff "shell size4 he"							; 150-169mm cannon HE shells
		{spawn "ex_size4_water"}

	else stuff "shell size5"							; 170mm+ cannon HE shells
		{spawn "ex_size4_water"}

	else stuff "shell size6"							; 240mm+ cannon HE shells
		{spawn "ex_size4_water"}

	else stuff "shell size7"							; 600mm cannon HE shells
		{spawn "ex_size4_water"}

	else stuff "shell wp_size1"							; 50mm WP shells
		{spawn "ex_wp_size1_water"}							; initial explosion fx
		{spawn "shell_smoke_wp_size1"}						; actual smoke and vision volumes
		{spawn "ex_size1_water"}

	else stuff "shell wp_size2"							; 75-95mm WP shells
		{spawn "ex_wp_size2_water"}							; initial explosion fx
		{spawn "shell_smoke_wp_size2"}						; actual smoke and vision volumes
		{spawn "ex_size2_water"}

	else stuff "shell wp_size3"							; 100-149mm WP shells
		{spawn "ex_wp_size3_water"}							; initial explosion fx
		{spawn "shell_smoke_wp_size3"}						; actual smoke and vision volumes
		{spawn "ex_size3_water"}

	else stuff "shell wp_size4"							; 150+mm WP shells
		{spawn "ex_wp_size4_water"}							; initial explosion fx
		{spawn "shell_smoke_wp_size4"}						; actual smoke and vision volumes
		{spawn "ex_size4_water"}

	else stuff "shell smoke_size1"						; 50mm Smoke shells
		;{spawn "mortar_smoke"}								; initial explosion fx
		{spawn "shell_smoke"}								; actual smoke and vision volumes
		{spawn "ex_size1_water"}

	else stuff "shell smoke_size2"						; 75-95mm Smoke shells
		{spawn "ex_sm_size2_water"}							; initial explosion fx
		{spawn "shell_smoke_size2"}							; actual smoke and vision volumes
		{spawn "ex_size2_water"}

	else stuff "shell smoke_size3"						; 150+mm Smoke shells
		{spawn "ex_sm_size3_water"}							; initial explosion fx
		{spawn "shell_smoke_size3"}							; actual smoke and vision volumes
		{spawn "ex_size3_water"}

	else stuff "shell smoke_size4"						; 150+mm Smoke shells
		{spawn "ex_sm_size4_water"}							; initial explosion fx
		{spawn "shell_smoke_size4"}							; actual smoke and vision volumes
		{spawn "ex_size4_water"}

	else stuff "bomb size1"								; 50-60kg bombs / explosives
		{spawn "ex_size4_water"}

	else stuff "bomb size2"								; 100-200kg bombs / explosives
		{spawn "ex_size4_water"}

	else stuff "bomb size3"								; 250kg+ bomb
		{spawn "ex_size4_water"}

	else stuff "mine antipersonnel"						; Anti-Personnel Mines
		{spawn "ex_size1_water"}

	else stuff "mine antitank"							; Anti-Tank Mines
		{spawn "ex_size3_water"}

	else stuff "glass ic"								; Ampulomet glass ball
		{spawn "ex_glass_ic_water"}
		{spawn "ex_size1_water"}
		{fire radius 2 time 20 heating 0.25}
	}
)

(define "water_bullets"				; AP style projectiles that do not detonate on impact with water
	{if stuff "bullet_fx size1"							; Pistol Caliber
		{spawn "ex_bul_sm_w"}

	else stuff "bullet_fx size2 intermediate"			; Rifle Caliber
		("sonic_crack_s1")
		{spawn "ex_bul_sm_w"}

	else stuff "bullet_fx size2"						; Rifle Caliber
		("sonic_crack_s2")
		{spawn "ex_bul_sm_w"}

	else stuff "bullet_fx size3 api"					; Large Rifle Caliber
		("sonic_crack_s3")
		{spawn "ex_bul_heavy_ex"}
		{spawn "ex_bul_big_w"}

	else stuff "bullet_fx size3"						; Large Rifle Caliber
		("sonic_crack_s3")
		{spawn "ex_bul_big_w"}

	else stuff "auto size1"								; 20-25mm Autocannon AP shells
		{spawn "ex_bul_big_w"}

	else stuff "auto size2"								; 37-40mm Autocannon AP shells
		{spawn "ex_size1_water"}

	else stuff "shell size1"							; 37-74mm cannon AP shells
		{spawn "ex_size1_water"}

	else stuff "shell size2"							; 75-104mm cannon AP shells
		{spawn "ex_size1_water"}

	else stuff "shell size3"							; 105-149mm cannon AP shells
		{spawn "ex_size2_water"}

	else stuff "shell size4"							; 150-169mm cannon AP shells
		{spawn "ex_size2_water"}
	}
)

(define "water_flare"
	{if stuff "flare marker"							; Special Flare ammo for mission scripts
		{spawn "flare_marker"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare artillery"						; Flare for off-map Artillery
		{spawn "flare_artillery"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare_usa mortar_60"					; Flare for off-map 60mm mortar
		{spawn "flare_mortar_60"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare_usa mortar_81"					; Flare for off-map 81mm mortar
		{spawn "flare_mortar_81"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare_usa artillery_105"				; Flare for off-map 105mm
		{spawn "flare_artillery_105"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare_usa artillery_105_vt"				; Flare for off-map 105mm VT airburst
		{spawn "flare_artillery_105_vt"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare_usa artillery_155"				; Flare for off-map 155mm
		{spawn "flare_artillery_155"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare_usa artillery_155_vt"				; Flare for off-map 155mm VT airburst
		{spawn "flare_artillery_155_vt"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare_usa artillery_203"				; Flare for off-map 203mm
		{spawn "flare_artillery_203"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare_usa artillery_203_vt"				; Flare for off-map 203mm VT airburst
		{spawn "flare_artillery_203_vt"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare_usa artillery_240"				; Flare for off-map 240mm VT airburst
		{spawn "flare_artillery_240"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare_eng mortar_81"					; Flare for off-map 81mm mortar
		{spawn "flare_mortar_81"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare_eng mortar_107"					; Flare for off-map 107 mortar
		{spawn "flare_mortar_107"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare_eng artillery_88"					; Flare for off-map 88mm
		{spawn "flare_artillery_88"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare_eng artillery_114"				; Flare for off-map 114mm
		{spawn "flare_artillery_114"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare_eng artillery_127"				; Flare for off-map 127mm
		{spawn "flare_artillery_127"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare_eng artillery_140"				; Flare for off-map 140mm
		{spawn "flare_artillery_140"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare_eng artillery_152"				; Flare for off-map 152mm
		{spawn "flare_artillery_155"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare_eng artillery_183"				; Flare for off-map 183mm
		{spawn "flare_artillery_180"}
		{spawn "ex_bul_sm_w"}

	else stuff "flare_eng artillery_203"				; Flare for off-map 203mm
		{spawn "flare_artillery_203"}
		{spawn "ex_bul_sm_w"}
	}
)

(define "water_hits"
	{if min_mass 50
		{if effector "ice"
			{if effector_velocity 2
				{spawn "spherewater_big"}
			else
				{spawn "spherewater_small"}
			}
		else
			{spawn "spherewater_big"}
		}
	else effector "shell_s1"							; Spent Cartridge Casings
		{spawn "spherewater_casing"}
	else effector "shell_s2"
		{spawn "spherewater_casing"}
	else effector "shell_s3"
		{spawn "spherewater_casing"}
	else min_mass 20
		{spawn "spherewater_medium"}
	else min_mass 0.5
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
		(include "killzones.inc")
		(include "hotmod_ground.inc")
		{if stuff "grenade fire"							; Molotov Grenades
			{spawn "spherewater_small"}

		else stuff "grapple_fx"								; grapple hook
			{spawn "ex_ap_size2_mud"}
			{spawn "ex_size1_water"}

		else stuff "bullet_fx size1"						; Pistol Caliber
			{spawn "ex_bul_sm_mud"}
			{spawn "ex_bul_sm_w"}

		else stuff "bullet_fx size2 intermediate"			; Rifle Caliber
			("sonic_crack_s1")
			{spawn "ex_bul_big_mud"}
			{spawn "ex_bul_sm_w"}

		else stuff "bullet_fx size2"						; Rifle Caliber
			("sonic_crack_s2")
			{spawn "ex_bul_big_mud"}
			{spawn "ex_bul_sm_w"}

		else stuff "bullet_fx size3 api"					; Large Rifle Caliber
			("sonic_crack_s3")
			{spawn "ex_bul_heavy_ex"}
			{spawn "ex_bul_heavy_mud"}
			{spawn "ex_bul_big_w"}

		else stuff "bullet_fx size3"						; Large Rifle Caliber
			("sonic_crack_s3")
			{spawn "ex_bul_heavy_mud"}
			{spawn "ex_bul_big_w"}

		else stuff "rifle_grenade_at"						; HEAT rifle Grenades
			{spawn "ex_bul_heavy_mud"}
			{spawn "ex_size1_water"}

		else stuff "grenade size1"							; Anti-Personnel Grenades Size 1
			{spawn "ex_grenade_size1_mud"}
			{spawn "grenade_shellhole" scale 0.6 texmod "mud"}
			{spawn "ex_size1_water"}

		else stuff "grenade size2"							; Anti-Personnel Grenades Size 2
			{spawn "ex_grenade_size1_mud"}
			{spawn "grenade_shellhole" scale 0.8 texmod "mud"}
			{spawn "ex_size1_water"}

		else stuff "grenade size3"							; Anti-Tank Grenades
			{spawn "ex_grenade_size2_mud"}
			{spawn "grenade_shellhole" texmod "mud"}
			{spawn "ex_size2_water"}

		else stuff "grenade size4"							; Dynamite/Satchel Charges
			{spawn "shockwave_sphere"}
			{spawn "ex_grenade_size3_mud"}
			{spawn "grenade_at_shellhole" scale 0.8  texmod "mud"}
			{spawn "ex_size3_water"}

		else stuff "mortar big ic"							; 120mm Mortar incendiary
			{spawn "ex_ic_120_water"}
			{spawn "ex_size3_water"}
			{spawn "ex_grenade_size3_mud"}
			{fire radius 4 time 20 heating 0.25}

		else stuff "mortar big bomb size1"					; 200 Mortar shells
			{spawn "shockwave_sphere"}
			{spawn "ex_grenade_size3_mud"}
			{spawn "crater_small" texmod "mud"}
			{spawn "ex_size4_water"}

		else stuff "mortar big bomb size2"					; 170 Mortar shell
			{spawn "shockwave_sphere"}
			{spawn "ex_grenade_size3_mud"}
			{spawn "crater_medium" texmod "mud"}
			{spawn "ex_size4_water"}

		else stuff "mortar big bomb size3"					; 300 Mortar shell
			{spawn "shockwave_sphere"}
			{spawn "ex_grenade_size3_mud"}
			{spawn "crater_medium" texmod "mud"}
			{spawn "ex_size4_water"}

		else stuff "mortar big"								; 120mm Mortar shells
			{spawn "ex_grenade_size3_mud"}
			{spawn "crater_small" texmod "mud"}
			{spawn "ex_size3_water"}

		else stuff "mortar small"							; 50-60mm Mortar shells
			{spawn "ex_grenade_size1_mud"}
			{spawn "grenade_shellhole" scale 0.6 texmod "mud"}
			{spawn "ex_size1_water"}

		else stuff "mortar"									; 80mm Mortar shells
			{spawn "ex_grenade_size2_mud"}
			{spawn "crater_tiny" texmod "mud"}
			{spawn "ex_size2_water"}

		else stuff "shell size2 heat_shell"					; 75-104mm cannon HEAT shells
			{spawn "ex_he_size1_mud"}
			{spawn "grenade_shellhole" texmod "mud"}
			{spawn "ex_size2_water"}

		else stuff "shell size3 heat_shell"					; 105-149mm cannon HEAT shells
			{spawn "shockwave_sphere"}
			{spawn "ex_he_size2_mud"}
			{spawn "crater_tiny" texmod "mud"}
			{spawn "ex_size3_water"}

		else stuff "shell size4 heat_shell"					; 150mm cannon HEAT shells
			{spawn "shockwave_sphere"}
			{spawn "ex_he_size3_mud"}
			{spawn "crater_small" texmod "mud"}
			{spawn "ex_size4_water"}

		else stuff "rocketlauncher heat_shell size1"		; 60mm AT Rockets
			{spawn "shockwave"}
			{spawn "ex_grenade_size1_mud"}
			{spawn "ex_size1_water"}
			{blastwave c4 2.5 r0 2 r1 3.5 position}		; needs blast because ammo is pierce

		else stuff "rocketlauncher heat_shell size2"		; AT Rockets
			{spawn "shockwave"}
			{spawn "ex_grenade_size1_mud"}
			{spawn "ex_size2_water"}
			{blastwave c4 2.5 r0 2 r1 3.5 position}		; needs blast because ammo is pierce

		else stuff "heat_shell"								; All Other HEAT Shells
			{spawn "shockwave"}
			{spawn "ex_grenade_size1_mud"}
			{spawn "grenade_shellhole" scale 0.6 texmod "mud"}
			{spawn "ex_size1_water"}

		else stuff "auto 15mm he"							; 15mm Autocannon HE shells
			{spawn "ex_he_autocannon_mud"}
			{spawn "ex_bul_big_w"}

		else stuff "auto size1 he"							; 20-25mm Autocannon HE shells
			{spawn "ex_he_autocannon_mud"}
			{spawn "ex_bul_big_w"}

		else stuff "auto size1 aphe"						; 20-25mm Autocannon APHE shells
			{spawn "ex_he_autocannon_mud"}
			{spawn "ex_bul_big_w"}

		else stuff "auto size1"								; 20-25mm Autocannon AP shells
			{spawn "ex_ap_autocannon_mud"}
			{spawn "ex_bul_big_w"}

		else stuff "auto size2 he"							; 37-40mm Autocannon HE shells
			{spawn "ex_grenade_size1_mud"}
			{spawn "grenade_shellhole" scale 0.4 texmod "mud"}
			{spawn "ex_size1_water"}

		else stuff "auto size2"								; 37-40mm Autocannon AP shells
			{spawn "ex_ap_size1_mud"}
			{spawn "ex_size1_water"}

		else stuff "shell size1 he"							; 37-74mm cannon HE shells
			{spawn "ex_grenade_size1_mud"}
			{spawn "grenade_shellhole" scale 0.6 texmod "mud"}
			{spawn "ex_size1_water"}

		else stuff "shell size1"							; 37-74mm cannon AP shells
			{spawn "ex_ap_size1_mud"}
			{spawn "ap_shellhole" scale 0.2}
			{spawn "ex_size1_water"}

		else stuff "shell size2 he"							; 75-104mm cannon HE shells
			{spawn "ex_grenade_size2_mud"}
			{spawn "crater_tiny" texmod "mud"}
			{spawn "ex_size2_water"}

		else stuff "shell size2"							; 75-104mm cannon AP shells
			{spawn "ex_ap_size2_mud"}
			{spawn "ap_shellhole" scale 0.6}
			{spawn "ex_size1_water"}

		else stuff "shell size3 he"							; 105-149mm cannon HE shells
			{spawn "ex_grenade_size2_mud"}
			{spawn "crater_small" texmod "mud"}
			{spawn "ex_size3_water"}

		else stuff "shell size3"							; 105-149mm cannon AP shells
			{spawn "ex_ap_size3_mud"}
			{spawn "ap_shellhole" scale 0.8}
			{spawn "ex_size2_water"}

		else stuff "shell size4 he"							; 150-169mm cannon HE shells
			{spawn "ex_grenade_size3_mud"}
			{spawn "crater_medium" texmod "mud"}
			{spawn "ex_size4_water"}

		else stuff "shell size4"							; 150-169mm cannon AP shells
			{spawn "ex_ap_size4_mud"}
			{spawn "crater_tiny" texmod "mud"}
			{spawn "ex_size2_water"}

		else stuff "shell size5"							; 170mm+ cannon HE shells
			{spawn "ex_grenade_size3_mud"}
			{spawn "shockwave_sphere"}
			{spawn "crater_medium" texmod "mud"}
			{spawn "ex_size4_water"}

		else stuff "shell size6"							; 240mm+ cannon HE shells
			{spawn "ex_he_size4"}
			{spawn "shockwave_sphere"}
			{spawn "crater_big" texmod "mud"}
			{spawn "ex_size4_water"}

		else stuff "shell size7"							; 600mm cannon HE shells
			{spawn "ex_he_size5"}
			{spawn "shockwave_sphere"}
			{spawn "crater_big" texmod "mud"}
			{spawn "ex_size4_water"}

		else stuff "shell wp_size1"							; 50mm WP shells
			{spawn "ex_wp_size1_water"}							; initial explosion fx
			{spawn "shell_smoke_wp_size1"}						; actual smoke and vision volumes
			{spawn "ex_size1_water"}

		else stuff "shell wp_size2"							; 75-95mm WP shells
			{spawn "ex_wp_size2_water"}							; initial explosion fx
			{spawn "shell_smoke_wp_size2"}						; actual smoke and vision volumes
			{spawn "ap_shellhole"}
			{spawn "ex_size1_water"}

		else stuff "shell wp_size3"							; 100-149mm WP shells
			{spawn "ex_wp_size3_water"}							; initial explosion fx
			{spawn "shell_smoke_wp_size3"}						; actual smoke and vision volumes
			{spawn "grenade_shellhole" texmod "mud"}
			{spawn "ex_size2_water"}

		else stuff "shell wp_size4"							; 150+mm WP shells
			{spawn "ex_wp_size4_water"}								; initial explosion fx
			{spawn "shell_smoke_wp_size4"}						; actual smoke and vision volumes
			{spawn "grenade_at_shellhole" scale 0.8 texmod "mud"}
			{spawn "ex_size2_water"}

		else stuff "shell smoke_size1"						; 50mm Smoke shells
			{spawn "mortar_smoke"}								; initial explosion fx
			{spawn "shell_smoke"}								; actual smoke and vision volumes
			{spawn "ex_size1_water"}

		else stuff "shell smoke_size2"						; 75-95mm Smoke shells
			{spawn "ex_sm_size2"}								; initial explosion fx
			{spawn "shell_smoke_size2"}							; actual smoke and vision volumes
			{spawn "ap_shellhole"}
			{spawn "ex_size1_water"}

		else stuff "shell smoke_size3"						; 100-149mm Smoke shells
			{spawn "ex_sm_size3"}								; initial explosion fx
			{spawn "shell_smoke_size3"}							; actual smoke and vision volumes
			{spawn "grenade_shellhole" texmod "mud"}
			{spawn "ex_size2_water"}

		else stuff "shell smoke_size4"						; 150+mm Smoke shells
			{spawn "ex_sm_size4"}								; initial explosion fx
			{spawn "shell_smoke_size4"}							; actual smoke and vision volumes
			{spawn "grenade_at_shellhole" scale 0.8 texmod "mud"}
			{spawn "ex_size2_water"}

		else stuff "bomb size1"								; 50-60kg bombs / explosives
			{spawn "ex_bomb_50kg"}
			{spawn "crater_medium" texmod "mud"}
			{spawn "ex_size4_water"}

		else stuff "bomb size2"								; 100-200kg bombs / explosives
			{spawn "ex_bomb_100kg"}
			{spawn "crater_big" texmod "mud"}
			{spawn "ex_size4_water"}

		else stuff "bomb size3"								; 250kg+ bomb
			{spawn "ex_bomb_100kg"}
			{spawn "crater_massive" texmod "mud"}
			{spawn "ex_size4_water"}

		else stuff "mine antipersonnel"						; Anti-Personnel Mines
			{spawn "ex_grenade_size1_mud"}
			{spawn "grenade_shellhole" texmod "mud"}
			{spawn "ex_size1_water"}

		else stuff "mine antitank"							; Anti-Tank Mines
			{spawn "shockwave_sphere"}
			{spawn "ex_grenade_size3_mud"}
			{spawn "crater_tiny" texmod "mud"}
			{spawn "ex_size3_water"}

		else stuff "glass ic"								; Ampulomet glass ball
			{spawn "ex_glass_ic_water"}
			{spawn "ex_size1_water"}
			{spawn "ex_grenade_size1_mud"}
			{fire radius 2 time 20 heating 0.25}
		}
		("water_flare")
	}
}

{"water"
	{on hit ("water_hits")}
	{on detonate
		(include "killzones.inc")
		(include "hotmod_ground.inc")
		("water_detonate")
		("water_bullets")
		("water_flare")
	}
}

{"underwater"
	{on detonate
		(include "killzones.inc")
		(include "hotmod_ground.inc")
		("water_detonate")
		("water_bullets")	;// (temp) fixes missing fx from bullets hitting water with depth between shallow_water
							;// and normal water, but causes duplicate water fx. Bugged either way.
	}
}

{"puddle"
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

		}
	}
	{on detonate
		(include "killzones.inc")
		(include "hotmod_ground.inc")
		{if stuff "grenade fire"							; Molotov Grenades
			{spawn "ex_molot_ground"}

		else stuff "grapple_fx"								; grapple hook
			{spawn "ex_ap_size2_mud"}
			{spawn "ap_shellhole" scale 0.4}

		else stuff "bullet_fx size1"						; Pistol Caliber
			{spawn "ex_bul_sm_mud"}

		else stuff "bullet_fx size2 intermediate"			; Rifle Caliber
			("sonic_crack_s1")
			{spawn "ex_bul_big_mud"}

		else stuff "bullet_fx size2"						; Rifle Caliber
			("sonic_crack_s2")
			{spawn "ex_bul_big_mud"}

		else stuff "bullet_fx size3 api"					; Large Rifle Caliber
			("sonic_crack_s3")
			{spawn "ex_bul_heavy_ex"}
			{spawn "ex_bul_heavy_mud"}

		else stuff "bullet_fx size3"						; Large Rifle Caliber
			("sonic_crack_s3")
			{spawn "ex_bul_heavy_mud"}

		else stuff "rifle_grenade_at"						; HEAT rifle Grenades
			{spawn "ex_heat"}
			{spawn "grenade_shellhole" scale 0.6 texmod "mud"}

		else stuff "grenade size1"							; Anti-Personnel Grenades Size 1
			{spawn "ex_grenade_size1_mud"}
			{spawn "grenade_shellhole" scale 0.6 texmod "mud"}

		else stuff "grenade size2"							; Anti-Personnel Grenades Size 2
			{spawn "ex_grenade_size2_mud"}
			{spawn "grenade_shellhole" scale 0.8 texmod "mud"}

		else stuff "grenade size3"							; Anti-Tank Grenades
			{spawn "ex_grenade_size3_mud"}
			{spawn "grenade_shellhole" texmod "mud"}

		else stuff "grenade size4"							; Dynamite/Satchel Charges
			{spawn "shockwave_sphere"}
			{spawn "ex_at_mine"}
			{spawn "crater_tiny" texmod "mud"}

		else stuff "mortar big ic"							; 120mm Mortar incendiary
			{spawn "ex_ic_120_ground"}
			{spawn "burn_piece" dir_velocity}
			{spawn "burned_spot_round2" scale 1.4 random_orientation}
			{fire radius 4 time 20 heating 0.25}

		else stuff "mortar big bomb size1"					; 200 Mortar shells
			{spawn "shockwave_sphere"}
			{spawn "ex_bomb_50kg"}
			{spawn "crater_small" texmod "mud"}

		else stuff "mortar big bomb size2"					; 170 Mortar shell
			{spawn "shockwave_sphere"}
			{spawn "ex_bomb_100kg"}
			{spawn "crater_medium" texmod "mud"}

		else stuff "mortar big bomb size3"					; 300 Mortar shell
			{spawn "shockwave_sphere"}
			{spawn "ex_bomb_100kg"}
			{spawn "crater_medium" texmod "mud"}

		else stuff "mortar big"								; 120mm Mortar shells
			{spawn "ex_he_size3_mud"}
			{spawn "crater_small" texmod "mud"}

		else stuff "mortar small"							; 50-60mm Mortar shells
			{spawn "ex_grenade_size1_mud"}
			{spawn "grenade_shellhole" scale 0.6 texmod "mud"}

		else stuff "mortar"									; 80mm Mortar shells
			{spawn "ex_mort_sm_mud"}
			{spawn "crater_tiny" texmod "mud"}

		else stuff "shell size2 heat_shell"					; 75-104mm cannon HEAT shells
			{spawn "ex_heat_size2_mud"}
			{spawn "grenade_shellhole" texmod "mud"}

		else stuff "shell size3 heat_shell"					; 105-149mm cannon HEAT shells
			{spawn "shockwave_sphere"}
			{spawn "ex_heat_size3_mud"}
			{spawn "crater_tiny" texmod "mud"}

		else stuff "shell size4 heat_shell"					; 150mm cannon HEAT shells
			{spawn "shockwave_sphere"}
			{spawn "ex_heat_size3_mud"}
			{spawn "crater_small" texmod "mud"}

		else stuff "rocketlauncher heat_shell size1"		; 60mm AT Rockets
			{spawn "shockwave"}
			{spawn "ex_heat"}
			{spawn "grenade_shellhole" scale 0.6 texmod "mud"}
			{blastwave c4 2.5 r0 2 r1 3.5 position}		; needs blast because ammo is pierce

		else stuff "rocketlauncher heat_shell size2"		; AT Rockets
			{spawn "shockwave"}
			{spawn "ex_heat_size2_mud"}
			{spawn "grenade_shellhole" texmod "mud"}
			{blastwave c4 2.5 r0 2 r1 3.5 position}		; needs blast because ammo is pierce

		else stuff "heat_shell"								; All Other HEAT Shells
			{spawn "shockwave"}
			{spawn "ex_heat"}
			{spawn "grenade_shellhole" scale 0.6 texmod "mud"}

		else stuff "auto 15mm he"							; 15mm Autocannon HE shells
			{spawn "ex_he_autocannon_mud"}

		else stuff "auto size1 he"							; 20-25mm Autocannon HE shells
			{spawn "ex_he_autocannon_mud"}

		else stuff "auto size1 aphe"						; 20-25mm Autocannon APHE shells
			{spawn "ex_he_autocannon_mud"}

		else stuff "auto size1"								; 20-25mm Autocannon AP shells
			{spawn "ex_ap_autocannon_mud"}

		else stuff "auto size2 he"							; 37-40mm Autocannon HE shells
			{spawn "ex_grenade_size1_mud"}
			{spawn "grenade_shellhole" scale 0.4 texmod "mud"}

		else stuff "auto size2"								; 37-40mm Autocannon AP shells
			{spawn "ex_ap_size1_mud"}

		else stuff "shell size1 he"							; 37-74mm cannon HE shells
			{spawn "ex_he_size1_mud"}
			{spawn "grenade_shellhole" scale 0.6 texmod "mud"}

		else stuff "shell size1"							; 37-74mm cannon AP shells
			{spawn "ex_ap_size1_mud"}
			{spawn "ap_shellhole" scale 0.2}

		else stuff "shell size2 he"							; 75-104mm cannon HE shells
			{spawn "ex_he_size2_mud"}
			{spawn "crater_tiny" texmod "mud"}

		else stuff "shell size2"							; 75-104mm cannon AP shells
			{spawn "ex_ap_size2_mud"}
			{spawn "ap_shellhole" scale 0.6}

		else stuff "shell size3 he"							; 105-149mm cannon HE shells
			{spawn "ex_he_size3_mud"}
			{spawn "crater_small" texmod "mud"}

		else stuff "shell size3"							; 105-149mm cannon AP shells
			{spawn "ex_ap_size3_mud"}
			{spawn "ap_shellhole" scale 0.8}

		else stuff "shell size4 he"							; 150-169mm cannon HE shells
			{spawn "ex_he_size4"}
			{spawn "crater_medium" texmod "mud"}

		else stuff "shell size4"							; 150-169mm cannon AP shells
			{spawn "ex_ap_size4_mud"}
			{spawn "crater_tiny" texmod "mud"}

		else stuff "shell size5"							; 170mm+ cannon HE shells
			{spawn "ex_he_size5"}
			{spawn "shockwave_sphere"}
			{spawn "crater_big" texmod "mud"}

		else stuff "shell size6"							; 240mm+ cannon HE shells
			{spawn "ex_he_size6"}
			{spawn "shockwave_sphere"}
			{spawn "crater_massive" texmod "mud"}

		else stuff "shell size7"							; 600mm cannon HE shells
			{spawn "ex_he_size7"}
			{spawn "shockwave_sphere"}
			{spawn "crater_massive" texmod "mud"}

		else stuff "shell wp_size1"							; 50mm WP shells
			{spawn "ex_wp_size1"}								; initial explosion fx
			{spawn "shell_smoke_wp_size1"}						; actual smoke and vision volumes

		else stuff "shell wp_size2"							; 75-95mm WP shells
			{spawn "ex_wp_size2"}								; initial explosion fx
			{spawn "shell_smoke_wp_size2"}						; actual smoke and vision volumes
			{spawn "ap_shellhole"}

		else stuff "shell wp_size3"							; 100-149mm WP shells
			{spawn "ex_wp_size3"}								; initial explosion fx
			{spawn "shell_smoke_wp_size3"}						; actual smoke and vision volumes
			{spawn "grenade_shellhole" texmod "mud"}

		else stuff "shell wp_size4"							; 150+mm WP shells
			{spawn "ex_wp_size4"}								; initial explosion fx
			{spawn "shell_smoke_wp_size4"}						; actual smoke and vision volumes
			{spawn "grenade_at_shellhole" scale 0.8 texmod "mud"}

		else stuff "shell smoke_size1"						; 50mm Smoke shells
			{spawn "mortar_smoke"}								; initial explosion fx
			{spawn "shell_smoke"}								; actual smoke and vision volumes

		else stuff "shell smoke_size2"						; 75-95mm Smoke shells
			{spawn "ex_sm_size2"}								; initial explosion fx
			{spawn "shell_smoke_size2"}							; actual smoke and vision volumes
			{spawn "ap_shellhole"}

		else stuff "shell smoke_size3"						; 100-149mm Smoke shells
			{spawn "ex_sm_size3"}								; initial explosion fx
			{spawn "shell_smoke_size3"}							; actual smoke and vision volumes
			{spawn "grenade_shellhole" texmod "mud"}

		else stuff "shell smoke_size4"						; 150+mm Smoke shells
			{spawn "ex_sm_size4"}								; initial explosion fx
			{spawn "shell_smoke_size4"}							; actual smoke and vision volumes
			{spawn "grenade_at_shellhole" scale 0.8 texmod "mud"}

		else stuff "bomb size1"								; 50-60kg bombs / explosives
			{spawn "ex_bomb_50kg"}
			{spawn "crater_medium" texmod "mud"}

		else stuff "bomb size2"								; 100-200kg bombs / explosives
			{spawn "ex_bomb_100kg"}
			{spawn "crater_big" texmod "mud"}

		else stuff "bomb size3"								; 250kg+ bomb
			{spawn "ex_bomb_250kg"}
			{spawn "crater_massive" texmod "mud"}

		else stuff "mine antipersonnel"						; Anti-Personnel Mines
			{spawn "ex_grenade_size2_mud"}
			{spawn "grenade_shellhole" texmod "mud"}

		else stuff "mine antitank"							; Anti-Tank Mines
			{spawn "ex_at_mine"}
			{spawn "crater_tiny" texmod "mud"}

		else stuff "flare marker"							; Special Flare ammo for mission scripts
			{spawn "flare_marker"}
			{spawn "ex_bul_sm_mud"}

		else stuff "flare artillery"						; Flare for off-map Artillery
			{spawn "flare_artillery"}
			{spawn "ex_bul_sm_mud"}

		else stuff "flare_usa mortar_60"					; Flare for off-map 60mm mortar
			{spawn "flare_mortar_60"}
			{spawn "ex_bul_sm_mud"}

		else stuff "flare_usa mortar_81"					; Flare for off-map 81mm mortar
			{spawn "flare_mortar_81"}
			{spawn "ex_bul_sm_mud"}

		else stuff "flare_usa artillery_105"				; Flare for off-map 105mm
			{spawn "flare_artillery_105"}
			{spawn "ex_bul_sm_mud"}

		else stuff "flare_usa artillery_105_vt"				; Flare for off-map 105mm VT airburst
			{spawn "flare_artillery_105_vt"}
			{spawn "ex_bul_sm_mud"}

		else stuff "flare_usa artillery_155"				; Flare for off-map 155mm
			{spawn "flare_artillery_155"}
			{spawn "ex_bul_sm_mud"}

		else stuff "flare_usa artillery_155_vt"				; Flare for off-map 155mm VT airburst
			{spawn "flare_artillery_155_vt"}
			{spawn "ex_bul_sm_mud"}

		else stuff "flare_usa artillery_203"				; Flare for off-map 203mm
			{spawn "flare_artillery_203"}
			{spawn "ex_bul_sm_mud"}

		else stuff "flare_usa artillery_203_vt"				; Flare for off-map 203mm VT airburst
			{spawn "flare_artillery_203_vt"}
			{spawn "ex_bul_sm_mud"}

		else stuff "flare_usa artillery_240"				; Flare for off-map 240mm VT airburst
			{spawn "flare_artillery_240"}
			{spawn "ex_bul_sm_mud"}

		else stuff "flare_eng mortar_81"					; Flare for off-map 81mm mortar
			{spawn "flare_mortar_81"}
			{spawn "ex_bul_sm_mud"}

		else stuff "flare_eng mortar_107"					; Flare for off-map 107 mortar
			{spawn "flare_mortar_107"}
			{spawn "ex_bul_sm_mud"}

		else stuff "flare_eng artillery_88"					; Flare for off-map 88mm
			{spawn "flare_artillery_88"}
			{spawn "ex_bul_sm_mud"}

		else stuff "flare_eng artillery_114"				; Flare for off-map 114mm
			{spawn "flare_artillery_114"}
			{spawn "ex_bul_sm_mud"}

		else stuff "flare_eng artillery_127"				; Flare for off-map 127mm
			{spawn "flare_artillery_127"}
			{spawn "ex_bul_sm_mud"}

		else stuff "flare_eng artillery_140"				; Flare for off-map 140mm
			{spawn "flare_artillery_140"}
			{spawn "ex_bul_sm_mud"}

		else stuff "flare_eng artillery_152"				; Flare for off-map 152mm
			{spawn "flare_artillery_155"}
			{spawn "ex_bul_sm_mud"}

		else stuff "flare_eng artillery_183"				; Flare for off-map 183mm
			{spawn "flare_artillery_180"}
			{spawn "ex_bul_sm_mud"}

		else stuff "flare_eng artillery_203"				; Flare for off-map 203mm
			{spawn "flare_artillery_203"}
			{spawn "ex_bul_sm_mud"}

		else stuff "glass ic"								; Ampulomet glass ball
			{spawn "ex_glass_ic_ground"}
			{spawn "burn_piece" dir_velocity}
			{spawn "burned_spot_round2" random_orientation}
			{fire radius 2 time 20 heating 0.25}
		}
	}
}

{"swamp"
	{on hit ("water_hits")}
	{on bullet ("water_bullets")}
	{on detonate
		(include "hotmod_ground.inc")
		("water_detonate")
		("water_bullets")
		("water_flare")
	}
}
