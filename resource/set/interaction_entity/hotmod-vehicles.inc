;/*=========== Hotmod Specifics Begin  ===========*/
{"vehicle"
	{on spawn
		{add_view   "recoilless_shot"			"flashbarrelsmall"	"fxshot"}
	}
}
;/*==========MGAA hatch script============*/
{"with_open_zpu"
	{on "cwsh_enable_zpu"
		{tags remove "cwsh_zpu_off"}
		{delay 1 {call "update_weaponry"}}
		{call "cwsh_update_hatch"}
		{call "cwsh_gunner_out"}
		{call "update_lights"}
		{play_sound "hatch_heavy"}
	}
	{on "cwsh_disable_zpu"
		{tags add "cwsh_zpu_off"}
		{delay 0.2 {call "update_weaponry"}}
		{delay 0.5 {call "cwsh_update_hatch"}}
		{call "cwsh_gunner_in"}
		{call "update_lights"}
		{play_sound "hatch_heavy"}
	}
}
;/*==========MGAA hatch script============*/
;/*=========== side fire script===========*/
{"side_fire"

	{on spawn
		{volumes "gun_recoil" disable blast}
		{tags add "ordos_fire_debug001"}
	}


	{on fire "gun"
		{tags add "ordos_fire_debug002"}
		{volumes "gun_recoil" enable blast}
		{spawn "turret_dir_detector" "gun_recoil" {stuff_detonate}}
		{delay 0.5
			{tags add "ordos_fire_debug003"}
			{volumes "gun_recoil" disable blast}
		}
	}

	{on fire "gun2"
		{tags add "ordos_fire_debug002"}
		{volumes "gun_recoil" enable blast}
		{spawn "turret_dir_detector" "gun_recoil" {stuff_detonate}}
		{delay 0.5
			{tags add "ordos_fire_debug003"}
			{volumes "gun_recoil" disable blast}
		}
	}

	{on blast_hit
			{if stuff "turret_dir_detector"

				{if volume "recoil_gun_front"  {ani_play "fire_front"} {ani_play "fire_front_common"}{tags add "ordos_fire_front"}

				else volume "recoil_gun_left"  {ani_play "fire_left"} {ani_play "fire_left_common"} {tags add "ordos_fire_left"}

				else volume "recoil_gun_right"  {ani_play "fire_right"} {ani_play "fire_right_common"} {tags add "ordos_fire_right"}

				else volume "recoil_gun_back"  {ani_play "fire_back"} {ani_play "fire_back_common"}{tags add "ordos_fire_back"}

				else volume "recoil_gun_central"

				}
			}
	}

}
;/*=========== shell eject script for T-72 series ===========*/
{"tank shell_eject1"
	{on fire "gun"
		{call "spawn_shell"}
	}
	{on "spawn_shell"
		{tags add "gun_fired"}
		{call "spawn_shell_delay"}
		(define "shell_eject_delay"
			{delay_ex %0
				{ani_play "shell_eject" 1}			;// door/hatch animation for tank to open and shell is thrown out
				{ani_play "shell_hatch" 1}
				{delay_ex %1
					{add_view "smoke_breach" "smoke_shell" "fx_invers"}
					{view start "smoke_shell"}
					{delay 2.5 0.5
						{view pause "smoke_shell"}
					}
					{spawn "shell_cannon1" "fx_invers" x scale 0.014
						{impulse forward 4 0.5 rnd_dir 0.1 0.1 cz 0.2 0.1 com}
						{add_view "smoke_empty_shell" "smoke_shell" "fx_shellsmoke"}
						{view start "smoke_shell"}
						{delay_effect 3 1 "stop"}
						{##delay 3 0.5
							{hide 3}
						}
					}
				}
			}
		)
	}

	{on "spawn_shell_delay"
		;("shell_eject_delay" args 0.5 0)
		("shell_eject_delay" args 1.8 0)
	}

	{on "reload"
		{call "reload_delay"}
		(define "reload_delay"
			{if tagged "gun_fired"
				{delay %0 ;4.5
					{tags remove "gun_fired"}
					{ani_play "shell_eject" -1.0}
					{ani_play "shell_hatch" -1.0}
				}
			else
				{delay %1 ;0.5
					{ani_play "shell_eject" 1.0}
				}
				{delay %2 ;5
					{ani_play "shell_eject" -1.0}
				}
			}
		)
	}

	{on "reload_delay"
		("reload_delay" args 4.5 0.5 5)
	}
}

;/*===========  AT FIELD for cumulative type damage ===========*/
{"rpg_restrictor"
	{on spawn {delay 0.2 {delete}}}
	{on bullet_hit {delete}}
}


;/*===========  MG Turret scanning  ===========*/

{"cw_panorama"
    {on "update_cw_panorama"
        {if operatable
            ;{if work "additional_triplex"
                ;{if work "commander_triplex"
					{if not tagged "human_in_use"
						{if not tagged "contusion"
							{if crew_in_place "commander"
								{if not tagged "no_power"
									{call "cw_panorama_work"}
								else {call "cw_panorama_off"}}
							else {call "cw_panorama_off"}}
						else {call "cw_panorama_off"}}
					else {call "cw_panorama_instant_off"}}
                ;else {call "cw_panorama_off"}}
            ;else {call "cw_panorama_off"}}
        else {call "cw_panorama_instant_off"}}
    }
    {on "cw_panorama_work"
        {if not tagged "cw_panorama_work"
            {ani_play "panorama" callback}
        }
        {tags add "cw_panorama_work"}
    }
    {on "cw_panorama_off"
        {tags remove "cw_panorama_work"}
    }
    {on "cw_panorama_instant_off"
        {tags remove "cw_panorama_work"}
        {ani_stop "panorama"}
    }
    {on animation_end "panorama"
        {if tagged "cw_panorama_work" {ani_play "panorama" callback}}
    }
	{on ik begin "turret_mg"                ;// turret_mg bone rotates
         {tags add "human_in_use"}
         {call "update_cw_panorama"}
    }
    {on ik end "turret_mg"                    ;// turret_mg stops rotation
        {delay 3
			{tags remove "human_in_use"}
			{call "update_cw_panorama"}
        }
    }
}
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
	{on "gunner3_hatch_open"}
	{on "gunner3_hatch_close"}
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
			("places" args gunner3)
			("places" args gunner4)
			("places" args commander)
			("places" args charger)
		}
	)
	{on "update_hatch_on_spawn"
		("update_hatch" wind(true))
		{tags remove "cw_panorama_work"}
		{call "update_cw_panorama"}
	}
	(define "update_hatch_event"
		{on %event
			("update_hatch" wind(false))
			{call "update_zpu"}
			{call "update_cw_panorama"}
		}
	)
	("update_hatch_event" event(operatable on))
	("update_hatch_event" event(operatable off))
	("update_hatch_event" event(crew in))
	("update_hatch_event" event(crew out))

	;/*=========== Hatch Animation End ===========*/
}
	;/*=========== ESS Smoke Instructions ===========*/

{"smoke ess"					;// Emergency Smoke System - Smokescreen created by injecting diesel fuel into hot exhausts. TODO: Use up a bit of fuel every time.
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

{"smoke 8shot"					;// NATO 8-shot smoke launchers
	{on "smoke_screen"
		("smoke_shot" args "nbk39" smoke_shot1 -17 0.5 0 20)
		("smoke_shot" args "nbk39" smoke_shot4 -17 0.5 0.1 20)
		("smoke_shot" args "nbk39" smoke_shot2 -17 0.5 0.2 20)
		("smoke_shot" args "nbk39" smoke_shot5 -17 0.5 0.3 20)
		("smoke_shot" args "nbk39" smoke_shot3 -17 0.5 0.4 20)
		("smoke_shot" args "nbk39" smoke_shot6 -17 0.5 0.5 20)
		("smoke_shot" args "nbk39" smoke_shot7 -17 0.5 0.6 20)
		("smoke_shot" args "nbk39" smoke_shot8 -17 0.5 0.7 20)
	}
}

{"smoke bdsh"					;// Soviet droppable smoke bombs
	{on spawn
		{add_view "exhaust_dark_big_diesel"			"smoke_bdsh"			"root"}
		{add_view "smoke_cover-up_big"				"smoke_bdsh_cover" 		"root"}
		{tags add "smoke0"}
	}


	{on "smoke_screen"
		{if tagged "smoke0"
			{tags add "smoke1"}
			{tags remove "smoke0"}
			{tear "piece_large_steel" bone "smokebomb1"
				{impulse up -1 dir -5 forward -2}
				{add_view "exhaust_dark_big_diesel"			"smoke_bdsh"			"root"}
				{add_view "smoke_cover-up_big"				"smoke_bdsh_cover" 		"root"}
				{view start "smoke_bdsh"}
				{view start "smoke_bdsh_cover"}
				{delay 60
					{view stop "smoke_bdsh"}
					{view stop "smoke_bdsh_cover"}
				}
			}
		else tagged "smoke1"
			{tags add "smoke2"}
			{tags remove "smoke1"}
			{tear "piece_large_steel" bone "smokebomb2"
				{impulse up -1 dir -5 forward -2}
				{add_view "exhaust_dark_big_diesel"			"smoke_bdsh"			"root"}
				{add_view "smoke_cover-up_big"				"smoke_bdsh_cover" 		"root"}
				{view start "smoke_bdsh"}
				{view start "smoke_bdsh_cover"}
				{delay 60
					{view stop "smoke_bdsh"}
					{view stop "smoke_bdsh_cover"}
				}
			}
		else ;//do nothing
		}
	}

	(define "drop_bdsh"
		{on "smokebomb"
			{if tagged "smoke0"
				{tags add "smoke1"}
				{tags remove "smoke0"}
				{tear "piece_large_steel" bone "smokebomb1"
					{impulse up -1 dir -5 forward -2}
					{view start "smoke_bdsh"}
					{view start "smoke_bdsh_cover"}
					{delay 60
						{view stop "smoke_bdsh"}
						{view stop "smoke_bdsh_cover"}
					}
				}
			else tagged "smoke1"
				{tags add "smoke2"}
				{tags remove "smoke1"}
				{tear "piece_large_steel" bone "smokebomb2"
					{impulse up -1 dir -5 forward -2}
					{view start "smoke_bdsh"}
					{view start "smoke_bdsh_cover"}
					{delay 60
						{view stop "smoke_bdsh"}
						{view stop "smoke_bdsh_cover"}
					}
				}
			else ;//do nothing
			}
		}
	)

		{on "smokebomb2"
			{tear "piece_large_steel" bone "smokebomb2"
				{impulse up -1 dir -5 forward -2}
				{view start "smoke_bdsh"}
				{view start "smoke_bdsh_cover"}
				{delay 60
					{view stop "smoke_bdsh"}
					{view stop "smoke_bdsh_cover"}
				}
			}
		}
	)
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

;/*=========== spawn_shell script for vehicles? ===========*/

{"moto shell_eject"
	{on fire "gun"
		{call "spawn_shell"}
	}
	{on "spawn_shell"
		{tags add "gun_fired"}
		{call "spawn_shell_delay"}
		(define "shell_eject_delay"
			{delay_ex %0
				{ani_play "shell_eject" 1}			;// door/hatch animation for tank to open and shell is thrown out
				{ani_play "shell_hatch" 1}
				{delay_ex %1
					{add_view "smoke_breach" "smoke_shell" "fx_invers"}
					{view start "smoke_shell"}
					{delay 2.5 0.5
						{view pause "smoke_shell"}
					}
					{spawn "shell_cannon" "fx_invers" x scale 0.014
						{impulse forward 4 0.5 rnd_dir 0.1 0.1 cz 0.2 0.1 com}
						{add_view "smoke_empty_shell" "smoke_shell" "fx_shellsmoke"}
						{view start "smoke_shell"}
						{delay_effect 3 1 "stop"}
						{##delay 3 0.5
							{hide 3}
						}
					}
				}
			}
		)
	}

	{on "spawn_shell_delay"
		("shell_eject_delay" args 0 0)
	}

	{on "reload"
		{call "reload_delay"}
		(define "reload_delay"
			{if tagged "gun_fired"
				{delay %0 ;4.5
					{tags remove "gun_fired"}
					{ani_play "shell_eject" -1.0}
					{ani_play "shell_hatch" -1.0}
				}
			else
				{delay %1 ;0.5
					{ani_play "shell_eject" 1.0}
				}
				{delay %2 ;5
					{ani_play "shell_eject" -1.0}
				}
			}
		)
	}

	{on "reload_delay"
		("reload_delay" args 4.5 0.5 5)
	}
}

;/// Added from Valour mod
(define "m4a3_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m4a3/start"}
		{link_sound "engine_stop"		"vehicle/engine/m4a3/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m4a3/idle"}
		{link_sound "engine_full"		"vehicle/engine/m4a3/full"}
		{link_sound "exhaust"			"vehicle/engine/m4a3/exhaust"}
		{link_sound "move"				"vehicle/tracks/m4a2"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
)
(define "m24_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m24/start"}
		{link_sound "engine_stop"		"vehicle/engine/m24/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m24/idle"}
		{link_sound "engine_full"		"vehicle/engine/m24/full"}
		{link_sound "exhaust"			"vehicle/engine/m24/exhaust"}
		{link_sound "move"				"vehicle/tracks/m24"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
		{link_sound "rotate_gun" 		"vehicle/turret/gun/gun_vertical"}
	}
)
(define "us_halftrack_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/us_halftrack/start"}
		{link_sound "engine_stop"		"vehicle/engine/us_halftrack/stop"}
		{link_sound "engine_idle"		"vehicle/engine/us_halftrack/idle"}
		{link_sound "engine_full"		"vehicle/engine/us_halftrack/full"}
		{link_sound "exhaust"			"vehicle/engine/sdkfz251/exhaust"}
		{link_sound "move"				"vehicle/tracks/m3a1"}
		{link_sound "rotate_turret" 	"vehicle/turret/gun/gun_horizontal"}
		{link_sound "rotate_gun" 		"vehicle/turret/gun/gun_vertical"}
	}
)
(define "m10_sound"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m4/start"}
		{link_sound "engine_stop"		"vehicle/engine/m4/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m4/idle"}
		{link_sound "engine_full"		"vehicle/engine/m4/full"}
		{link_sound "exhaust"			"vehicle/engine/m4/exhaust"}
		{link_sound "move"				"vehicle/tracks/m4"}
		{link_sound "rotate_turret" 	"vehicle/turret/gun/gun_horizontal"}
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
		{link_sound "move"				"vehicle/tracks/m26"}
		{link_sound "rotate_turret"		"vehicle/turret/hydraulic/hydraulic_heavy"}
		{link_sound "rotate_gun" 		"vehicle/turret/gun/gun_vertical"}
	}
)
;/*=========== SOVIET Vehicles  ===========*/

{"pt-76 tank"
	("t70_sound")
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"pt-76b tank"
	("t70_sound")
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"btr-50p tank"
	("t70_sound")
}

{"btr-50pvmf tank"
	("t70_sound")
}

{"btr-50_zis2 tank"
	("t70_sound")
}

{"btr-50_zis3 tank"
	("t70_sound")
}

{"btr-50_d44 tank"
	("t70_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1)
	}

	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"btr-50pk tank"
	("t70_sound")
	{on "gunner2_hatch_open" overload
		{ani_wind "open_hatches" end}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open_hatches" -1.0 resume}
	}
}

{"btr-50pu tank"
	("t70_sound")
}

{"asu-85 tank"
	("t70_sound")
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"asu-85_late tank"
	("t70_sound")
	{on "commander_hatch_open" overload
		{ani_play "open" +1.0 resume}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
	{on "update_cw_panorama" overload
		{if operatable
			{if tagged "cwsh_zpu_off"
				{if not tagged "human_in_use"
					{if not tagged "contusion"
						{if crew_in_place "commander"
							{if not tagged "no_power"
								{call "cw_panorama_work"}
							else {call "cw_panorama_off"}}
						else {call "cw_panorama_off"}}
					else {call "cw_panorama_off"}}
				else {call "cw_panorama_instant_off"}}
			else {call "cw_panorama_instant_off"}}
		else {call "cw_panorama_instant_off"}}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_isu152_gunner2))
}

{"asu-85_para tank"
	("t70_sound")
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
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
	{on fire "gun"
		{spawn "detector" "foresight1" x}
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
	{on fire "gun"
		{spawn "detector" "foresight1" x}
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

{"gaz-51_eng car"
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

{"kraz-255 car"
	("opel_maultier_sound")
}

{"kraz-255_ammo car"
	("opel_maultier_sound")
}

{"bm-21_grad car"
	("zis5_sound")
}

{"bm-14-16 car"
	("zis5_sound")
	{on spawn
		{tags add "shield_up"}
	}

	{on ik begin "turret"
		{if tagged "shield_up"
			{tags add "aiming"}
			{tags remove "moving"}
			{ani_play "support_close"}
			{tags add "shield_down"}
			{tags remove "shield_up"}
		else
			{delay 0.1}
		}
	}

	{on move on
		{if tagged "shield_down"
			{tags add "moving"}
			{tags remove "aiming"}
			{ani_play "support_open"}
			{tags remove "shield_down"}
			{tags add "shield_up"}
		else
			{delay 0.1}
		}
	}
}

{"bm-13-17m car"
	("zis5_sound")
	{on spawn
		{tags add "shield_up"}
	}

	{on ik begin "turret"
		{if tagged "shield_up"
			{tags add "aiming"}
			{tags remove "moving"}
			{ani_play "support_close"}
			{tags add "shield_down"}
			{tags remove "shield_up"}
		else
			{delay 0.1}
		}
	}

	{on move on
		{if tagged "shield_down"
			{tags add "moving"}
			{tags remove "aiming"}
			{ani_play "support_open"}
			{tags remove "shield_down"}
			{tags add "shield_up"}
		else
			{delay 0.1}
		}
	}
}

{"bm-24m car"
	("zis5_sound")
	{on spawn
		{tags add "shield_up"}
	}

	{on ik begin "turret"
		{if tagged "shield_up"
			{tags add "aiming"}
			{tags remove "moving"}
			{ani_play "support_close"}
			{tags add "shield_down"}
			{tags remove "shield_up"}
		else
			{delay 0.1}
		}
	}

	{on move on
		{if tagged "shield_down"
			{tags add "moving"}
			{tags remove "aiming"}
			{ani_play "support_open"}
			{tags remove "shield_down"}
			{tags add "shield_up"}
		else
			{delay 0.1}
		}
	}
}

{"btr-152"
	("zis5_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover) pose(seat_isu152_gunner2))
}

{"btr-152u"
	("zis5_sound")
}

{"btr-60p"
	("sdkfz234_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover) pose(seat_isu152_gunner2))
}

{"btr-60pvmf"
	("sdkfz234_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover) pose(seat_isu152_gunner2))
}

{"btr-60pa"
	("sdkfz234_sound")
	{on "gunner2_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}

	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover) pose(seat_isu152_gunner2))
}

{"btr-60pb"
	("sdkfz234_sound")
}

{"asu57"
	("s60_sound")
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
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
	{on fire "gun"
		{spawn "detector" "foresight1" x}
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
		{ani_play "open" 1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
		("check_fire")
	}

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))


}

{"t-54b tank"
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
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
		("check_fire")
	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"t-64 tank"
	("is_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 3 0.25)
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
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
	{on fire "gun"
		{spawn "detector" "foresight1" x}
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
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"t-55k tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
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

	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"is2m tank"
	("is_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}

	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_isu152_gunner2))
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
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) com_optic(mgun1) anim(hm_hatch_cover) pose(seat_isu152_gunner2))
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
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) com_optic(mgun1) anim(hm_hatch_cover) pose(seat_isu152_gunner2))
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
		("check_fire")
		{spawn "detector" "foresight1" x}
		{delay 1.5
			{ani_play "eject"}
		}
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}

	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) com_optic(mgun1) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"t-62_1967 tank"
	("t28_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.8)
	}
	{on fire "gun"

		{spawn "detector" "foresight1" x}
		{delay 1.5
			{ani_play "eject"}
		}
	}
}

{"t-62_1960 tank"
	("t28_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.8)
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
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
		{spawn "detector" "foresight1" x}
		{delay 1.5
			{ani_play "eject"}
		}
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

{"t-72_ural tank"
	("t28_sound")
	{on operatable on
		{ani_play "flaps"}
	}

	;{on "spawn_shell_delay" overload
	;	("shell_eject_delay" args 1.2)
	;}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
		{delay 1.2
			{ani_play "eject"}
		}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
	{on "update_cw_panorama" overload
		{if operatable
			{if tagged "cwsh_zpu_off"
				{if not tagged "human_in_use"
					{if not tagged "contusion"
						{if crew_in_place "commander"
							{if not tagged "no_power"
								{call "cw_panorama_work"}
							else {call "cw_panorama_off"}}
						else {call "cw_panorama_off"}}
					else {call "cw_panorama_off"}}
				else {call "cw_panorama_instant_off"}}
			else {call "cw_panorama_instant_off"}}
		else {call "cw_panorama_instant_off"}}
	}

}

{"2s3 tank"
	("t70_sound")
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"it-1 tank"
	("t28_sound")
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
	{on spawn
		{ani_play "fire1" +1.0 resume}
	}
}

{"t-10m tank"
	("is_sound")
	{on fire "gun"
		{spawn "detector" "foresight1" x}
		("check_fire")
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) com_optic(mgun1) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"t-10m_1957 tank"
	("is_sound")
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
		("check_fire")
	}
	{on "charger_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) com_optic(mgun1) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"t-10m_1957 tank"
	("is_sound")
	{on fire "gun"
		{spawn "detector" "foresight1" x}
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

{"su-122-54 tank"

	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
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
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
	{on fire "gun2"
		{spawn "detector" "foresight6" x}
	}
}

{"bmd-1"
	("bt_sound")
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
	{on fire "gun2"
		{spawn "detector" "foresight6" x}
	}
}

{"2p27" ;// can't figure out how to reset turret to 0
	("sdkfz222_sound")

	{on spawn
		{tags add "weapon_up"}
	}

	{on fire "gun"
		{tags add "gun_fired!!!!"}
		{spawn "detector_big" "foresight1" x}
		;{spawn "detector" "rocket2" x}
		;{spawn "detector" "rocket3" x}
	}

	{on "reload"
		{tags add "reloading"}
		{ani_play "weapon_down"}
		{tags add "weapon_down"}
		{tags remove "weapon_up"}
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
						{tags add "weapon_up"}
						{delay 1
							{ik_enable "turret" 1}
						}
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
	("update_rack_event" event(fire))
	("update_rack_event" event(ik begin "gun_rot_h"))
	("update_rack_event" event(ik begin "gun_rot_v"))
}

{"9p110" ;// can't figure out how to reset turret to 0
	("sdkfz222_sound")

	{on spawn
		{tags add "weapon_up"}
	}

	{on "reload"
		{tags add "reloading"}
		;{weapon_work "gun" 0}
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
						{delay 1
							;{weapon_work "gun" 1}
						}
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
	("update_rack_event" event(fire))
	("update_rack_event" event(ik begin "turret"))
	("update_rack_event" event(ik begin "foresight1"))

	{on fire "gun"
		{tags add "gun_fired!!!!"}
		{spawn "detector_big" "foresight1" x}
	}
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
	{on fire "gun"

		{spawn "detector_big" "foresight1" x}

	}
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
	{on fire "gun"
		{tags add "gun_fired!!!!"}
		{spawn "detector_big" "foresight1" x}

	}
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
	{on fire "gun"
		{tags add "gun_fired!!!!"}
		{spawn "detector_big" "foresight1" x}

	}
}

{"btr-40"
	("sdkfz222_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(into_hatch_common) pose(pose_dodge_sg2))
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
	{on "gunner2_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(into_hatch_common) pose(pose_dodge_sg2))
}

{"brdm-1u"
	("sdkfz222_sound")
	{on "gunner2_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(into_hatch_common) pose(pose_dodge_sg2))
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

{"m151_m2"
	("kubel_sound")
	{on "commander_hatch_open" overload
		{ani_play "mgun" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "mgun" -1.0 resume}
	}
}

{"m151_m40"
	{on fire "gun"
		{ani_play "fire"}
		{spawn "detector"  "foresight1" x}
		{view start "flashbarrelsmall"}
		{call "spawn_shell"}
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1)
	}
}

{"m151_m40_airlift"
	("kubel_sound")
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
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

{"m16gmc tank"
	("us_halftrack_sound")
	{on spawn
		{link_sound "bkg_hmg" "weapon/shot/bkg/gun/hmg/"}
		{add_view "flash_gun_hmg_dshk"			"flashbarrel00"	"shooter00"}
		{add_view "flash_gun_hmg_dshk"			"flashbarrel01"	"shooter01"}
		{add_view "flash_gun_hmg_dshk"			"flashbarrel02"	"shooter02"}
		{add_view "flash_gun_hmg_dshk"			"flashbarrel03"	"shooter03"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{add_view "zenit_gilz"			"shell"			"FXshell3"}
		{add_view "zenit_gilz"			"shell"			"FXshell4"}
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
		{play_sound "bkg_hmg"}
		{ani_play "recoil"}
		{call "spawn_shell"}
	}
}

{"m16gmc tank"
	("us_halftrack_sound")
}

{"m41"
	("pz3_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"m41_early"
	("pz3_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
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

	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"m551_acav"
	("pz3_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"m551_airlift"
	("pz3_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"m26_pershing tank"
	("pz6_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
}

{"m46_patton tank"
	("pz6_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
}

{"m47_patton tank"
	("pz6_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(pose_mgun_pz6))
}

{"m48"
	("pz6_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m48a1"
	("pz6_sound")
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
}

{"m48a3"
	("pz6_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

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
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m103_usmc"
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
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m60_patton"
	("pz5_sound")
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
}

{"m60a1"
	("pz5_sound")
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
}

{"m60a1e2"
	("pz5_sound")
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
}

{"m728"
	("pz5_sound")
	{on spawn
		{link_sound "dozer" "vehicle/misc/dozer"}
	}
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
}

{"m39_apc tank"
	("pz2_sound")
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"m39_eng tank"
	("pz2_sound")
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m39_ammo tank"
	("pz2_sound")
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
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

{"m113 tank"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_leo) pose(seat_gunner_stand))
}

{"m113a1 tank"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"m163 tank"
	("pz38_sound")
	("zpu_params" gunner(gunner) zpu_mgun(gun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m113_acav tank"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}
	{on "gunner3_hatch_open" overload
		{ani_play "open_top" resume}
	}
	{on "gunner3_hatch_close" overload
		{ani_play "open_top" -1.0 resume}
	}
	{on "gunner4_hatch_open" overload
		{if crew_in_place "gunner3"
			{ani_play "open_top" resume}
		else
			{ani_play "open_top" resume}
		}
	}
	{on "gunner4_hatch_close" overload
		{if crew_in_place "gunner3"
			;nothing
		else
			{ani_play "open_top" -1.0 resume}
		}
	}



	("triplezpu_params"
		gunner(commander) zpu_mgun(mgun) anim(into_hatch_leo) pose(seat_gunner_stand)
		secgunner(gunner3) seczpu_mgun(mgun2) secanim(into_hatch_leo) secpose(seat_gunner_stand)
		triplegunner(gunner4) tripzpu_mgun(mgun3) tripleanim(into_hatch_leo) trippose(seat_gunner_stand)
	)
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
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}
	{on "gunner3_hatch_open" overload

		{ani_play "open_top" resume}

	}
	{on "gunner3_hatch_close" overload

		{ani_play "open_top" -1.0 resume}
	}
	{on "gunner4_hatch_open" overload
		{if crew_in_place "gunner3"
			{ani_play "open_top" resume}
		else
			{ani_play "open_top" resume}
		}
	}
	{on "gunner4_hatch_close" overload
		{if crew_in_place "gunner3"
			;nothing
		else
			{ani_play "open_top" -1.0 resume}
		}
	}
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
	("triplezpu_params"
		gunner(commander) zpu_mgun(mgun1) anim(into_hatch_leo) pose(seat_gunner_stand)
		secgunner(gunner3) seczpu_mgun(mgun2) secanim(into_hatch_leo) secpose(seat_gunner_stand)
		triplegunner(gunner4) tripzpu_mgun(gun) tripleanim(into_hatch_leo) trippose(seat_gunner_stand)
	)
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
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}
	{on "gunner_hatch_open" overload

		{ani_play "open_top" resume}

	}
	{on "gunner_hatch_close" overload

		{ani_play "open_top" -1.0 resume}

	}
	{on "charger_hatch_open" overload
		{if crew_in_place "gunner"
			{ani_play "open_top" resume}
		else
			{ani_play "open_top" resume}
		}
	}
	{on "charger_hatch_close" overload
		{if crew_in_place "gunner"
			;nothing
		else
			{ani_play "open_top" -1.0 resume}
		}
	}

	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
	("doublezpu_params"
		gunner(commander) zpu_mgun(mgun1) anim(into_hatch_leo) pose(seat_gunner_stand)
		secgunner(gunner) seczpu_mgun(gun) secanim(into_hatch_leo) secpose(seat_gunner_stand))
}
{"m125"
	("pz38_sound")

	{on "commander_hatch_open" overload
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}

	{on "gunner3_hatch_open" overload

		{ani_play "open_top" resume}

	}
	{on "gunner3_hatch_close" overload

		{ani_play "open_top" -1.0 resume}

	}
	{on "charger_hatch_open" overload
		{if crew_in_place "gunner3"
			{ani_play "open_top" resume}
		else
			{ani_play "open_top" resume}
		}
	}
	{on "charger_hatch_close" overload
		{if crew_in_place "gunner3"
			;nothing
		else
			{ani_play "open_top" -1.0 resume}
		}
	}

	("triplezpu_params"
		gunner(commander) zpu_mgun(mgun) anim(into_hatch_leo) pose(seat_gunner_stand)
		secgunner(gunner3) seczpu_mgun(gun) secanim(into_hatch_leo) secpose(pose_mortar_gunner)
		triplegunner(charger) tripzpu_mgun(gun) tripleanim(into_hatch_leo) trippose(pose_mortar_120sgrw42_commander)
	)
}

{"m106"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open_turret" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}

	{on "gunner3_hatch_open" overload

		{ani_play "open_top" resume}
		{ani_play "weapon_up" resume}

	}
	{on "gunner3_hatch_close" overload

		{ani_play "open_top" -1.0 resume}
		{ani_play "weapon_down" resume}

	}
	{on "charger_hatch_open" overload
		{if crew_in_place "gunner3"
			;nothing
		else
			{ani_play "open_top" resume}
			{ani_play "weapon_up" resume}
		}
	}
	{on "charger_hatch_close" overload
		{if crew_in_place "gunner3"
			;nothing
		else
			{ani_play "open_top" -1.0 resume}
			{ani_play "weapon_down" resume}
		}
	}

	("triplezpu_params"
		gunner(commander) zpu_mgun(mgun) anim(into_hatch_leo) pose(seat_gunner_stand)
		secgunner(gunner3) seczpu_mgun(gun) secanim(into_hatch_leo) secpose(pose_mortar_gunner)
		triplegunner(charger) tripzpu_mgun(gun) tripleanim(into_hatch_leo) trippose(pose_mortar_120sgrw42_commander)
	)
}

{"m106_acav"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open_turret" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}

	{on "gunner3_hatch_open" overload

		{ani_play "open_top" resume}
		{ani_play "weapon_up" resume}

	}
	{on "gunner3_hatch_close" overload

		{ani_play "open_top" -1.0 resume}
		{ani_play "weapon_down" resume}

	}
	{on "charger_hatch_open" overload
		{if crew_in_place "gunner3"
			;nothing
		else
			{ani_play "open_top" resume}
			{ani_play "weapon_up" resume}
		}
	}
	{on "charger_hatch_close" overload
		{if crew_in_place "gunner3"
			;nothing
		else
			{ani_play "open_top" -1.0 resume}
			{ani_play "weapon_down" resume}
		}
	}

	("triplezpu_params"
		gunner(commander) zpu_mgun(mgun) anim(into_hatch_leo) pose(seat_gunner_stand)
		secgunner(gunner3) seczpu_mgun(gun) secanim(into_hatch_leo) secpose(pose_mortar_gunner)
		triplegunner(charger) tripzpu_mgun(gun) tripleanim(into_hatch_leo) trippose(pose_mortar_120sgrw42_commander)
	)
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



		{spawn "detector_extra_big"  "foresight" x}


	}
}

{"m50_airlift"
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
		{spawn "detector_extra_big"  "foresight" x}
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

	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}

}

{"m56_airlift"
	("pz2_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2)
	}
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
}

{"m56_para"
	("pz2_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2)
	}
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

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
		{ani_play "open"}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m109_acav"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_play "open"}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m108"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_play "open"}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m36gmc tank"
	("m10_sound")
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

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
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

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

	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
}

;/*=========== FRG Vehicles BEGIN  ===========*/

{"munga"
	("kubel_sound")
}

{"munga8_m40"
	{on fire "gun"
		{spawn "detector"  "foresight1" x}
		{ani_play "fire"}
		{view start "flashbarrelsmall"}
		{call "spawn_shell"}
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.2)
	}
}

{"unimog404s car"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
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

{"gaz-51_eng car"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"m39g_apc tank"
	("pz2_sound")
}

{"m39g_eng tank"
	("pz2_sound")
}

{"m39g_ammo tank"
	("pz2_sound")
}

{"m113g tank"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"m113g_early tank"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"spz_112"
	("pz1_sound")
}

{"rakjpz_1"
	("pz2_sound")

	{on "gunner_hatch_open"
		{ani_play "raise_sight" resume}
	}
	{on "gunner_hatch_close"
		{ani_play "lower_sight" resume}
	}

	{on spawn
		{tags add "missile_r"}
		{tags remove "missile_l"}
		{tags remove "reloading"}
	}

	{on fire "gun" overload

		{spawn "detector_extra_big"  "foresight" x}
		(define "fire_missile"
			name "%0"
				{call "fire_missile%0"}
		)
		{if	("fire_missile" args 00)
			{bone hide "rocket_00"}
			{delay 1
				{ani_play "lower_launcher_r"}
				{tags add "reloading"}
				{tags remove "missile_r"}
				{tags remove "missile_r_up"}
				{tags add "missile_l"}
				{delay 3
					{ani_play "raise_launcher_l"}
					{tags add "missile_l_up"}
					{tags remove "reloading"}
				}
			}
		else ("fire_missile" args 01)
			{bone hide "rocket_01"}
			{delay 1
				{ani_play "lower_launcher_l"}
				{tags remove "missile_l"}
				{tags remove "missile_l_up"}
			}
		}
	}

	{on "reload"
		{tags add "reloading"}
		{tags remove "missile_r"}
		{tags remove "missile_r_up"}
		{tags remove "missile_l"}
		{tags remove "missile_l_up"}
		;{ik_enable "sight_pole" 0}
		{talk "reload"}
		{delay 1
			{call "update_missileracks"}
			{delay 3.5
				{tags remove "reloading"}
				{tags add "missile_r"}
				{talk "reloaded"}
				{call "update_missileracks"}
				{bone show "rocket_00"}
				{bone show "rocket_01"}
			}
		}
	}

	{on repair
		{if component "body"
			{call "update_missileracks"}
		}
	}

	(define "update_missileracks"
		{if crew_in_place "gunner"
			{if tagged "reloading"
				{delay 0.1}
			else tagged "missile_r_up"
				{delay 0.1}
			else tagged "missile_l_up"
				{delay 0.1}
			else tagged "missile_r"
				{ani_play "raise_launcher_r"}
				{bone show "rocket_00"}
				{tags add "missile_r_up"}
				{tags remove "missile_l"}
				{tags remove "reloading"}
				{ik_enable "sight_pole" 1}
			else tagged "missile_l"
				{ani_play "raise_launcher_l"}
				{bone show "rocket_01"}
				{tags add "missile_l_up"}
				{tags remove "missile_r"}
				{tags remove "reloading"}
				{ik_enable "sight_pole" 1}
			}
		else
			{delay 0.1}
		}

	)


	{on "update_missileracks"
		("update_missileracks" n())
	}

	(define "update_rack_event"
		{on %event
			{call "update_missileracks"}
		}
	)
	("update_rack_event" event(operatable on))
	("update_rack_event" event(operatable off))
	("update_rack_event" event(crew in))
	("update_rack_event" event(crew out))
	("update_rack_event" event(fire))
	("update_rack_event" event(ik begin "sight_pole"))

}

{"spz_123"
	("pz2_sound")
}

{"spz_123_m40"
	("pz2_sound")
	{on spawn
		{add_view "flash_shotgun" 	"flashrcl"		"foresight1a"}
		{add_view "flash_shotgun" 	"backblast"		"fx_invers"}
		{add_view "flash_gun_hmg_m2hb" 		"flashbarrel" 	"foresight1"}
	}
	{on "gunner2_hatch_open" overload
		{if crew_in_place "charger"
			{ani_play "open_back" resume}
		else
			{ani_play "open_back" resume}
		}
	}
	{on "gunner2_hatch_close" overload
		{if crew_in_place "charger"
			;nothing
			{ani_play "open_back" -1.0 resume}
		else
			{ani_play "open_back" -1.0 resume}
		}
	}
	{on "charger_hatch_open" overload
		{if crew_in_place "gunner2"
			{ani_play "open_back" resume}
		else
			{ani_play "open_back" resume}
		}
	}
	{on "charger_hatch_close" overload
		{if crew_in_place "gunner2"
			;nothing
			{ani_play "open_back" -1.0 resume}
		else
			{ani_play "open_back" -1.0 resume}
		}
	}
	{on fire "gun" overload
		{ani_play "fire"}
		{view start "flashbarrel"}
		{delay 0.15
			{view pause "flashbarrel"}
		}
	}
	{on fire "gun1" overload
		{spawn "detector"  "foresight1a" x}
		{ani_play "firer"}
		{view start "flashrcl"}
		{view start "backblast"}
		{delay 0.15
			{view pause "flashrcl"}
			{view pause "backblast"}
		}
		{call "spawn_shell"}
	}
	("doublezpu_params" gunner(gunner2) zpu_mgun(gun1) anim(into_hatch_common) pose(seat_gunner_stand)
			    secgunner(charger) seczpu_mgun(gun1) secanim(into_hatch_common) secpose(seat_gunner_stand))
}

{"m47frg tank"
	("pz6_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	{on fire "gun"
		{spawn "detector"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(pose_mgun_pz6))
}

{"m47g tank"
	("pz6_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(pose_mgun_pz6))
}

{"m48g"
	("pz6_sound")
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

	}
}

{"m48a2c"
	("pz6b_sound")
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

	}
}

{"leopard_1"
	("pz6b_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open1" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open1" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector"  "foresight1" x}
		("check_fire")

	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"leopard_1a1"
	("pz6b_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open1" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open1" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector"  "foresight1" x}
		("check_fire")

	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"m110g"
	("pz3_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 5)
	}
}

{"m109g"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"m108g"
	("pz38_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"m41frg"
	("pz3_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"m41g"
	("pz3_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
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
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(into_hatch_common) pose(seat_isu152_gunner2))
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
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

	}
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
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

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
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

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
	{on "commander_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

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
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

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
		{ani_play "open" 1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

	}
}

;/*=========== PRC Vehicles BEGIN  ===========*/

{"gaz67_prc"
	("gaz_sound")
}

{"gaz67a_prc"
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

{"ca-30 car"
	("zis5_sound")
}

{"ca-30_ammo car"
	("zis5_sound")
}

{"ca-30_eng car"
	("zis5_sound")
}

{"ca-30_fuel car"
	("zis5_sound")
}

{"bm-13-17m_prc car"
	("zis5_sound")
	{on spawn
		{tags add "shield_up"}
	}

	{on ik begin "turret"
		{if tagged "shield_up"
			{tags add "aiming"}
			{tags remove "moving"}
			{ani_play "support_close"}
			{tags add "shield_down"}
			{tags remove "shield_up"}
		else
			{delay 0.1}
		}
	}

	{on move on
		{if tagged "shield_down"
			{tags add "moving"}
			{tags remove "aiming"}
			{ani_play "support_open"}
			{tags remove "shield_down"}
			{tags add "shield_up"}
		else
			{delay 0.1}
		}
	}
}

{"bm-31m_prc car"
	("zis5_sound")
	{on spawn
		{tags add "shield_up"}
	}

	{on ik begin "turret"
		{if tagged "shield_up"
			{tags add "aiming"}
			{tags remove "moving"}
			{ani_play "support_close"}
			{tags add "shield_down"}
			{tags remove "shield_up"}
		else
			{delay 0.1}
		}
	}

	{on move on
		{if tagged "shield_down"
			{tags add "moving"}
			{tags remove "aiming"}
			{ani_play "support_open"}
			{tags remove "shield_down"}
			{tags add "shield_up"}
		else
			{delay 0.1}
		}
	}
}

{"ba64_prc"
	("ba_sound")
}

{"btr-40_type55"
	("sdkfz222_sound")
		("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"btr-40a_prc"
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

{"yw531 tank"
	("bt_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open1" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open1" -1.0 resume}
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
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
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

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
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

	}
}

{"type62_lt tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/pz4/start"}
		{link_sound "engine_stop"		"vehicle/engine/pz4/stop"}
		{link_sound "engine_idle"		"vehicle/engine/pz4/idle"}
		{link_sound "engine_full"		"vehicle/engine/pz4/full"}
		{link_sound "exhaust"			"vehicle/engine/pz4/exhaust"}
		{link_sound "move"				"vehicle/tracks/pz4"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on "charger_hatch_open" overload
		{ani_play "open2" 1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open2" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector"  "foresight1" x}
		("check_fire")

	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
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
	{on "charger_hatch_open" overload
		{ani_wind "open2" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open2" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector"  "foresight1" x}
		("check_fire")

	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
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
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

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
	{on "charger_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector"  "foresight1" x}
		("check_fire")

	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(into_hatch_common) pose(seat_gunner_stand))
}

{"is2_prc tank"
	("is_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector"  "foresight1" x}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_isu152_gunner2))
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
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_isu152_gunner2))
}

;/*=========== POL Vehicles BEGIN  ===========*/

{"gaz-69_pol"
	("gaz_sound")
}

{"gaz-69_dshk_pol"
	("gaz_sound")
}

{"gaz-69_b10_pol"
	("gaz_sound")
	{on "init_gun"
		{add_view "tank_canon_fire_50_57"			"backblast"	"fxshot"}
	}
	{on fire "gun" overload
		{ani_play "recoil"}
		{spawn "detector" "foresight1" x}   ;ordos_debug
		{view start "backblast"}
		{call "spawn_shell"}
	}
	{on "commander_hatch_open" overload
		{ani_play "mgun" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "mgun" -1.0 resume}
	}
}

{"gaz-69_mortar_pol"
	("gaz_sound")
	{on "commander_hatch_open" overload
		{ani_play "open_topright" +1.0 resume}
		{ani_play "mgun" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_topright" -1.0 resume}
		{ani_play "mgun" -1.0 resume}
	}
}
{"lublin-51 car"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"lublin-51_ammo car"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"lublin-51_eng car"
	("studebaker_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"ural375_pol car"
	("zis5_sound")
}

{"ural375_pol_ammo car"
	("zis5_sound")
}

{"btr-40_pol"
	("sdkfz222_sound")
}

{"btr-152_pol"
	("zis5_sound")
}

{"btr-152u_pol"
	("zis5_sound")
}

{"topas tank"
	("t70_sound")
	{on "commander_hatch_open" overload
		{ani_play "open_topright" +1.0 resume}
		{ani_play "mgun" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_topright" -1.0 resume}
		{ani_play "mgun" -1.0 resume}
	}
}

{"topas_2ap tank"
	("t70_sound")
}

{"brdm-1_pol"
	("sdkfz222_sound")
}

{"btr-40a_pol"
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

{"brdm-2_pol"
	("ba_sound")
}

{"2p27_pol" ;// can't figure out how to reset turret to 0
	("sdkfz222_sound")

	{on spawn
		{tags add "weapon_up"}
	}

	{on fire "gun"
		{tags add "gun_fired!!!!"}
		{spawn "detector_big" "foresight1" x}
		;{spawn "detector" "rocket2" x}
		;{spawn "detector" "rocket3" x}
	}

	{on "reload"
		{tags add "reloading"}
		{ani_play "weapon_down"}
		{tags add "weapon_down"}
		{tags remove "weapon_up"}
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
						{tags add "weapon_up"}
						{delay 1
							{ik_enable "turret" 1}
						}
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
	("update_rack_event" event(fire))
	("update_rack_event" event(ik begin "gun_rot_h"))
	("update_rack_event" event(ik begin "gun_rot_v"))
}

{"9p110_pol" ;// can't figure out how to reset turret to 0
	("sdkfz222_sound")

	{on spawn
		{tags add "weapon_up"}
	}

	{on "reload"
		{tags add "reloading"}
		;{weapon_work "gun" 0}
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
						{delay 1
							;{weapon_work "gun" 1}
						}
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
	("update_rack_event" event(fire))
	("update_rack_event" event(ik begin "turret"))
	("update_rack_event" event(ik begin "foresight1"))

	{on fire "gun"
		{tags add "gun_fired!!!!"}
		{spawn "detector_big" "foresight1" x}
	}
}

{"t-34-85_pol tank"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/t34/start"}
		{link_sound "engine_stop"		"vehicle/engine/t34/stop"}
		{link_sound "engine_idle"		"vehicle/engine/t34/idle"}
		{link_sound "engine_full"		"vehicle/engine/t34/full"}
		{link_sound "exhaust"			"vehicle/engine/t34/exhaust"}
		{link_sound "move"				"vehicle/tracks/t34"}
		{link_sound "rotate_turret"		"vehicle/turret/electric/electric_light"}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"pt-76_pol tank"
	("t70_sound")
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"pt-76p tank"
	("t70_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open1" +1.0 resume}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "gunner_hatch_close" overload
		{ani_play "open1" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}

}

{"asu-85_pol tank"
	("t70_sound")
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"asu-85_late_pol tank"
	("t70_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"asu-85_para_pol tank"
	("t70_sound")
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"t-54a_pol tank"
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
		{ani_play "open" 1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"t-54am_pol tank"
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
		{ani_play "open" 1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"t-54am1_pol tank"
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
		{ani_play "open" 1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"t-54am2_pol tank"
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
		{ani_play "open" 1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"t-54u_pol tank"
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
		{ani_play "open" 1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"t-55_pol tank"
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
		{ani_play "open" 1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"t-55a_pol tank"
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
		{ani_play "open" 1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}


;/*=========== Hotmod Specifics End  ===========*/
