
{"muzzle_mg"
	{on spawn
		{add_view	"flash_gun_big"			"flashbarrel1"			"Foresight1"}
	}
	{on fire "gun"
		{play_sound "MG_Mid"}
		{play_sound "MG_Far"}
	}
}

{"muzzle_hmg_dshk"
	{on spawn
		{add_view	"flash_gun_hmg_dshk"		"flashbarrel3"			"foresight14"}
	}
	{on fire "mgun"
		{view start "flashbarrel3"}
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
	{on fire "mgun1"
		{view start "flashbarrel3"}
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
}

{"muzzle_hmg" ; // T40
	{on spawn
		{add_view	"flash_gun_hmg"		"flashbarrel1"			"Foresight1"}
	}
	{on fire "gun"
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel1"}
		}
	}
}

{"muzzle_hmg_m2hb"
	{on spawn
		{add_view	"flash_gun_hmg_m2hb"		"flashbarrel3"			"foresight14"}
	}
	{on fire "mgun"
		{view start "flashbarrel3"}
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3"}
		}
	}
}

;///////-------Added for Hotmod
{"muzzle_kpvt" ;// muzzle_kpvt
	{on spawn
		{add_view "flash_gun_hmg_m2hb"		"flashbarrel1"		"foresight1"}
		{link_sound "bkg_auto" "weapon/shot/bkg/auto/"}
	}
	{on fire "gun"
		{view start "flashbarrel1"}
		{play_sound "bkg_hmg"}
		{delay 0.2
			{view pause "flashbarrel1"}
		}
	}
}
;///////-------End Added for Hotmod

{"muzzle_20mm_25mm_auto" ;// muzzle_20mm_25mm_auto
	{on spawn
		{add_view "smoke_zenit"						"zenite_smoke"			"foresight1"}
		{add_view "tank_canon_fire_20_25_auto"		"flashbarrelzenite"		"foresight1"}
		{add_view "tank_fire_zenite_dust_ground"	"zenite_ground_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_sand"		"zenite_sand_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_snow"		"zenite_snow_fx"		"basis"}
		{link_sound "bkg_auto" "weapon/shot/bkg/auto/"}
	}
	{on fire "gun"
		{view start "flashbarrelzenite"}
		{view start "zenite_smoke"}
		{play_sound "bkg_auto"}
		{delay 5
			{view pause "zenite_smoke"}
		}
	}
}

{"muzzle_37mm_40mm_auto" ;// muzzle_37mm_40mm_auto
	{on spawn
		{add_view "smoke_zenit"						"zenite_smoke"			"foresight1"}
		{add_view "tank_canon_fire_37_40_auto"		"flashbarrelzenite"		"foresight1"}
		{add_view "tank_fire_zenite_dust_ground"	"zenite_ground_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_sand"		"zenite_sand_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_snow"		"zenite_snow_fx"		"basis"}
		{link_sound "bkg_auto" "weapon/shot/bkg/auto/"}
	}
	{on fire "gun"
		{view start "flashbarrelzenite"}
		{view start "zenite_smoke"}
		{play_sound "bkg_auto"}
		{delay 5
			{view pause "zenite_smoke"}
		}
		{call "zenite_terrain_fx"}
	}
}

{"muzzle_37mm_40mm_auto_sides" ;// muzzle_37mm_40mm_auto
	{on spawn
		{add_view "smoke_zenit"						"zenite_smoke"			"foresight1"}
		{add_view "tank_canon_fire_37_40_auto_sides"	"flashbarrelzenite"		"foresight1"}
		{add_view "tank_fire_zenite_dust_ground"	"zenite_ground_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_sand"		"zenite_sand_fx"		"basis"}
		{add_view "tank_fire_zenite_dust_snow"		"zenite_snow_fx"		"basis"}
		{link_sound "bkg_auto" "weapon/shot/bkg/auto/"}
	}
	{on fire "gun"
		{view start "flashbarrelzenite"}
		{view start "zenite_smoke"}
		{play_sound "bkg_auto"}
		{delay 5
			{view pause "zenite_smoke"}
		}
		{call "zenite_terrain_fx"}
	}
}

{"muzzle_25mm" ;// muzzle_25mm
	{on spawn
		{add_view "tank_canon_fire_37_47"			"flashbarrelminimum"	"foresight1"}
		;{add_view "tank_fire_zenite_dust_ground"	"zenite_ground_fx"		"basis"}
		;{add_view "tank_fire_zenite_dust_sand"		"zenite_sand_fx"		"basis"}
		;{add_view "tank_fire_zenite_dust_snow"		"zenite_snow_fx"		"basis"}
		{link_sound "bkg_cannon_small" "weapon/shot/bkg/cannon/small/"}
	}
	{on fire "gun"
		{play_sound "bkg_cannon_small"}
		{view start "flashbarrelminimum"}
	}
}
{"muzzle_37mm_47mm" ;// muzzle_37mm_47mm
	{on spawn
		{add_view "tank_canon_fire_37_47"			"flashbarrelminimum"	"Foresight1"}
		{add_view "tank_canon_fire_37_47"			"flashbarrelminimum_a"	"Foresight1a"}
		{add_view "tank_canon_fire_37_47"			"flashbarrelminimum_b"	"Foresight1b"}
		{add_view "tank_fire_minimum_dust_ground"	"minimum_ground_fx"		"basis"}
		{add_view "tank_fire_minimum_dust_sand"		"minimum_sand_fx"		"basis"}
		{add_view "tank_fire_minimum_dust_snow"		"minimum_snow_fx"		"basis"}
		{link_sound "bkg_cannon_small" "weapon/shot/bkg/cannon/small/"}
	}
	{on fire "gun"
		{play_sound "bkg_cannon_small"}
		{view start "flashbarrelminimum"}
		{call "minimum_terrain_fx"}
	}
	{on fire "gun1"
		{play_sound "bkg_cannon_small"}
		{view start "flashbarrelminimum_a"}
		{call "minimum_terrain_fx"}
	}
	{on fire "gun2"
		{play_sound "bkg_cannon_small"}
		{view start "flashbarrelminimum_b"}
		{call "minimum_terrain_fx"}
	}
}

{"muzzle_37mm_47mm_sides" ;// muzzle_37mm_47mm_sides
	{on spawn
		{add_view "tank_canon_fire_37_47_sides"		"flashbarrelminimum"	"Foresight1"}
		{add_view "tank_fire_minimum_dust_ground"	"minimum_ground_fx"		"basis"}
		{add_view "tank_fire_minimum_dust_sand"		"minimum_sand_fx"		"basis"}
		{add_view "tank_fire_minimum_dust_snow"		"minimum_snow_fx"		"basis"}
		{link_sound "bkg_cannon_small" "weapon/shot/bkg/cannon/small/"}
	}
	{on fire "gun"
		{play_sound "bkg_cannon_small"}
		{view start "flashbarrelminimum"}
		{call "minimum_terrain_fx"}
	}
}

{"muzzle_50mm_57mm" ;// muzzle_50mm_57mm
	{on spawn
		{add_view "tank_canon_fire_50_57"			"flashbarrelsmall"		"Foresight1"}
		{add_view "tank_fire_small_dust_ground_rain""small_ground_r_fx"		"basis"}
		{add_view "tank_fire_small_dust_ground"		"small_ground_fx"		"basis"}
		{add_view "tank_fire_small_dust_sand_rain"	"small_sand_r_fx"		"basis"}
		{add_view "tank_fire_small_dust_sand"		"small_sand_fx"			"basis"}
		{add_view "tank_fire_small_dust_snow"		"small_snow_fx"			"basis"}
		{link_sound "bkg_cannon_medium" "weapon/shot/bkg/cannon/medium/"}
	}
	{on fire "gun"
		{play_sound "bkg_cannon_medium"}
		{view start "flashbarrelsmall"}
		{call "small_terrain_fx"}
	}
}

{"muzzle_50mm_57mm_sides" ;// muzzle_50mm_57mm_sides
	{on spawn
		{add_view "tank_canon_fire_50_57_sides"		"flashbarrelsmall"		"Foresight1"}
		{add_view "tank_fire_small_dust_ground_rain""small_ground_r_fx"		"basis"}
		{add_view "tank_fire_small_dust_ground"		"small_ground_fx"		"basis"}
		{add_view "tank_fire_small_dust_sand_rain"	"small_sand_r_fx"		"basis"}
		{add_view "tank_fire_small_dust_sand"		"small_sand_fx"			"basis"}
		{add_view "tank_fire_small_dust_snow"		"small_snow_fx"			"basis"}
		{link_sound "bkg_cannon_small" "weapon/shot/bkg/cannon/small/"}
	}
	{on fire "gun"
		{play_sound "bkg_cannon_small"}
		{view start "flashbarrelsmall"}
		{call "small_terrain_fx"}
	}
}

{"muzzle_75mm_76mm" ;// muzzle_75mm_76mm
	{on spawn
		{add_view "tank_canon_fire_75_76"				"flashbarrelmedium"		"Foresight1"}
		{add_view "tank_fire_medium_dust_ground_rain"	"medium_ground_r_fx"	"basis"}
		{add_view "tank_fire_medium_dust_ground"		"medium_ground_fx"		"basis"}
		{add_view "tank_fire_medium_dust_sand_rain"		"medium_sand_r_fx"		"basis"}
		{add_view "tank_fire_medium_dust_sand"			"medium_sand_fx"		"basis"}
		{add_view "tank_fire_medium_dust_snow"			"medium_snow_fx"		"basis"}
		{link_sound "bkg_cannon_medium" "weapon/shot/bkg/cannon/medium/"}
	}
	{on fire "gun"
		{view start "flashbarrelmedium"}
		{play_sound "bkg_cannon_medium"}
		{start_sound "weapon/shot/tracer/"}
		;{blastwave c4 0.2 r0 1 r1 1.5 bone 		"Foresight1"}
		{call "medium_terrain_fx"}
	}
}

{"muzzle_75mm_76mm_2" ;// muzzle_75mm_76mm as 2nd gun
	{on spawn
		{add_view "tank_canon_fire_75_76"				"flashbarrelmedium"		"Foresight1a"}
		{add_view "tank_fire_medium_dust_ground_rain"	"medium_ground_r_fx"	"basis"}
		{add_view "tank_fire_medium_dust_ground"		"medium_ground_fx"		"basis"}
		{add_view "tank_fire_medium_dust_sand_rain"		"medium_sand_r_fx"		"basis"}
		{add_view "tank_fire_medium_dust_sand"			"medium_sand_fx"		"basis"}
		{add_view "tank_fire_medium_dust_snow"			"medium_snow_fx"		"basis"}
		{link_sound "bkg_cannon_medium" "weapon/shot/bkg/cannon/medium/"}
	}
	{on fire "gun1"
		{view start "flashbarrelmedium"}
		{play_sound "bkg_cannon_medium"}
		{start_sound "weapon/shot/tracer/"}
		;{blastwave c4 0.2 r0 1 r1 1.5 bone 		"Foresight1a"}
		{call "medium_terrain_fx"}
	}
}

{"muzzle_75mm_76mm_sides" ;// muzzle_75mm_76mm_sides
	{on spawn
		{add_view "tank_canon_fire_75_76_sides"			"flashbarrelmedium"		"Foresight1"}
		{add_view "tank_fire_medium_dust_ground_rain"	"medium_ground_r_fx"	"basis"}
		{add_view "tank_fire_medium_dust_ground"		"medium_ground_fx"		"basis"}
		{add_view "tank_fire_medium_dust_sand_rain"		"medium_sand_r_fx"		"basis"}
		{add_view "tank_fire_medium_dust_sand"			"medium_sand_fx"		"basis"}
		{add_view "tank_fire_medium_dust_snow"			"medium_snow_fx"		"basis"}
		{link_sound "bkg_cannon_medium" "weapon/shot/bkg/cannon/medium/"}
	}
	{on fire "gun"
		{view start "flashbarrelmedium"}
		{play_sound "bkg_cannon_medium"}
		{start_sound "weapon/shot/tracer/"}
		;{blastwave c4 0.2 r0 1 r1 1.5 bone 		"Foresight1"}
		{call "medium_terrain_fx"}
	}
}

{"muzzle_75mm_76mm_round" ;// muzzle_75mm_76mm_round
	{on spawn
		{add_view "tank_canon_fire_75_76_round"			"flashbarrelmedium"		"Foresight1"}
		{add_view "tank_fire_medium_dust_ground_rain"	"medium_ground_r_fx"	"basis"}
		{add_view "tank_fire_medium_dust_ground"		"medium_ground_fx"		"basis"}
		{add_view "tank_fire_medium_dust_sand_rain"		"medium_sand_r_fx"		"basis"}
		{add_view "tank_fire_medium_dust_sand"			"medium_sand_fx"		"basis"}
		{add_view "tank_fire_medium_dust_snow"			"medium_snow_fx"		"basis"}
		{link_sound "bkg_cannon_medium" "weapon/shot/bkg/cannon/medium/"}
	}
	{on fire "gun"
		{view start "flashbarrelmedium"}
		{play_sound "bkg_cannon_medium"}
		{start_sound "weapon/shot/tracer/"}
		;{blastwave c4 0.2 r0 1 r1 1.5 bone 		"Foresight1"}
		{call "medium_terrain_fx"}
	}
}

{"muzzle_85mm_93mm" ;// muzzle_85mm_93mm
	{on spawn
		{add_view "tank_canon_fire_85_93"				"flashbarrellarge"		"Foresight1"}
		{add_view "tank_fire_large_dust_ground_rain"	"large_ground_r_fx"		"basis"}
		{add_view "tank_fire_large_dust_ground"			"large_ground_fx"		"basis"}
		{add_view "tank_fire_large_dust_sand_rain"		"large_sand_r_fx"		"basis"}
		{add_view "tank_fire_large_dust_sand"			"large_sand_fx"			"basis"}
		{add_view "tank_fire_large_dust_snow"			"large_snow_fx"			"basis"}
		{link_sound "bkg_cannon_medium" "weapon/shot/bkg/cannon/medium/"}
	}
	{on fire "gun"
		{view start "flashbarrellarge"}
		{play_sound "bkg_cannon_medium"}
		{start_sound "weapon/shot/tracer/"}
		;{blastwave c4 0.2 r0 1 r1 2.0 bone 		"Foresight1"}
		{call "large_terrain_fx"}
	}
}

{"muzzle_85mm_93mm_sides" ;// muzzle_85mm_93mm_sides
	{on spawn
		{add_view "tank_canon_fire_85_93_sides"			"flashbarrellarge"		"Foresight1"}
		{add_view "tank_fire_large_dust_ground_rain"	"large_ground_r_fx"		"basis"}
		{add_view "tank_fire_large_dust_ground"			"large_ground_fx"		"basis"}
		{add_view "tank_fire_large_dust_sand_rain"		"large_sand_r_fx"		"basis"}
		{add_view "tank_fire_large_dust_sand"			"large_sand_fx"			"basis"}
		{add_view "tank_fire_large_dust_snow"			"large_snow_fx"			"basis"}
		{link_sound "bkg_cannon_medium" "weapon/shot/bkg/cannon/medium/"}
	}
	{on fire "gun"
		{view start "flashbarrellarge"}
		{play_sound "bkg_cannon_medium"}
		{start_sound "weapon/shot/tracer/"}
		;{blastwave c4 0.2 r0 1 r1 2.0 bone 		"Foresight1"}
		{call "large_terrain_fx"}
	}
}

{"muzzle_100mm_105mm" ;// muzzle_100mm_105mm
	{on spawn
		{add_view "tank_canon_fire_100_105"				"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{link_sound "bkg_cannon_large" "weapon/shot/bkg/cannon/large/"}
	}
	{on fire "gun"
		{view start "flashbarrelmaximum"}
		{start_sound "weapon/shot/tracer/"}
		{play_sound "bkg_cannon_large"}
		;{blastwave c4 0.2 r0 1 r1 2.5 bone 		"Foresight1"}
		{call "maximum_terrain_fx"}
	}
}

{"muzzle_100mm_105mm_sides" ;// muzzle_100mm_105mm_sides
	{on spawn
		{add_view "tank_canon_fire_100_105_sides"		"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{link_sound "bkg_cannon_large" "weapon/shot/bkg/cannon/large/"}
	}
	{on fire "gun"
		{view start "flashbarrelmaximum"}
		{start_sound "weapon/shot/tracer/"}
		{play_sound "bkg_cannon_large"}
		;{blastwave c4 0.2 r0 1 r1 2.5 bone 		"Foresight1"}
		{call "maximum_terrain_fx"}
	}
}

{"muzzle_122mm_128mm"
	{on spawn
		{add_view "tank_canon_fire_122_128"				"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{link_sound "bkg_cannon_large" "weapon/shot/bkg/cannon/large/"}
	}
	{on fire "gun"
		{view start "flashbarrelmaximum"}
		{start_sound "weapon/shot/tracer/"}
		{play_sound "bkg_cannon_large"}
		;{blastwave c4 0.2 r0 1 r1 2.5 bone 		"Foresight1"}
		{call "maximum_terrain_fx"}
	}
}

{"muzzle_122mm_128mm_sides"
	{on spawn
		{add_view "tank_canon_fire_122_128_sides"		"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{link_sound "bkg_cannon_large" "weapon/shot/bkg/cannon/large/"}
	}
	{on fire "gun"
		{view start "flashbarrelmaximum"}
		{start_sound "weapon/shot/tracer/"}
		{play_sound "bkg_cannon_large"}
		;{blastwave c4 0.2 r0 1 r1 2.5 bone 		"Foresight1"}
		{call "maximum_terrain_fx"}
		;{burn volume fx "smoke_dead_small" time 5 1 fake even_law}
		;{burn volume "body1" fx "dust_body_shot" time 1 1 fake even_law}
		;{burn volume "body2" fx "dust_body_shot" time 1 1 fake even_law}
		;{burn volume "body3" fx "dust_body_shot" time 1 1 fake even_law}
		;{burn volume "turret" fx "dust_body_shot" time 1 1 fake even_law}
		;{burn volume "engine1" fx "dust_body_shot" time 1 1 fake even_law}
		;{burn volume "engine2" fx "dust_body_shot" time 1 1 fake even_law}
		;{burn volume "trackright" fx "dust_body_shot" time 1 1 fake even_law}
		;{burn volume "trackleft" fx "dust_body_shot" time 1 1 fake even_law}
	}
}

{"muzzle_150mm_155mm"
	{on spawn
		{add_view "tank_canon_fire_150_155"				"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{link_sound "bkg_cannon_huge" "weapon/shot/bkg/cannon/huge/"}
	}
	{on fire "gun"
		{view start "flashbarrelmaximum"}
		{start_sound "weapon/shot/tracer/"}
		{play_sound "bkg_cannon_huge"}
		;{blastwave c4 0.2 r0 1 r1 2.5 bone 		"Foresight1"}
		{call "maximum_terrain_fx"}
	}
}

{"muzzle_150mm_155mm_sides"
	{on spawn
		{add_view "tank_canon_fire_150_155_sides"		"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{link_sound "bkg_cannon_huge" "weapon/shot/bkg/cannon/huge/"}
	}
	{on fire "gun"
		{view start "flashbarrelmaximum"}
		{start_sound "weapon/shot/tracer/"}
		{play_sound "bkg_cannon_huge"}
		;{blastwave c4 0.2 r0 1 r1 2.5 bone 		"Foresight1"}
		{call "maximum_terrain_fx"}
	}
}

{"muzzle_170mm_210mm"
	{on spawn
		{add_view "tank_canon_fire_170_210"				"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_maximum_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_snow"			"maximum_snow_fx"		"basis"}
		{link_sound "bkg_cannon_huge" "weapon/shot/bkg/cannon/huge/"}
	}
	{on fire "gun"
		{view start "flashbarrelmaximum"}
		{start_sound "weapon/shot/tracer/"}
		{play_sound "bkg_cannon_huge"}
		{blastwave c4 0.2 r0 1 r1 2.5 bone 		"Foresight1"}
		{call "maximum_terrain_fx"}
	}
}

{"muzzle_600mm"
	{on spawn
		{add_view "tank_canon_fire_600"					"flashbarrelmaximum"	"Foresight1"}
		{add_view "tank_fire_maximum_dust_ground_rain"	"maximum_ground_r_fx"	"basis"}
		{add_view "tank_fire_600_dust_ground"		"maximum_ground_fx"		"basis"}
		{add_view "tank_fire_maximum_dust_sand_rain"	"maximum_sand_r_fx"		"basis"}
		{add_view "tank_fire_600_dust_sand"			"maximum_sand_fx"		"basis"}
		{add_view "tank_fire_600_dust_snow"			"maximum_snow_fx"		"basis"}
		{link_sound "bkg_cannon_huge" "weapon/shot/bkg/cannon/huge/"}
	}
	{on fire "gun"
		{view start "flashbarrelmaximum"}
		{start_sound "weapon/shot/tracer/"}
		{play_sound "bkg_cannon_huge"}
		{blastwave c4 0.2 r0 1 r1 2.5 bone 		"Foresight1"}
		{call "maximum_terrain_fx"}
	}
}

{"artillery_minimap_heavy"
	{on fire "gun"
		{if not tagged "fired"
			{tags add "fired"}
			{delay 0
				{spawn "artillery_warning_heavy" random_position 1100}
			}
			(mod "mp"
				{delay 2.5
					{tags remove "fired"}
				}
			)
			(mod not "mp"
				{delay 2.5
					{tags remove "fired"}
				}
			)
		}
	}
}

{"artillery_minimap_medium"
	{on fire "gun"
		{if not tagged "fired"
			{tags add "fired"}
			{delay 0
				{spawn "artillery_warning_medium" random_position 900}
			}
			(mod "mp"
				{delay 1.50
					{tags remove "fired"}
				}
			)
			(mod not "mp"
				{delay 1.50
					{tags remove "fired"}
				}
			)
		}
	}
}

{"artillery_minimap_medium_2"
	{on fire "rocket"
		{if not tagged "fired"
			{tags add "fired"}
			{delay 0
				{spawn "artillery_warning_medium" random_position 900}
			}
			(mod "mp"
				{delay 1.50
					{tags remove "fired"}
				}
			)
			(mod not "mp"
				{delay 1.50
					{tags remove "fired"}
				}
			)
		}
	}
}

{"artillery_minimap_light"
	{on fire "gun"
		{if not tagged "fired"
			{tags add "fired"}
			{delay 0
				{spawn "artillery_warning_light" random_position 700}
			}
			(mod "mp"
				{delay 1.50
					{tags remove "fired"}
				}
			)
			(mod not "mp"
				{delay 1.50
					{tags remove "fired"}
				}
			)
		}
	}
}