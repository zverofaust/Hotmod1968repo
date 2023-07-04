{"airborne_helicopter"
	{on spawn overload
		{link_sound "fall"				"vehicle/airborne/fw_deep"}
		{link_sound "bounds"			"world/plane/bounds_warning"}
		{link_sound "false_start"		"vehicle/airborne/false_start"}
		{link_sound "bkg_plane"			"vehicle/airborne/bkgheli/"}
		{link_sound "bkg_gun"			"weapon/shot/bkg/auto/"}
		{link_sound "bkg_mgun"			"weapon/shot/bkg/gun/mg/"}
		
		{link_sound "engine_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "fly"					"vehicle/airborne/uh1h_move"}	
		{link_sound "engine_work"			"vehicle/airborne/uh1h_move"}	
		{link_sound "engine_accelerate"		"vehicle/airborne/uh1h_move"}
		{link_sound "engine_decelerate"		"vehicle/airborne/uh1h_move"}
		{link_sound "engine_stop"			"vehicle/airborne/uh1h_stop"}
		{link_sound "attack"				"vehicle/airborne/uh1h_move"}
		
		{add_view	"exhaust_dark_big"	"engine_exhaust"		"engine"	}

		{add_view "aircraft_damage_big"		"heavy_body_smoke"	"body"}
		{add_view "aircraft_damage_medium"	"medium_body_smoke"	"body"}
		{add_view "aircraft_damage_small"	"light_body_smoke"	"body"}
		
		{add_view "aircraft_damage_big"		"heavy_engine_smoke"	"engine"}
		{add_view "aircraft_damage_medium"	"medium_engine_smoke"	"engine"}
		{add_view "aircraft_damage_small"	"light_engine_smoke"	"engine"}
		
		{add_view "aircraft_damage_big"		"heavy_rotor_smoke"		"rotor"}
		{add_view "aircraft_damage_medium"	"medium_rotor_smoke"	"rotor"}
		{add_view "aircraft_damage_small"	"light_rotor_smoke"		"rotor"}
		
		{add_view "aircraft_damage_big"		"heavy_rotorb_smoke"	"rotor_b"}
		{add_view "aircraft_damage_medium"	"medium_rotorb_smoke"	"rotor_b"}
		{add_view "aircraft_damage_small"	"light_rotorb_smoke"	"rotor_b"}
		
		{add_view "spheredust_heli" 		"ground_dust" 			"basis"}
		
		{call "init_gun"}

		;(mod "mp" {call "engine_on"})
	}

	{##on "wheels_fx" overload
		{view start "ground_dust"}
		{delay 4
			{view stop "ground_dust"}
		}
	}
	
	{on "add_trace" overload ;// adds fx during engine toggle on and landing
		{if not rain
		}
		{add_view	"spheredust_heli"	"dust_heli"			"basis"}
	}

	{on "stop_trace" overload					;// stops wheel & all engine fx on takeoff.
		{view stop "dust_heli"}
	}

	(define "play_trace"					;// starts fx wheel and engine dust fx after landing
		{view start "dust_heli"}
	)

	(define "prop_blast"		;// starts fx engine dust fx after engine starts
		{view start "dust_heli"}
	)

	(define "stop_smoke_fx"
		{view pause "heavy_%0_smoke"}
		{view pause "medium_%0_smoke"}
		{view pause "light_%0_smoke"}
	)

	{on "takeoff"
		{if not dead
			{if operatable
				{call "stop_trace"}
				{if "landing"
					{set "landing" 0}
					{kill_delay "engine_idle"}
					{play_sound "engine_accelerate"}
					{stop_sound "engine_idle"}
					{stop_sound "engine_decelerate"}
					{call "engine_full"}
				}
				{delay 3.5 {call "gear_disable"}}
			}
		}
	}

	{on "engine_full" overload
		{delay 2.5 "engine_full"			;// delay for accelerate sound
			{if not destroyed "engine"
				{play_sound "engine_full" 1}
				{play_sound "bkg_plane" 1}
			}
		}
	}

	{on "takeoff_load" 	overload	 			;// plane spawns in chassis "airborne"
		{ani_wind "wheels" end}			;// retracts wheels
		{call "gear_disable"}
	}

	{on "gear_disable" overload					;// disables landing gear from being damaged when retracted in plane.
		{volumes "gear" disable blast bullet}
	}

	{on "landing" overload
		{set "landing" 1}
		{ani_play "wheels" -0.2}
		{kill_delay "engine_full"}
		{play_sound "gear_work"}
		{stop_sound "bkg_plane"}
		{stop_sound "engine_accelerate"}
		{stop_sound "engine_full"}
		{play_sound "engine_decelerate"}
		{call "engine_idle_delay"}
		{volumes "gear" enable blast bullet}	;// enables landing gear to be damaged when deployed
	}

	{on "engine_idle_delay"	overload			;// delay for decelerate sound
		{delay 2 "engine_idle"
			{if not destroyed "engine"
				{play_sound "engine_idle" 1}
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

	{on "engine_switch" overload
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

	{on move on overload ;// vehicle moves forward or reverse
		{ani_play "accel_tilt"}
		{if not chassis "airborne"
			{if not "landing"
				{kill_delay "engine_decel"}
				{stop_sound "engine_idle"}
				{stop_sound "engine_decelerate"}
				{if "engine_on"
					{play_sound "engine_accelerate"}
					{call "engine_accel"}
				}
			}
		else
			{call "water_check"}		;//checks water level if spawning in air over water
		}
	}

	{on "engine_accel" overload	 					;//delay for accelerate sound
		{delay 3.8 "engine_accel"
			{if not destroyed "engine"
				{play_sound "engine_full" 1}
				{play_sound "bkg_plane" 1}
			}
			{stop_sound "engine_accelerate"}
		}
	}

	{on move off overload ;// vehicle not moving forward or reverse
		{ani_play "decel_tilt"}
		{if not "landing"
			{kill_delay "engine_accel"}
			{stop_sound "bkg_plane"}
			{stop_sound "engine_full"}
			{stop_sound "engine_accelerate"}
			{if "engine_on"
				{play_sound "engine_decelerate"}
				{call "engine_decel"}
			}
		else
			{set "landing" 0}
		}
	}

	{on "engine_decel" overload					;//delay for decelerate sound
		{delay 3.5 "engine_decel"
			{if "engine_on"
				{if not destroyed "engine"
					{play_sound "engine_idle" 1}
				}
				{stop_sound "engine_decelerate"}
			}
		}
	}

	{on engine on overload			;// any vehicle moves forward, reverse or preforming neutral turn
		{if chassis "airborne"
			{call "engine_on"}		;// turns on engine, for airborne chassis planes when given move order
		else
			{if "landing"
				{call "add_trace"}
				("stop_smoke_fx" args body)
				("stop_smoke_fx" args engine)
				("stop_smoke_fx" args rotor)
				("stop_smoke_fx" args rotorb)
			}
			{if "engine_start"
				("play_trace")
			}
		}
	}

	{on engine off overload} ;// stops extra interaction calls from vehicle.inc

	{on animation_end "engine_start" overload
		{ani_play "engine_work" loop}
		;//{if "engine_on" {stop_sound "engine_stop"}} ;// checks to make sure engine has not been toggled off
		{if not chassis "airborne"
			{call "engine_start"}
		else chassis "airborne"
			{stop_sound "engine_start"}
			{play_sound "bkg_plane" 1}
		}
	}

	{on "engine_start" overload						;// delay for start sound
		{delay 4.5
			{stop_sound "engine_start"}
		}
	}

	{on "engine_on" overload				;// settings for engine when switched on
		{if not "engine_on"
			{if not chassis "airborne"
				{chassis_work 0}
				{set "engine_on" 1}
				{call "engine_start_sequence"}
				{set "toggle_delay" 1}			;// stops accidental double click of UI button
				{delay 5 {set "toggle_delay" 0}}
			else
				{chassis_work 1}
				{set "engine_on" 1}
				{tags remove "splash"}
				{tags remove "engine_turned_off"}
				{ani_play "engine_work" loop}
				{play_sound "engine_full" 1}
				{play_sound "bkg_plane" 1}
			}
		}
	}

	{on "engine_startup_timer" overload				;// delay for switching from startup to idle state
		(define "engine_startup_timer"
			{delay 5.9 "engine_startup"
				{call "engine_idle"}
			}
		)
	}

	{on "engine_start_sequence" overload				;// start sequence for 1st engine
		{if work "engine"
			{if "engine_on"
				{call "add_trace"}
				{tags remove "engine_turned_off"}
				{tags remove "splash"}
				{ani_play "engine_start" 0.85 callback}
				{view start "engine_exhaust"}
				{play_sound "engine_start"}
				{set "engine_start" 1}
				{delay 1 "engine_startup"
					{view pause "engine_exhaust"}
					{delay 1.5 "engine_startup"
						("prop_blast" number(1))
					}
				}
				("engine_startup_timer" number(1))		;// allows for overload/modified time for each aircrafts complete startup sequence before switching to idle state
			}
		}
	}

	{on "engine_off" overload				;// engine toggled off
		{kill_delay "engine_startup"}		;// stops engine startup sequence
		{if not chassis "airborne"			;// engines can only be toggled when on ground not airborne
			{if "engine_on"
				{if operatable
					;{tags add "engine_turned_off"}
				}
				{set "engine_on" 0}
				{call "engine_stop_sequence"}
				{set "toggle_delay" 1}			;// stops accidental double click of UI button
				{delay 5 {set "toggle_delay" 0}}
				{delay 0.6
					{chassis_work 0}
				}
			}
		}
	}

	{on "engine_stop_sequence" overload				;// engine 1 shutdown sequence
		{stop_sound "engine_accelerate"}
		{stop_sound "engine_decelerate"}
		{stop_sound "engine_start"}
		{stop_sound "bkg_plane"}
		{stop_sound "engine_full"}
		{stop_sound "engine_idle"}
		{kill_delay "engine_accel"}
		{kill_delay "engine_decel"}
		{kill_delay "engine_idle"}
		{if "engine_start"
			{play_sound "engine_stop"}
		}
		{delay 0.6
			{kill_delay "engine_startup"}
			("stop_trace_engine" number(1))
			{ani_stop "engine_start"}
			{ani_stop "engine_work"}
			{if "engine_start"
				{ani_play "engine_stop"}
			}
			{set "engine_start" 0}
		}
	}

	{on "engine_idle" overload ;// settings for engine if it should be on immediately after spawning
		{if work "engine"
			{set "engine_on" 1}
			{set "engine_start" 1}
			{ani_play "engine_work" loop} ;//causes issues with start animation transisiton, but needed for spawns w/ Engine on
			{if not chassis "airborne"
				{play_sound "engine_idle" 1}
				{call "add_trace"}
			else
				{play_sound "engine_full" 1}
				{play_sound "bkg_plane" 1}
			}
		}
		{if "engine_on"
			{chassis_work 1}
		else
			{chassis_work 0}
		}
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
		else broken "body"
			{movement_limit normal}
			{tags add "move_norm1"}
		else
			{movement_limit fast}
			{tags add "move_fast"}
		}
	}

	{on operatable off overload
		{if not tagged "engine_turned_off" ;// stops engine off sequence from occuring if engine is already turned off.
			{if not chassis "airborne"
				{call "engine_off"}
			}
		}
	}

	{on "check_speed" overload} ;// disabled calls to check speed for dust fx. Planes only have 1 fx

	{on "propeller_stop" overload		;// called on exlosion and ground_hit
		{bone hide "engine_work"}
		{bone hide "rotor_work"}
	}

	{on "engine_not_run" overload		;// instantly stops engines. Called on collosiions, ground_hit, crash and sink.
		{if "engine_on"
			{set "engine_on" 0}
			{ani_stop "engine_start"}
			{ani_stop "engine_work"}
			{stop_sound "bkg_plane"}
			{stop_sound "engine_idle"}
			{stop_sound "engine_full"}
			{stop_sound "engine_accelerate"}
			{stop_sound "engine_decelerate"}
			{kill_delay "engine_accel"}
			{kill_delay "engine_decel"}
			{if not tagged "destroyed"
				{ani_play "engine_stop"}
			}
			{delay 0.01
				{ani_stop "engine_stop"}
			}
		}
	}

	{on "engine stop view" overload
		;{call "engine_off"}
	}

	;/*=========== Plane Damage Begin  ===========*/

	{on pierce sync
		{vehicle_health_damage_pierce}
	}

	{on break overload							;// component breaks
		{if not tagged "destroyed"
			{call "update_moveable"}
		}
		{if chassis "airborne"
			{if component "body"
				{view start "light_body_smoke"}

			else component "engine"
				{view start "light_engine_smoke"}

			else component "rotor"
				{view start "light_rotor_smoke"}
			else component "rotor_b"
				{view start "light_rotorb_smoke"}
			else component "wheel"
				{if "engine_on"
					{chassis_work 1} ;// fixes wheel break's "up impluse" from disabling movement on ground
				}
			}
		else
		}
	}

	{on destroy overload				;// component destroyed
		{if not tagged "destroyed"
			{if chassis "airborne"
				{if component "body"
					{call "stat_break"}
					{start_sound "detonation/grenade/"}
					{start_sound "detonation/grenade/bkg/"}
					{if chassis "airborne"
						{call "fall"}
						{view start "heavy_body_smoke"}
					else
						{call "emit_crew"}						;// generic crew emit from vehicle.inc
					}
				else component "engine"
					{view start "heavy_engine_smoke"}
					{delay 1 {view pause "heavy_engine_smoke"}}
					{if chassis "airborne"
						{call "fall"}
					else
						{call "engine_off"}
					}
				else component "rotor"
					{view start "heavy_rotor_smoke"}
					{delay 1 {view pause "heavy_rotor_smoke"}}
					{if chassis "airborne"
						{call "fall"}
					else
						{call "engine_off"}
					}
				
				else component "rotor_b"
					{view start "heavy_rotorb_smoke"}
					{delay 1 {view pause "heavy_rotorb_smoke"}}
					{if chassis "airborne"
						{call "fall"}
					else
						{call "engine_off"}
					}
					{call "tear_part"}
					;// TODO: Add spinning out of control
				else component "wheel"
					{if "engine_on"
						{chassis_work 1} ;// fixes wheel break's "up impluse" from disabling movement on ground
					}
				}
			}
			{if component "engine"
				{if not tagged "grounded"
					{spawn "aero_die_particle"}
				}
			}
			{if component "part"
				{call "tear_part"}
			}
		}
	}

	{on "fall" overload
		{if chassis "airborne"
			{if not "fall"
				{call "stat_break"}
				{stop_sound "bounds"}
				{call "fall_fx"}
				{set "fall" 1}
				;{crew_emit}
				;{reset_manual_control}
				{drop_orders}
				(mod "mp"
					{impulse up 0.01 forward 0.001}
					{explosive 1}
					{call "fall_sound"}
				)
				(mod not "mp"
					{delay 1
						{call "bail_out"}
					}
					{delay 4 3
						{impulse up 0.01 forward 0.001}
						{explosive 1}
						{call "fall_sound"}
					}
				)
			}
		}
	}

	{on "fall_sound" overload
		{if chassis "airborne"
			{if not tagged "shotdown"
				;{play_sound "fall"}
				{tags add "shotdown"}
			}
		}
	}

	{on "fall_fx" overload
		{if not under_water
			{delay 0.01
				{add_view "smoke_aero_dead_big" "fire" "body"}
				{view start "fire"}
				;{play_sound "flame" 1}
				{delay 30
					{view stop "fire"}
				}
				{burn volume "body" fx "smoke_aero_big" time 30 fake}
				{burn volume "engine" fx "smoke_aero_big" time 30 fake}
				{delay 30.1
					{burn volume "body" fx "smoke_black" time 40 25 fake}
				}
				{delay 35
					;{stop_sound "flame"}
				}
			}
		}
	}

	{on ground_hit overload sync
		{if chassis "airborne"
			{if not tagged "grounded"					;// stops from being called multiple times on crash with ground.
				{tags add "grounded"}
				{call "collide"}
				{start_sound "detonation/explosion_fiery/"}
				{start_sound "detonation/50kg_bomb/bkg/"}
				{delay 0.01
					{call "crash_explosion"}
					{call "engine_not_run"}
					{stop_sound "fall"}
					{kill_crew}
				}
			}
		else
			{if volume "part"
				{call "tear_part"}
			}
			{if volume "rotor"
				{set "engine_start" 0}
				{components "rotor" destroy}
				{call "engine_broken"}
				{tags add "ground_hit_rotor"}
			}
		}
	}

	{on "engine_broken" overload
		{components "engine" break}
		{ani_stop "engine_start"}
		{ani_stop "engine_work"}
		{ani_play "engine_stop"}
		{kill_delay "engine_accel"}
		{kill_delay "engine_decel"}
		{delay 0.01
			{ani_stop "engine_stop"}
		}
	}

	{on contact overload sync
		{if not impregnable
			{if chassis "airborne"
				{if effector "airborne"
					{call "collide"}
					{tags add "mid_air_collision"}
				else effector "vehicle"
					{call "collide"}
				else effector "construction"
					{call "collide"}
				else effector "tree"
					{call "collide"}
				else effector "fence"
					{if volume "part"
						{call "tear_part"}
					}
				}
			else not chassis "airborne"
				{if volume "rotor"
					{if "engine_on"
						{components "engine" break}
					}
					{components "rotor" break}
				else volume "rotor_b"
					{if "engine_on"
						{components "engine" break}
					}
					{components "rotor_b" break}
				}
				{if volume "part"
					{if velocity 40
						{##if effector "vehicle" ;// can't remember why specifics were added
							{call "tear_part"}
						else effector "construction"
							{call "tear_part"}
						else effector "tree"
							{call "tear_part"}
						else effector "fence"
							{call "tear_part"}
						}
						{call "tear_part"}
					}
				}
				{delay 0.5
					{if "engine_on"
						{if work "body"
							{chassis_work 1}
						}
					}
				}
			}
		}
	}

	{on "crash_explosion" overload
		{if not tagged "destroyed"
			{if chassis "airborne"
				{call "_explosion"}
			}
		}
	}

	{on "collide" overload
		{if volume "body"
			{call "crash_explosion"}
			{call "engine_not_run"}
			{kill_crew}
		else volume	"rotor"
			{call "crash_explosion"}
			{call "engine_not_run"}
			{kill_crew}
		else volume "part"
			{if min_speed 30
				{call "tear_part"}
			}
		}
		{delay 20 {if under_water {delete}}}
	}
 
	{on "tear_part" overload
		{if not tagged "destroyed"
			;{spawn "spheredust_big_short"}
			{if rand 0.3
				{spawn "aero_die_particle"}
			}
			{if tagged "mid_air_collision"
				{call "bail_out"}
				{tags remove "mid_air_collision"}
			}
			{volume disable contact contact_ground}
			{if volume "wingl1"
				{call "crash"}
				{delay_ex 0
					{tear "piece_big_airborne_wing" bone "wingl2"
						{impulse up 2 1 forward 5 dir 2 1}
					}
				}
			else volume "wingr1"
				{call "crash"}
				{delay_ex 0
					{tear "piece_big_airborne_wing" bone "wingr2"
						{impulse up 2 1 forward 5 dir 2 1}
					}
				}
			else
				{delay_ex 0
					{tear "piece_big_airborne_wing" bone from_volume
						{impulse up 2 1 forward 5 dir 2 1}
					}
				}
			}
			{if volume "gear_r"
				{call "wrecked_gear"}
				{call "crash"}
			else volume "gear_l"
				{call "wrecked_gear"}
				{call "crash"}
			else volume "wingl2"
				{call "crash"}
			else volume "wingr2"
				{call "crash"}
			}
		}
	}

	{on "wrecked_gear" overload
		{if not chassis "airborne"
			{impulse up 0.01 forward 0.01}
		}
	}

	{on "crash" overload
		{if not tagged "destroyed"
			{call "stat_break"}
			{if chassis "airborne"
				{stop_sound "bounds"}
				{impulse up 0.01 forward 0.01}
				{call "fall_sound"}
			else not chassis "airborne"
				{able select 0}
				{able repaired 0}
				{reset_manual_control}
				{delay 2
					{chassis_work 0}
					{crew_emit}
				}
			}
			{delay 0.5
				{tags add "shotdown"}
			}
		}
	}

	{on "check_burn_emit" overload
		{call "burn_emit"}
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

	{on "die" overload
		{chassis_work 0}
		{drop_orders}
		{explosive 0}
		{components destroy}
		{stop_sound "engine_stop"}
		{burn stop}
	}

	(define "cut_part"
		{if rand %1
			{tear "piece_big_airborne_wing" bone %0
				{impulse up 2 1 dir 2 1}
			}
		}
	)

	{on "_explosion" overload
		{tags add "destroyed"}
		{tags remove "air"}
		{able "exploded" 1}
		{stop_sound "fall"}
		{stop_sound "bounds"}
		{kill_crew}
		{able select 0}
		{able repaired 0}
		{clear_inventory}
		{call "die"}
		{call "propeller_stop"}
		("stop_smoke_fx" args body)
		("stop_smoke_fx" args engine)
		("stop_smoke_fx" args rotor)
		("stop_smoke_fx" args rotorb)
		{if not under_water
			;{add_view "aero_die" "fire" "body"}
			{add_view "aero_die_fire" "fire" "body"}
			{add_view "aero_fire" "fire2" "body"}
			{view start "fire"}
			{view start "fire2"}
			{spawn "aero_die_particle"}
			{spawn "aero_die_particle"}
			{spawn "aero_die_particle"}
		}
		{if not terrain_fx "bridge"
			{if not terrain_fx "bridge_wood"
				{if not under_water
					{call "spawn_shellhole"}
				}
			}
		}


		{impulse up 0.1 com}
		{delay 0.1
			;("cut_part" args "wingr1"		0)
			;("cut_part" args "wingl1"		0)
			("cut_part" args "wingr2"		1)
			("cut_part" args "wingl2"		1)
			("cut_part" args "body_back"	1)
			("cut_part" args "rudder"		0.5)
			("cut_part" args "rudder1"		0.5)
			("cut_part" args "rudder2"		0.5)
			("cut_part" args "elevator1"	0.5)
			("cut_part" args "elevator2"	0.5)
			("cut_part" args "wheelback"	0.5)
			("cut_part" args "gear_l"		0.5)
			("cut_part" args "gear_r"		0.5)
			("cut_part" args "propeller"	0.5)
			("cut_part" args "propeller1"	0.5)
			("cut_part" args "propeller2"	0.5)
			("cut_part" args "propeller3"	0.5)
			("cut_part" args "propeller4"	0.5)
			{volumes "body" enable obstacle}
			{area rebuild}
		}
		{blastwave c4 3 r0 5 r1 15}
	}

	{on "spawn_shellhole" overload	 		;// called on "_explosion"
		{spawn "shellhole_dead_tank2" "basis" random_orientation}
	}

	{on "area_disable" overload
		{area disable}
	}

	{on "area_enable" overload
		{area enable}
	}

	{on "air_attack" overload }

	{on "splash_fx" overload
		{if not tagged "splash"
			{if chassis "airborne"
				{spawn "ex_size3_water"}
			else not chassis "airborne"
			}
		}
		{tags add "splash"}
	}

	{on "bail_out" overload
		{delay 0.4 0.15
			(mod not "mp" {crew_emit})
		}
	}

	{on "check_water_level" overload
		{if water_level 5
			{if tagged "splash" {delete}}
			{able "sinking" 1}

		else water_level -0.75
			{able "sinking" 1}
			{reset_manual_control}
			{call "engine_not_run"}
			{call "splash_fx"}
			{delay 1
				{view stop "fire"}
				{stop_sound "flame"}
				{crew_emit}
			}
		else
			{able "sinking" 0}
		}
	}
}

;/*=========== Airborne End  ===========*/

;/*=========== Other Plane Props Begin  ===========*/

{"airborne no_explosion"
	{on contact
;		{components "wingleft" destroy}
;		{components "wingright" destroy}
	}
	{on ground_hit sync
		{call "die"}
		{impulse up 0.1 com}
		{call "propeller_stop"}
	}
	{on "_explosion" overload
		{call "die"}
		{call "propeller_stop"}
		{impulse up 0.1 com}
		("cut_part" args "wingr2"		0.5)
		("cut_part" args "wingl2"		0.5)
	}
	{on "fall_fx" overload}
}

{"air_part"
	{on spawn
		{delay 0.1
			{volumes enable contact contact_ground}
		}
		{view stop ""}
		{add_view "smoke_black" "smoke" "root"}
		;{view start "smoke"}
		{delay 30 5
			{view stop "smoke"}
		}
		{delay 20 {if under_water {delete}}}
	}
	{on ground_hit
		{if min_speed 5
			;{spawn "spheredust_big_short"}
		}
	}
}

;/*=========== Other Plane Props End  ===========*/

