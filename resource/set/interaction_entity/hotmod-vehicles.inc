;/*=========== Hotmod Specifics Begin  ===========*/

;/*===========  Command Vehicle Props  ===========*/

{"radio"
	(define "update_radio"
		{if crew_in_place "commander"
			{tags add "radio_on"}
			{tags remove "radio_off"}
		else
			{tags remove "radio_on"}
			{tags add "radio_off"}
		}
	)
	(define "update_radio_event"
		{on %event
			{call "update_radio"}
		}
	)
	("update_radio_event" event(operatable on))
	("update_radio_event" event(operatable off))
	("update_radio_event" event(crew in))
	("update_radio_event" event(crew out))
}

{"hatch"
;/*===========  Hatch Animation Begin  ===========*/

	{on "spawn_no_crew"
		{ani_wind "open" begin}
		{ani_wind "open1" begin}
	}
	{on "spawn_with_crew"
		{ani_wind "open" begin}
	}

	{on "event_no_crew"
		{ani_play "open" +1.0 resume}
		{ani_play "open1" +1.0 resume}
	}
	{on "event_with_crew"
		{ani_play "open" -1.0 resume}
		{ani_play "open1" -1.0 resume}
	}

	{on "gunner2_hatch_open"
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "gunner2_hatch_close"
		{ani_play "mgun_aa" -1.0 resume}
	}
	{on "gunner4_hatch_open"}
	{on "gunner4_hatch_close"}
	{on "commander_hatch_open"}
	{on "commander_hatch_close"}
	{on "charger_hatch_open"}
	{on "charger_hatch_close"}

	(define "places"
		{if has_place "%0"
			{if crew_in_place "%0"
				{call "%0_hatch_open"}
			else
				{call "%0_hatch_close"}
			}
		}
	)
	(define "update_hatch"
		{if not operatable
			{if %wind
				{call "spawn_no_crew"}
			else
				{call "event_no_crew"}
			}
		else
			{if %wind
				{call "spawn_with_crew"}
			else
				{call "event_with_crew"}
			}
			("places" args gunner2)
			("places" args gunner4)
			("places" args commander)
			("places" args charger)
		}
	)
	{on "update_hatch_on_spawn"
		("update_hatch" wind(true))
	}
	(define "update_hatch_event"
		{on %event
			("update_hatch" wind(false))
		}
	)
	("update_hatch_event" event(operatable on))
	("update_hatch_event" event(operatable off))
	("update_hatch_event" event(crew in))
	("update_hatch_event" event(crew out))

	;/*=========== Hatch Animation End ===========*/
}
	;/*=========== ESS Smoke Instructions ===========*/

{"smoke ess"					;// Emergency Smoke System - Soviet method for creating smokescreens by injecting diesel fuel into hot exhausts
	{on spawn
		{add_view "exhaust_dark_big_diesel"			"smoke_ess1"			"fxsmoke1"}
		{add_view "smoke_cover-up_big"				"smoke_ess1_cover" 		"fxsmoke1"}
		
		(define "spawn_volume"
			{spawn "smoke_volume_%0" offset %1 %2 0
				{delay %3 {hide 1}}
			}
		)
		
	}
	{on "smoke_screen"
		{view start "smoke_ess1"}
		{delay 3
			{view start "smoke_ess1_cover"}
			("spawn_volume" args cylinder 110 0 84)
			("spawn_volume" args cylinder -110 0 84)
			("spawn_volume" args cylinder 0 110 84)
			("spawn_volume" args cylinder 0 -110 84)
			("spawn_volume" args cylinder 110 110 84)
			("spawn_volume" args cylinder -110 -110 84)
			("spawn_volume" args cylinder -110 110 84)
			("spawn_volume" args cylinder 110 -110 84)
		}
		{delay 5
			("spawn_volume" args cylinder_sm 220 0 82)
			("spawn_volume" args cylinder_sm -220 0 82)
			("spawn_volume" args cylinder_sm 0 220 82)
			("spawn_volume" args cylinder_sm 0 -220 82)
		}
		{delay 60
			{view stop "smoke_ess1_cover"}
		}
		{delay 60
			{view stop "smoke_ess1"}
		}
	}
}

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
;/// Added from Valour mod
(define "m4a3_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m4a3/start"}
		{link_sound "engine_stop"		"vehicle/engine/m4a3/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m4a3/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz4/full"}
		{link_sound "exhaust"			"vehicle/engine/pz4/exhaust"}
		{link_sound "move"			"vehicle/tracks/m4a2"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)
(define "m24_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m24/start"}
		{link_sound "engine_stop"		"vehicle/engine/m24/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m24/idle"}
		{link_sound "engine_full"		"vehicle/engine/m24/full"}
		{link_sound "exhaust"			"vehicle/engine/hetzer/exhaust"}
		{link_sound "move"			"vehicle/tracks/m24"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)
(define "us_halftrack_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/us_halftrack/start"}
		{link_sound "engine_stop"		"vehicle/engine/us_halftrack/stop"}
		{link_sound "engine_idle"		"vehicle/engine/us_halftrack/idle"}
		{link_sound "engine_full"		"vehicle/engine/us_halftrack/full"}
		{link_sound "exhaust"			"vehicle/engine/sdkfz251/exhaust"}
		{link_sound "move"			"vehicle/tracks/m3a1"}
		{link_sound "rotate_turret" 		"vehicle/turret/gun/gun_horizontal"}
		{link_sound "rotate_gun" 		"vehicle/turret/gun/gun_vertical"}
	}
)
(define "m26_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m26/start"}
		{link_sound "engine_stop"		"vehicle/engine/m26/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m26/idle"}
		{link_sound "engine_full"		"vehicle/engine/m26/full"}
		{link_sound "exhaust"			"vehicle/engine/m26/exhaust"}
		{link_sound "move"			"vehicle/tracks/m26"}
		{link_sound "rotate_turret"		"vehicle/turret/hydraulic/hydraulic_heavy"}
	}
)
;/*=========== SOVIET Vehicles  ===========*/

{"pt-76 tank"
	("t70_sound")
}

{"btr-50p tank"
	("t70_sound")
}

{"btr-50p_zis2 tank"
	("t70_sound")
}

{"btr-50p_zis3 tank"
	("t70_sound")
}

{"asu-85 tank"
	("t70_sound")
}

{"asu-85_para tank"
	("t70_sound")
}

{"t-34-85m tank"
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

{"su100m tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
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

{"zil-130 car"
	("zis5_sound")
}

{"zil-130_eng car"
	("zis5_sound")
}

{"zil-130_ammo car"
	("zis5_sound")
}

{"zil-157 car"
	("zis5_sound")
}

{"zil-157_ammo car"
	("zis5_sound")
}

{"zil-157_eng car"
	("zis5_sound")
}

{"zil-157_fuel car"
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

{"ural375_arty car"
	("zis5_sound")
}

{"bm-21_grad car"
	("zis5_sound")
}

{"bm-13-17m car"
	("zis5_sound")
}

{"bm-31m car"
	("zis5_sound")
}

{"btr-152"
	("zis5_sound")
}

{"btr-152u"
	("zis5_sound")
}

{"btr-60pa"
	("sdkfz234_sound")
	{on "commander_hatch_open" overload
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "mgun_aa" -1.0 resume}
	}
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

{"t-44 tank"
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

{"t-54a tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
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

{"t-55ak tank"
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

{"ot-55"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on spawn
		{add_view "flamer_fire_tank" "flame" "foresight3"}
	}
	{on operatable on
		{view start "fire"}
	}
	{on operatable off
		{view stop "fire"}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	("flame_weapon" args mgun2 160 3 40)
}

{"is2m tank"
	("is_sound")
}

{"isu-122m tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/is/start"}
		{link_sound "engine_stop"		"vehicle/engine/is/stop"}
		{link_sound "engine_idle"		"vehicle/engine/is/idle"}
		{link_sound "engine_full"		"vehicle/engine/is/full"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/is/"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open_right" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_right" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
}
{"isu-152m tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/is/start"}
		{link_sound "engine_stop"		"vehicle/engine/is/stop"}
		{link_sound "engine_idle"		"vehicle/engine/is/idle"}
		{link_sound "engine_full"		"vehicle/engine/is/full"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/is/"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open_right" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_right" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
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

{"t-62_1972 tank"
	("t28_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.8)
	}
	{on fire "gun"
		{delay 1.5
			{ani_play "eject"}
		}
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"t-62_1967 tank"
	("t28_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.8)
	}
	{on fire "gun"
		{delay 1.5
			{ani_play "eject"}
		}
	}
}

{"t-62k tank"
	("t28_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.8)
	}
	{on fire "gun"
		{delay 1.5
			{ani_play "eject"}
		}
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
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

{"bmd-1"
	("bt_sound")
}

{"9p110" ;// can't figure out how to reset turret to 0
	("sdkfz222_sound")
 
	{on spawn
		{tags add "weapon_down"}
	}
	
	{on "reload"
		{tags add "reloading"}
		{ik_enable "turret" 0}
		{ani_play "turret_reset"}
		{ani_play "weapon_down"}
		{tags add "weapon_down"}
		{talk "reload"}
		{delay 1
			{call "update_missilerack"}
			{delay 60
				{tags remove "reloading"}
				{talk "reloaded"}
				{call "update_missilerack"}
			}
		}
	}
 
	{on repair
		{if component "turret"
			{call "update_missilerack"}
		}
	}
 
	(define "update_missilerack"
		{if crew_in_place "gunner"
			{if tagged "reloading"
				{delay 0.1}
			else
				{if work "turret"
					{if tagged "weapon_down"
						{ani_play "weapon_up"}
						{tags remove "weapon_down"}
						{ik_enable "turret" 1}
					else
						{delay 0.1}
					}
				else
					{delay 0.1}
				}
			}
		else
			{if not tagged "weapon_down"
				{ani_play "weapon_down"}
				{tags add "weapon_down"}
			else
				{delay 0.1}
			}
		}
	)
 
 
	{on "update_missilerack"
		("update_missilerack" n())
	}
	
	(define "update_rack_event"
		{on %event
			{call "update_missilerack"}
		}
	)
	("update_rack_event" event(operatable on))
	("update_rack_event" event(operatable off))
	("update_rack_event" event(crew in))
	("update_rack_event" event(crew out))
}

{"9p110_sam" ;// can't figure out how to reset turret to 0
	("sdkfz222_sound")
 
	{on spawn
		{tags add "weapon_down"}
	}
	
	{on "reload"
		{tags add "reloading"}
		{ik_enable "turret" 0}
		{ani_play "turret_reset"}
		{ani_play "weapon_down"}
		{tags add "weapon_down"}
		{talk "reload"}
		{delay 1
			{call "update_missilerack"}
			{delay 60
				{tags remove "reloading"}
				{talk "reloaded"}
				{call "update_missilerack"}
			}
		}
	}
 
	{on repair
		{if component "turret"
			{call "update_missilerack"}
		}
	}
 
	(define "update_missilerack"
		{if crew_in_place "gunner"
			{if tagged "reloading"
				{delay 0.1}
			else
				{if work "turret"
					{if tagged "weapon_down"
						{ani_play "weapon_up"}
						{tags remove "weapon_down"}
						{ik_enable "turret" 1}
					else
						{delay 0.1}
					}
				else
					{delay 0.1}
				}
			}
		else
			{if not tagged "weapon_down"
				{ani_play "weapon_down"}
				{tags add "weapon_down"}
			else
				{delay 0.1}
			}
		}
	)
 
 
	{on "update_missilerack"
		("update_missilerack" n())
	}
	
	(define "update_rack_event"
		{on %event
			{call "update_missilerack"}
		}
	)
	("update_rack_event" event(operatable on))
	("update_rack_event" event(operatable off))
	("update_rack_event" event(crew in))
	("update_rack_event" event(crew out))
}

{"9p122" ;// can't figure out how to reset turret to 0
	("ba_sound")
 
	{on spawn
		{tags add "weapon_down"}
	}
	
	{on "reload"
		{tags add "reloading"}
		{ik_enable "turret" 0}
		{ani_play "weapon_down"}
		{tags add "weapon_down"}
		{talk "reload"}
		{delay 1
			{call "update_missilerack"}
			{delay 30
				{tags remove "reloading"}
				{talk "reloaded"}
				{call "update_missilerack"}
			}
		}
	}
 
	{on repair
		{if component "turret"
			{call "update_missilerack"}
		}
	}
 
	(define "update_missilerack"
		{if crew_in_place "gunner"
			{if tagged "reloading"
				{delay 0.1}
			else
				{if work "turret"
					{if tagged "weapon_down"
						{ani_play "weapon_up"}
						{tags remove "weapon_down"}
						{ik_enable "turret" 1}
					else
						{delay 0.1}
					}
				else
					{delay 0.1}
				}
			}
		else
			{if not tagged "weapon_down"
				{ani_play "weapon_down"}
				{tags add "weapon_down"}
			else
				{delay 0.1}
			}
		}
	)
 
 
	{on "update_missilerack"
		("update_missilerack" n())
	}
	
	(define "update_rack_event"
		{on %event
			{call "update_missilerack"}
		}
	)
	("update_rack_event" event(operatable on))
	("update_rack_event" event(operatable off))
	("update_rack_event" event(crew in))
	("update_rack_event" event(crew out))
}

{"9p124" ;// can't figure out how to reset turret to 0
	("ba_sound")
 
	{on spawn
		{tags add "weapon_down"}
	}
	
	{on "reload"
		{tags add "reloading"}
		{ik_enable "turret" 0}
		{ani_play "weapon_down"}
		{tags add "weapon_down"}
		{talk "reload"}
		{delay 1
			{call "update_missilerack"}
			{delay 40
				{tags remove "reloading"}
				{talk "reloaded"}
				{call "update_missilerack"}
			}
		}
	}
 
	{on repair
		{if component "turret"
			{call "update_missilerack"}
		}
	}
 
	(define "update_missilerack"
		{if crew_in_place "gunner"
			{if tagged "reloading"
				{delay 0.1}
			else
				{if work "turret"
					{if tagged "weapon_down"
						{ani_play "weapon_up"}
						{tags remove "weapon_down"}
						{ik_enable "turret" 1}
					else
						{delay 0.1}
					}
				else
					{delay 0.1}
				}
			}
		else
			{if not tagged "weapon_down"
				{ani_play "weapon_down"}
				{tags add "weapon_down"}
			else
				{delay 0.1}
			}
		}
	)
 
 
	{on "update_missilerack"
		("update_missilerack" n())
	}
	
	(define "update_rack_event"
		{on %event
			{call "update_missilerack"}
		}
	)
	("update_rack_event" event(operatable on))
	("update_rack_event" event(operatable off))
	("update_rack_event" event(crew in))
	("update_rack_event" event(crew out))
}

{"btr-40"
	("sdkfz222_sound")
}

{"btr-40a"
	("sdkfz222_sound")
	{on "init_gun"
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel00"	"shooter00"}
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel01"	"shooter01"}
		{add_view "zenit_gilz"			"shell"			"FXshell00"}
		{add_view "zenit_gilz"			"shell"			"FXshell01"}
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
		}
		{call "spawn_shell"}
	}
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

{"gaz-69spz"
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

{"cckw353_fuel"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
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

{"m551"
	("pz3_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"m551_acav"
	("pz3_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"m26_pershing tank"
	("m26_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"m46_patton tank"
	("m26_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"m47_patton tank"
	("m26_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"m48"
	("pz6_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"m48a1"
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
	("flame_weapon" args gun 160 1 40)
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
	("flame_weapon" args gun 160 1 40)
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
	("pz2_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2)
	}
}

{"m110"
	("pz3_sound")
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

{"m4a3e8 tank"
	("m4a3_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"m24_chaffee tank"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open2" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open2" -1.0 resume}
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

{"m47g tank"
	("m26_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"m48g"
	("pz6_sound")
}

{"m48a2c"
	("pz6b_sound")
}

{"leopard_1a1"
	("pz6b_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open1" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open1" -1.0 resume}
	}
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


;/*=========== GDR Vehicles BEGIN  ===========*/

{"btr-40_gdr"
	("sdkfz222_sound")
}

{"brdm-1_gdr"
	("sdkfz222_sound")
}

{"btr-152_gdr"
	("zis5_sound")
}

{"btr-152u_gdr"
	("zis5_sound")
}

{"btr-152a"
	("zis5_sound")
	{on "init_gun"
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel00"	"shooter00"}
		{add_view "flash_gun_hmg_m2hb"			"flashbarrel01"	"shooter01"}
		{add_view "zenit_gilz"			"shell"			"FXshell00"}
		{add_view "zenit_gilz"			"shell"			"FXshell01"}
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
		}
		{call "spawn_shell"}
	}
}

{"pt-76gdr tank"
	("t70_sound")
}

{"su100_gdr tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
}

{"su85_gdr tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
}

{"t-54ag tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"t-55g tank"
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

{"t-54g tank"
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

;/*=========== PRC Vehicles BEGIN  ===========*/

{"gaz67_prc"
	("gaz_sound")
}

{"nj-130 car"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"nj-130_ammo car"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"ba64_prc"
	("ba_sound")
}

{"btr-40_type55"
	("sdkfz222_sound")
}

{"yw531 tank"
	("bt_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open1" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open1" -1.0 resume}
	}
}

{"su76_prc tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t70/start"}
		{link_sound "engine_stop"		"vehicle/engine/t70/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t70/idle"}
		{link_sound "engine_full"		"vehicle/engine/t70/full"}
		{link_sound "exhaust"			"vehicle/engine/t70/exhaust"}
		{link_sound "move"				"vehicle/tracks/t70"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}
}

{"t-34-85_prc tank"
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

{"type58_tank tank"
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
		{ani_wind "open2" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open2" -1.0 resume}
	}
}

{"su100_prc tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
}

{"type59 tank"
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

{"is2_prc tank"
	("is_sound")
}

{"isu152_prc tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/is/start"}
		{link_sound "engine_stop"		"vehicle/engine/is/stop"}
		{link_sound "engine_idle"		"vehicle/engine/is/idle"}
		{link_sound "engine_full"		"vehicle/engine/is/full"}
		{link_sound "exhaust"			"vehicle/engine/is/exhaust"}
		{link_sound "move"				"vehicle/tracks/is/"}
		{link_sound "rotate_turret"		"vehicle/turret/gun/gun_horizontal"}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open_right" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_right" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
}

;/*=========== Hotmod Specifics End  ===========*/
