{"car"
	{on spawn
		{link_sound "flame" "fire/metal"}

		;{if not rain
			{add_view	"dustrun_car"			"on_grass"			"FXtraceR1"}
			{add_view	"dustrun_car"			"on_grass"			"FXtraceL1"}
			{add_view	"dustrun_sand_car"		"on_sand"			"FXtraceR1"}
			{add_view	"dustrun_sand_car"		"on_sand"			"FXtraceL1"}
			{add_view	"dustrun_snow_car"		"on_snow"			"FXtraceR1"}
			{add_view	"dustrun_snow_car"		"on_snow"			"FXtraceL1"}
			{add_view	"dustrun_car"			"on_country_road"	"FXtraceR1"}
			{add_view	"dustrun_car"			"on_country_road"	"FXtraceL1"}
			{add_view	"dustrun_car"			"on_ground"			"FXtraceR1"}
			{add_view	"dustrun_car"			"on_ground"			"FXtraceL1"}
		;else

		{add_view	"drops_water"			"on_water"			"FXtraceR1"}
		{add_view	"drops_water"			"on_water"			"FXtraceL1"}
		{add_view	"drops_water_moto"		"on_puddle"			"FXtraceR1"}
		{add_view	"drops_water_moto"		"on_puddle"			"FXtraceL1"}

		{add_view	"smoke_black"			"smoke1"			"FXfire1"}
		{add_view	"steam"					"steam"				"FXsteam"}
		{add_view	"exhaust_dark_small"	"exhaust"			"FXsmoke1"}

		{link_sound "wheel_ground"  	"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_sand"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_grass" 		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_water" 		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_puddle" 		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_mud" 		"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_snow" 		"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_road" 		"vehicle/wheels/overlay/wheel_overlay_road"}
		{link_sound "wheel_rock" 		"vehicle/wheels/overlay/wheel_overlay_rock"}
		{link_sound "wheel_wood" 		"vehicle/wheels/overlay/wheel_overlay_wood"}
;		{link_sound "interior_mg"		"weapon/shot/mgun/mg_interior"}

		{link_sound "truck_open"		"vehicle/doors/truck/open"}
		{link_sound "truck_close"		"vehicle/doors/truck/close"}
		{link_sound "tailgate_open"		"vehicle/doors/tailgate/open"}
		{link_sound "tailgate_close"	"vehicle/doors/tailgate/close"}
		{link_sound "car_open"			"vehicle/doors/car/open"}
		{link_sound "car_close"			"vehicle/doors/car/close"}
	}

	{on "add_movement_sound"
;		{link_sound "engine_start"		"vehicle/engine/_old/inertia"}
;		{link_sound "engine_stop"		"vehicle/engine/_old/car_end"}
;		{link_sound "engine_idle"		""}
;		{link_sound "engine_full"		"vehicle/engine/_old/car"}
;		{link_sound "exhaust"			"vehicle/engine/_old/car_up"}
;		{link_sound "move"				"vehicle/wheels/car/"}
	}
	{on pierce sync
		{vehicle_health_damage_pierce}
	}


	{on "blast_body"
		{if min_energy 40
			{impulse up 1.5 0.5 dir 1.5 0.5}
		 else min_energy 25
			{impulse up 0.8 0.3 dir 0.8 0.3}
		}
		{call "explosion"}
	}

	{on "pierce_fuel"
		{if rand 0.5
			{call_synced "pierce_fuel_rand"}
		}
	}

	{on "pierce_fuel_rand"
		{volumes "fuel" disable bullet contact blast}
		{spawn "tank_die_particle"}
		{call "burn"}
	}

	{on contact sync
		{call "contact_vehicle"}
	}

	{on "contact_vehicle"
		{if not impregnable
			{if effector "armored_car"
				;// do nothing
			else effector "tank"
				{if effector_velocity 6
					{call "crush"}
				}
			else effector "railway"
				{if effector_velocity 6
					{call "crush"}
				}
			}
		}
	}

	{on break
		{if not tagged "exploded"
			{if component "cabin"
				{tags add "body_brake"}
				{spawn "car_die_particle"}
				{crew_enable group "crew" 0}
				{view start "smoke3"}
				{delay 10 {view pause "smoke3"}}
			else component "body"
				{spawn "car_die_particle"}
				{tags add "body_brake"}
			else component "engine"
				{tags add "engine_brake"}
				{spawn "car_die_particle" "engine"}
				{view start "smoke1"}
				{delay 40 {view pause "smoke1"}}
				{view start "steam"}
				{delay 2  {view pause "steam"}}
			}
		}
	}

	{on repair
		{if component "engine"
			{view pause "smoke1"}
		}
	}

	{on "burn"
		{if not burned
			;{call "_burn"}
		}
	}

	{on "check_burn_emit"
		{call "burn_emit"}
	}

	{on "_explosion"
		{if not "crush"
			{spawn "vehicle_die" "basis"}
			;{spawn "tank_die_particle"}
			{impulse up 2.5 1.5 dir 2 1}
		}
	}

	{on "spawn_shellhole"
		{spawn "shellhole_dead_car2" "basis"}
	}

	{on "tear"
		{spawn	"spheredust_small"}
		{component destroy}
		{if volume "bodyback"
			{volume disable visible bullet contact}
		}
		{tear "piece_medium_steel" bone from_volume
			{impulse up 2 1 dir 2 1}
;//			{burn first_volume fx "smoke_black" time 10 5}
			{add_view "smoke_black" "smoke" "basis"}
			{view start "smoke"}
			{delay_effect 10 5 "pause"}
		}
	}

	{on "slice_load"
		{if name "car_part"
			{with_effector
				{add_view "smoke_black" "smoke" "basis"}
			}
		}
	}

	{on "cut_parts"
		{add_view "fire_dead_vehicle" "deathfx" "engine"}
		{add_view "smoke_dead_vehicle" "deathfx_smoke" "engine"}
		{view start "deathfx"}
		{delay 300 50
			{view stop "deathfx"}
			{view start "deathfx_smoke"}
			{delay 300 50
				{view stop "deathfx_smoke"}
			}
		}
		(define "cut_part"
			{if rand %1
				{tear "piece_medium_steel" bone %0
					{impulse up 4 1 dir 5 2 cx 5 2 cy 5 2 rnd_dir 6 no_position}
					{delay_effect 20 5 "stop"}
				}
			}
		)
		("cut_part" args "part1" 0.6)
		("cut_part" args "part2" 0.6)
		("cut_part" args "part3" 0.6)
		("cut_part" args "part4" 0.6)
		("cut_part" args "part5" 0.6)
		("cut_part" args "part6" 0.6)
		("cut_part" args "part7" 0.6)
		("cut_part" args "part8" 0.6)
		("cut_part" args "part9" 0.6)
		("cut_part" args "part10" 0.6)
		;// cut teared bones after SetSkeleton
		;{delay 14 5 {view stop "deathfx"}}
	}

	{on "crush"
		{component destroy}
		{set "crush" 1}
		{call "explosion"}
	}
	(define "animation_sound"
		{on animation_event %0
			{play_sound %0}
		}
	)

	{on "car_destroyed"
		{if not tagged "car_destroyed"
			{tags add "car_destroyed"}
			{tags add "no_scavenge"}
			{if not tagged "body_break"
				{components "body" break}
			}
			{damage_report "body" "component/body_destroyed"}
			{able select 0}
			{able repaired 0}
			{able minimap 0}
			{delay 2
				{kick_entity_manager}
				{tags add "destroyed"}
			}
		}
	}

	{on animation_event "truck_open"
		{play_sound "truck_open"}
	}
	{on animation_event "truck_close"
		{play_sound "truck_close"}
	}
	{on animation_event "car_open"
		{play_sound "car_open"}
	}
	{on animation_event "car_close"
		{play_sound "car_close"}
	}
	{on animation_event "tailgate_open"
		{play_sound "tailgate_open"}
	}
	{on animation_event "tailgate_close"
		{play_sound "tailgate_close"}
	}
}

;/*=========== Car End ===========*/

{"truck"
	{on "contact_vehicle" overload
		{if not impregnable
			{if not effector "armored_car"
				{if effector "tank"
					{call "crush_damage"}
				else effector "railway"
					{call "crush_damage"}
				}
			}
		}
	}

	{on "crush_damage"
		{if effector_velocity 12
			{call "crush"}
		else effector_velocity 6
			{component break}
		}
	}
}

;/*=========== General Props Begin ===========*/

{"wheeled"
	{on "cut_parts"
		(define "cut_part"
			{if rand %1
				{tear "piece_medium_steel" bone %0
					{impulse up 4 1 dir 5 2 cx 5 2 cy 5 2 rnd_dir 6 no_position}
					{delay_effect 20 5 "stop"}
				}
			}
		)
		("cut_part" args "wheell"  0.5)
		("cut_part" args "wheelr"  0.5)
		("cut_part" args "wheell1" 0.5)
		("cut_part" args "wheelr1" 0.5)
		("cut_part" args "wheell2" 0.5)
		("cut_part" args "wheelr2" 0.5)
		("cut_part" args "wheell3" 0.5)
		("cut_part" args "wheelr3" 0.5)
		("cut_part" args "wheell4" 0.5)
		("cut_part" args "wheelr4" 0.5)
	}
}

{"wheeled vehicle"
	{on blast							;// blastwave hits specific volume
		{if volume "wheel"
			{if stuff "mine"
				{if min_energy 4
					{call "tear_wheel"}
				}
			else min_energy 4
				;{call "tear_wheel"}
			}
		}
	}

	{on "dont_move"
		{tags add "wheel_destroyed"}
		{call "check_work_mover"}
		{crew_enable place "driver" 0}
	}

	{on "tear_wheel"
		{tags add "wheel_destroyed"}
		{tags add "no_scavenge"}
		{spawn "spheredust_small"}
		{component destroy}
		{tear "piece_medium_steel" bone from_volume id "wheel"
			{volumes disable bullet contact blast}				;// prevent destroing at spawn moment
			{impulse up 6 1 forward -2 2 dir 2 1 cx 2 1 cy 2 1 rnd_dir 1}
			{add_view "smoke_dead_wheel" "smoke" "basis"}
			{view start "smoke"}
			{delay_effect 10 5 "pause"}
		}
		{impulse up 0.3}
		{call "check_work_mover"}
	}

	{on "check_work_mover" overload
		{if tagged "wheel_destroyed"
			{chassis_work 0}
		else
			{if not work "mover"
				{chassis_work 0}
			else broken "wheel" 4
				{chassis_work 0}
			else broken "wheel" 3
				{chassis_work 1}
				{movement_limit slow}
			else broken "wheel" 2
				{chassis_work 1}
				{movement_limit slow}
			else broken "wheel" 1
				{chassis_work 1}
				{movement_limit normal}
			else tagged "engine_turned_off"
				{chassis_work 0}
				{movement_limit fast}
			else
				{chassis_work 1}
				{movement_limit fast}
			}
		}
	}

	{on break
		{if not tagged "exploded"
			{if component "wheel"
				{if not linked
					{if not velocity 0.5
						{call "break_wheel_impulse"}
					}
				}
			}
		}
	}

	{on destroy
		{if not tagged "exploded"
			{if component "wheel"
				{call "tear_wheel"}
			}
		}
	}

	{on "break_wheel_impulse"  ;// Allows to be overridden in certain vehicles
		{impulse up 0.001}
	}
}

{"halftrack"
	{on "tear_wheel" overload				;// event when wheel is called to be torn off
		{if tagged "wheel_teared"			;// 2nd wheel torn
			{call "engine_off"}
			{tags add "wheel_destroyed"}
			{tags add "no_scavenge"}
		else
			{tags add "wheel_teared"}		;// 1st wheel torn
			{movement_limit slow}
		}
		{spawn "spheredust_small"}
		{component destroy}
		{tear "piece_medium_steel" bone from_volume id "wheel"
			{volumes disable bullet contact blast}				;// prevent destroing at spawn moment
			{impulse up 6 1 forward -2 2 dir 2 1 cx 2 1 cy 2 1 rnd_dir 1}
			{add_view "smoke_dead_wheel" "smoke" "basis"}
			{view start "smoke"}
			{delay_effect 10 5 "pause"}
		}
		{impulse up 0.3}
		{call "check_work_mover"}
	}
}

{"aero_sled"
	{on "stop_trace_engine"
		{view pause "dust"}
		{view pause "dust_snow"}
		{view pause "dust_sand"}
	}

	{on "play_trace_engine"
		{if terrain_fx "ground"
			{view start "dust_sand"}
		else terrain_fx "country_road"
			{view start "dust_sand"}
		else terrain_fx "sand"
			{view start "dust_sand"}
		else terrain_fx "snow"
			{view start "dust_snow"}
		else terrain_fx "grass"
			{view start "dust"}
		else terrain_fx "water"
			{view pause "dust"}
			{view pause "dust_snow"}
		else terrain_fx "mud"
			{view start "dust"}
		else terrain_fx "puddle"
			{view start "dust"}
		else terrain_fx "road"
			{view start "dust"}
		}
	}

	{on accelerate on overload}					;// stops extra interaction calls from vehicle.inc

	{on accelerate off overload}				;// stops extra interaction calls from vehicle.inc

	{on move on overload				;// vehicle moves forward or reverse
		{kill_delay "engine_decel"}
		{stop_sound "engine_idle"}
		{stop_sound "engine_decelerate"}
		{if "engine_on"
			{play_sound "engine_accelerate"}
			{delay 3.8 "engine_accel"
				{play_sound "engine_full" 1}
				{stop_sound "engine_accelerate"}
			}
		}
	}

	{on move off overload				;// vehicle not moving forward or reverse
		{kill_delay "engine_accel"}
		{stop_sound "engine_full"}
		{stop_sound "engine_accelerate"}
		{if "engine_on"
			{play_sound "engine_decelerate"}
			{delay 3.5 "engine_decel"
				{if "engine_on"
					{play_sound "engine_idle" 1}
					{stop_sound "engine_decelerate"}
				}
			}
		}
	}

	{on engine on overload				;// any vehicle moves forward, reverse or preforming neutral turn
		{call "play_trace_engine"}
		{if "hidden"
			{call "engine_idle"}
			{call "play_trace_engine"} 		;// plays dust fx for aero vehicles
			{call "update_lights"}
			{set "hidden" 0}
			{stop_sound "engine_idle" 1}
			{if "engine_on"
				{play_sound "engine_accelerate"}
				{delay 3.8 "engine_accel"
					{play_sound "engine_full" 1}
					{stop_sound "engine_accelerate"}
				}
			}
		}
	}

	{on engine off overload}				;// stops extra interaction calls from vehicle.inc

	{on animation_end "engine_start"
		{ani_play "engine_work" loop}
		{stop_sound "engine_stop"}
		{delay 4.5
			{stop_sound "engine_start"}
		}
	}

	{on "engine_on" overload				;// settings for engine when switched on
		{if not "engine_on"
			{if work "body"
				{chassis_work 0}
				{tags remove "engine_turned_off"}
				{play_sound "engine_start"}
				{set "engine_on" 1}
				{call "update_lights"}
				{ani_play "engine_start" 0.85 callback}
				{view start "engine_exhaust"}
				{delay 1 "engine_startup"
					{view pause "engine_exhaust"}
					{call "play_trace_engine"}
					{call "prop_spin"}
				}
				{delay 5.9 "engine_startup"
					{call "engine_idle"}
				}
				{tags remove "splash"}
			}
		}
	}

	{on "engine_off" overload
		{kill_delay "engine_startup"}				;// stops engine startup sequence
		{if operatable
			{tags add "engine_turned_off"}
		}
		{set "engine_on" 0}
		{call "update_lights"}
		{stop_sound "engine_accelerate"}
		{stop_sound "engine_decelerate"}
		{stop_sound "engine_start"}
		{stop_sound "engine_full"}
		{stop_sound "engine_idle"}
		{kill_delay "engine_accel"}
		{kill_delay "engine_decel"}
		{kill_delay "engine_idle"}
		{play_sound "engine_stop"}
		{delay 0.6
			{call "stop_trace_engine"}
			{ani_stop "engine_start"}
			{ani_stop "engine_work"}
			{ani_play "engine_stop"}
			{call "prop_still"}
			{chassis_work 0}
		}
	}

	{on "engine_idle" overload ; settings for engine while idle
		{if work "engine"
			{if not tagged "wheel_destroyed"				;// Checks if wheel has been torn off
				{chassis_work 1}
			}
			{set "engine_on" 1}
			{ani_play "engine_work" loop}
			{play_sound "engine_idle" 1}
		}
	}

	{on "engine stop view"				;// called on engine and body break
		{call "engine_off"}
		{call "update_lights"}
		{view pause "exhaust"}
		{view pause "exhaust2"}
	}
	{on "engine fullstop"				;// called on explosion
		{bone hide "engine_work"}
		{call "prop_still"}
		{bone hide "propeller_work"}
	}

	{on operatable off
		{if not tagged "engine_turned_off"			;// stops engine off sequence from occuring if engine is already turned off.
			{call "engine_off"}
		}
	}

	{on "engine_not_run"
		{set "engine_on" 0}
		{ani_stop "engine_start"}
		{ani_stop "engine_work"}
		{ani_play "engine_stop"}
		{stop_sound "engine_idle"}
		{stop_sound "engine_full"}
		{stop_sound "engine_accelerate"}
		{stop_sound "engine_decelerate"}
		{kill_delay "engine_accel"}
		{kill_delay "engine_decel"}
		{call "stop_trace_engine"}
		{delay 0.01
			{ani_stop "engine_stop"}
			{call "prop_still"}
			{bone hide "propeller_work"}
			{bone hide "engine_work"}
		}
	}

	{on "prop_spin"			;// disables volumes for each individual propeller blade and enables cylinder volume for spinning blades
		{volumes "still" disable all}
		{volumes "spin" enable contact bullet blast touch}
	}
	{on "prop_still"		;// disables cylinder volume for spinning blades and enables volumes for each individual propeller blade
		{volumes "still" enable contact bullet blast touch}
		{volumes "spin" disable all}
	}

	{on "tear_wheel" overload				;// event when ski is called to be torn off
		{if tagged "wheel_teared"			;// 2nd ski torn
			{call "engine_off"}
			{tags add "wheel_destroyed"}
			{tags add "no_scavenge"}
		else
			{tags add "wheel_teared"}		;// 1st ski torn
			{movement_limit slow}
		}
		{spawn	"spheredust_small"}
		{component destroy}
		{tear "piece_medium_steel" bone from_volume id "wheel"
			{volumes disable bullet contact blast}				;// prevent destroing at spawn moment
			{impulse up 6 4 dir 7 3}
		}
		{impulse up 0.3}
		{call "check_work_mover"}
	}

	{on "check_work_mover" overload
		{if tagged "wheel_destroyed"		;// 2nd ski torn
			{chassis_work 0}
			{call "emit_crew"}
		else
			{if not work "mover"
				{chassis_work 0}
			else broken "wheel" 3
				{chassis_work 0}
			else broken "wheel" 2
				{chassis_work 1}
				{movement_limit slow}
			else broken "wheel" 1
				{chassis_work 1}
				{movement_limit normal}
			else
				{chassis_work 1}
				{movement_limit fast}
			}
		}
	}
}

{"katusha car"
	{on spawn
		{add_view	"dust_bm13"		"dust"			"gun_rot"}
		{add_view	"dust_bm13_snow"	"snow"			"gun_rot"}
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
	}
	{on fire "gun" overload
		(define "bm13_fire"
			{if terrain_fx "snow"
				{view start "snow"}
				{delay 0.3 {view pause "snow"}}
			else terrain_fx "ice"
				{view start "snow"}
				{delay 0.3 {view pause "snow"}}
			else terrain_fx "shallow_water"
				;nothing
			else
				{view start "dust"}
				{delay 0.3 {view pause "dust"}}
			}
		)
		{play_sound "bkg_rocket"}
		{if name "00"
			("bm13_fire")
		else name "01"
			("bm13_fire")
		else name "02"
			("bm13_fire")
		else name "03"
			("bm13_fire")
		else name "04"
			("bm13_fire")
		else name "05"
			("bm13_fire")
		else name "06"
			("bm13_fire")
		else name "07"
			("bm13_fire")
		else name "08"
			("bm13_fire")
		else name "09"
			("bm13_fire")
		else name "10"
			("bm13_fire")
		else name "11"
			("bm13_fire")
		else name "12"
			("bm13_fire")
		else name "13"
			("bm13_fire")
		else name "14"
			("bm13_fire")
		else name "15"
			("bm13_fire")
		}
		{ik_enable "turret" 0}
		{ik_enable "gun_rot" 0}
		{delay 1
			{if work "turret"
				{if work "gun"
					{ik_enable "turret" 1}
					{ik_enable "gun_rot" 1}
				}
			}
		}
	}
	{on "__explosion"
		{set "big_explosion" 0}
		{if explosive_amount 50
			{blastwave c4 20 r0 10 r1 25}
			{spawn "tank_die_light" "basis"}
			{set "big_explosion" 1}
		}
	}
	{on "spawn_shellhole"
		{if "big_explosion"
			{spawn "crater_big" "basis" terrain_texmod}
			{spawn "shellhole_big_dead" "basis"}
		}
	}
	{on engine on
		{weapon_work "gun" 0}
	}
	{on engine off
		{if not tagged "gun_brake"
			{if work "gun"
				{weapon_work "gun" 1}
			}
		}
	}
	{##on blast				;// blastwave hits specific volume
		{if volume "body"
			{if min_energy 3
				{call "blast_body"}
			else min_energy 1
				{if rand 0.6
					{call_synced "blast_body"}
				}
			else stuff "grenade"
				{if rand 0.4
					{call_synced "blast_body"}
				}
			}
		}
	}
}

{"fuel_tank"
	{on break_armor
		{if volume "fuel"
			{if not able "exploded"
				{if name "pierce"
					{if stuff "bullet"
						{burn fx "drops_fuel_small_short" fake}
					else stuff "ptr"
						{burn fx "drops_fuel_small_short" fake}
					}
				}
				{if name "blast"
					{if min_energy 2
						{call "explosion"}
					else min_energy 1
						{if rand 1
							{call "explosion"}
						}
					}
				}
			}
		}
	}
	{on "_explosion"
		{spawn "fuel_die" "basis"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 8 time 1 heating 10}
		{fire radius 6 time 10 heating 2}
	}
}

{"dead_vehicle"
	{on "explosion"
		{if not "exploded"
			{set "exploded" 1}
			{call "_explosion"}
		}
	}
	{on "_explosion" sync
		;{start_sound "detonation/explosion_vehicle/"}
		{delay_ex 0
			{set_skeleton "_x" sync}
			{ani_play "death"}
			{call "cut_parts"}
		}
	}
	{on "cut_parts"
		{add_view "smoke_dead_wheel" "smoke" "basis"}
		{view start "smoke"}
		{delay 20 10
			{view stop "smoke"}
		}
		(define "cut_part"
			{tear "piece_medium_steel" bone %0
				{impulse up 4 1 dir 5 2 cx 5 2 cy 5 2 rnd_dir 6 no_position}
;//				{add_view "smoke_dead_wheel" "smoke" "basis"}
;//				{view start "smoke"}
				{delay_effect 20 5 "stop"}
			}
		)
		("cut_part" args "part1")
		("cut_part" args "part2")
		("cut_part" args "part3")
		("cut_part" args "part4")
		("cut_part" args "part5")
		("cut_part" args "part6")
	}
}

;/*=========== General Props End ===========*/

;/*=========== Car Specifics Begin  ===========*/


(define "tractor_sound"
	{on "add_movement_sound" overload
		{link_sound "move"					"vehicle/wheels/engine_tractor"}
		{link_sound "engine_full"			"vehicle/engine/_old/engine_tractor"}
		{link_sound "engine_stop"			"vehicle/engine/_old/engine_tractor_end"}
		{link_sound "exhaust"				"vehicle/engine/_old/engine_tractor_up"}
		{link_sound "engine_idle"		    "vehicle/engine/_old/engine_tractor_idle"}
	}
)

{"gaz_aaa"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
}
{"gaz_aaa_72k"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")

	{on fire "gun"
		{ani_play "recoil"}
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{call "spawn_shell"}
	}
}
{"gaz_aaa_supply"
	("zis5_sound")
}
{"gaz_fuel"
	("zis5_sound")
}
{"gaz67"
	("gaz_sound")
}
{"gaz67b"
	("gaz_sound")
}
{"zis5 car"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
}
{"zis5eng car"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"bm13_studebaker car"
	("studebaker_sound")
}

{"kubel car"
	("kubel_sound")
}
{"kubelwagen car"
	("kubel_sound")
}
{"kubelwagen_mg car"
	("kubel_sound")
}
{"kubelwagen_dak car"
	("kubel_sound")
}

{"kettenkrad"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/r12/start"}
		{link_sound "engine_stop"		"vehicle/engine/r12/stop"}
		{link_sound "engine_idle"		"vehicle/engine/r12/idle"}
		{link_sound "engine_full"		"vehicle/engine/r12/full"}
		{link_sound "exhaust"			"vehicle/engine/r12/exhaust"}
		{link_sound "move"				"vehicle/wheels/halftrack"}

		{link_sound "wheel_ground"  			"vehicle/tracks/overlay/track_overlay_ground"}
		{link_sound "wheel_sand"				"vehicle/tracks/overlay/track_overlay_ground"}
		{link_sound "wheel_grass" 				"vehicle/tracks/overlay/track_overlay_ground"}
		{link_sound "wheel_water" 				"vehicle/tracks/overlay/track_overlay_water"}
		{link_sound "wheel_puddle" 				"vehicle/tracks/overlay/track_overlay_water"}
		{link_sound "wheel_mud" 				"vehicle/tracks/overlay/track_overlay_mud_snow"}
		{link_sound "wheel_snow" 				"vehicle/tracks/overlay/track_overlay_mud_snow"}
		{link_sound "wheel_road" 				"vehicle/tracks/overlay/track_overlay_road"}
		{link_sound "wheel_rock" 				"vehicle/tracks/overlay/track_overlay_rock"}
		{link_sound "wheel_wood" 				"vehicle/tracks/overlay/track_overlay_wood"}
	}
}

{"kettenkrad_eng"
	{on "add_movement_sound" overload
		{link_sound "engine_start"		"vehicle/engine/r12/start"}
		{link_sound "engine_stop"		"vehicle/engine/r12/stop"}
		{link_sound "engine_idle"		"vehicle/engine/r12/idle"}
		{link_sound "engine_full"		"vehicle/engine/r12/full"}
		{link_sound "exhaust"			"vehicle/engine/r12/exhaust"}
		{link_sound "move"				"vehicle/wheels/halftrack"}

		{link_sound "wheel_ground"  			"vehicle/tracks/overlay/track_overlay_ground"}
		{link_sound "wheel_sand"				"vehicle/tracks/overlay/track_overlay_ground"}
		{link_sound "wheel_grass" 				"vehicle/tracks/overlay/track_overlay_ground"}
		{link_sound "wheel_water" 				"vehicle/tracks/overlay/track_overlay_water"}
		{link_sound "wheel_puddle" 				"vehicle/tracks/overlay/track_overlay_water"}
		{link_sound "wheel_mud" 				"vehicle/tracks/overlay/track_overlay_mud_snow"}
		{link_sound "wheel_snow" 				"vehicle/tracks/overlay/track_overlay_mud_snow"}
		{link_sound "wheel_road" 				"vehicle/tracks/overlay/track_overlay_road"}
		{link_sound "wheel_rock" 				"vehicle/tracks/overlay/track_overlay_rock"}
		{link_sound "wheel_wood" 				"vehicle/tracks/overlay/track_overlay_wood"}
	}
}

{"blitz3_6"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
}

{"blitz3_6_flak30"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")

	{on fire "gun"
		{ani_play "recoil"}
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{call "spawn_shell"}
	}

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		{inherited}
	}
}
{"blitz3_6_ammo"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"blitz3_6_fuel"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"blitz3_6_radio"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
	("animation_sound" args "open_radio")
}

{"blitz3_6_engineering"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"blitz3_6_art_ammo"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"opel_maultier"
	("opel_maultier_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
}

{"sdkfz10"
	("hanomag_sound")
}
{"universal"
	("s60_sound")
}

;/*=========== Car Specifics End  ===========*/
