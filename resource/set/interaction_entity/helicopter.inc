{"helicopter"
	{on spawn
		{link_sound	"fall" "vehicle/airborne/fw_deep"}
		{link_sound "false_start"		"vehicle/airborne/false_start"}
		
		{add_view "smoke_black" "smoke_engine" 		"FXfire1"}
		{add_view "smoke_black" "smoke_rotor" 		"FXfire2"}
		{add_view "smoke_black" "smoke_rotor_back" 	"FXfire3"}
		{call "init_gun"}
		{call "altitude_checker"}
	}
	
	{on "add_movement_sound"
		{link_sound "fly"			"vehicle/airborne/helicopter/helicopter_work2" 	}
		{link_sound "engine_start"	"vehicle/airborne/helicopter/helicopter_start" 	}
		{link_sound "engine_work"	"vehicle/airborne/helicopter/helicopter_work2" 	}
		{link_sound "engine_stop"	"vehicle/airborne/helicopter/helicopter_stop" 	}
	}
	
	{on engine on overload
		{if chassis "helicopter"
			{call "engine_on"}
		else chassis "airborne"
			{call "engine_on"}
		}
	}
	
	{on "engine_idle" overload ;// settings for engine if it should be on immediately after spawning
		{set "engine_on" 1}
		{set "engine1_start" 1}
		{ani_play "engine_work" loop} ;//causes issues with start animation transisiton, but needed for spawns w/ Engine on
		{play_sound "engine_work" 1}
		{if "engine_on"
			{chassis_work 1}
		else
			{chassis_work 0}
		}
	}
	
	{on engine off overload
		{call "engine_off"}	
	}
	
	{on bullet_hit
		{if stuff "ammo grenade fg"
			{bullet_detonate}
;			{component break}
		}
	}
	
	{on "insertion"			;// UI button to toggle insertion
		{chassis_work 0}
		{able select 0}
		{ani_play "lower" callback}
	}
	
	{on animation_end "lower"
		{delay 0.5
			{with_linked_entity "attach"
				{unlink}
				{impulse up 0.1 com}
			}
			{delay 0.2
				{with_linked_entity "seat01"
					{unlink}
				}
				{with_linked_entity "seat02"
					{unlink}
				}
				{delay 0.4
					{with_linked_entity "seat03"
						{unlink}
					}
					{with_linked_entity "seat04"
						{unlink}
					}
					{ani_play "pause" callback}
				}
			}
		}			
	}
	
	{on animation_end "pause"
		{ani_play "bug_out" callback}
	}
	
	{on animation_end "bug_out"
		{delete}	
	}
	
	{on "altitude_checker" 
		{if altitude 15                         
			{tags remove "wheel_pullout"}                  
			{if not tagged "wheel_pullback"                        
					{tags add "wheel_pullback"}                     
						{delay 1                         
							{ani_play "wheels" 1} 
							{delay 0.5 "altitude_checker"                             
								{call "altitude_checker"}                      
							}                                          
						}                  
				else  
				{delay 0.5 "altitude_checker"  ;//already wheeled,do nothing                           
					{call "altitude_checker"}                       
				}                        
			}                                                
		else                        
			{tags remove "wheel_pullback"}                 
			{if not tagged "wheel_pullout"                     
				{tags add "wheel_pullout"}                     
				{delay 1                         
					{ani_play "wheels" -1}
					{delay 0.5 "altitude_checker"                                 
						{call "altitude_checker"}                             
					}                          
				}                    
			else  
				{delay 0.5 "altitude_checker"                            
					{call "altitude_checker"}                     
				}                  
			}            
		}              
	}
	
	{on "engine_toggle" overload			;// UI button to toggle engine on/off
		{if operatable
			{if not work "engine"
				{if "engine_on"
					{call "engine_switch"}
				else
					{play_sound "false_start"}
				}
			else
				{call "engine_switch"}
			}
		}
	}
	
	{on "engine_switch"
		{if "toggle_delay"
			{play_sound "false_start"}
		else "engine_on"
			{call "engine_off"}
		else
			{call "engine_on"}
		}
	}
	
	{on accelerate on overload} ;// stops extra interaction calls from vehicle.inc

	{on accelerate off overload} ;// stops extra interaction calls from vehicle.inc
	
	{on "engine_on" overload
		{if not "engine_on"
			{if altitude 0.5   ;// check altitude
				{chassis_work 1}
				{set "engine_on" 1}
				{tags remove "engine_turned_off"}
				{ani_play "engine_work" loop}
				{ani_play "bob" loop}
				{play_sound "engine_work" 1}
			else
				{chassis_work 0}
				{set "engine_on" 1}
				{ani_stop "engine_stop"}
				{stop_sound "engine_stop"}
				{play_sound "engine_start"}
				{ani_play "engine_start" callback}
				{set "toggle_delay" 1}
				{delay 5 {set "toggle_delay" 0}}
			}
		}
	}
	
	{on "engine_off" overload				;// engine toggled off
		{if altitude 0.5		;// if altitude above 0.5, do nothing
			{tags add "altitude"}
		else                    ;// if altitude lower than 0.5, turn engine off as normal
			{if "engine_on"
				{if operatable
					;{tags add "engine_turned_off"}
				}
				{tags remove "altitude"}
				{set "engine_on" 0}
				{ani_stop "engine_work"}
				{ani_stop "bob"}
				{ani_play "engine_stop"}
				{stop_sound "engine_work"}
				{stop_sound "fly"}
				{play_sound "engine_stop"}
				{set "toggle_delay" 1}			;// stops accidental double click of UI button
				{delay 5 {set "toggle_delay" 0}}
				{delay 0.6
					{chassis_work 0}
				}
			}	
		}
	}
	
	{on "engine_stop"            ;//immediately kill engine, such as on death
		{kill_delay "engine_stopped"}
		{if "engine_on"
			{set "engine_on" 0}
			{ani_stop "engine_start"}
			{ani_stop "engine_work"}
			{ani_stop "bob"}
			{ani_play "engine_stop"}
			{stop_sound "engine_start"}
			{stop_sound "uh1h_engine_idle"}
			{stop_sound "uh1h_engine_full"}
			{stop_sound "engine_work"}
			{stop_sound "fly"}
		}
	}
	
	{on move on overload                  ;//vehicle moves forward or reverse
		{if not chassis "helicopter"
			{if not "landing"
				{if "engine_on"
				}
			}
		else
			{call "water_check"}		;//checks water level if spawning in air over water
		}
	}
	
	{on animation_end "engine_start"
		{chassis_work 1}
		{ani_play "engine_work" loop}
		{ani_play "bob" loop}
		{play_sound "engine_work" 1}
	}

	
	{on "update_moveable" overload
		{tags add "update_move"}
			{delay 5 {tags remove "update_move"}}
		{if chassis "airborne"
			{call "check_work_mover"}
		}
		{inherited}
	}
	
	{on "check_work_mover" overload
		{if broken "engine"
				{movement_limit slow}
				{tags add "move_slow"}
			else broken "rotor"
				{movement_limit slow}
				{tags add "move_slow"}
			else broken "rotor_b"
				{movement_limit slow}
				{tags add "move_slow"}
			else broken "body"
				{movement_limit normal}
				{tags add "move_norma1"}
			else
				{movement_limit fast}
				{tags add "move_fast"}
			}
	}

	{on operatable off
		{if not tagged "engine_turned_off" ;// stops engine off sequence from occuring if engine is already turned off.
			{if not chassis "helicopter"
				{call "engine_off"}
			}
		}
	}
	
	{on pierce sync
		{vehicle_health_damage_pierce}
	}
	
	{on blast sync								
		{vehicle_health_damage_blast}
	}
	
	{on "fall"
		{if not "fall"
			{set "fall" 1}
			{impulse up 0.1 com}
			{explosive 1}
			{play_sound "fall"}
			{call "fall_fx"}
		}
	}
	
	{on "fall_fx"
		{delay 2
			{add_view "smoke_aero_dead_big" "fire" "body"}
			{view start "fire"}
			{delay 10
				{view stop "fire"}
			}
			{burn volume "body" fx "smoke_aero_big" time 10 fake}
			{burn volume "engine" fx "smoke_aero_big" time 10 fake}
			{delay 10.1
				{burn volume "body" fx "smoke_black" time 40 10 fake}
			}
		}
	}
	
	{on ground_hit sync
		{call "collide"}
		{delay 0.5
			{call "explosion"}
		}
	}
	
	{on "break_glass"
		{volume disable bullet contact}
		{spawn "glass_hit2" volume x}
		{delay_ex 0.1 uniq
			{bone cut}
		}
	}

	{on break overload
		{if not tagged "destroyed"
			{call "update_moveable"}
		}
		{if component "body"
			{spawn "car_die_particle"}
		else component "engine"
			{tags add "engine_brake"}
			{spawn "car_die_particle"}
			{view start "smoke2"}
			{call "fall"}
			{delay 40 {view stop "smoke2"}}
			{view start "steam"}
			{delay 2  {view stop "steam"}}
		else component "glass"
			{call "break_glass"}
		}
	}

	{on contact overload sync
		{if not impregnable
			{if effector "small"				;do not crash on small entities
				{if effector "no_slices"		;but crash on x/xx entities
					{call "collide"}
				}
			else effector "construction"
				{if not effector "straw"
					{call "collide"}
				}
			else effector "tree"
				;{if not effector "bush"			;do not crash on bush-like trees with prop "bush"
				;	{call "collide"}
				;}
			else velocity 50					;if moving fast itself, crash on every vehicle
				{if effector "vehicle"
					{call "collide"}
				}
			else effector "armored_car"			;crash on fast moving armored cars
				{if effector_velocity 20
					{call "collide"}
				}
			else effector "car"					;do not crash on cars
				;do nothing
			else effector "tank"				;crash on moving tanks
				{if effector_velocity 10
					{call "collide"}
				}
			else effector "vehicle"				;(failsafe) crash on fast moving vehicles
				{if effector_velocity 20
					{call "collide"}
				}
			}
		}
	}
	
	{on "collide"
		{if  volume "body"
			{call "explosion"}
		else volume "part"
			{call "tear_part"}
		}
	}
	
	{on "tear_part"
		{spawn "spheredust_big_short"}
		{component destroy}
		{components "engine" destroy}
		{volume disable contact contact_ground}
		{chassis_work 0}
		{tear "piece_big_airborne_wing" bone from_volume
			{impulse up 2 1 dir 2 1}
		}
		{impulse up 0.1 com}
	}

	(define "burn_part"
		{on "burn_%0_start"
			{add_view "smoke_aero_big"		"fire%0" "fx_fire%0_1"}
			{add_view "smoke_aero_big"		"fire%0" "fx_fire%0_2"}
			{add_view "smoke_aero_big"		"fire%0" "fx_fire%0_3"}
			{add_view "smoke_aero_small"	"fire%0" "fx_smoke%0_1"}
			{add_view "smoke_aero_small"	"fire%0" "fx_smoke%0_2"}
			{add_view "smoke_aero_small"	"fire%0" "fx_smoke%0_3"}
			{view start "fire%0"}
		}
		{on "burn_%0_stop"
			{view stop "fire%0"}
		}
	)
	("burn_part" args 1)
	("burn_part" args 2)
	("burn_part" args 3)
	("burn_part" args 4)

	{on "die"
		{chassis_work 0}
		{drop_orders}
		{components destroy}
		{call "engine_stop"}
		{stop_sound "fall"}
		{stop_sound "engine_stop"}
		{explosive 0}
		{burn stop}
		{bone hide "engine_work"}
	}
	
	{on "leave_unit" overload
		{if work "body"
			{if not tagged "abandoned"
				{reset_manual_control}
				
				{if not tagged "emit_label"
					{damage_report "body" "component/leave_unit"}
					{tags add "emit_label"}
					{crew_emit}
				}
				
				{delay 2 {crew_emit}}
				{delay 8 {if operatable {tags remove "emit_label"}}}
				{delay 15
					{tags add "abandoned"}
					{set "broken" 1}
					{able select 0}
					{able repaired 0}
					{explosive 1}
					{stat_notify leave}
					{player -1}
					{kick_entity_manager}
					{explosive 1}
					{damage_report "body" "component/empty"}
					{damage_report "rotor" "component/empty"}
					{damage_report "gun" "component/empty"}
					{damage_report "engine" "component/empty"}
					
					{delay 3 1
						{explosive 0}
						{tags add "destroyed"}
						{call "explosion"}
					}
				}
			}
		}
	}
	
	{on "_explosion" overload
		{kill_crew}
		{with_linked_entity "attach"
			{unlink}
			{impulse up 0.1 com}
		}
		{ani_stop "lower"}
		{ani_stop "pause"}
		{ani_stop "bug_out"}
		{able select 0}
		{clear_inventory}
		{call "die"}
		{add_view "aero_die" "fire" "body"}
		{add_view "aero_die_fire" "fire" "body"}
		{view start "fire"}
		{spawn "aero_die_particle"}
		{start_sound "crush/big/airborne"}
		{tags add "destroyed"}
		{tags remove "air"}

		{impulse up 0.1 com}
		{delay 0.1
			(define "cut_part"
				{if rand %1
					{tear "piece_big_airborne_wing" bone %0
						{impulse up 2 1 dir 2 1}
					}
				}
			)
			("cut_part" args "propeller"	0.5)
			("cut_part" args "propeller1"	0.5)
			("cut_part" args "propeller2"	0.5)
			("cut_part" args "propeller3"	0.5)
			("cut_part" args "propeller4"	0.5)
			("cut_part" args "propeller_b"	0.3)
			("cut_part" args "propeller_b1"	0.3)
			("cut_part" args "propeller_b2"	0.3)
			("cut_part" args "propeller_b3"	0.3)
		}
		{blastwave c4 7 r0 5 r1 8}
	}
	
	{on "air_attack"
		{start_sound "vehicle/airborne/air_attack" ambient}
	}
}

{"helicopter no_explosion"
	{on ground_hit sync
		{call "die"}
		{impulse up 0.1 com}
	}
	{on "_explosion" overload
		{call "die"}
		{impulse up 0.1 com}
		("cut_part" args "propeller"	0.5)
		("cut_part" args "propeller1"	0.5)
		("cut_part" args "propeller2"	0.5)
		("cut_part" args "propeller3"	0.5)
		("cut_part" args "propeller4"	0.5)
		("cut_part" args "propeller_b"	0.3)
		("cut_part" args "propeller_b1"	0.3)
		("cut_part" args "propeller_b2"	0.3)
		("cut_part" args "propeller_b3"	0.3)
	}
	{on "fall_fx" overload
	}
}

{"air_part"
	{on spawn
		{delay 0.1
			{volumes enable contact contact_ground}
		}
		{view stop ""}
		{add_view "smoke_black" "smoke" "root"}
		{view start "smoke"}
		{delay 180 30
			{view stop "smoke"}
		}
	}
	{on ground_hit
		{if min_speed 5
			{spawn "spheredust_big_short"}
		}
	}
}

(define "helicopter2_sound"
	{on "add_movement_sound"
		{link_sound "fly"			"vehicle/airborne/helicopter/helicopter_work1" 	}
		{link_sound "engine_start"	"vehicle/airborne/helicopter/helicopter_start" 	}
		{link_sound "engine_work"	"vehicle/airborne/helicopter/helicopter_work1" 	}
		{link_sound "engine_stop"	"vehicle/airborne/helicopter/helicopter_stop" 	}
	}
)

{"uh-1b"				

}

{"ah-1g"	
	{on spawn
		{add_view "flash_gun_hmg_m2hb"			"grenflash"	"foresight1"}
	}
	{on fire "mgun"
		{ani_play "recoil_mini" loop resume}
		{delay 2
			{ani_stop "recoil_mini"}
		}
	}
	{on fire "mgun2"
		{view start "grenflash"}
		{ani_play "recoil_grenade"}
		{delay 0.2
			{view pause "grenflash"}
		}
	}
}

{"uh-1b_m22"

	{ on spawn
		;("link_damage_sound_rus")
		;{call "altitude_checker"}
		;{view start "smoke_engine1"}
		;{view start "smoke_engine2"}

	}

	{on fire "gun"

		{spawn "detector_extra_big" "foresight1" x}
		;{spawn "detector_extra_big" "shooter02" x}

	}

}

{"uh-1b_maxwell"

	{ on spawn
		;("link_damage_sound_rus")
		;{call "altitude_checker"}
		;{view start "smoke_engine1"}
		;{view start "smoke_engine2"}

	}

	{on fire "gun"

		{spawn "detector_extra_big" "foresight1" x}
		;{spawn "detector_extra_big" "shooter02" x}

	}

}

{"mil_mi4_heavy"

	{ on spawn
		;("link_damage_sound_rus")
		;{call "altitude_checker"}
		;{view start "smoke_engine1"}
		;{view start "smoke_engine2"}

	}

	{on fire "gun"

		{spawn "detector_extra_big" "foresight3" x}
		;{spawn "detector_extra_big" "shooter02" x}

	}

}

{"alouette_ii_mg_frg"
	{on "init_gun" overload
		{add_view "flash_gun_big"			"flashbarrel00"	"shooter00"}
		{add_view "flash_gun_big"			"flashbarrel01"	"shooter01"}
		{add_view "flash_gun_big"			"flashbarrel02"	"shooter02"}
		{add_view "flash_gun_big"			"flashbarrel03"	"shooter03"}
		{add_view "shell_mgun"			"shell"			"FXshell1"}
		{add_view "shell_mgun"			"shell"			"FXshell2"}
		{add_view "shell_mgun"			"shell"			"FXshell3"}
		{add_view "shell_mgun"			"shell"			"FXshell4"}
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