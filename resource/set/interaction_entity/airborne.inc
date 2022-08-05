{"airborne"
	{on spawn
		{link_sound "fall"				"vehicle/airborne/fw_deep"}
		{link_sound "bounds"			"world/plane/bounds_warning"}
		{link_sound "false_start"		"vehicle/airborne/false_start"}
		{link_sound "bkg_plane"			"vehicle/airborne/bkg/"}
		{link_sound "bkg_gun"			"weapon/shot/bkg/auto/"}
		{link_sound "bkg_mgun"			"weapon/shot/bkg/gun/mg/"}

		{add_view	"exhaust_dark_big"	"engine1_exhaust"		"FXsmoke1"	}
		{add_view	"exhaust_dark_big"	"engine1_exhaust" 		"FXsmoke2"	}
		{add_view	"exhaust_dark_big"	"engine1_exhaust"		"FXsmoke3"	}
		{add_view	"exhaust_dark_big"	"engine1_exhaust" 		"FXsmoke4"	}
		{add_view	"exhaust_dark_big"	"engine1_exhaust"		"FXsmoke5"	}
		{add_view	"exhaust_dark_big"	"engine1_exhaust" 		"FXsmoke6"	}

		{add_view	"exhaust_dark_big"	"engine2_exhaust"		"FXsmoke7"	}
		{add_view	"exhaust_dark_big"	"engine2_exhaust" 		"FXsmoke8"	}
		{add_view	"exhaust_dark_big"	"engine2_exhaust"		"FXsmoke9"	}
		{add_view	"exhaust_dark_big"	"engine2_exhaust" 		"FXsmoke10"	}
		{add_view	"exhaust_dark_big"	"engine2_exhaust"		"FXsmoke11"	}
		{add_view	"exhaust_dark_big"	"engine2_exhaust" 		"FXsmoke12"	}

		{add_view "aircraft_damage_big"		"heavy_engine1_smoke"	"FXsmoke1"}
		{add_view "aircraft_damage_medium"	"medium_engine1_smoke"	"FXsmoke1"}
		{add_view "aircraft_damage_small"	"light_engine1_smoke"	"FXsmoke1"}

		{add_view "aircraft_damage_big"		"heavy_engine2_smoke"	"FXsmoke7"}
		{add_view "aircraft_damage_medium"	"medium_engine2_smoke"	"FXsmoke7"}
		{add_view "aircraft_damage_small"	"light_engine2_smoke"	"FXsmoke7"}

		{add_view "aircraft_damage_big"		"heavy_body_smoke"	"body"}
		{add_view "aircraft_damage_medium"	"medium_body_smoke"	"body"}
		{add_view "aircraft_damage_small"	"light_body_smoke"	"body"}

		{call "init_gun"}
		{call "engine_count"}

		;(mod "mp" {call "engine_on"})
	}

	{on "engine_count"
		{tags add "engine_count_1"}
	}

	{on "add_trace" ;// adds fx during engine toggle on and landing
		{if not rain
			{add_view	"dustrun_min"			"on_grass"			"FXtraceR1"}
			{add_view	"dustrun_min"			"on_grass"			"FXtraceL1"}
			{add_view	"dustrun_sand_min"		"on_sand"			"FXtraceR1"}
			{add_view	"dustrun_sand_min"		"on_sand"			"FXtraceL1"}
			{add_view	"dustrun_snow_min"		"on_snow"			"FXtraceR1"}
			{add_view	"dustrun_snow_min"		"on_snow"			"FXtraceL1"}
			{add_view	"dustrun_min"			"on_country_road"	"FXtraceR1"}
			{add_view	"dustrun_min"			"on_country_road"	"FXtraceL1"}
			{add_view	"dustrun_min"			"on_ground"			"FXtraceR1"}
			{add_view	"dustrun_min"			"on_ground"			"FXtraceL1"}
			{add_view 	"disc_dustrun_big_sand"	"dust_sand1"		"FXtracem1"}
			{add_view 	"disc_dustrun_big_snow"	"dust_snow1"		"FXtracem1"}
			{add_view 	"disc_dustrun_big"		"dust1"				"FXtracem1"}
			{add_view 	"disc_dustrun_big_sand"	"dust_sand2"		"FXtracem2"}
			{add_view 	"disc_dustrun_big_snow"	"dust_snow2"		"FXtracem2"}
			{add_view 	"disc_dustrun_big"		"dust2"				"FXtracem2"}
			{add_view 	"disc_dustrun_big_sand"	"dust_sand3"		"FXtracem3"}
			{add_view 	"disc_dustrun_big_snow"	"dust_snow3"		"FXtracem3"}
			{add_view 	"disc_dustrun_big"		"dust3"				"FXtracem3"}
			{add_view 	"disc_dustrun_big_sand"	"dust_sand4"		"FXtracem4"}
			{add_view 	"disc_dustrun_big_snow"	"dust_snow4"		"FXtracem4"}
			{add_view 	"disc_dustrun_big"		"dust4"				"FXtracem4"}
		}
		{add_view	"drops_water"			"on_water"			"FXtraceR1"}
		{add_view	"drops_water"			"on_water"			"FXtraceL1"}
		{add_view	"tank_grit_small"		"on_mud"			"FXtraceR1"}
		{add_view	"tank_grit_small"		"on_mud"			"FXtraceL1"}
		{add_view	"drops_water_moto"		"on_puddle"			"FXtraceR1"}
		{add_view	"drops_water_moto"		"on_puddle"			"FXtraceL1"}
		{add_view	"tank_grit_small_w"		"on_puddle"			"FXtraceR1"}
		{add_view	"tank_grit_small_w"		"on_puddle"			"FXtraceL1"}
	}
	
	(define "fx_base"
		{view %action "%fx%number"}
	)
	(define "fx_dust"
		("fx_base" action(%action) fx(dust) number(1))
		("fx_base" action(%action) fx(dust) number(2))
		("fx_base" action(%action) fx(dust) number(3))
		("fx_base" action(%action) fx(dust) number(4))
	)
	(define "fx_sand"
		("fx_base" action(%action) fx(dust_sand) number(1))
		("fx_base" action(%action) fx(dust_sand) number(2))
		("fx_base" action(%action) fx(dust_sand) number(3))
		("fx_base" action(%action) fx(dust_sand) number(4))
	)
	(define "fx_snow"
		("fx_base" action(%action) fx(dust_snow) number(1))
		("fx_base" action(%action) fx(dust_snow) number(2))
		("fx_base" action(%action) fx(dust_snow) number(3))
		("fx_base" action(%action) fx(dust_snow) number(4))
	)

	{on "stop_trace"					;// stops wheel & all engine fx on takeoff.
		{view stop "on_ground"}
		{view stop "on_country_road"}
		{view stop "on_sand"}
		{view stop "on_snow"}
		{view stop "on_grass"}
		{view stop "on_water"}
		{view stop "on_mud"}
		{view stop "on_puddle"}
		("fx_dust" action(stop))
		("fx_sand" action(stop))
		("fx_snow" action(stop))
	}

	(define "stop_trace_engine"				;// stops engine fx when engine is turned off or broken while on the ground
		("fx_base" action(stop) fx(dust) 		number(%number))
		("fx_base" action(stop) fx(dust_sand)	number(%number))
		("fx_base" action(stop) fx(dust_snow)	number(%number))
	)

	(define "play_trace"					;// starts fx wheel and engine dust fx after landing
		{if terrain_fx "ground"
			{view start "on_ground"}
			("fx_base" action(start) fx(dust_sand)	number(%number))
		else terrain_fx "country_road"
			{view start "on_country_road"}
			("fx_base" action(start) fx(dust_sand)	number(%number))
		else terrain_fx "sand"
			{view start "on_sand"}
			("fx_base" action(start) fx(dust_sand)	number(%number))
		else terrain_fx "snow"
			{view start "on_snow"}
			("fx_base" action(start) fx(dust_snow)	number(%number))
		else terrain_fx "grass"
			{view start "on_grass"}
			("fx_base" action(start) fx(dust)		number(%number))
		else terrain_fx "water"
			{view start "on_water"}
			("fx_dust" action(stop))
			("fx_sand" action(stop))
			("fx_snow" action(stop))
		else terrain_fx "mud"
			{view start "on_mud"}
			("fx_base" action(start) fx(dust)		number(%number))
		else terrain_fx "puddle"
			{view start "on_puddle"}
			("fx_base" action(start) fx(dust)		number(%number))
		else terrain_fx "road"
			("fx_base" action(start) fx(dust)		number(%number))
		}
	)

	(define "prop_blast"		;// starts fx engine dust fx after engine starts
		{if terrain_fx "ground"
			{view start "dust_sand%number"}
		else terrain_fx "country_road"
			{view start "dust_sand%number"}
		else terrain_fx "sand"
			{view start "dust_sand%number"}
		else terrain_fx "snow"
			{view start "dust_snow%number"}
		else terrain_fx "grass"
			{view start "dust%number"}
		else terrain_fx "mud"
			{view start "dust%number"}
		else terrain_fx "puddle"
			{view start "dust%number"}
		else terrain_fx "road"
			{view start "dust%number"}
		else terrain_fx "water"
			("fx_dust" action(stop))
			("fx_sand" action(stop))
			("fx_snow" action(stop))
		}
	)

	(define "stop_smoke_fx"
		{view pause "heavy_%0_smoke"}
		{view pause "medium_%0_smoke"}
		{view pause "light_%0_smoke"}
	)

	{on "takeoff"
		{if not dead
			{if operatable
				{ani_play "wheels" 0.2}
				{play_sound "gear_work"}
				{call "stop_trace"}
				{if "landing"
					{set "landing" 0}
					{kill_delay "engine_idle"}
					{play_sound "engine_accelerate"}
					{stop_sound "engine1_idle"}
					{stop_sound "engine2_idle"}
					{stop_sound "engine_decelerate"}
					{call "engine_full"}
				}
				{delay 3.5 {call "gear_disable"}}
			}
		}
	}

	{on "engine_full"
		{delay 2.5 "engine_full"			;// delay for accelerate sound
			{if not destroyed "engine1"
				{play_sound "engine1_full" 1}
				{play_sound "bkg_plane" 1}
			}
			{if not destroyed "engine2"
				{play_sound "engine2_full" 1}
				{play_sound "bkg_plane" 1}
			}
		}
	}

	{on "takeoff_load" 					;// plane spawns in chassis "airborne"
		{ani_wind "wheels" end}			;// retracts wheels
		{call "gear_disable"}
	}

	{on "gear_disable"					;// disables landing gear from being damaged when retracted in plane.
		{volumes "gear" disable blast bullet}
	}

	{on "landing"
		{set "landing" 1}
		{ani_play "wheels" -0.2}
		{kill_delay "engine_full"}
		{play_sound "gear_work"}
		{stop_sound "bkg_plane"}
		{stop_sound "engine_accelerate"}
		{stop_sound "engine1_full"}
		{stop_sound "engine2_full"}
		{play_sound "engine_decelerate"}
		{call "engine_idle_delay"}
		{volumes "gear" enable blast bullet}	;// enables landing gear to be damaged when deployed
	}

	{on "engine_idle_delay"				;// delay for decelerate sound
		{delay 2 "engine_idle"
			{if not destroyed "engine1"
				{play_sound "engine1_idle" 1}
			}
			{if not destroyed "engine2"
				{play_sound "engine2_idle" 1}
			}
		}
	}

	{on "engine_toggle" overload			;// UI button to toggle engine on/off
		{if operatable
			{if tagged "engine_count_1"
				{if not work "engine1"
					{if "engine_on"
						{call "engine_switch"}
					else
						{play_sound "false_start"}
					}
				else
					{call "engine_switch"}
				}
			else tagged "engine_count_2"
				{if not work "engine1"
					{if not work "engine2"
						{if "engine_on"
							{call "engine_switch"}
						else
							{play_sound "false_start"}
						}
					else
						{call "engine_switch"}
					}
				else
					{call "engine_switch"}
				}
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

	{on move on overload ;// vehicle moves forward or reverse
		{if not chassis "airborne"
			{if not "landing"
				{kill_delay "engine_decel"}
				{stop_sound "engine1_idle"}
				{stop_sound "engine2_idle"}
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

	{on "engine_accel"						;//delay for accelerate sound
		{delay 3.8 "engine_accel"
			{if not destroyed "engine1"
				{play_sound "engine1_full" 1}
				{play_sound "bkg_plane" 1}
			}
			{if not destroyed "engine2"
				{play_sound "engine2_full" 1}
				{play_sound "bkg_plane" 1}
			}
			{stop_sound "engine_accelerate"}
		}
	}

	{on move off overload ;// vehicle not moving forward or reverse
		{if not "landing"
			{kill_delay "engine_accel"}
			{stop_sound "bkg_plane"}
			{stop_sound "engine1_full"}
			{stop_sound "engine2_full"}
			{stop_sound "engine_accelerate"}
			{if "engine_on"
				{play_sound "engine_decelerate"}
				{call "engine_decel"}
			}
		else
			{set "landing" 0}
		}
	}

	{on "engine_decel"					;//delay for decelerate sound
		{delay 3.5 "engine_decel"
			{if "engine_on"
				{if not destroyed "engine1"
					{play_sound "engine1_idle" 1}
				}
				{if not destroyed "engine2"
					{play_sound "engine2_idle" 1}
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
				("stop_smoke_fx" args engine1)
				("stop_smoke_fx" args engine2)
			}
			{if "engine1_start"
				("play_trace" number(1))
			}
			{if "engine2_start"
				("play_trace" number(2))
			}
			{if "engine3_start"
				("play_trace" number(3))
			}
			{if "engine4_start"
				("play_trace" number(4))
			}
		}
	}

	{on engine off overload} ;// stops extra interaction calls from vehicle.inc

	(define "prop_spin"		;// individual engine: disables volumes for each individual propeller blade and enables cylinder volume for spinning blades
		{volumes "still%number" disable all}
		{volumes "spin%number" enable contact contact_ground touch}
	)
	(define "prop_still"	;// individual engine: disables cylinder volume for spinning blades and enables volumes for each individual propeller blade
		{volumes "still%number" enable contact bullet blast touch}
		{volumes "spin%number" disable all}
	)
	(define "prop_destroy"	;// individual engine:
		{volumes "still%number" disable all}
		{volumes "spin%number" disable all}
	)

	{on "props_spin"			;// all engines: disables volumes for each individual propeller blade and enables cylinder volume for spinning blades
		{volumes "still" disable all}
		{volumes "spin" enable contact contact_ground touch}
	}

	{on "props_still"		;// all engines: disables cylinder volume for spinning blades and enables volumes for each individual propeller blade
		{volumes "still" enable contact bullet blast touch}
		{volumes "spin" disable all}
	}

	{on animation_end "engine_start"
		{ani_play "engine_work" loop}
		;//{if "engine_on" {stop_sound "engine1_stop"}} ;// checks to make sure engine has not been toggled off
		("prop_spin" number(1))
		{if not chassis "airborne"
			{call "engine_start"}
		else chassis "airborne"
			{stop_sound "engine1_start"}
			{play_sound "engine1_full" 1}
			{play_sound "bkg_plane" 1}
		}
	}

	{on animation_end "engine2_start"
		{ani_play "engine2_work" loop}
		;//{if "engine_on" {stop_sound "engine1_stop"}}
		("prop_spin" number(2))
		{if not chassis "airborne"
			{call "engine2_start"}
		else chassis "airborne"
			{stop_sound "engine2_start"}
			{play_sound "engine2_full" 1}

		}
	}

	{on "engine_start"						;// delay for start sound
		{delay 4.5
			{stop_sound "engine1_start"}
		}
	}

	{on "engine2_start"						;// delay for start sound
		{delay 4.5
			{stop_sound "engine2_start"}
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
				{ani_play "engine2_work" loop}
				{play_sound "engine1_full" 1}
				{play_sound "bkg_plane" 1}
				{call "props_spin"}
			}
		}
	}

	{on "engine_startup_timer"				;// delay for switching from startup to idle state
		(define "engine_startup_timer"
			{delay 5.9 "engine_startup"
				{call "engine%number_idle"}
			}
		)
	}

	{on "engine_start_sequence"				;// start sequence for 1st engine
		{if work "engine1"
			{if "engine_on"
				{call "add_trace"}
				{tags remove "engine_turned_off"}
				{tags remove "splash"}
				{ani_play "engine_start" 0.85 callback}
				{view start "engine1_exhaust"}
				{play_sound "engine1_start"}
				{set "engine1_start" 1}
				{delay 1 "engine_startup"
					{view pause "engine1_exhaust"}
					{delay 1.5 "engine_startup"
						("prop_blast" number(1))
					}
				}
				("engine_startup_timer" number(1))		;// allows for overload/modified time for each aircrafts complete startup sequence before switching to idle state
			}
		}
	}

	{on "engine2_start_sequence"			;// start sequence for 2nd engine
		{if work "engine2"
			{if "engine_on"
				{if not work "engine1"
					{call "add_trace"}
					{tags remove "engine_turned_off"}
					{tags remove "splash"}
				}
				{ani_play "engine2_start" 0.85 callback}
				{view start "engine2_exhaust"}
				{play_sound "engine2_start"}
				{set "engine2_start" 1}

				{delay 1 "engine_startup"
					{view pause "engine2_exhaust"}
					{delay 1.5 "engine_startup"
						("prop_blast" number(2))
					}
				}
				("engine_startup_timer" number(2))		;// allows for overload/modified time for each aircrafts complete startup sequence before switching to idle state
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
				{call "engine1_stop_sequence"}
				{set "toggle_delay" 1}			;// stops accidental double click of UI button
				{delay 5 {set "toggle_delay" 0}}
				{delay 0.6
					{chassis_work 0}
				}
			}
		}
	}

	{on "engine1_stop_sequence"				;// engine 1 shutdown sequence
		{stop_sound "engine_accelerate"}
		{stop_sound "engine_decelerate"}
		{stop_sound "engine1_start"}
		{stop_sound "bkg_plane"}
		{stop_sound "engine1_full"}
		{stop_sound "engine1_idle"}
		{kill_delay "engine_accel"}
		{kill_delay "engine_decel"}
		{kill_delay "engine_idle"}
		{if "engine1_start"
			{play_sound "engine_stop"}
		}
		{delay 0.6
			{kill_delay "engine_startup"}
			("stop_trace_engine" number(1))
			{ani_stop "engine_start"}
			{ani_stop "engine_work"}
			{if "engine1_start"
				{ani_play "engine_stop"}
				("prop_still" number(1))
			}
			{set "engine1_start" 0}
		}
	}

	{on "engine2_stop_sequence"				;// engine 2 shutdown sequence
		{stop_sound "engine2_start"}
		{stop_sound "engine2_full"}
		{stop_sound "engine2_idle"}
		{if "engine2_start"
			{play_sound "engine_stop"}
		}
		{delay 0.6
			{kill_delay "engine_startup"}
			("stop_trace_engine" number(2))
			{ani_stop "engine2_start"}
			{ani_stop "engine2_work"}
			{if "engine2_start"
				{ani_play "engine2_stop"}
				("prop_still" number(2))
			}
			{set "engine2_start" 0}
		}
	}

	{on "engine_idle" overload ;// settings for engine if it should be on immediately after spawning
		{if work "engine1"
			{set "engine_on" 1}
			{set "engine1_start" 1}
			{ani_play "engine_work" loop} ;//causes issues with start animation transisiton, but needed for spawns w/ Engine on
			("prop_spin" number(1))
			{if not chassis "airborne"
				{play_sound "engine1_idle" 1}
				{call "add_trace"}
				("prop_blast" number(1))
			else
				{play_sound "engine1_full" 1}
				{play_sound "bkg_plane" 1}
			}
		}
		{if work "engine2"
			{set "engine_on" 1}
			{set "engine2_start" 1}
			{ani_play "engine2_work" loop}
			("prop_spin" number(2))
			{if not chassis "airborne"
				{play_sound "engine2_idle" 1}
				{call "add_trace"}
				("prop_blast" number(2))
			else
				{play_sound "engine2_full" 1}
			}
		}
		{if "engine_on"
			{chassis_work 1}
		else
			{chassis_work 0}
		}
	}

	{on "engine1_idle"		;// setting for engine 1 idling after turning on
		{if work "engine1"
			{chassis_work 1}
			{set "engine_on" 1}
			{play_sound "engine1_idle" 1}
		}
	}

	{on "engine2_idle"		;// setting for engine 2 idling after turning on
		{if work "engine2"
			{chassis_work 1}
			{set "engine_on" 1}
			{play_sound "engine2_idle" 1}
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
		{if tagged "engine_count_1"
			{if broken "engine1"
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
		{if tagged "engine_count_2"
			{if broken "engine1"
				{if broken "engine2"
					{movement_limit slow}
					{tags add "move_slow"}
				else
					{movement_limit normal}
					{tags add "move_norm1"}
				}
			else broken "engine2"
				{movement_limit normal}
				{tags add "move_norm2"}
			else broken "body"
				{movement_limit normal}
				{tags add "move_norm3"}
			else
				{movement_limit fast}
				{tags add "move_fast"}
			}
		}
	}

	{on operatable off
		{if not tagged "engine_turned_off" ;// stops engine off sequence from occuring if engine is already turned off.
			{if not chassis "airborne"
				{call "engine_off"}
			}
		}
	}

	{on "check_speed" overload} ;// disabled calls to check speed for dust fx. Planes only have 1 fx

	{on "propeller_stop"		;// called on exlosion and ground_hit
		{bone hide "propeller1_work"}
		{bone hide "propeller2_work"}
		;// Stuff for Helicopter planes
		{bone hide "engine_work"}
		{bone hide "rotor_work"}
	}

	{on "engine_not_run"		;// instantly stops engines. Called on collosiions, ground_hit, crash and sink.
		{if "engine_on"
			{set "engine_on" 0}
			{ani_stop "engine_start"}
			{ani_stop "engine_work"}
			{ani_stop "engine2_start"}
			{ani_stop "engine2_work"}
			{stop_sound "bkg_plane"}
			{stop_sound "engine1_idle"}
			{stop_sound "engine1_full"}
			{stop_sound "engine2_idle"}
			{stop_sound "engine2_full"}
			{stop_sound "engine_accelerate"}
			{stop_sound "engine_decelerate"}
			{kill_delay "engine_accel"}
			{kill_delay "engine_decel"}
			("stop_trace_engine" number(1))
			("stop_trace_engine" number(2))
			{if not tagged "destroyed"
				{ani_play "engine_stop"}
				{ani_play "engine2_stop"}
			}
			{delay 0.01
				{ani_stop "engine_stop"}
				{ani_stop "engine2_stop"}
				("prop_still" number(1))
				("prop_still" number(2))
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

			else component "body_back"

			else component "engine1"
				{view start "medium_engine1_smoke"}

			else component "engine2"
				{view start "medium_engine2_smoke"}

			else component "propeller"

			else component "wingright"
				{burn fx "smoke_aero_small" fake}

			else component "wingleft"
				{burn fx "smoke_aero_small" fake}

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

				else component "engine1"
					{view start "heavy_engine1_smoke"}
					{delay 1 {view pause "medium_engine1_smoke"}}
					{if tagged "engine_count_1"
						{if chassis "airborne"
							{call "fall"}
						else
							{call "engine_off"}
						}
					else tagged "engine_count_2"
						{if destroyed "engine2"
							{if chassis "airborne"
								{call "fall"}
							else
								{call "engine_off"}
							}
						}
					}

				else component "engine2"
					{view start "heavy_engine2_smoke"}
					{delay 1 {view pause "medium_engine2_smoke"}}
					{if destroyed "engine1"
						{if chassis "airborne"
							{call "fall"}
						else
							{call "engine_off"}
						}
					}
				else component "propeller"

				else component "wingright"
					{call "tear_part"}

				else component "wingleft"
					{call "tear_part"}

				else component "wheel"
					{if "engine_on"
						{chassis_work 1} ;// fixes wheel break's "up impluse" from disabling movement on ground
					}
				}
			}
			{if component "engine1"
				{if not tagged "grounded"
					;{call "engine1_stop_sequence"}
					{spawn "aero_die_particle"}
				}
			else component "engine2"
				{if not tagged "grounded"
					;{call "engine2_stop_sequence"}
					{spawn "aero_die_particle"}
				}
			}
			{if component "part"
				{call "tear_part"}
			}
		}
	}

	{on "fall"
		{if chassis "airborne"
			{if not "fall"
				{call "stat_break"}
				{stop_sound "bounds"}
				{call "fall_fx"}
				{set "fall" 1}
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

	{on "fall_sound"
		{if chassis "airborne"
			{if not tagged "shotdown"
				;{play_sound "fall"}
				{tags add "shotdown"}
			}
		}
	}

	{on "fall_fx"
		{if not under_water
			{delay 0.01
				{add_view "smoke_aero_dead_big" "fire" "body"}
				{view start "fire"}
				;{play_sound "flame" 1}
				{delay 30
					{view stop "fire"}
				}
				{burn volume "body" fx "smoke_aero_big" time 30 fake}
				{burn volume "engine1" fx "smoke_aero_big" time 30 fake}
				{burn volume "engine2" fx "smoke_aero_big" time 30 fake}
				{delay 30.1
					{burn volume "body" fx "smoke_black" time 40 25 fake}
				}
				{delay 35
					;{stop_sound "flame"}
				}
			}
		}
	}

	{on ground_hit sync
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
			{if volume "spin1"
				{set "engine1_start" 0}
				{components "propeller1" destroy}
				{call "engine1_broken"}
				("prop_destroy" number(1))
				{tags add "ground_hit_spin1"}
			}
			{if volume "spin2"
				{set "engine2_start" 0}
				{components "propeller2" destroy}
				{call "engine2_broken"}
				("prop_destroy" number(2))
				{tags add "ground_hit_spin2"}
			}
		}
	}

	{on "engine1_broken"
		{components "engine1" break}
		{ani_stop "engine_start"}
		{ani_stop "engine_work"}
		{ani_play "engine_stop"}
		{if not work "engine2"
			{stop_sound "engine_accelerate"}
			{stop_sound "engine_decelerate"}
		}
		{kill_delay "engine_accel"}
		{kill_delay "engine_decel"}
		("stop_trace_engine" number(1))
		{delay 0.01
			{ani_stop "engine_stop"}
			("prop_still" number(1))
		}
	}
	{on "engine2_broken"
		{components "engine2" break}
		{ani_stop "engine2_start"}
		{ani_stop "engine2_work"}
		{ani_play "engine2_stop"}
		("stop_trace_engine" number(2))
		{if not work "engine1"
			{stop_sound "engine_accelerate"}
			{stop_sound "engine_decelerate"}
			{kill_delay "engine_accel"}
			{kill_delay "engine_decel"}
		}
		{delay 0.01
			{ani_stop "engine2_stop"}
			("prop_still" number(2))
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
				{if volume "spin1"
					{if "engine_on"
						{components "engine1" break}
					}
					{components "propeller1" break}
				else volume "spin2"
					{if "engine_on"
						{components "engine2" break}
					}
					{components "propeller2" break}
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

	{on "crash_explosion"
		{if not tagged "destroyed"
			{if chassis "airborne"
				{call "_explosion"}
			}
		}
	}

	{on "collide"
		{if volume "body"
			{call "crash_explosion"}
			{call "engine_not_run"}
			{kill_crew}
		else volume	"spin"
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

	{on "tear_part"
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

	{on "wrecked_gear"
		{if not chassis "airborne"
			{impulse up 0.01 forward 0.01}
		}
	}

	{on "crash"
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

	{on "check_burn_emit"
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

	{on "die"
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
		("stop_smoke_fx" args engine1)
		("stop_smoke_fx" args engine2)
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

	{on "spawn_shellhole"			;// called on "_explosion"
		{spawn "shellhole_dead_tank2" "basis" random_orientation}
	}

	{##on "spawn_bomb"
		{spawn "air_bomb_small"}
	}

	{##on "kick"
		{impulse up 0.1 com}
	}

	{on "area_disable"
		{area disable}
	}

	{on "area_enable"
		{area enable}
	}

	{on "air_attack"}

	{on "init_gun"
		{add_view "tank_canon_fire_20_25_auto"	"flashbarrel00"	"barrel00"}
		{add_view "tank_canon_fire_20_25_auto"	"flashbarrel01"	"barrel01"}
		{add_view "tank_canon_fire_20_25_auto"	"flashbarrel02"	"barrel02"}
		{add_view "tank_canon_fire_20_25_auto"	"flashbarrel03"	"barrel03"}
		{add_view "tank_canon_fire_20_25_auto"	"flashbarrel04"	"barrel04"}
		{add_view "tank_canon_fire_20_25_auto"	"flashbarrel05"	"barrel05"}
		{add_view "flash_gun_small"	"flashbarrel_mg00"	"barrel_mg00"}
		{add_view "flash_gun_small"	"flashbarrel_mg01"	"barrel_mg01"}
		{add_view "flash_gun_small"	"flashbarrel_mg02"	"barrel_mg02"}
		{add_view "flash_gun_small"	"flashbarrel_mg03"	"barrel_mg03"}
		{add_view "flash_gun_small"	"flashbarrel_rear" "foresight6"}
		{add_view "flash_gun_small"	"flashbarrel_main" "foresight1"}
	}

	{on fire "mgun1" overload
		(define "fire_barrel"
			name "%0"
				{view start "flashbarrel%0"}
				{delay 0.42
					{view pause "flashbarrel%0"}
				}
		)

		{if    ("fire_barrel" args 00)
		  else ("fire_barrel" args 01)
		  else ("fire_barrel" args 02)
		  else ("fire_barrel" args 03)
		  else ("fire_barrel" args 04)
		  else ("fire_barrel" args 05)
		}
	}

	{on fire "mgun2"
		(define "fire_barrel_mg"
			name "%0"
				{view start "flashbarrel_mg%0"}
				{delay 0.42
					{view pause "flashbarrel_mg%0"}
				}
		)
		{play_sound "bkg_mgun"}

		{if    ("fire_barrel_mg" args 00)
		  else ("fire_barrel_mg" args 01)
		  else ("fire_barrel_mg" args 02)
		  else ("fire_barrel_mg" args 03)

		}
	}

	{on fire "mgun3"
		(define "fire_barrel"
			name "%0"
				{view start "flashbarrel%0"}
				{delay 0.42
					{view pause "flashbarrel%0"}
				}
		)

		{if		("fire_barrel" args 00)
			else	("fire_barrel" args 01)
			else	("fire_barrel" args 02)
			else	("fire_barrel" args 03)
			else	("fire_barrel" args 04)
			else	("fire_barrel" args 05)
		}
	}

	{on fire "mgun4"
		{view start "flashbarrel_rear"}
		{play_sound "bkg_mgun"}
		{delay 0.42
			{view pause "flashbarrel_rear"}
		}
	}

	{on "splash_fx"
		{if not tagged "splash"
			{if chassis "airborne"
				{spawn "ex_size3_water"}
			else not chassis "airborne"
			}
		}
		{tags add "splash"}
	}

	{on "bail_out"
		{delay 0.4 0.15
			(mod not "mp" {crew_emit})
		}
	}

	{##on terrain_pp "swamp" enter
		{delay 0
			{if user_control
				{tags add "out_of_bounds"}
				{play_sound "bounds" 1}
				{delay 4
					{if tagged "out_of_bounds"
						{call "_explosion"}
						{stop_sound "bounds"}
					}
				}
			}
		}
	}

	{##on terrain_pp "swamp" leave
		{delay 0
			{tags remove "out_of_bounds"}
			{stop_sound "bounds"}
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

{"air_part wing"
	{on ground_hit sync
		{if volume "part"
			{if volume_bone_level 3
				{call "tear_part"}
			}
		}
	}
	{on "tear_part"
		{tear "piece_big_airborne_wing" bone from_volume
			{impulse up 0.1 0.05}
		}
		{delay 20 {if under_water {delete}}}
	}
}

;/*=========== Other Plane Props End  ===========*/


(define "il2_sound"
	{on "add_movement_sound" overload		;// temp until il2 gets it's own sounds
		{link_sound "engine1_start"			"vehicle/airborne/il2/il2_engine_start"}
		{link_sound "engine1_idle"			"vehicle/airborne/il2/il2_engine_idle"}
		{link_sound "engine1_full"			"vehicle/airborne/il2/il2_engine_full"}
		{link_sound "engine_accelerate"		"vehicle/airborne/il2/il2_accelerate"}
		{link_sound "engine_decelerate"		"vehicle/airborne/il2/il2_decelerate"}
		{link_sound "engine_stop"			"vehicle/airborne/il2/il2_engine_stop"}
		{link_sound "gear_work"				"vehicle/airborne/bf109/109_landing_gear"}
	}
)

;(define "yak1_sound"
;{on "add_movement_sound" overload		;// temp until il2 gets it's own sounds
;	{link_sound "engine1_start"			"vehicle/airborne/yak1/yak1_engine_start"}
;	{link_sound "engine1_idle"			"vehicle/airborne/yak1/yak1_engine_idle"}
;	{link_sound "engine1_full"			"vehicle/airborne/yak1/yak1_engine_full"}
;	{link_sound "engine_accelerate"		"vehicle/airborne/yak1/yak1_accelerate"}
;	{link_sound "engine_decelerate"		"vehicle/airborne/yak1/yak1_decelerate"}
;	{link_sound "engine_stop"			"vehicle/airborne/yak1/yak1_engine_stop"}
;	{link_sound "gear_work"				"vehicle/airborne/bf109/109_landing_gear"}
;}
;)

(define "bf109_sound"
	{on "add_movement_sound" overload
		{link_sound "engine1_start"			"vehicle/airborne/bf109/109_engine_start"}
		{link_sound "engine1_idle"			"vehicle/airborne/bf109/109_engine_idle"}
		{link_sound "engine1_full"			"vehicle/airborne/bf109/109_engine_full"}
		{link_sound "engine_accelerate"		"vehicle/airborne/bf109/109_accelerate"}
		{link_sound "engine_decelerate"		"vehicle/airborne/bf109/109_decelerate"}
		{link_sound "engine_stop"			"vehicle/airborne/bf109/109_engine_stop"}
		{link_sound "gear_work"				"vehicle/airborne/bf109/109_landing_gear"}
	}
)

(define "bf110_sound"
	{on "add_movement_sound" overload
		{link_sound "engine1_start"			"vehicle/airborne/bf109/109_engine_start"}
		{link_sound "engine1_idle"			"vehicle/airborne/bf109/109_engine_idle"}
		{link_sound "engine1_full"			"vehicle/airborne/bf109/109_engine_full"}
		{link_sound "engine2_idle"			"vehicle/airborne/bf109/110_engine2_idle"}
		{link_sound "engine2_start"			"vehicle/airborne/bf109/110_engine2_start"}
		{link_sound "engine2_full"			"vehicle/airborne/bf109/110_engine2_full"}
		{link_sound "engine_accelerate"		"vehicle/airborne/bf109/109_accelerate"}
		{link_sound "engine_decelerate"		"vehicle/airborne/bf109/109_decelerate"}
		{link_sound "engine_stop"			"vehicle/airborne/bf109/109_engine_stop"}
		{link_sound "gear_work"				"vehicle/airborne/bf109/109_landing_gear"}
	}
)

;/*=========== Plane Specifics Begin  ===========*/

{"il2_mod42"
	("il2_sound")

	{on spawn
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
	}
	{on fire "gun" overload
		(define "fire_barrel"
			name "%0"
				{view start "flashbarrel%0"}
				{delay 0.42
					{view pause "flashbarrel%0"}
				}
		)

		{if ("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
	}

	{on fire "rocket" overload
		{play_sound "bkg_rocket"}
	}
	{on "die"
		{bone hide "rocket00"}
		{bone hide "rocket02"}
		{bone hide "rocket04"}
		{bone hide "rocket06"}
		{bone hide "rocket01"}
		{bone hide "rocket03"}
		{bone hide "rocket05"}
		{bone hide "rocket07"}
		{bone hide "bomb_00"}
		{bone hide "bomb_01"}
	}

	{on "tear_part"
		{if volume "wingr2"
			{bone hide "rocket00"}
			{bone hide "rocket02"}
			{bone hide "rocket04"}
			{bone hide "rocket06"}
		else volume "wingl2"
			{bone hide "rocket01"}
			{bone hide "rocket03"}
			{bone hide "rocket05"}
			{bone hide "rocket07"}
		}
	}
}

{"yak1_ser69"
	;("yak1_sound")

	{on "add_movement_sound" overload ;// Temporary
		{link_sound "engine1_start"			"vehicle/engine/nkl/start"}
		{link_sound "engine1_idle"			"vehicle/engine/nkl/idle"}
		{link_sound "engine1_full"			"vehicle/engine/nkl/full"}
		{link_sound "engine_accelerate"		"vehicle/engine/nkl/accelerate"}
		{link_sound "engine_decelerate"		"vehicle/engine/nkl/decelerate"}
		{link_sound "engine_stop"			"vehicle/engine/nkl/stop"}
		{link_sound "gear_work"				"vehicle/airborne/bf109/109_landing_gear"}
	}

	{on fire "gun" overload
		{view start "flashbarrel_main"}
		{delay 0.42
			{view pause "flashbarrel_main"}
		}
	}
}

{"bf109_f4"
	("bf109_sound")

	{on fire "gun" overload
		{view start "flashbarrel_main"}
		{delay 0.42
			{view pause "flashbarrel_main"}
		}
	}
}

{"bf109_g6"
	("bf109_sound")

	{on fire "gun" overload
		{view start "flashbarrel_main"}
		{delay 0.42
			{view pause "flashbarrel_main"}
		}
	}
}

{"bf110_e2"
	("bf110_sound")

	{on fire "gun" overload
		(define "fire_barrel"
			name "%0"
				{view start "flashbarrel%0"}
				{delay 0.42
					{view pause "flashbarrel%0"}
				}
		)

		{if ("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		}
	}

	{on "engine_count" overload
		{tags add "engine_count_2"}
	}

	{on "engine_start_sequence" overload
		{inherited}
		{if work "engine1"
			{delay 4.5 0.5
				{call "engine2_start_sequence"}
			}
		else
			{call "engine2_start_sequence"}
		}
	}

	{on "engine1_stop_sequence" overload
		{inherited}
		{if not "engine_on"
			{call "engine2_stop_sequence"}
		}
	}

	{on "air_attack"
		{play_sound "attack"}
	}

	{on "die"
		{bone hide "bomb00"}
		{bone hide "bomb01"}
		{bone hide "bomb02"}
		{bone hide "bomb03"}
		{bone hide "bomb_00"}
		{bone hide "bomb_01"}
	}

	{on "tear_part"
		{if volume "wingr2"
			{bone hide "bomb02"}
			{bone hide "bomb03"}
		else volume "wingl2"
			{bone hide "bomb00"}
			{bone hide "bomb01"}
		}
	}
}

{"ju-87"
	{on "gear_disable" overload} ;// stops earlier code from disabling gear volumes. JU-87 gear does not retract.

	{on "air_attack"
		{play_sound "attack"}
	}

	{on "die"
		{bone hide "bomb00"}
		{bone hide "bomb01"}
		{bone hide "bomb02"}
		{bone hide "bomb03"}
		{bone hide "bomb_"}
	}
	{on "tear_part"
		{if volume "wingr2"
			{bone hide "bomb02"}
			{bone hide "bomb03"}
		else volume "wingl2"
			{bone hide "bomb00"}
			{bone hide "bomb01"}
		else volume "wingr1"
			{bone hide "bomb02"}
			{bone hide "bomb03"}
		else volume "wingl1"
			{bone hide "bomb00"}
			{bone hide "bomb01"}
		}
	}

	{on "add_movement_sound" overload
		{link_sound "engine1_start"			"vehicle/airborne/ju87_engine_start"}
		{link_sound "engine1_idle"			"vehicle/airborne/ju87_engine_idle"}
		{link_sound "engine1_full"			"vehicle/airborne/ju87_engine_full"}
		{link_sound "engine_accelerate"		"vehicle/airborne/ju87_accelerate"}
		{link_sound "engine_decelerate"		"vehicle/airborne/ju87_decelerate"}
		{link_sound "engine_stop"			"vehicle/airborne/ju87_engine_stop"}
		{link_sound "attack"				"vehicle/airborne/ju87_dive"}
	}
}

{"fi156"
	{on "add_movement_sound" overload
		{link_sound "engine1_start"			"vehicle/airborne/ju87_engine_start"}
		{link_sound "engine1_idle"			"vehicle/airborne/ju87_engine_idle"}
		{link_sound "engine1_full"			"vehicle/airborne/ju87_engine_full"}
		{link_sound "engine_accelerate"		"vehicle/airborne/ju87_accelerate"}
		{link_sound "engine_decelerate"		"vehicle/airborne/ju87_decelerate"}
		{link_sound "engine_stop"			"vehicle/airborne/ju87_engine_stop"}
	}
}

{"ju-52"
	{on "add_movement_sound" overload
		{link_sound "engine1_start"			"vehicle/airborne/bf109/109_engine_start"}
		{link_sound "engine1_idle"			"vehicle/airborne/bf109/109_engine_idle"}
		{link_sound "engine1_full"			"vehicle/airborne/bf109/109_engine_full"}
		{link_sound "engine2_start"			"vehicle/airborne/bf109/109_engine_start"}
		{link_sound "engine2_idle"			"vehicle/airborne/bf109/109_engine_idle"}
		{link_sound "engine2_full"			"vehicle/airborne/bf109/109_engine_full"}
		{link_sound "engine3_start"			"vehicle/airborne/bf109/109_engine_start"}
		{link_sound "engine3_idle"			"vehicle/airborne/bf109/109_engine_idle"}
		{link_sound "engine3_full"			"vehicle/airborne/bf109/109_engine_full"}
		{link_sound "engine_accelerate"		"vehicle/airborne/bf109/109_accelerate"}
		{link_sound "engine_decelerate"		"vehicle/airborne/bf109/109_decelerate"}
		{link_sound "engine_stop"			"vehicle/airborne/bf109/109_engine_stop"}
	}

	{##on "wheels_fx"
		{add_view "spheredust_big" "ground_dust" "support1"}
		{add_view "spheredust_big" "ground_dust" "support2"}
		{view start "ground_dust"}
		{delay 4
			{view stop "ground_dust"}
		}
	}
}


{"bomber" ;//Ju-52
	{on "init_gun" overload
		{add_view "flash_gun_big_vehicle" "shooter1_00" "shooter1_00"}
		{add_view "flash_gun_big_vehicle" "shooter1_01" "shooter1_01"}
		{add_view "flash_gun_big_vehicle" "shooter2_00" "shooter2_00"}
		{add_view "flash_gun_big_vehicle" "shooter2_01" "shooter2_01"}
		{add_view "flash_gun_big_vehicle" "shooter3_00" "shooter3_00"}
		{add_view "flash_gun_big_vehicle" "shooter3_01" "shooter3_01"}
		{add_view "flash_gun_big_vehicle" "shooter4_00" "shooter4_00"}
		{add_view "flash_gun_big_vehicle" "shooter4_01" "shooter4_01"}
	}
	(define "link_flash"
		{if name "mgun_linked%0"
			{if stuff "mgun"
				{add_view "flash_gun_big_vehicle" "flashbarrel%1" "Foresight%1"}
			}
		}
	)
	{on "link_weapon" overload
		("link_flash" args 1 5)
		("link_flash" args 2 6)
		("link_flash" args 3 7)
		("link_flash" args 4 8)
	}
	{on fire "mgun_linked1" {view start "flashbarrel5"}}
	{on fire "mgun_linked2" {view start "flashbarrel6"}}
	{on fire "mgun_linked3" {view start "flashbarrel7"}}
	{on fire "mgun_linked4" {view start "flashbarrel8"}}

	(define "start_shooter_flash"
		{on fire "mgun_own%0"
			{if name "00"
				{view start "shooter%0_00"}
			}
			{if name "01"
				{view start "shooter%0_01"}
			}
		}
	)
	("start_shooter_flash" args 1)
	("start_shooter_flash" args 2)
	("start_shooter_flash" args 3)
	("start_shooter_flash" args 4)

	{on "_explosion" overload}

	{on "break_part"
		{if work
			{component break}
			{burn fx "smoke_aero_small" fake}
		else broken
			{component destroy}
			{spawn "aero_die_particle"}
			{if volume "engine"
				{tear "piece_medium_steel" bone from_volume
					{impulse up 1 0.5 dir 5 2 rnd_dir 3 no_position}
					{add_view "smoke_dead_wheel" "smoke" "basis"}
					{view start "smoke"}
					{delay_effect 20 5 "stop"}
					{delay 15 {if under_water {delete}}}
				}
			}
			{if volume "engine1"
				{tear "piece_medium_steel" bone from_volume
					{impulse up 1 0.5 dir 5 2 rnd_dir 3 no_position}
					{add_view "smoke_dead_wheel" "smoke" "basis"}
					{view start "smoke"}
					{delay_effect 20 5 "stop"}
				}
			}
			{if volume "engine2"
				{tear "piece_medium_steel" bone from_volume
					{impulse up 1 0.5 dir 5 2 rnd_dir 3 no_position}
					{add_view "smoke_dead_wheel" "smoke" "basis"}
					{view start "smoke"}
					{delay_effect 20 5 "stop"}
				}
			}
		else destroyed
			{spawn "aero_die_particle"}
		}
	}
}

;/*=========== Plane Specifics End  ===========*/

{"f-105"
	{on "add_movement_sound" overload
		{link_sound "engine1_start"			"vehicle/airborne/f4_start"}
		{link_sound "engine1_idle"			"vehicle/airborne/f4_work"}
		{link_sound "engine1_full"			"vehicle/airborne/f4_move2"}
		{link_sound "engine2_start"			"vehicle/airborne/f4_start"}
		{link_sound "engine2_idle"			"vehicle/airborne/f4_work"}
		{link_sound "engine2_full"			"vehicle/airborne/f4_move2"}
		{link_sound "engine3_start"			"vehicle/airborne/f4_start"}
		{link_sound "engine3_idle"			"vehicle/airborne/f4_work"}
		{link_sound "engine3_full"			"vehicle/airborne/f4_move2"}
		{link_sound "fly"					"vehicle/airborne/f4_move2"}	
		{link_sound "engine_work"			"vehicle/airborne/f4_move2"}	
		{link_sound "engine_accelerate"		"vehicle/airborne/f4_move"}
		{link_sound "engine_decelerate"		"vehicle/airborne/f4_move"}
		{link_sound "engine_stop"			"vehicle/airborne/f4_stop"}
		{link_sound "attack"				"vehicle/airborne/f4_move2"}
	}
	
	{##on "wheels_fx"
		{add_view "spheredust_big" "ground_dust" "support1"}
		{add_view "spheredust_big" "ground_dust" "support2"}
		{view start "ground_dust"}
		{delay 4
			{view stop "ground_dust"}
		}
	}
}

{"su-7"
	{on "add_movement_sound" overload
		{link_sound "engine1_start"			"vehicle/airborne/f4_start"}
		{link_sound "engine1_idle"			"vehicle/airborne/f4_work"}
		{link_sound "engine1_full"			"vehicle/airborne/f4_move2"}
		{link_sound "engine2_start"			"vehicle/airborne/f4_start"}
		{link_sound "engine2_idle"			"vehicle/airborne/f4_work"}
		{link_sound "engine2_full"			"vehicle/airborne/f4_move2"}
		{link_sound "engine3_start"			"vehicle/airborne/f4_start"}
		{link_sound "engine3_idle"			"vehicle/airborne/f4_work"}
		{link_sound "engine3_full"			"vehicle/airborne/f4_move2"}
		{link_sound "fly"					"vehicle/airborne/f4_move2"}	
		{link_sound "engine_work"			"vehicle/airborne/f4_move2"}	
		{link_sound "engine_accelerate"		"vehicle/airborne/f4_move"}
		{link_sound "engine_decelerate"		"vehicle/airborne/f4_move"}
		{link_sound "engine_stop"			"vehicle/airborne/f4_stop"}
		{link_sound "attack"				"vehicle/airborne/f4_move2"}
	}

	{##on "wheels_fx"
		{add_view "spheredust_big" "ground_dust" "support1"}
		{add_view "spheredust_big" "ground_dust" "support2"}
		{view start "ground_dust"}
		{delay 4
			{view stop "ground_dust"}
		}
	}
}

{"mil_mi4_airborne"
	{on "add_movement_sound" overload
		{link_sound "engine1_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine1_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine1_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "engine2_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine2_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine2_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "engine3_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine3_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine3_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "fly"					"vehicle/airborne/uh1h_move"}	
		{link_sound "engine_work"			"vehicle/airborne/uh1h_move"}	
		{link_sound "engine_accelerate"		"vehicle/airborne/uh1h_move"}
		{link_sound "engine_decelerate"		"vehicle/airborne/uh1h_move"}
		{link_sound "engine_stop"			"vehicle/airborne/uh1h_stop"}
		{link_sound "attack"				"vehicle/airborne/uh1h_move"}
	}

	{##on "wheels_fx"
		{add_view "spheredust_big" "ground_dust" "support1"}
		{add_view "spheredust_big" "ground_dust" "support2"}
		{view start "ground_dust"}
		{delay 4
			{view stop "ground_dust"}
		}
	}
}

{"mil_mi4_heavy_airborne"
	{on "add_movement_sound" overload
		{link_sound "engine1_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine1_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine1_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "engine2_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine2_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine2_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "engine3_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine3_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine3_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "fly"					"vehicle/airborne/uh1h_move"}	
		{link_sound "engine_work"			"vehicle/airborne/uh1h_move"}	
		{link_sound "engine_accelerate"		"vehicle/airborne/uh1h_move"}
		{link_sound "engine_decelerate"		"vehicle/airborne/uh1h_move"}
		{link_sound "engine_stop"			"vehicle/airborne/uh1h_stop"}
		{link_sound "attack"				"vehicle/airborne/uh1h_move"}
	}

	{##on "wheels_fx"
		{add_view "spheredust_big" "ground_dust" "support1"}
		{add_view "spheredust_big" "ground_dust" "support2"}
		{view start "ground_dust"}
		{delay 4
			{view stop "ground_dust"}
		}
	}
}

{"uh-1b_airborne"
	{on "add_movement_sound" overload
		{link_sound "engine1_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine1_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine1_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "engine2_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine2_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine2_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "engine3_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine3_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine3_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "fly"					"vehicle/airborne/uh1h_move"}	
		{link_sound "engine_work"			"vehicle/airborne/uh1h_move"}	
		{link_sound "engine_accelerate"		"vehicle/airborne/uh1h_move"}
		{link_sound "engine_decelerate"		"vehicle/airborne/uh1h_move"}
		{link_sound "engine_stop"			"vehicle/airborne/uh1h_stop"}
		{link_sound "attack"				"vehicle/airborne/uh1h_move"}
	}

	{on "wheels_fx"
		{add_view "spheredust_big" "ground_dust" "basis"}
		{add_view "spheredust_big" "ground_dust" "basis"}
		{view start "ground_dust"}
		{delay 4
			{view stop "ground_dust"}
		}
	}
}

{"uh-1b_ara_airborne"
	{on "add_movement_sound" overload
		{link_sound "engine1_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine1_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine1_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "engine2_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine2_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine2_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "engine3_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine3_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine3_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "fly"					"vehicle/airborne/uh1h_move"}	
		{link_sound "engine_work"			"vehicle/airborne/uh1h_move"}	
		{link_sound "engine_accelerate"		"vehicle/airborne/uh1h_move"}
		{link_sound "engine_decelerate"		"vehicle/airborne/uh1h_move"}
		{link_sound "engine_stop"			"vehicle/airborne/uh1h_stop"}
		{link_sound "attack"				"vehicle/airborne/uh1h_move"}
	}

	{##on "wheels_fx"
		{add_view "spheredust_big" "ground_dust" "support1"}
		{add_view "spheredust_big" "ground_dust" "support2"}
		{view start "ground_dust"}
		{delay 4
			{view stop "ground_dust"}
		}
	}
}

{"uh-1b_m22_airborne"
	{on "add_movement_sound" overload
		{link_sound "engine1_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine1_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine1_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "engine2_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine2_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine2_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "engine3_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine3_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine3_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "fly"					"vehicle/airborne/uh1h_move"}	
		{link_sound "engine_work"			"vehicle/airborne/uh1h_move"}	
		{link_sound "engine_accelerate"		"vehicle/airborne/uh1h_move"}
		{link_sound "engine_decelerate"		"vehicle/airborne/uh1h_move"}
		{link_sound "engine_stop"			"vehicle/airborne/uh1h_stop"}
		{link_sound "attack"				"vehicle/airborne/uh1h_move"}
	}

	{##on "wheels_fx"
		{add_view "spheredust_big" "ground_dust" "support1"}
		{add_view "spheredust_big" "ground_dust" "support2"}
		{view start "ground_dust"}
		{delay 4
			{view stop "ground_dust"}
		}
	}
}

{"uh-1b_maxwell_airborne"
	{on "add_movement_sound" overload
		{link_sound "engine1_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine1_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine1_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "engine2_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine2_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine2_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "engine3_start"			"vehicle/airborne/uh1h_start"}
		{link_sound "engine3_idle"			"vehicle/airborne/uh1h_work"}
		{link_sound "engine3_full"			"vehicle/airborne/uh1h_move"}
		{link_sound "fly"					"vehicle/airborne/uh1h_move"}	
		{link_sound "engine_work"			"vehicle/airborne/uh1h_move"}	
		{link_sound "engine_accelerate"		"vehicle/airborne/uh1h_move"}
		{link_sound "engine_decelerate"		"vehicle/airborne/uh1h_move"}
		{link_sound "engine_stop"			"vehicle/airborne/uh1h_stop"}
		{link_sound "attack"				"vehicle/airborne/uh1h_move"}
	}

	{##on "wheels_fx"
		{add_view "spheredust_big" "ground_dust" "support1"}
		{add_view "spheredust_big" "ground_dust" "support2"}
		{view start "ground_dust"}
		{delay 4
			{view stop "ground_dust"}
		}
	}
}