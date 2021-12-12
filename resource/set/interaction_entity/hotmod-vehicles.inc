;/*=========== Hotmod Specifics Begin  ===========*/

{"mg_turret"
	{on spawn
		{call "update_mg_turret"}
	}
	{on break
		{if not tagged "exploded"
			{call "update_mg_turret"}
			{damage_report "turret" "component/turret_broken"}
		}
	}
	{on "update_mg_turret"
		{if work "turret_mg"
			{if work "body"
				{ik_enable "turret_mg" 1}
			 else
				{ik_enable "turret_mg" 0}
			}
		else
			{ik_enable "turret_mg" 0}
		}
	}
	{on repair
		{call "update_mg_turret"}
	}
}

;/*=========== SOVIET Vehicles  ===========*/

{"pt-76 tank"
	("t70_sound")
}

{"asu-85 tank"
	("t70_sound")
}

{"asu-85_para tank"
	("t70_sound")
}

{"shilka tank"
	("t70_sound")
	{on "event_no_crew"
		{ani_stop "radar"}
	}
	{on "event_with_crew"
		{ani_play "radar" loop resume}
	}
	{on "init_gun" overload
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel01"	"shooter01"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel02"	"shooter02"}
		{add_view "tank_canon_fire_20_25_auto"			"flashbarrel03"	"shooter03"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{add_view "zenit_gilz"			"shell"			"FXshell3"}
		{add_view "zenit_gilz"			"shell"			"FXshell4"}
		{call "update_gun"}
	}
	{on fire "mgun" overload
		{play_sound "bkg_mg"}
		{if  name "00"
			{ani_wind "fire00" end}
			{view start "flashbarrel00"}
			{delay 0.2
				{view pause "flashbarrel00"}
			}
		}
		{if  name "01"
			{ani_wind "fire01" end}
			{view start "flashbarrel01"}
			{delay 0.2
				{view pause "flashbarrel01"}
			}
		}
		{if  name "02"
			{ani_wind "fire02" end}
			{view start "flashbarrel02"}
			{delay 0.2
				{view pause "flashbarrel02"}
			}
		}
		{if  name "03"
			{ani_wind "fire03" end}
			{view start "flashbarrel03"}
			{delay 0.2
				{view pause "flashbarrel03"}
			}
		}
	}
}

{"gaz-51 car"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"gaz-51_ammo car"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"zil157 car"
	("zis5_sound")
}

{"zil157_ammo car"
	("zis5_sound")
}

{"zil157_eng car"
	("zis5_sound")
}

{"zil157_fuel car"
	("zis5_sound")
}

{"zil131 car"
	("zis5_sound")
}

{"zil131_ammo car"
	("zis5_sound")
}

{"gaz66 car"
	("studebaker_sound")
}

{"ural375 car"
	("zis5_sound")
}

{"ural375_ammo car"
	("zis5_sound")
}

{"bm-21_grad car"
	("zis5_sound")
}

{"btr-152"
	("zis5_sound")
}

{"btr-60pa"
	("sdkfz234_sound")
}

{"btr-60pb"
	("sdkfz234_sound")
}

{"asu57"
	("s60_sound")
}

{"asu57_para"
	("s60_sound")
}

{"t-54 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
}

{"t-64 tank"
	("is_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 3 0.25)
	}
}
		
{"t-55 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"t-55a tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
}

{"zsu-57-2 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "init_gun"
		{add_view "tank_canon_fire_50_57"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_50_57"			"flashbarrel01"	"shooter01"}
		{call "update_gun"}
	}
	{on fire "gun" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{ani_play "fire%0"}
				{delay 0.2
					{view pause "flashbarrel%0"}
				}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{call "spawn_shell"}
	}
}

{"t-62a tank"
	("t28_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
}

{"2s3 tank"
	("t70_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"it-1 tank"
	("t28_sound")
	{on spawn
		{ani_play "fire1" +1.0 resume}
	}
}

{"t-10 tank"
	("is_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
}

{"su-122-54 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
}

{"bmp-1"
	("bt_sound")
}

{"9p110"
	("sdkfz222_sound")
}

{"btr-40"
	("sdkfz222_sound")
}

{"brdm-1"
	("sdkfz222_sound")
}

{"brdm-1u"
	("sdkfz222_sound")
}

{"brdm-2"
	("ba_sound")
}

{"gaz-69"
	("gaz_sound")
}

{"gaz-69a"
	("gaz_sound")
}






{"mil_mi4 helicopter"
	{on "add_movement_sound" overload
		{link_sound "fly"			"vehicle/airborne/helicopter/helicopter_work2" 	}
		{link_sound "engine_start"	"vehicle/airborne/helicopter/helicopter_start" 	}
		{link_sound "engine_work"	"vehicle/airborne/helicopter/helicopter_work2" 	}
		{link_sound "engine_stop"	"vehicle/airborne/helicopter/helicopter_stop" 	}
	}
}

;/*=========== AMERICAN Vehicles  ===========*/


{"m151"
	("kubel_sound")
}

{"m151_m1919"
	("kubel_sound")
}

{"m151_m2"
	("kubel_sound")
}

{"m151_m40"
	("kubel_sound")
}

{"m151_prc77"
	("kubel_sound")
}

{"m35"
	("opel_sound")
}

{"m35_ammo"
	("opel_sound")
}

{"m35_guntruck"
	("opel_sound")
	{on "init_gun"
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel00"	"shooter00"}
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel01"	"shooter01"}
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel02"	"shooter02"}
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel03"	"shooter03"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{add_view "zenit_gilz"			"shell"			"FXshell3"}
		{add_view "zenit_gilz"			"shell"			"FXshell4"}
		{call "update_gun"}
	}
	{on fire "mgun1" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{ani_play "fire%0"}
				{delay 0.2
					{view pause "flashbarrel%0"}
				}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		else ("fire_barrel" args 02)
		else ("fire_barrel" args 03)
		}
		{ani_play "recoil"}
		{call "spawn_shell"}
	}
}

{"dodge_m37"
	("kubel_sound")
}

{"dodge_m37_ammo"
	("kubel_sound")
}

{"dodge_m37_engi"
	("kubel_sound")
}

{"m41"
	("pz3_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"m42"
	("pz3_sound")
	{on "init_gun"
		{add_view "tank_canon_fire_37_47"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_37_47"			"flashbarrel01"	"shooter01"}
		{call "update_gun"}
	}
	{on fire "gun" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{ani_play "fire%0"}
				{delay 0.2
					{view pause "flashbarrel%0"}
				}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{call "spawn_shell"}
	}	
}

{"m48_patton"
	("pz6_sound")
}

{"m48a3"
	("pz6_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"m103"
	("pz6_sound")
		{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"}
	}
	{on fire "mgun2" overload
		{play_sound "bkg_mg"}
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.2
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.2
				{view pause "flashbarrel01"}
			}
		}
	}
}

{"m60a1"
	("pz5_sound")
}

{"m728"
	("pz5_sound")
	{on spawn 
		{link_sound "dozer" "vehicle/misc/dozer"}
	}
}

{"m114a1 tank"
	("pz38_sound")
	{on "gunner4_hatch_open" overload
		{ani_wind "open2" end}
	}
	{on "gunner4_hatch_close" overload
		{ani_play "open2" -1.0 resume}
	}
}

{"m114a2 tank"
	("pz38_sound")
	{on "gunner4_hatch_open" overload
		{ani_wind "open2" end}
	}
	{on "gunner4_hatch_close" overload
		{ani_play "open2" -1.0 resume}
	}
}

{"m577"
	("pz38_sound")
}

{"m113a1 tank"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on "driver_hatch_open"
		{delay 3
			{ani_play "open_driver" -1.0}
		}	
	}
}

{"m163 tank"
	("pz38_sound")
}

{"m113_acav tank"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on "driver_hatch_open"
		{ani_wind "open_driver" end}
	}
}
{"m113_acav_m40 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/hetzer/start"}
		{link_sound "engine_stop"		"vehicle/engine/hetzer/stop"}
		{link_sound "engine_idle"		"vehicle/engine/hetzer/idle"}
		{link_sound "engine_full"		"vehicle/engine/hetzer/full"}
		{link_sound "exhaust"			"vehicle/engine/hetzer/exhaust"}
		{link_sound "move"				"vehicle/tracks/hetzer"}
		{link_sound "rotate_turret"		"vehicle/turret/cannon/small/cannon_small_horizontal"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/small/cannon_small_vertical"}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on "driver_hatch_open"
		{ani_wind "open_driver" end}
	}
}
{"m113_m40 tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/hetzer/start"}
		{link_sound "engine_stop"		"vehicle/engine/hetzer/stop"}
		{link_sound "engine_idle"		"vehicle/engine/hetzer/idle"}
		{link_sound "engine_full"		"vehicle/engine/hetzer/full"}
		{link_sound "exhaust"			"vehicle/engine/hetzer/exhaust"}
		{link_sound "move"				"vehicle/tracks/hetzer"}
		{link_sound "rotate_turret"		"vehicle/turret/cannon/small/cannon_small_horizontal"}
		{link_sound "rotate_gun"		"vehicle/turret/cannon/small/cannon_small_vertical"}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on "driver_hatch_open"
		{ani_wind "open_driver" end}
	}
}
{"m125"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}
{"m106"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"m132_zippo"
	("pz38_sound")
	{on spawn
		{add_view "flamer_fire_tank" "flame" "foresight1"}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	("flame_weapon" args gun 60 1 40)
}

{"m67_zippo"
	("pz6_sound")
	{on spawn
		{add_view "flamer_fire_tank" "flame" "foresight1"}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	("flame_weapon" args gun 60 1 40)
}

{"m50"
	("pz2_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on "init_gun"
		{add_view "tank_canon_fire_50_57"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_50_57"			"flashbarrel01"	"shooter01"}
		{add_view "tank_canon_fire_50_57"			"flashbarrel02"	"shooter02"}
		{add_view "tank_canon_fire_50_57"			"flashbarrel03"	"shooter03"}
		{add_view "tank_canon_fire_50_57"			"flashbarrel04"	"shooter04"}
		{add_view "tank_canon_fire_50_57"			"flashbarrel05"	"shooter05"}
		{call "update_gun"}
	}
	{on fire "gun" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{ani_play "fire%0"}
				{delay 0.2
					{view pause "flashbarrel%0"}
				}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		else ("fire_barrel" args 02)
		else ("fire_barrel" args 03)
		else ("fire_barrel" args 04)
		else ("fire_barrel" args 05)
		}
		{call "spawn_shell"}
	}
}

{"m56"
	("pz2_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2)
	}
}

{"m56_para"
	("pz3_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2)
	}
}

{"m110"
	("pz2_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 5)
	}
}

{"m109"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"m108"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

;/*=========== FRG Vehicles BEGIN  ===========*/

{"m113g tank"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on "driver_hatch_open"
		{delay 3
			{ani_play "open_driver" -1.0}
		}	
	}
}

{"m47g"
	("pz6_sound")
}

{"m48g"
	("pz6_sound")
}

{"m41g"
	("pz3_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"m42g"
	("pz3_sound")
	{on "init_gun"
		{add_view "tank_canon_fire_37_47"			"flashbarrel00"	"shooter00"}
		{add_view "tank_canon_fire_37_47"			"flashbarrel01"	"shooter01"}
		{call "update_gun"}
	}
	{on fire "gun" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{ani_play "fire%0"}
				{delay 0.2
					{view pause "flashbarrel%0"}
				}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
		{call "spawn_shell"}
	}	
}





;/*=========== Hotmod Specifics End  ===========*/
