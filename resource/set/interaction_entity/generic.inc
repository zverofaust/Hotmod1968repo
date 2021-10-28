{"generic"
	{on bullet_hit
		{if not under_water
			{if material "flesh"
				{if stuff "bullet_fx"
					{spawn "blood_small"}

				else stuff "auto he"
					{spawn "object_hit_fg_auto"}
					{spawn "blood_small"}
					{spawn "blood_big"}	

				else stuff "auto"
					{spawn "blood_small"}
					{spawn "blood_big"}

				else stuff "rifle_grenade_at"
					{spawn "metal_hit_heat_riflegrenade"}

				else stuff "bomb size3"
					{spawn "metal_hit_fg_massive"}

				else stuff "mortar"
					{spawn "metal_hit_fg"}
					{spawn "blood_small"}

				else stuff "shell size1 he"
					{spawn "metal_hit_fg_small"}

				else stuff "shell size2 he"
					{spawn "metal_hit_fg"}

				else stuff "shell size3 he"
					{spawn "metal_hit_fg_big"}

				else stuff "shell size4 he"
					{spawn "metal_hit_fg_massive"}

				else stuff "size4"
					{spawn "ex_air_big2"}
					{spawn "blood_small"}
					{spawn "blood_big"}

				else stuff "shell size2 heat_shell"
					{spawn "metal_hit_br_heat"}

				else stuff "shell size3 heat_shell"
					{spawn "metal_hit_br_big_heat"}

				else stuff "heat_shell"
					{spawn "ex_heat"}
					{spawn "blood_small"}
					{spawn "blood_big"}

				else stuff "shell he"
					{spawn "ex_air_big"}
					{spawn "blood_small"}
					{spawn "blood_big"}

				else stuff "shell"
					{spawn "blood_small"}
					{spawn "blood_big"}

				else stuff "flare marker"							; Special Flare ammo for mission scripts 
					;{spawn "flare_marker"}

				else stuff "flare artillery"						; Flare for off-map Artillery
					{spawn "flare_artillery"}
				
				else stuff "flare artillery 105"						; Flare for off-map Artillery
					{spawn "flare_artillery_105"}
				
				else stuff "flare artillery 150"						; Flare for off-map Artillery
					{spawn "flare_artillery_150"}
				}

			else material "steel"
				{if stuff "bullet_fx size3"
					{spawn "metal_hit_bul_at"}

				else stuff "bullet_fx"
					{spawn "metal_hit_bul"}

				else stuff "rifle_grenade_at"
					{spawn "metal_hit_heat_riflegrenade"}

				else stuff "bomb size3"
				 	{spawn "metal_hit_fg_massive"}

				else stuff "mortar"
					{spawn "metal_hit_fg"}

				else stuff "big mortar"
					{spawn "metal_hit_fg_big"}

				else stuff "mortar_smoke"
					{spawn "metal_hit_br"}

				else stuff "rocketlauncher"
					{spawn "metal_hit_br_small_bazooka"}

				else stuff "auto he"
					{spawn "metal_hit_fg_auto"}

				else stuff "auto aphe"			;// plane autocannon
					{spawn "metal_hit_fg_auto"}
					{blastwave c4 0.504 r0 0.2 r1 0.5 position}		; needs blast because ammo is pierce
					{blastwave c4 0.36 r0 0.75 r1 3.06 position}

				else stuff "auto"
					{spawn "metal_hit_bul_zenite"}

				else stuff "size1 heat_shell"
					{spawn "metal_hit_br_small_heat"}

				else stuff "size2 heat_shell"
					{spawn "metal_hit_br_heat"}

				else stuff "size3 heat_shell"
					{spawn "metal_hit_br_big_heat"}

				else stuff "size4 heat_shell"
					{spawn "metal_hit_br_big_heat"}

				else stuff "size1 apcr"
					{spawn "metal_hit_br_small_apcr"}

				else stuff "size2 apcr"
					{spawn "metal_hit_br_apcr"}

				else stuff "size3 apcr"
					{spawn "metal_hit_br_big_apcr"}

				else stuff "size4 apcr"
					{spawn "metal_hit_br_big_apcr"}

				else stuff "shell size1 he"
					{spawn "metal_hit_fg_small"}

				else stuff "shell size2 he"
					{spawn "metal_hit_fg"}

				else stuff "shell size3 he"
					{spawn "metal_hit_fg_big"}

				else stuff "shell size4 he"
					{spawn "metal_hit_fg_massive"}

				else stuff "shell size5"
					{spawn "object_hit_fg_massive"}

				else stuff "shell size1 hasfiller"
					{spawn "metal_hit_br_small"}

				else stuff "shell size2 hasfiller"
					{spawn "metal_hit_br"}

				else stuff "shell size3 hasfiller"
					{spawn "metal_hit_br_big"}

				else stuff "shell size4 hasfiller"
					{spawn "metal_hit_br_big"}

				else stuff "shell size1"
					{spawn "metal_hit_br_small"}

				else stuff "shell size2"
					{spawn "metal_hit_br"}

				else stuff "shell size3"
					{spawn "metal_hit_br_big"}

				else stuff "shell size4"
					{spawn "metal_hit_br_big"}
					
				else stuff "shell small"
					{spawn "metal_hit_br_small"}

				else stuff "shell zenite"
					{spawn "metal_hit_bul_zenite"}

				else material "steelball"
					{spawn "metal_hit_bul"}

				else stuff "flare marker"							; Special Flare ammo for mission scripts 
					;{spawn "flare_marker"}
					{spawn "metal_hit_bul"}

				else stuff "flare artillery"						; Flare for off-map Artillery
					{spawn "flare_artillery"}
					{spawn "metal_hit_bul"}
				
				else stuff "flare artillery 105"						; Flare for off-map Artillery
					{spawn "flare_artillery_105"}
					{spawn "metal_hit_bul"}
				
				else stuff "flare artillery 150"						; Flare for off-map Artillery
					{spawn "flare_artillery_150"}
					{spawn "metal_hit_bul"}
				}
				

			else material "wood"
				{if stuff "bullet_fx size3"
					{spawn "ex_air_sm"}
					{spawn "wood_hit_bul"}

				else stuff "bullet_fx"
					{spawn "wood_hit_bul"}

				else stuff "rifle_grenade_at"
					{spawn "metal_hit_heat_riflegrenade"}

				else stuff "bomb size3"
					{spawn "wood_hit_fg_massive"}

				else stuff "mortar"
					{spawn "wood_hit_fg"}

				else stuff "big mortar"
					{spawn "wood_hit_fg_big"}

				else stuff "mortar_smoke"
					{spawn "mortar_smoke"}
					{spawn "ex_air_sm"}
					{spawn "wood_hit_bul"}

				else stuff "rocketlauncher"
					{spawn "wood_hit_fg_small"}

				else stuff "shell size2 heat_shell"
					{spawn "metal_hit_br_heat"}

				else stuff "shell size3 heat_shell"
					{spawn "metal_hit_br_big_heat"}

				else stuff "auto he"
					{spawn "object_hit_fg_auto"}

				else stuff "auto"
					{spawn "wood_hit_br_auto"}

				else stuff "shell size1 he"
					{spawn "wood_hit_fg_small"}

				else stuff "shell size2 he"
					{spawn "wood_hit_fg"}

				else stuff "shell size3 he"
					{spawn "wood_hit_fg_big"}

				else stuff "shell size4 he"
					{spawn "wood_hit_fg_massive"}

				else stuff "shell size5"
					{spawn "shockwave_sphere"}
					{spawn "ex_he_size5"}

				else stuff "shell small"
					{spawn "ex_air_sm"}
					{spawn "wood_hit_br"}

				else stuff "shell he"
					{spawn "ex_mort_big_wood"}

				else stuff "shell"
					{spawn "wood_hit_br"}

				else stuff "flare marker"							; Special Flare ammo for mission scripts 
					;{spawn "flare_marker"}
					{spawn "wood_hit_bul"}

				else stuff "flare artillery"						; Flare for off-map Artillery
					{spawn "flare_artillery"}
					{spawn "wood_hit_bul"}
				
				else stuff "flare artillery 105"						; Flare for off-map Artillery
					{spawn "flare_artillery_105"}
					{spawn "wood_hit_bul"}
				
				else stuff "flare artillery 150"						; Flare for off-map Artillery
					{spawn "flare_artillery_150"}
					{spawn "wood_hit_bul"}
					
				else stuff "flame"

				else
					{spawn "wood_hit_br"}
				}

			else material "concrete"
				{if stuff "bullet_fx size3"
					{spawn "stone_hit_bul"}
					{spawn "ex_air_sm"}

				else stuff "bullet_fx"
					{spawn "stone_hit_bul"}

				else stuff "rifle_grenade_at"
					{spawn "metal_hit_heat_riflegrenade"}

				else stuff "bomb size3"
					{spawn "stone_hit_fg_massive"}

				else stuff "mortar"
					{spawn "stone_hit_fg"}

				else stuff "big mortar"
					{spawn "stone_hit_fg_big"}

				else stuff "rocketlauncher"
					{spawn "stone_hit_br"}

				else stuff "shell size2 heat_shell"
					{spawn "metal_hit_br_heat"}

				else stuff "shell size3 heat_shell"
					{spawn "metal_hit_br_big_heat"}

				else stuff "auto he"
					{spawn "object_hit_fg_auto"}

				else stuff "auto"
					{spawn "stone_hit_br_auto"}

				else stuff "shell size1 he"
					{spawn "stone_hit_fg_small"}

				else stuff "shell size2 he"
					{spawn "stone_hit_fg"}

				else stuff "shell size3 he"
					{spawn "stone_hit_fg_big"}

				else stuff "shell size4 he"
					{spawn "stone_hit_fg_massive"}

				else stuff "shell size5"
					{spawn "object_hit_fg_massive"}

				else stuff "shell apcr"
					{spawn "stone_hit_br"}

				else stuff "shell small"
					{spawn "stone_hit_br_small"}

				else stuff "flare marker"							; Special Flare ammo for mission scripts 
					;{spawn "flare_marker"}
					{spawn "stone_hit_bul"}

				else stuff "flare artillery"						; Flare for off-map Artillery
					{spawn "flare_artillery"}
					{spawn "stone_hit_bul"}
					
				else stuff "flare artillery 105"						; Flare for off-map Artillery
					{spawn "flare_artillery_105"}
					{spawn "stone_hit_bul"}
					
				else stuff "flare artillery 150"						; Flare for off-map Artillery
					{spawn "flare_artillery_150"}
					{spawn "stone_hit_bul"}

				else stuff "flame"

				else stuff "glass ic"

				else
					{spawn "stone_hit_br"}
				}
				
			else material "straw"
				{if stuff "bullet_fx size3"
					{spawn "ex_air_sm"}
					{spawn "wood_hit_bul"}

				else stuff "bullet_fx"
					{spawn "wood_hit_bul"}

				else stuff "rifle_grenade_at"
					{spawn "metal_hit_heat_riflegrenade"}

				else stuff "bomb size3"
					{spawn "wood_hit_fg_massive"}

				else stuff "mortar"
					{spawn "wood_hit_fg"}

				else stuff "big mortar"
					{spawn "wood_hit_fg_big"}

				else stuff "mortar_smoke"
					{spawn "mortar_smoke"}
					{spawn "ex_air_sm"}
					{spawn "wood_hit_bul"}

				else stuff "rocketlauncher"
					{spawn "wood_hit_fg_small"}

				else stuff "shell size2 heat_shell"
					{spawn "metal_hit_br_heat"}

				else stuff "shell size3 heat_shell"
					{spawn "metal_hit_br_big_heat"}

				else stuff "auto he"
					{spawn "object_hit_fg_auto"}

				else stuff "auto"
					{spawn "wood_hit_br_auto"}

				else stuff "shell size1 he"
					{spawn "wood_hit_fg_small"}

				else stuff "shell size2 he"
					{spawn "wood_hit_fg"}

				else stuff "shell size3 he"
					{spawn "wood_hit_fg_big"}

				else stuff "shell size4 he"
					{spawn "wood_hit_fg_massive"}

				else stuff "shell size5"
					{spawn "shockwave_sphere"}
					{spawn "ex_he_size5"}

				else stuff "shell small"
					{spawn "ex_air_sm"}
					{spawn "wood_hit_br"}

				else stuff "shell he"
					{spawn "ex_mort_big_wood"}

				else stuff "shell"
					{spawn "wood_hit_br"}

				else stuff "flare marker"							; Special Flare ammo for mission scripts 
					;{spawn "flare_marker"}
					{spawn "wood_hit_bul"}

				else stuff "flare artillery"						; Flare for off-map Artillery
					{spawn "flare_artillery"}
					{spawn "wood_hit_bul"}
					
				else stuff "flare artillery 105"						; Flare for off-map Artillery
					{spawn "flare_artillery_105"}
					{spawn "wood_hit_bul"}
					
				else stuff "flare artillery_150"						; Flare for off-map Artillery
					{spawn "flare_artillery_150"}
					{spawn "wood_hit_bul"}

				else stuff "flame"

				else
					{spawn "wood_hit_br"}
				}

			else material "sand"
				{if stuff "bullet_fx size3"
					{spawn "sand_hit_bul"}

				else stuff "bullet_fx size2"
					{spawn "sand_hit_bul_sm"}

				else stuff "bullet_fx"
					{spawn "sand_hit_bul_sm"}

				else stuff "rocketlauncher"
					{spawn "sand_hit_zenite_big_he"}
					
				else stuff "rifle_grenade_at"
					{spawn "metal_hit_heat_riflegrenade"}

				else stuff "size2 heat_shell"
					{spawn "metal_hit_br_heat"}

				else stuff "size3 heat_shell"
					{spawn "metal_hit_br_big_heat"}

				else stuff "mortar"
					{spawn "ex_mort_sm"}

				else stuff "shell auto size1 he"
					{spawn "object_hit_fg_auto"}

				else stuff "shell auto size1"
					{spawn "sand_hit_zenite"}

				else stuff "shell auto size2 he"
					{spawn "object_hit_fg_auto"}

				else stuff "shell auto size2"
					{spawn "sand_hit_zenite_big"}

				else stuff "shell size1 he"
					{spawn "sand_hit_fg_small"}

				else stuff "shell size1"
					{spawn "sand_hit_shell_37_57"}

				else stuff "shell size2 he"
					{spawn "sand_hit_fg"}

				else stuff "shell size2"
					{spawn "sand_hit_shell_75_100"}

				else stuff "shell size3 he"
					{spawn "sand_hit_fg_big"}

				else stuff "shell size3"
					{spawn "sand_hit_shell_105_128"}

				else stuff "shell size4 he"
					{spawn "sand_hit_fg_massive"}

				else stuff "shell size4"
					{spawn "sand_hit_shell_152"}

				else stuff "shell size5"
					{spawn "ex_he_size5"}

				else stuff "flare marker"							; Special Flare ammo for mission scripts 
					;{spawn "flare_marker"}
					{spawn "sand_hit_bul_sm"}

				else stuff "flare artillery"						; Flare for off-map Artillery
					{spawn "flare_artillery"}
					{spawn "sand_hit_bul_sm"}
					
				else stuff "flare artillery 105"						; Flare for off-map Artillery
					{spawn "flare_artillery_105"}
					{spawn "sand_hit_bul_sm"}
					
				else stuff "flare artillery 150"						; Flare for off-map Artillery
					{spawn "flare_artillery_150"}
					{spawn "sand_hit_bul_sm"}

				else stuff "flame"

				else
					{spawn "sand_hit_small"}
				}

			else material "glass"
				{if stuff "flame"

				else stuff "flare artillery"						; Flare for off-map Artillery
					{spawn "flare_artillery"}
					{spawn "glass_hit"}
					
				else stuff "flare artillery 105"						; Flare for off-map Artillery
					{spawn "flare_artillery_105"}
					{spawn "glass_hit"}
					
				else stuff "flare artillery 150"						; Flare for off-map Artillery
					{spawn "flare_artillery_150"}
					{spawn "glass_hit"}

				else
					{spawn "glass_hit"}
				}

			else material "ice"
				{if stuff "shell he"
					{spawn "ex_mort_sm_snow"}

				else stuff "shell apcr"
					{spawn "snow_hit_small"}

				else stuff "flame"

				else stuff "flare artillery"						; Flare for off-map Artillery
					{spawn "flare_artillery"}
					
				else stuff "flare artillery 105"						; Flare for off-map Artillery
					{spawn "flare_artillery_105"}
					
				else stuff "flare artillery 150"						; Flare for off-map Artillery
					{spawn "flare_artillery_150"}

				else
					{spawn "snow_hit_small"}
				}
			else material "fabric"
				{if stuff "flame"

				else stuff "flare artillery"						; Flare for off-map Artillery
					{spawn "flare_artillery"}
					
				else stuff "flare artillery 105"						; Flare for off-map Artillery
					{spawn "flare_artillery_105"}
				
				else stuff "flare artillery 150"						; Flare for off-map Artillery
					{spawn "flare_artillery_150"}
					
				else
					{spawn "fabric_hit_bul"}
				}
			}
		}
	}

	{on contact
		{if not under_water
			{if material "steel"
				{if stuff "mortar"
					{play_sound "reverb"}

				else stuff "size4"
					{play_sound "reverb"}

				else stuff "shell small he"
					{play_sound "reverb"}

				else stuff "shell small"
					{play_sound "reverb"}

				else stuff "shell apcr"
					{play_sound "reverb"}

				else stuff "shell he"
					{play_sound "reverb"}

				else stuff "shell"

				}

			else material "wood"
				{if stuff "mortar"
					{play_sound "reverb"}

				else stuff "shell apcr"
					{play_sound "reverb"}

				else stuff "shell he"
					{play_sound "reverb"}
				}

			else material "concrete"
				{if stuff "big shell he"

				else stuff "shell apcr"
					{play_sound "reverb3"}

				else stuff "shell he"
					{play_sound "reverb3"}
				}
			}
		}
	}
}