;/*=========== Hotmod Specifics Begin  ===========*/

;/*==========NBC script========*/

{"vehicle nbc"
	{on spawn	
		{tags add "nbc_protection"}
	}
}

{"vehicle"
	{on spawn
		{add_view   "recoilless_shot"			"flashbarrelsmall"	"fxshot"}
	}

	{on contact
		{if effector "chemicalzone"
			{if not tagged "nbc_protection"
				{tags add "chemically_castrated"}
				{able "burning" 1}
				{crew_emit}
				{drop_orders}
				{reset_manual_control}
				{delay 5
					{able "burning" 0}
				}
			else tagged "nbc_protection"
				{tags add "i_am_protected"}
				{crew_enable group "passenger" 0}
				{if not tagged "emergency_disembark"
					{call "emergency_disembark"}
				}
				{delay 5
					{tags remove "i_am_protected"}
				}
			}
			
		}
		{if effector "radiationzone"
			{if not tagged "nbc_protection"
				{tags add "irradiated"}
			}
		}
		{if effector "killzone_mininuke"
			{if not tagged "nbc_protection"
				{able "burning" 1}
				{crew_emit}
				{drop_orders}
				{reset_manual_control}
			else tagged "nbc_protection"
				{able "burning" 1}
				{delay 5
					{able "burning" 0}
				}
			}
		}
	}
	
	
	{on "emergency_disembark"
		{tags add "emergency_disembark"}
		{delay 0.5
			{with_linked_entity "seat01"
				{unlink}
			}
			{delay 0.5
				{with_linked_entity "seat02"
					{unlink}
				}
				{delay 0.5
					{with_linked_entity "seat03"
						{unlink}
					}
					{delay 0.5
						{with_linked_entity "seat04"
							{unlink}
						}
						{delay 0.5
							{with_linked_entity "seat05"
								{unlink}
							}
							{delay 0.5
								{with_linked_entity "seat06"
									{unlink}
								}
								{delay 0.5
									{with_linked_entity "seat07"
										{unlink}
									}
									{delay 0.5
										{with_linked_entity "seat08"
											{unlink}
										}
										{delay 0.5
											{with_linked_entity "seat09"
												{unlink}
											}
											{delay 0.5
												{with_linked_entity "seat10"
													{unlink}
												}
												{delay 0.5
													{with_linked_entity "seat11"
														{unlink}
													}
													{delay 0.5
														{with_linked_entity "seat12"
															{unlink}
														}
														{delay 0.5
															{with_linked_entity "seat13"
																{unlink}
															}
															{delay 0.5
																{with_linked_entity "seat14"
																	{unlink}
																}
																{delay 0.5
																	{with_linked_entity "seat15"
																		{unlink}
																	}
																	{delay 0.5
																		{with_linked_entity "seat16"
																			{unlink}
																		}
																		{delay 0.5
																			{with_linked_entity "seat17"
																				{unlink}
																			}
																			{delay 0.5
																				{with_linked_entity "seat18"
																					{unlink}
																				}
																				{delay 0.5
																					{with_linked_entity "seat19"
																						{unlink}
																					}
																					{delay 0.5
																						{with_linked_entity "seat20"
																							{unlink}
																						}
																						{tags remove "emergency_disembark"}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}										
			}
		}
	}
}


;/*==========anti fire script========*/

{"tank antifire"

    {on "wes81_antifire"

	{tags add "antifire_work"}
	{damage_report "engine" "component/antifire"}
	{tags remove "burned"}
	{tags remove "no_scavenge"}
	{view stop "burn_fire"}
	{stop_sound "flame"}
	{view stop "burn_fire_smoke"}
	{set "burn_fire" 0}
	{able "burning" 0}


	{delay 20

			{tags remove "antifire_work"}
			{burn stop_retry}
	}


    }


}

;/*==========BMD series shell eject script====*/
{"shell"
	{on "spawn_shell" overload
		{tags add "gun_fired"}
		{call "spawn_shell_delay_auto"}
		(define "shell_eject_delay_auto"
			{delay_ex %0
				{spawn "shell_cannon_auto" "fx_invers1" x scale 0.014
					{impulse forward 2.5 0.25 up 0.4 0.2 fx 0.7 0.2 cx -1 com}
				}
				{spawn "shell_cannon_auto""fx_invers2" x scale 0.014
					{impulse forward 2.5 0.25 up 0.4 0.2 fx 0.7 0.2 cx -1 com}
				}
				{spawn "shell_cannon_auto""fx_invers3" x scale 0.01
					{impulse forward 2.5 0.25 up 0.4 0.2 fx 0.7 0.2 cx -1 com}
				}
			}
		)
	}
	{on "spawn_shell_delay_auto" overload
		("shell_eject_delay_auto" args 0)
	}
	{on "reload" overload
		{call "magazine_delay"}
	}
	(define "magazine"
		{on "magazine_delay" %override
			{delay %cut
				{tear "piece_small_steel" bone "magazine" copy
					%impulse
				}
				{delay 0
					{view hide "magazine"}
					{delay %show
						{view show "magazine"}
					}
				}
			}
		}
	)
	("magazine" cut(0) show(1.8) override() impulse({impulse up -0.01 com}))
}
;/*==========BMD series adjustable suspension script====*/
{"with_adjustable_suspension"

    {on "suspension_down"
	{ani_play "suspension_down" 1.0}
	{set "animated" 1}
    }

    {on "suspension_up"
		{ani_play "suspension_up" 1.0}
		{set "animated" 0}

    }

}

{"tank with_adjustable_suspension"
	{on "hm68_switch_suspension"
		{if tagged "suspension_active"
			{tags remove "suspension_active"}
			{tags add "suspension_down"}
			{call "suspension_down"}
			{damage_report "body" "component/suspension_active"}

		else
			{tags add "suspension_active"}
			{tags remove "suspension_down"}
			{call "suspension_up"}
			{damage_report "body" "component/suspension_deactive"}
		}
	}

}







;/*==========AMMO truck explosion script====*/
{"heavy_supply"
	{on "_explosion"

		{spawn "hm_explosion_5000kg" "basis" x}

	}
	{on "blast_body"
		{call "explosion"}

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

{"tank with_open_zpu"
	{on "cwsh_switch_hatch"
		{if tagged "cwsh_active"
			{tags remove "cwsh_active"}
			{tags add "cwsh_passive"}
			{call "cwsh_disable_zpu"}
			{call "update_cw_panorama"}
			{damage_report "body" "component/zpu_disabled"}
		else tagged "cwsh_passive"
			{tags remove "cwsh_active"}
			{tags remove "cwsh_passive"}
			{call "cwsh_enable_zpu"}
			{call "update_cw_panorama"}
			{damage_report "body" "component/zpu_careful"}
		else
			{tags add "cwsh_active"}
			{if  tagged "cwsh_tempdisable_zpu"
				{call "cwsh_enable_zpu"}
				{tags remove "cwsh_tempdisable_zpu"}
			}
			{call "update_cw_panorama"}
			{damage_report "body" "component/zpu_enabled"}
		}
	}
	(define "check_attack_on_zpu"
		{if not tagged "cwsh_active"
			{if not tagged "cwsh_passive"
				{if not effector "airborne"
					{kill_delay "cwsh_disable_zpu"}
					{if not tagged "cwsh_tempdisable_zpu"
						{call "cwsh_disable_zpu"}
						{tags add "cwsh_tempdisable_zpu"}
					}
					{delay 15 "cwsh_disable_zpu"
						{if  tagged "cwsh_tempdisable_zpu"
							{tags remove "cwsh_tempdisable_zpu"}
							{call "cwsh_enable_zpu"}
							{tags remove "cw_panorama_work"}
							{call "update_cw_panorama"}
						}
					}
				}
			}
		}
	)
	{on crew in {call "update_zpu"}}
	{on crew out {call "update_zpu"}}

	{on bullet_hit
		("check_attack_on_zpu")
	}
	{on blast_hit
		{if not component "gun"
			{if not stuff "turret_dir_detector"
				("check_attack_on_zpu")
			}
		}
	}
}

{"car with_open_zpu"
	{on spawn
		{call "update_weaponry"}
	}
	{on operatable on {call "update_zpu"}}
	{on operatable off {call "update_zpu"}}
	{on crew in {call "update_zpu"}}
	{on crew out {call "update_zpu"}}
	{on "cwsh_switch_hatch"
		{if tagged "cwsh_passive"
			{tags add "cwsh_careful"}
			{tags remove "cwsh_passive"}
			{call "cwsh_enable_zpu"}
			{damage_report "body" "component/zpu_careful"}
		else tagged "cwsh_careful"
			{tags remove "cwsh_careful"}
			{if  tagged "cwsh_tempdisable_zpu"
				{call "cwsh_enable_zpu"}
				{tags remove "cwsh_tempdisable_zpu"}
			}
			{damage_report "body" "component/zpu_enabled"}
		else
			{tags remove "cwsh_careful"}
			{tags add "cwsh_passive"}
			{call "cwsh_disable_zpu"}
			{damage_report "body" "component/zpu_disabled"}
		}
	}
	(define "check_attack_on_zpu"
		{if tagged "cwsh_careful"
			{if not effector "airborne"
				{kill_delay "cwsh_disable_zpu"}
				{if not tagged "cwsh_tempdisable_zpu"
					{call "cwsh_disable_zpu"}
					{tags add "cwsh_tempdisable_zpu"}
				}
					{delay 15 "cwsh_disable_zpu"
						{if  tagged "cwsh_tempdisable_zpu"
							{tags remove "cwsh_tempdisable_zpu"}
							{call "cwsh_enable_zpu"}
						}
					}
			}
		}
	)
	{on bullet_hit
		("check_attack_on_zpu")
	}
	{on blast_hit
		{if not component "gun"
			("check_attack_on_zpu")
		}
	}
}
;/*==========MGAA hatch script============*/
;/*=========== side fire script===========*/
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
							else {call "cw_panorama_instant_off"}}
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
			    {if  tagged "cwsh_zpu_off"

			    else {call "%0_hatch_open"}
			    }
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
		{call "update_weaponry"}
	}
	(define "update_hatch_event"
		{on %event
			("update_hatch" wind(false))
			{call "update_zpu"}
			{tags remove "cw_panorama_work"}
			{call "update_cw_panorama"}
			{call "update_weaponry"}
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
	   {if component "turret_mg"
		{if not tagged "exploded"
			{call "kill_commander"}
			{call "update_mg_turret"}
			{damage_report "turret" "component/turret_broken"}
		}
		}
	}
	{on "update_mg_turret"
		{if work "turret_mg"
			{if work "body"
				{ik_enable "turret_mg" 1}
				{weapon_work "mgun"  1}
			 else
				{ik_enable "turret_mg" 0}
				{weapon_work "mgun"  0}

				{delay 0.1
				   {call "cw_panorama_off"}
				}
			}
		else
			{ik_enable "turret_mg" 0}
			{weapon_work "mgun"  0}

			{delay 0.1
				   {call "cw_panorama_off"}
				}
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

;/*=========== CIVILIAN Vehicles  ===========*/


{"rand_tex"
	{on spawn
		{if rand 0.2 {delay 0.1 {tex_mod "r1"}}}
		{if rand 0.2 {delay 0.1 {tex_mod "r2"}}}
		{if rand 0.2 {delay 0.1 {tex_mod "r3"}}}
		{if rand 0.2 {delay 0.1 {tex_mod "r4"}}}
		{if rand 0.2 {delay 0.1 {tex_mod "r5"}}}
		{if rand 0.2 {delay 0.1 {tex_mod "r6"}}}
		{if rand 0.2 {delay 0.1 {tex_mod "r7"}}}
		{if rand 0.2 {delay 0.1 {tex_mod "r8"}}}
	}
}


;/*=========== SOVIET Vehicles  ===========*/

{"pt-76 tank"
	("t70_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DT")
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"pt-76b tank"
	("t70_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("DT")
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"btr-50p tank"
	("t70_sound")
}

{"btr-50pvmf tank"
	("t70_sound")
	("triplezpu_params"
		gunner(gunner2) zpu_mgun(mgun1) anim(hm_hatch_cover_sit) pose(seat_isu152_gunner2)
		secgunner(gunner3) seczpu_mgun(mgun2) secanim(hm_hatch_cover_sit) secpose(seat_isu152_gunner2)
		triplegunner(gunner4) tripzpu_mgun(gun) tripleanim(hm_hatch_cover_sit) trippose(seat_isu152_gunner2)
	)
}

{"btr-50_zis2 tank"
	("t70_sound")
	{on "add_weapon_sound" overload
		("Cannon_50to57mm")
		("Cannon_Breech")
	}
}

{"btr-50_zis3 tank"
	("t70_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("Cannon_Breech")
	}
}

{"btr-50_d44 tank"
	("t70_sound")
	{on "add_weapon_sound" overload
		("Cannon_Breech")
	}
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
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("DT")
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"asu-85_late tank"
	("t70_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("DT")
	}
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
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("DT")
	}
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
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("DT")
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
	{on "add_weapon_sound" overload
		("Cannon_85to100mm_HV")
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"zsu-23-4 tank"
	("t70_sound")

	{on "gunner_hatch_open"
		{if not tagged "sight_open"
			{ani_play "sight_cover" +1.0 resume}
			{tags add "sight_open"}
		}
	}

	{on "gunner_hatch_close"
		{ani_play "sight_cover" -1.0 resume}
		{tags remove "sight_open"}
	}

	{on "commander_hatch_open"
		{if not tagged "radar_up"
			{ani_play "radar_up" +1.0 resume}
			{tags add "radar_up"}
			{delay 1
				{ani_play "radar_spin" loop resume}
			}
		else tagged "radar_up"
			{delay 1
				{ani_play "radar_spin" loop resume}
			}
		}
	}

	{on "commander_hatch_close"

		{ani_play "radar_up" -1.0 resume}
		{delay 3
			{ani_stop "radar_spin"}
		}
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

{"zsu-23-4b tank"
	("t70_sound")

	{on "gunner_hatch_open"
		{if not tagged "sight_open"
			{ani_play "sight_cover" +1.0 resume}
			{tags add "sight_open"}
		}
	}

	{on "gunner_hatch_close"
		{ani_play "sight_cover" -1.0 resume}
		{tags remove "sight_open"}
	}

	{on "commander_hatch_open"
		{if not tagged "radar_up"
			{ani_play "radar_up" +1.0 resume}
			{tags add "radar_up"}
			{delay 1
				{ani_play "radar_spin" loop resume}
			}
		else tagged "radar_up"
			{delay 1
				{ani_play "radar_spin" loop resume}
			}
		}
	}

	{on "commander_hatch_close"

		{ani_play "radar_up" -1.0 resume}
		{delay 3
			{ani_stop "radar_spin"}
		}
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

{"zsu-23-4m tank"
	("t70_sound")

	{on "gunner_hatch_open"
		{if not tagged "sight_open"
			{ani_play "sight_cover" +1.0 resume}
			{tags add "sight_open"}
		}
	}

	{on "gunner_hatch_close"
		{ani_play "sight_cover" -1.0 resume}
		{tags remove "sight_open"}
	}

	{on "commander_hatch_open"
		{if not tagged "radar_up"
			{ani_play "radar_up" +1.0 resume}
			{tags add "radar_up"}
			{delay 1
				{ani_play "radar_spin" loop resume}
			}
		else tagged "radar_up"
			{delay 1
				{ani_play "radar_spin" loop resume}
			}
		}
	}

	{on "commander_hatch_close"

		{ani_play "radar_up" -1.0 resume}
		{delay 3
			{ani_stop "radar_spin"}
		}
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
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit) pose(seat_isu152_gunner2))
}

{"btr-152u"
	("zis5_sound")
}

{"btr-60p"
	("sdkfz234_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit) pose(seat_isu152_gunner2))
}

{"btr-60pvmf"
	("sdkfz234_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit) pose(seat_isu152_gunner2))
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
	{on "add_weapon_sound" overload
		("Cannon_50to57mm_HV")
		("Cannon_Breech")
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"asu57_para"
	("s60_sound")
	{on "add_weapon_sound" overload
		("Cannon_50to57mm_HV")
		("Cannon_Breech")
	}
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
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("DT")
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
	{on "add_weapon_sound" overload
		("Cannon_85to100mm_HV")
		("DT")
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

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))


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
	{on "add_weapon_sound" overload
		("Cannon_85to100mm_HV")
		("DT")
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
	{on "add_weapon_sound" overload
		("Cannon_85to100mm_HV")
		("DT")
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
	{on "add_weapon_sound" overload
		("Cannon_85to100mm_HV")
		("DT")
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
	{on "add_weapon_sound" overload
		("Cannon_85to100mm_HV")
		("DT")
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
	{on "add_weapon_sound" overload
		("Cannon_85to100mm_HV")
		("DT")
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

{"is2-m tank"
	("is_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("DT")
		("DShK38")
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

{"is-3m tank"
	("is_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("DT")
		("DShK38")
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
		{spawn "detector" "foresight1" x}
	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
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
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("DShK38")
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
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("DShK38")
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
	{on "add_weapon_sound" overload
		("Cannon_50to57mm_HV")
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
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("DT")
		("DShK38")
	}
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
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("DT")
	}
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
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("DT")
	}
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
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("DT")
	}
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

{"t-64_obj432 tank"
	("kv_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("DT")
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
		{delay 1.2
			{ani_play "eject"}
		}
	}
}

{"t-72_ural tank"
	("kv_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("DT")
	}
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
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_sit_nooffset) pose(seat_gunner_stand))
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
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
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
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("DShK38")
	}
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
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("DShK38")
	}
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

{"t-10m_1965 tank"
	("is_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("DShK38")
	}
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
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("DShK38")
	}
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
	{on "add_weapon_sound" overload
		("DT")
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
	{on fire "gun2"
		{spawn "detector" "foresight6" x}
	}
}

{"bmd-1"
	("bt_sound")
	{on "add_weapon_sound" overload
		("DT")
	}
	{on spawn
		{tags add "suspension_active"}
	}
	{on "gunner2_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "proj_probe" "foresight1" x}
	}
	{on fire "gun2"
		{spawn "detector" "foresight6" x}
	}
}

{"bmd-2"
	("bt_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
		("DT")
	}
	{on "gunner2_hatch_open" overload
		{ani_play "open" 1.0 resume}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	{on fire "gun"
		("check_fire_bmd")
	}
	{on fire "gun2"
		{spawn "detector" "foresight6" x}
	}

	("zpu_params" gunner(gunner2) zpu_mgun(gun2) anim(hm_hatch_cover) pose(seat_commander_hatch))


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
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit_nooffset) pose(pose_dodge_sg2))
}

{"btr-40a"
	("sdkfz222_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
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
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit_nooffset) pose(pose_dodge_sg2))
}

{"brdm-1u"
	("sdkfz222_sound")
	{on "gunner2_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit_nooffset) pose(pose_dodge_sg2))
}

{"brdm-2"
	("ba_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
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
	("willys_mb_sound")
}

{"m151_m2"
	("willys_mb_sound")
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
	("willys_mb_sound")
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
}
{"m151_prc77"
	("willys_mb_sound")
}

{"m35"
	("cckw_sound")
}

{"m35_ammo"
	("cckw_sound")
}

{"m35_guntruck"
	("cckw_sound")
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
			{ani_play "fire"}
		else ("fire_barrel" args 01)
		else ("fire_barrel" args 02)
		else ("fire_barrel" args 03)
		}
		;{ani_play "fire"}
		{call "spawn_shell"}
	}

	{on "reload"
		{if name "mgun1"
			{tags add "reloading"}
			;{ik_enable "sight_pole" 0}
			{talk "reload"}
			{delay 1
				{tear "piece_small_steel" bone "magazine01" copy
					{impulse up -0.01 com}
					{bone hide "magazine01"}
				}
				{tear "piece_small_steel" bone "magazine02" copy
					{impulse up -0.01 com}
					{bone hide "magazine02"}
				}
				{tear "piece_small_steel" bone "magazine03" copy
					{impulse up -0.01 com}
					{bone hide "magazine03"}
				}
				{tear "piece_small_steel" bone "magazine04" copy
					{impulse up -0.01 com}
					{bone hide "magazine04"}
				}
				{delay 10
					{tags remove "reloading"}
					{talk "reloaded"}
					{bone show "magazine01"}
					{bone show "magazine02"}
					{bone show "magazine03"}
					{bone show "magazine04"}
				}
			}
		}
	}
}


{"dodge_m37"
	("wc51_sound")
}

{"dodge_m37_ammo"
	("wc51_sound")
}

{"dodge_m37_engi"
	("wc51_sound")
}

{"m706"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/m8_greyhound/start"}
		{link_sound "engine_stop"		"vehicle/engine/m8_greyhound/stop"}
		{link_sound "engine_idle"		"vehicle/engine/m8_greyhound/idle"}
		{link_sound "engine_full"		"vehicle/engine/m8_greyhound/full"}
		{link_sound "exhaust"			"vehicle/engine/m8_greyhound/exhaust"}
		{link_sound "move"				"vehicle/wheels/armored_car"}
		{link_sound "rotate_turret"		"vehicle/turret/handcrank/handcrank_light"}
	}
	{on "add_weapon_sound" overload
		("M1919A4")
	}
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"}
	}
	{on fire "mgun" overload
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

{"m16_gmc tank"
	("m3_halftrack_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")

	{on "add_weapon_sound" overload
		("M2HB_M45_Mount")
	}

	("multi_barrel_loop" flash(flash_gun_big) smoke(ejectsmoke_big) shell(shell_hmgun) weapon(mgun) head(0.070))

	{on "reload"
		{ani_play "reload_mgun" 1.0}
	}
	{on "reload_delay" overload
		("reload_time" args 30)	;// weapon reload time
	}
}

{"m41"
	("m24_chaffee_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("M2HB")
		("M1919A4")
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

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"m41_early"
	("m24_chaffee_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("M2HB")
		("M1919A4")
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
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
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
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("M1919A4")
		("M2HB")
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
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"m551_acav"
	("pz3_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("M1919A4")
		("M2HB")
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
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"m551_airlift"
	("pz3_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("M1919A4")
		("M2HB")
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
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"m26_pershing tank"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
		("M2HB")
	}
	{on spawn
		{link_sound "move"				"vehicle/tracks/M4_Sherman/Steel/"}
	}
	{on "gunner2_hatch_open" overload
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "mgun_aa" -1.0 resume}
	}
}

{"m46_patton tank"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
		("M2HB")
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
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_m4a276w_commander))
}

{"m47_patton tank"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
		("M2HB")
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
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(pose_mgun_pz6))
}

{"m48"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
		("M2HB")
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
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m48a1"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
		("M2HB")
	}
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
}

{"m48a3"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
		("M2HB")
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

{"m48a3_acav"
	("m26_pershing_sound")
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"}
	}
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("M1919A4")
		("M2HB")
	}
	{on fire "mgun" overload
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
	{on "commander_hatch_open" overload
		{ani_play "open" +1.0 resume}
		{ani_play "aamg" +1.0 resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
		{ani_play "aamg" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector"  "foresight1" x}
	}

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m103"
	("m26_pershing_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("M1919A4")
		("M2HB")
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
	("m26_pershing_sound")
		{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("M1919A4")
		("M2HB")
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
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("M1919A4")
		("M2HB")
	}
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
}

{"m60a1"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm")
		("M1919A4")
		("M2HB")
	}
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
}

{"m60a1e2"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("M1919A4")
		("M2HB")
	}
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
}

{"m728"
	("m26_pershing_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("M1919A4")
		("M2HB")
	}
	{on spawn
		{link_sound "dozer" "vehicle/misc/dozer"}
	}
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
}

{"m39_apc tank"
	("m4_sherman_sound")
	{on "add_weapon_sound" overload
		("M2HB")
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_sit_nooffset) pose(seat_gunner_stand))
}

{"m39_eng tank"
	("m4_sherman_sound")
	{on "add_weapon_sound" overload
		("M2HB")
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m39_ammo tank"
	("m4_sherman_sound")
	{on "add_weapon_sound" overload
		("M2HB")
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m114 tank"
	("m3_stuart_sound")
	{on "add_weapon_sound" overload
		("M2HB")
	}
	{on "commander_hatch_open" overload
		{ani_play "open" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on "gunner4_hatch_open" overload
		{ani_wind "open2" end}
	}
	{on "gunner4_hatch_close" overload
		{ani_play "open2" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m114a1 tank"
	("m3_stuart_sound")
	{on "add_weapon_sound" overload
		("M2HB")
	}
	{on "gunner4_hatch_open" overload
		{ani_wind "open2" end}
	}
	{on "gunner4_hatch_close" overload
		{ani_play "open2" -1.0 resume}
	}
}

{"m114a2 tank"
	("m3_stuart_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
	{on "gunner4_hatch_open" overload
		{ani_wind "open2" end}
	}
	{on "gunner4_hatch_close" overload
		{ani_play "open2" -1.0 resume}
	}
}

{"m577"
	("m5a1_stuart_sound")
}

{"m113 tank"
	("m5a1_stuart_sound")
	{on "commander_hatch_open" overload
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"m113a1 tank"
	("m5a1_stuart_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"m163 tank"
	("m5a1_stuart_sound")
	("zpu_params" gunner(gunner) zpu_mgun(gun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"t249 tank"
	("m5a1_stuart_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s2")
	}
	{on fire "gun"
		{ani_play "recoil"}
		{call "spawn_shell"}
	}
	{on "zenite_terrain_fx" overload} ; // overwrites and stops dust fx on ground from firing main gun
	
}

{"m113_acav tank"
	("m5a1_stuart_sound")
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
		gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand)
		secgunner(gunner3) seczpu_mgun(mgun2) secanim(hm_hatch_cover_sit_nooffset) secpose(seat_gunner_stand)
		triplegunner(gunner4) tripzpu_mgun(mgun3) tripleanim(hm_hatch_cover_sit_nooffset) trippose(seat_gunner_stand)
	)
}

{"m113_acav_m40 tank"
	("m5a1_stuart_sound")

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
		gunner(commander) zpu_mgun(mgun1) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand)
		secgunner(gunner3) seczpu_mgun(mgun2) secanim(hm_hatch_cover_sit_nooffset) secpose(seat_gunner_stand)
		triplegunner(gunner4) tripzpu_mgun(gun) tripleanim(hm_hatch_cover_sit_nooffset) trippose(seat_gunner_stand)
	)
}
{"m113_m40 tank"
	("m5a1_stuart_sound")

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
		gunner(commander) zpu_mgun(mgun1) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand)
		secgunner(gunner) seczpu_mgun(gun) secanim(hm_hatch_cover_sit_nooffset) secpose(seat_gunner_stand))
}
{"m125"
	("m5a1_stuart_sound")

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
		gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand)
		secgunner(gunner3) seczpu_mgun(gun) secanim(hm_hatch_cover_sit_nooffset) secpose(pose_mortar_gunner)
		triplegunner(charger) tripzpu_mgun(gun) tripleanim(hm_hatch_cover_sit_nooffset) trippose(pose_mortar_120sgrw42_commander)
	)
}

{"m106"
	("m5a1_stuart_sound")
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
		gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand)
		secgunner(gunner3) seczpu_mgun(gun) secanim(hm_hatch_cover_sit_nooffset) secpose(pose_mortar_gunner)
		triplegunner(charger) tripzpu_mgun(gun) tripleanim(hm_hatch_cover_sit_nooffset) trippose(pose_mortar_120sgrw42_commander)
	)
}

{"m106_acav"
	("m5a1_stuart_sound")
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
		gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand)
		secgunner(gunner3) seczpu_mgun(gun) secanim(hm_hatch_cover_sit_nooffset) secpose(pose_mortar_gunner)
		triplegunner(charger) tripzpu_mgun(gun) tripleanim(hm_hatch_cover_sit_nooffset) trippose(pose_mortar_120sgrw42_commander)
	)
}

{"m132_zippo"
	("m5a1_stuart_sound")
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
	("m26_pershing_sound")
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
	("m3_stuart_sound")
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
	("m3_stuart_sound")
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
	("m3_stuart_sound")
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2)
	}

	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}

}

{"m56_airlift"
	("m3_stuart_sound")
	
	{on "add_weapon_sound" overload
		("Cannon_85to100mm")
		("Cannon_Breech")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2)
	}
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
}

{"m56_para"
	("m3_stuart_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2)
	}
	{on fire "gun"

		{spawn "detector"  "foresight1" x}

	}
}

{"m110"
	("m5a1_stuart_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("M2HB")
	}
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 5)
	}
}

{"m109"
	("m5a1_stuart_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("M2HB")
	}
	{on "commander_hatch_open" overload
		{ani_play "open"}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m109_acav"
	("m5a1_stuart_sound")
	{on "add_weapon_sound" overload
		("Cannon_150to210mm")
		("M2HB")
	}
	{on "commander_hatch_open" overload
		{ani_play "open"}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m108"
	("m5a1_stuart_sound")
	{on "add_weapon_sound" overload
		("Cannon_105to130mm_LV")
		("M2HB")
	}
	{on "commander_hatch_open" overload
		{ani_play "open"}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m4a3e8 tank"
	("m4a3_sherman_sound")
	{on "add_weapon_sound" overload
		("Cannon_75to76mm")
		("M2HB")
		("M1919A4")
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

{"man630 car"
	("opel_maultier_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"lars_1 car"
	("opel_maultier_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	
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
	
	{on fire "gun"
		("check_fire_lars")
	}
	
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"m16_frg tank"
	("m3_halftrack_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")

	{on "add_weapon_sound" overload
		("M2HB_M45_Mount")
	}

	("multi_barrel_loop" flash(flash_gun_big) smoke(ejectsmoke_big) shell(shell_hmgun) weapon(mgun) head(0.070))

	{on "reload"
		{ani_play "reload_mgun" 1.0}
	}
	{on "reload_delay" overload
		("reload_time" args 30)	;// weapon reload time
	}
}

{"m39g_apc tank"
	("m4_sherman_sound")
}

{"m39g_eng tank"
	("m4_sherman_sound")
}

{"m39g_ammo tank"
	("m4_sherman_sound")
}

{"m113g tank"
	("m5a1_stuart_sound")
	{on "commander_hatch_open" overload
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"m113g_early tank"
	("m5a1_stuart_sound")
	{on "commander_hatch_open" overload
		{ani_play "open_turret" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_turret" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
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
	("doublezpu_params" gunner(gunner2) zpu_mgun(gun1) anim(hm_hatch_cover_sit_nooffset) pose(seat_gunner_stand)
			    secgunner(charger) seczpu_mgun(gun1) secanim(hm_hatch_cover_sit_nooffset) secpose(seat_gunner_stand))
}

{"spz_513"
	("pz2_sound")

	{on "commander_hatch_open" overload
		{ani_play "open_back" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_back" -1.0 resume}
	}

	{on "gunner3_hatch_open" overload
		{ani_play "open_back" resume}
	}

	{on "gunner3_hatch_close" overload
		{ani_play "open_back" -1.0 resume}
	}

	{on "charger_hatch_open" overload
		{if crew_in_place "gunner3"
			{ani_play "open_back" resume}
		else
			{ani_play "open_back" resume}
		}
	}

	{on "charger_hatch_close" overload
		{if crew_in_place "gunner3"
			;nothing
		else
			{ani_play "open_back" -1.0 resume}
		}
	}

	("triplezpu_params"
		gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand)
		secgunner(gunner3) seczpu_mgun(gun) secanim(hm_hatch_cover_sit_nooffset) secpose(pose_mortar_gunner)
		triplegunner(charger) tripzpu_mgun(gun) tripleanim(hm_hatch_cover_sit_nooffset) trippose(pose_mortar_120sgrw42_commander)
	)
}

{"spz_523"
	("pz2_sound")

	{on "commander_hatch_open" overload
		{ani_play "open_back" resume}
	}
	{on "commander_hatch_close" overload
		{ani_play "open_back" -1.0 resume}
	}

	{on "gunner3_hatch_open" overload
		{ani_play "open_back" resume}
	}

	{on "gunner3_hatch_close" overload
		{ani_play "open_back" -1.0 resume}
	}

	{on "charger_hatch_open" overload
		{if crew_in_place "gunner3"
			{ani_play "open_back" resume}
		else
			{ani_play "open_back" resume}
		}
	}

	{on "charger_hatch_close" overload
		{if crew_in_place "gunner3"
			;nothing
		else
			{ani_play "open_back" -1.0 resume}
		}
	}

	("triplezpu_params"
		gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand)
		secgunner(gunner3) seczpu_mgun(gun) secanim(hm_hatch_cover_sit_nooffset) secpose(pose_mortar_gunner)
		triplegunner(charger) tripzpu_mgun(gun) tripleanim(hm_hatch_cover_sit_nooffset) trippose(pose_mortar_120sgrw42_commander)
	)
}

{"kanjpz"
	("pz3_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open1" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open1" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector"  "foresight1" x}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"rakjpz_2"
	("pz3_sound")

	{on "gunner_hatch_open"
		{ani_play "sight_up" resume}
		{if not tagged "reloading"
			{ani_play "weapon_up" resume}
		}
	}

	{on "gunner_hatch_close"
		{ani_play "sight_down" resume}
		{if not tagged "reloading"
			{ani_play "weapon_down" resume}
		}
	}

	{on "reload"
		{if name "gun"
			{tags add "reloading"}
			;{ik_enable "sight_pole" 0}
			{talk "reload"}
			{delay 1
				{ani_play "weapon_down"}
				{delay 9
					{tags remove "reloading"}
					{talk "reloaded"}
					{ani_play "weapon_up"}
				}
			}
		}
	}
}

{"m47frg tank"
	("m26_pershing_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}

	{on fire "gun"
		{spawn "detector"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(pose_mgun_pz6))
}

{"m47g tank"
	("m26_pershing_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(pose_mgun_pz6))
}

{"m48g"
	("m26_pershing_sound")
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

	}
}

{"m48a2c"
	("m26_pershing_sound")
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

	}
}

{"leopard_1"
	("m26_pershing_sound")
	{on "charger_hatch_open" overload
		{ani_wind "open1" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open1" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector"  "foresight1" x}
		("check_fire")

	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"leopard_1a1"
	("m26_pershing_sound")
	{on "charger_hatch_open" overload
		{ani_wind "open1" end}
	}
	{on "charger_hatch_close" overload
		{ani_play "open1" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector"  "foresight1" x}
		("check_fire")

	}
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"m110g"
	("m5a1_stuart_sound")
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 5)
	}
}

{"m109g"
	("m5a1_stuart_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"m108g"
	("m5a1_stuart_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
}

{"m41frg"
	("m24_chaffee_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"m41g"
	("m24_chaffee_sound")
	{on "commander_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "commander_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector"  "foresight1" x}

	}
	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
}

{"m42g"
	("m24_chaffee_sound")
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
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit_nooffset) pose(seat_isu152_gunner2))
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

{"gaz67b_prc"
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
		("zpu_params" gunner(gunner2) zpu_mgun(mgun) anim(hm_hatch_cover_sit_nooffset) pose(seat_gunner_stand))
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

	("zpu_params" gunner(commander) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
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
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
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
	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
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
		{spawn "detector" "foresight1" x}
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
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit_nooffset) pose(pose_dodge_sg2))
}

{"btr-152_pol"
	("zis5_sound")
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit) pose(seat_isu152_gunner2))
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
	("zpu_params" gunner(commander) zpu_mgun(mgun)  anim(hm_hatch_cover_sit_nooffset) pose(seat_gunner_stand))
}

{"topas_2ap tank"
	("t70_sound")
}

{"skot-1"
	("sdkfz234_sound")
}

{"skot-1a"
	("sdkfz234_sound")
	{on "gunner2_hatch_open" overload
		{ani_wind "open_gunner" end}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open_gunner" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}

	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit_nooffset) pose(seat_gunner_stand))
}

{"skot-2a"
	("sdkfz234_sound")
}

{"skot-2am"
	("sdkfz234_sound")
}

{"skot-2ap"
	("sdkfz234_sound")
}


{"brdm-1_pol"
	("sdkfz222_sound")
	{on "gunner2_hatch_open" overload
		{ani_wind "open" end}
	}
	{on "gunner2_hatch_close" overload
		{ani_play "open" -1.0 resume}
	}
	("zpu_params" gunner(gunner2) zpu_mgun(mgun)  anim(hm_hatch_cover_sit_nooffset) pose(pose_dodge_sg2))
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

{"pt-76b_pol tank"
	("t70_sound")
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}
}

{"pt-76p tank"
	("t70_sound")
	{on "charger_hatch_open" overload
		{ani_play "open1" +1.0 resume}
		{ani_play "mgun_aa" +1.0 resume}
	}
	{on "charger_hatch_close" overload
		{ani_play "open1" -1.0 resume}
		{ani_play "mgun_aa" -1.0 resume}
	}
	{on fire "gun"
		{spawn "detector" "foresight1" x}
	}

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))

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

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
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

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
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

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
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

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover_nooffset) pose(seat_gunner_stand))
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

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
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

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
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

	("zpu_params" gunner(charger) zpu_mgun(mgun) anim(hm_hatch_cover) pose(seat_commander_hatch))
}

{"zsu-23-4_pol tank"
	("t70_sound")

	{on "gunner_hatch_open"
		{if not tagged "sight_open"
			{ani_play "sight_cover" +1.0 resume}
			{tags add "sight_open"}
		}
	}

	{on "gunner_hatch_close"
		{ani_play "sight_cover" -1.0 resume}
		{tags remove "sight_open"}
	}

	{on "commander_hatch_open"
		{if not tagged "radar_up"
			{ani_play "radar_up" +1.0 resume}
			{tags add "radar_up"}
			{delay 1
				{ani_play "radar_spin" loop resume}
			}
		else tagged "radar_up"
			{delay 1
				{ani_play "radar_spin" loop resume}
			}
		}
	}

	{on "commander_hatch_close"

		{ani_play "radar_up" -1.0 resume}
		{delay 3
			{ani_stop "radar_spin"}
		}
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

;/*=========== Hotmod Specifics End  ===========*/
