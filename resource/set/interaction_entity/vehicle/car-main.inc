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

		{add_view	"smoke_broken_engine"	"smoke1"			"FXfire1"}
		{add_view	"steam"					"steam"				"FXsteam"}
		{add_view	"exhaust_dark_small"	"exhaust"			"FXsmoke1"}
		{add_view	"exhaust_dark_small2"	"exhaust2"			"FXsmoke1"}
		{add_view	"smoke_fire_fuel"		"fire_fuel"			"fuel"}
		{add_view	"smoke_fire_fuel"		"fire_fuel1"		"fuel"}
		{add_view	"smoke_fire_fuel"		"fire_fuel2"		"fuel"}

		{link_sound "wheel_ground"  	"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_sand"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_grass"		"vehicle/wheels/overlay/wheel_overlay_ground"}
		{link_sound "wheel_water"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_puddle"		"vehicle/wheels/overlay/wheel_overlay_water"}
		{link_sound "wheel_mud"			"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_snow"		"vehicle/wheels/overlay/wheel_overlay_mud_snow"}
		{link_sound "wheel_road"		"vehicle/wheels/overlay/wheel_overlay_road"}
		{link_sound "wheel_rock"		"vehicle/wheels/overlay/wheel_overlay_rock"}
		{link_sound "wheel_wood"		"vehicle/wheels/overlay/wheel_overlay_wood"}
;//		{link_sound "interior_mg"		"weapon/shot/mgun/mg_interior"}

		{link_sound "truck_open"		"vehicle/doors/truck/open"}
		{link_sound "truck_close"		"vehicle/doors/truck/close"}
		{link_sound "tailgate_open"		"vehicle/doors/tailgate/open"}
		{link_sound "tailgate_close"	"vehicle/doors/tailgate/close"}
		{link_sound "car_open"			"vehicle/doors/car/open"}
		{link_sound "car_close"			"vehicle/doors/car/close"}
	}

	{on "add_movement_sound"}

	(define "fuel_big_pierce"
		{if volume "%volume"
			{tags add "%volume_hit"}
			{delay 0.1
				{tags remove "%volume_hit"}
			}
			{if stuff "shell"
				{if stuff "size2"
					{if not tagged "%volume_explode"
						{tags add "%volume_explode"}
						{call "fuel_explosion"}
					}
				else stuff "size3"
					{if not tagged "%volume_explode"
						{tags add "%volume_explode"}
						{call "fuel_explosion"}
					}
				else stuff "size4"
					{if not tagged "%volume_explode"
						{tags add "%volume_explode"}
						{call "fuel_explosion"}
					}
				}
			}
		}
	)
	(define "at_grenade_pierce"						;// {on pierce} HEAT grenades penetrate specific components
		{if stuff "cumulative_charge"
			{if component "body"
				{if rand %pierce_body_brake
					{if work "body"
						{call_synced "body_break"}
					else rand %pierce_body_destroy
						{call_synced "car_destroyed"}
					}
				else rand %pierce_body_destroy
					{if not work "body"
						{call_synced "car_destroyed"}
					}
				}
			else component "engine"
				{if rand %pierce_engine_brake
					{if work "engine"
						{call_synced "engine_break"}
					else rand 0.5
						{call_synced "engine_destroy"}
					}
				}
			else
				{component break}
			}
		}
	)
	{on "body_break"
		{components "body" break}
	}
	{on "engine_break"
		{components "engine" break}
	}
	{on "engine_destroy"
		{components "engine" destroy}
	}

	{on pierce sync
		{vehicle_health_damage_pierce}
		{if component "body"
			{if operatable
				{if stuff "ptr"
					{kill_delay "crew_shock_time"}		;// resets shock time
					{call "crew_stunned"}
					{delay 5 1 "crew_shock_time"
						{call_synced "crew_revive"}
					}
					{delay 4 1 "crew_shock_time"
						{call_synced "driver_revive"}
					}
				else stuff "auto"
					{kill_delay "crew_shock_time"}		;// resets shock time
					{call "crew_stunned"}
					{delay 5 1 "crew_shock_time"
						{call_synced "crew_revive"}
					}
					{delay 4 1 "crew_shock_time"
						{call_synced "driver_revive"}
					}
				else stuff "shell"
					{kill_delay "crew_shock_time"}		;// resets shock time
					{call "crew_stunned"}
					{delay 7 1 "crew_shock_time"
						{call_synced "crew_revive"}
					}
					{delay 5 1 "crew_shock_time"
						{call_synced "driver_revive"}
					}
				}
			}
		}
		("fuel_big_pierce" volume(fuel1))
		("fuel_big_pierce" volume(fuel2))
		("fuel_big_pierce" volume(fuel))
		("at_grenade_pierce"								;// HEAT Grenades (RPG40, RPG43, PWM1)
			pierce_body_brake(1)
			pierce_body_destroy(0.5)
			pierce_engine_brake(1)
		)
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

;/*=========== Stun Begin ===========*/

	{on "crew_stunned"									;// disables vehicle movement and weapons
		{if work "mover"
			{chassis_work 0}
			{tags add "stopped"}
		}
		{if work "turret"
			{ik_enable "turret" 0}
			{tags add "turret_jammed"}
		}
		{weapon_work "gun" 0}
		{weapon_work "gun1" 0}
		{weapon_work "gun2" 0}
		{weapon_work "gun3" 0}
		{weapon_work "mgun" 0}
		{weapon_work "mgun1" 0}
		{weapon_work "mgun2" 0}
		{weapon_work "mgun3" 0}
		{weapon_work "mgun4" 0}
		{weapon_work "mgun5" 0}
		{call "shock_check"}
	}

	{on "shock_check"
		{delay 0.3
			{if operatable 		;// checks if there is any crew in vehicle
				{if work "body"
					{if tagged "stopped"
						{damage_report "crew" "component/shock"}
					else
						;//do nothing
					}
				}
			}
		}
	}

	{on "crew_revive"									;// enables vehicle movement and weapons after being temporarily disabled
		{if not tagged "deactivated"					;// checks to make sure the hull is not broken or destroyed
			{if not tagged "gun_brake"
				{weapon_work "gun" 1}
			}
			{weapon_work "gun1" 1}
			{weapon_work "gun2" 1}
			{weapon_work "gun3" 1}
			{weapon_work "mgun" 1}
			{weapon_work "mgun1" 1}
			{weapon_work "mgun2" 1}
			{weapon_work "mgun3" 1}
			{weapon_work "mgun4" 1}
			{weapon_work "mgun5" 1}


			{if tagged "turret_jammed"
				{tags remove "turret_jammed"}
				{if tagged "turret_brake"				;// checks if the turret is broken
					;//do nothing
				else tagged "turret_stopped_by_body"	;// checks if the body is broken
					;//do nothing
				else
					{ik_enable "turret" 1}
				}
			}
		else
			{tags remove "stopped"}
			{tags remove "turret_jammed"}
		}
	}

	{on "driver_revive"
		{if tagged "stopped"
			{tags remove "stopped"}
			{if work "mover"
				{if not tagged "engine_brake"
					{if "engine_on"
						{if not tagged "wheel_destroyed"
							{if not tagged "wheels_broken"	;// Checks if too many wheels are broken
								{chassis_work 1}
							}
						}
					}
				}
			}
		}
	}

;/*=========== Stun End ===========*/

	{on contact sync
		{call "contact_vehicle"}
	}

	{on "contact_vehicle"
		{if not impregnable
			{if effector "armored_car"
				;// do nothing
			else effector "tank"
				{if effector_velocity 6
					{call_synced "crush"}
				}
			else effector "railway"
				{if effector_velocity 6
					{call_synced "crush"}
				}
			}
		}
	}

	{on break
		{if not tagged "exploded"
			{if component "body"
				{start_sound "crush/medium/metal"}
				{spawn "car_die_particle"}
				{tags add "body_break"}
				{crew_enable group "crew" 0}
				{reset_manual_control}
				{able select 0}			;// disables vehicle from being crewed until body is repaired
				{unlink_trailer}
			else component "engine"
				{start_sound "crush/medium/metal"}
				{tags add "engine_brake"}
				{spawn "car_die_particle" "engine"}
				{view start "smoke1"}
				{delay 40 {view pause "smoke1"}}
				{view start "steam"}
				{delay 2  {view pause "steam"}}
			else component "turret"
				{tags add "turret_brake"}
				{start_sound "crush/medium/metal"}
			}
		}
	}
	(define "fuel_explosion"
		{burn volume "%volume" fx "ex_fuel_tank" time 0.01 fake}
		{start_sound "detonation/cook_off/ext_explosion"}
		{fire radius 2 time 1 heating 1}
		{delay_ex 0
			{tear "piece_large_steel" bone "%volume" id "%volume"
				{delete}
			}
		}
		{if not tagged "engine_break"
			{components "engine" break}
		}
		{delay 1
			{components "engine" destroy}
		}
	)

	{on "fuel_explosion"
		{delay 0.01
			{if tagged "fuel_explode"
				("fuel_explosion" volume(fuel))
			}
			{if tagged "fuel1_explode"
				("fuel_explosion" volume(fuel1))
			}
			{if tagged "fuel2_explode"
				("fuel_explosion" volume(fuel2))
			}
		}
		{call "vehicle_destroyed"}
	}

	{on destroy
		{if component "fuel"
			{call "fuel_destroyed"}
		}
	}

	{on "fuel_destroyed"
		{if not tagged "exploded"
			{burn fx "smoke_fire_fuel_leak" time 25 fake}
		}
		{delay 0.01
			{if tagged "fuel1_hit"
				{burn volume "fuel1" fx "smoke_fire_fuel" time 120 fake}
			else tagged "fuel2_hit"
				{burn volume "fuel2" fx "smoke_fire_fuel" time 120 fake}
			else
				{burn volume "fuel" fx "smoke_fire_fuel" time 120 fake}
			}
			{play_sound "flame" 1}
		}
		{delay 15 5
			{if not tagged "engine_break"
				{components "engine" break}
			}
			{delay 1
				{components "engine" destroy}
			}
		}
		{delay 120
			{stop_sound "flame"}
		}
	}

	(define "at_grenade_blast"								;// {on break_armor} for AT grenades that use blast and not pierce to cause damage to components
		{if name "blast"
			{if tagged "grenade"
				{set "already_blasted" 1}
				{if component "body"
					{if rand %pierce_body_brake
						{if work "body"
							{call_synced "body_break"}
						else
							{call_synced "hull_destroyed"}
						}
					}
				else component "engine"
					{if rand %pierce_engine_brake
						{if work "engine"
							{call_synced "engine_break"}
						else
							{call_synced "engine_destroy"}
						}
					}
				else volume "hatch"
					{components "turret" break}
				else volume "cupola"
					{components "turret" break}
				else
					{component break}
				}
				{delay 0.25
					{set "already_blasted" 0}
				}
			}
		}
	)

	{on break_armor
		("at_grenade_blast"					;// Explosive AT Grenades (M24 Geballteladung, Hafthohlladung)
			pierce_body_brake(1)
			pierce_engine_brake(1)
		)
	   ;///ordos+++++
	   	{if component "body"
	   	 else volume "inventory"
		 	{call "blast_body"}

		}
	   ;//ordos-----

	}

	{on break_armor_again
		("at_grenade_blast"					;// Explosive AT Grenades (M24 Geballteladung, Hafthohlladung)
			pierce_body_brake(0.5)
			pierce_engine_brake(0.5)
		)
	}

	{on blast							;// blastwave hits specific volume
		{if component "body"
			{if min_energy 8
				{component destroy}
				{call "explosion"}
			}
		}
		{if volume "fuel1"
			{tags add "fuel1_hit"}
			{delay 0.1
				{tags remove "fuel1_hit"}
			}
			{if min_energy 3
				{if not tagged "fuel1_explode"
					{tags add "fuel1_explode"}
					{call "fuel_explosion"}
				}
			}
		else volume "fuel2"
			{tags add "fuel2_hit"}
			{delay 0.1
				{tags remove "fuel2_hit"}
			}
			{if min_energy 3
				{if not tagged "fuel2_explode"
					{tags add "fuel2_explode"}
					{call "fuel_explosion"}
				}
			}
		else volume "fuel"
			{if min_energy 3
				{if not tagged "fuel_explode"
					{tags add "fuel_explode"}
					{call "fuel_explosion"}
				}
			}
		}
	}

	{on repair
		{if component "turret"
			{call "update_turret"}
			{tags remove "turret_brake"}
		else component "body"
			{call "update_turret"}
			{able "select" 1}
			{tags remove "body_break"}
			{crew_enable group "crew" 1}
		else component "engine"
			{view pause "smoke1"}
		}
	}

	(define "update_turret"
		{if work "turret%n"
			{if work "body"
				{ik_enable "turret%n" 1}
			 else
				{ik_enable "turret%n" 0}
			}
		else
			{ik_enable "turret%n" 0}
		}
	)

	{on "update_turret"
		("update_turret" n())
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
		else
			{spawn "tank_die_peaceful_light" "basis"}
			{impulse up 1.5 1.0 dir 1 0.5}
		}
	}

	{on "spawn_shellhole"
		{if not "crush"
			{spawn "shellhole_dead_car2" "basis"}
		}
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
			;{call "crush"}
			{component break}
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
	{on spawn
		{call "wheel_torn_check"}
	}

	(define "hide_wheel_spawn"
		{if tagged "%component_torn"
			{bone hide "%bone"}
			{bone hide "%component"}
			{volumes "%component" disable visible bullet blast contact contact_ground}
		}
	)

	{on "wheel_torn_check"
		("hide_wheel_spawn" component(wheelleft1) bone(wheell1))
		("hide_wheel_spawn" component(wheelleft2) bone(wheell2))
		("hide_wheel_spawn" component(wheelleft3) bone(wheell3))
		("hide_wheel_spawn" component(wheelleft4) bone(wheell4))
		("hide_wheel_spawn" component(wheelleft5) bone(wheell5))
		("hide_wheel_spawn" component(wheelleft6) bone(wheell6))
		("hide_wheel_spawn" component(wheelleft7) bone(wheell7))
		("hide_wheel_spawn" component(wheelleft8) bone(wheell8))
		("hide_wheel_spawn" component(wheelright1) bone(wheelr1))
		("hide_wheel_spawn" component(wheelright2) bone(wheelr2))
		("hide_wheel_spawn" component(wheelright3) bone(wheelr3))
		("hide_wheel_spawn" component(wheelright4) bone(wheelr4))
		("hide_wheel_spawn" component(wheelright5) bone(wheelr5))
		("hide_wheel_spawn" component(wheelright6) bone(wheelr6))
		("hide_wheel_spawn" component(wheelright7) bone(wheelr7))
		("hide_wheel_spawn" component(wheelright8) bone(wheelr8))
		("hide_wheel_spawn" component(wheell1) bone(wheell1))
		("hide_wheel_spawn" component(wheell2) bone(wheell2))
		("hide_wheel_spawn" component(wheell3) bone(wheell3))
		("hide_wheel_spawn" component(wheell4) bone(wheell4))
		("hide_wheel_spawn" component(wheell5) bone(wheell5))
		("hide_wheel_spawn" component(wheell6) bone(wheell6))
		("hide_wheel_spawn" component(wheell7) bone(wheell7))
		("hide_wheel_spawn" component(wheell8) bone(wheell8))
		("hide_wheel_spawn" component(wheelr1) bone(wheelr1))
		("hide_wheel_spawn" component(wheelr2) bone(wheelr2))
		("hide_wheel_spawn" component(wheelr3) bone(wheelr3))
		("hide_wheel_spawn" component(wheelr4) bone(wheelr4))
		("hide_wheel_spawn" component(wheelr5) bone(wheelr5))
		("hide_wheel_spawn" component(wheelr6) bone(wheelr6))
		("hide_wheel_spawn" component(wheelr7) bone(wheelr7))
		("hide_wheel_spawn" component(wheelr8) bone(wheelr8))
		("hide_wheel_spawn" component(wheelfront) bone(wheelfront))
	}

	{on blast							;// blastwave hits specific volume
		{if volume "wheel"
			{if stuff "mine"
				{if min_energy 4
					{call "tear_wheel"}
				}
			else min_energy 12.1 ;//150mm HE
				{if rand 1 {call_synced "tear_wheel"}}
			else min_energy 7.1 ;//105mm HE
				{if rand 0.5 {call_synced "tear_wheel"}}
			else min_energy 3.1 ;//75mm HE
				{if rand 0.25 {call_synced "tear_wheel"}}
			}
		}
	}

	{on pierce sync
		{if volume "wheel"
			{if stuff "auto"
				; do nothing
			else stuff "shell size1"
				; do nothing
			else stuff "shell size2"  ;//75mm
				{if rand 0.25 {call_synced "tear_wheel"}}
			else stuff "shell size3"  ;//105mm
				{if rand 0.5 {call_synced "tear_wheel"}}
			else stuff "shell"  ;//150mm and up
				{if rand 1 {call_synced "tear_wheel"}}
			}
		}
	}

	(define "check_wheel"
		{if tagged "%component_torn"
			{tags add "wheel_destroyed"}
		}
	)

	(define "check_wheel_x2"
		{if tagged "%component_torn"
			{if tagged "wheel_teared"			;// 2nd wheel torn
				{tags add "wheel_destroyed"}	;// disables movement
				{tags remove "wheel_teared"}
			else
				{tags add "wheel_teared"}		;// 1st wheel torn
				{movement_limit slow}
			}
		}
	)

	{on "check_wheel_torn"
		("check_wheel" component(wheelleft1))
		("check_wheel" component(wheelleft2))
		("check_wheel" component(wheelleft3))
		("check_wheel" component(wheelleft4))
		("check_wheel" component(wheelleft5))
		("check_wheel" component(wheelleft6))
		("check_wheel" component(wheelleft7))
		("check_wheel" component(wheelleft8))
		("check_wheel" component(wheelright1))
		("check_wheel" component(wheelright2))
		("check_wheel" component(wheelright3))
		("check_wheel" component(wheelright4))
		("check_wheel" component(wheelright5))
		("check_wheel" component(wheelright6))
		("check_wheel" component(wheelright7))
		("check_wheel" component(wheelright8))
		("check_wheel" component(wheell1))
		("check_wheel" component(wheell2))
		("check_wheel" component(wheell3))
		("check_wheel" component(wheell4))
		("check_wheel" component(wheell5))
		("check_wheel" component(wheell6))
		("check_wheel" component(wheell7))
		("check_wheel" component(wheell8))
		("check_wheel" component(wheelr1))
		("check_wheel" component(wheelr2))
		("check_wheel" component(wheelr3))
		("check_wheel" component(wheelr4))
		("check_wheel" component(wheelr5))
		("check_wheel" component(wheelr6))
		("check_wheel" component(wheelr7))
		("check_wheel" component(wheelr8))
		("check_wheel" component(wheelfront))
		{call "check_work_mover"}
	}

	(define "hide_wheel"
		{if component "%component"
			{delay 0
				{bone hide "%bone"}
				{bone hide "%component"}
				{volumes "%component" disable visible bullet blast contact contact_ground}
				{tags add "%component_torn"}
			}
		}
	)

	(define "show_wheel"
		{if component "%component"
			{bone show "%bone"}
			{bone show "%component"}
			{volumes "%component" enable visible bullet blast contact contact_ground}
			{tags remove "%component_torn"}
			{tags remove "wheel_destroyed"}
			{tags remove "wheel_teared"}
			{call "check_wheel_torn"}
		}
	)

	{on "dont_move"
		{tags add "wheel_destroyed"}
		{call "check_work_mover"}
		{crew_enable place "driver" 0}
	}

	{on "tear_wheel"
		{call "wheel_torn_logic"}
		{spawn "spheredust_small"}
		{component break}
		{tear "piece_medium_steel" bone from_volume id "wheel" copy
			{volumes disable bullet blast}				;// prevent destroing at spawn moment
			{impulse up 6 1 forward -2 2 dir 2 1 cx 2 1 cy 2 1 rnd_dir 1}
			{add_view "smoke_dead_wheel" "smoke" "basis"}
			{view start "smoke"}
			{delay_effect 10 5 "pause"}
		}
		("hide_wheel" component(wheelleft1) bone(wheell1))
		("hide_wheel" component(wheelleft2) bone(wheell2))
		("hide_wheel" component(wheelleft3) bone(wheell3))
		("hide_wheel" component(wheelleft4) bone(wheell4))
		("hide_wheel" component(wheelleft5) bone(wheell5))
		("hide_wheel" component(wheelleft6) bone(wheell6))
		("hide_wheel" component(wheelleft7) bone(wheell7))
		("hide_wheel" component(wheelleft8) bone(wheell8))
		("hide_wheel" component(wheelright1) bone(wheelr1))
		("hide_wheel" component(wheelright2) bone(wheelr2))
		("hide_wheel" component(wheelright3) bone(wheelr3))
		("hide_wheel" component(wheelright4) bone(wheelr4))
		("hide_wheel" component(wheelright5) bone(wheelr5))
		("hide_wheel" component(wheelright6) bone(wheelr6))
		("hide_wheel" component(wheelright7) bone(wheelr7))
		("hide_wheel" component(wheelright8) bone(wheelr8))
		("hide_wheel" component(wheell1) bone(wheell1))
		("hide_wheel" component(wheell2) bone(wheell2))
		("hide_wheel" component(wheell3) bone(wheell3))
		("hide_wheel" component(wheell4) bone(wheell4))
		("hide_wheel" component(wheell5) bone(wheell5))
		("hide_wheel" component(wheell6) bone(wheell6))
		("hide_wheel" component(wheell7) bone(wheell7))
		("hide_wheel" component(wheell8) bone(wheell8))
		("hide_wheel" component(wheelr1) bone(wheelr1))
		("hide_wheel" component(wheelr2) bone(wheelr2))
		("hide_wheel" component(wheelr3) bone(wheelr3))
		("hide_wheel" component(wheelr4) bone(wheelr4))
		("hide_wheel" component(wheelr5) bone(wheelr5))
		("hide_wheel" component(wheelr6) bone(wheelr6))
		("hide_wheel" component(wheelr7) bone(wheelr7))
		("hide_wheel" component(wheelr8) bone(wheelr8))
		("hide_wheel" component(wheelfront) bone(wheelfront))		;// kettenkrad
		{if not tagged "impluse"
			{impulse up 0.3}
			{tags add "impluse"}
			{delay 0.5
				{tags remove "impluse"}
			}
		}
		{call "check_work_mover"}
	}

	{on "wheel_torn_logic"
		{tags add "wheel_destroyed"}	;// disables movement
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
			{if broken "wheel" 4
				{tags add "wheels_broken"}
			else
				{tags remove "wheels_broken"}
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

	{on repair
		("show_wheel" component(wheelleft1) bone(wheell1))
		("show_wheel" component(wheelleft2) bone(wheell2))
		("show_wheel" component(wheelleft3) bone(wheell3))
		("show_wheel" component(wheelleft4) bone(wheell4))
		("show_wheel" component(wheelleft5) bone(wheell5))
		("show_wheel" component(wheelleft6) bone(wheell6))
		("show_wheel" component(wheelleft7) bone(wheell7))
		("show_wheel" component(wheelleft8) bone(wheell8))
		("show_wheel" component(wheelright1) bone(wheelr1))
		("show_wheel" component(wheelright2) bone(wheelr2))
		("show_wheel" component(wheelright3) bone(wheelr3))
		("show_wheel" component(wheelright4) bone(wheelr4))
		("show_wheel" component(wheelright5) bone(wheelr5))
		("show_wheel" component(wheelright6) bone(wheelr6))
		("show_wheel" component(wheelright7) bone(wheelr7))
		("show_wheel" component(wheelright8) bone(wheelr8))
		("show_wheel" component(wheell1) bone(wheell1))
		("show_wheel" component(wheell2) bone(wheell2))
		("show_wheel" component(wheell3) bone(wheell3))
		("show_wheel" component(wheell4) bone(wheell4))
		("show_wheel" component(wheell5) bone(wheell5))
		("show_wheel" component(wheell6) bone(wheell6))
		("show_wheel" component(wheell7) bone(wheell7))
		("show_wheel" component(wheell8) bone(wheell8))
		("show_wheel" component(wheelr1) bone(wheelr1))
		("show_wheel" component(wheelr2) bone(wheelr2))
		("show_wheel" component(wheelr3) bone(wheelr3))
		("show_wheel" component(wheelr4) bone(wheelr4))
		("show_wheel" component(wheelr5) bone(wheelr5))
		("show_wheel" component(wheelr6) bone(wheelr6))
		("show_wheel" component(wheelr7) bone(wheelr7))
		("show_wheel" component(wheelr8) bone(wheelr8))
		("show_wheel" component(wheelfront) bone(wheelfront))		;// kettenkrad
	}

	{on "break_wheel_impulse"  ;// Allows to be overridden in certain vehicles
		{if not tagged "impluse"
			{impulse up 0.001}
		}
	}
}

{"wheeled vehicle halftrack"
	{on "check_wheel_torn" overload
		("check_wheel_x2" component(wheelleft1))
		("check_wheel_x2" component(wheelleft2))
		("check_wheel_x2" component(wheelleft3))
		("check_wheel_x2" component(wheelleft4))
		("check_wheel_x2" component(wheelleft5))
		("check_wheel_x2" component(wheelleft6))
		("check_wheel_x2" component(wheelleft7))
		("check_wheel_x2" component(wheelleft8))
		("check_wheel_x2" component(wheelright1))
		("check_wheel_x2" component(wheelright2))
		("check_wheel_x2" component(wheelright3))
		("check_wheel_x2" component(wheelright4))
		("check_wheel_x2" component(wheelright5))
		("check_wheel_x2" component(wheelright6))
		("check_wheel_x2" component(wheelright7))
		("check_wheel_x2" component(wheelright8))
		("check_wheel_x2" component(wheelfront))
		{call "check_work_mover"}
	}

	{on "wheel_torn_logic" overload			;// allows halftracks to still move with 1 wheel torn
		{if tagged "wheel_teared"			;// 2nd wheel torn
			{tags add "wheel_destroyed"}	;// disables movement
			{tags remove "wheel_teared"}
		else
			{tags add "wheel_teared"}		;// 1st wheel torn
			{movement_limit slow}
		}
	}
}

{"wheeled vehicle 8_wheels"
	{on "check_wheel_torn" overload
		("check_wheel_x2" component(wheelleft1))
		("check_wheel_x2" component(wheelleft2))
		("check_wheel_x2" component(wheelleft3))
		("check_wheel_x2" component(wheelleft4))
		("check_wheel_x2" component(wheelleft5))
		("check_wheel_x2" component(wheelleft6))
		("check_wheel_x2" component(wheelleft7))
		("check_wheel_x2" component(wheelleft8))
		("check_wheel_x2" component(wheelright1))
		("check_wheel_x2" component(wheelright2))
		("check_wheel_x2" component(wheelright3))
		("check_wheel_x2" component(wheelright4))
		("check_wheel_x2" component(wheelright5))
		("check_wheel_x2" component(wheelright6))
		("check_wheel_x2" component(wheelright7))
		("check_wheel_x2" component(wheelright8))
		("check_wheel_x2" component(wheell1))
		("check_wheel_x2" component(wheell2))
		("check_wheel_x2" component(wheell3))
		("check_wheel_x2" component(wheell4))
		("check_wheel_x2" component(wheell5))
		("check_wheel_x2" component(wheell6))
		("check_wheel_x2" component(wheell7))
		("check_wheel_x2" component(wheell8))
		("check_wheel_x2" component(wheelr1))
		("check_wheel_x2" component(wheelr2))
		("check_wheel_x2" component(wheelr3))
		("check_wheel_x2" component(wheelr4))
		("check_wheel_x2" component(wheelr5))
		("check_wheel_x2" component(wheelr6))
		("check_wheel_x2" component(wheelr7))
		("check_wheel_x2" component(wheelr8))
		("check_wheel_x2" component(wheelfront))
		{call "check_work_mover"}
	}

	{on "wheel_torn_logic" overload			;// allows halftracks to still move with 1 wheel torn
		{if tagged "wheel_teared"			;// 2nd wheel torn
			{tags add "wheel_destroyed"}	;// disables movement
			{tags remove "wheel_teared"}
		else
			{tags add "wheel_teared"}		;// 1st wheel torn
			{movement_limit slow}
		}
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
		{tags add "engine_turned_off"}		;// tracks engine on/off status for mission save/load
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

	{on "engine stop view" overload				;// called on engine and body break
		{if "engine_on"
			{kill_delay "engine_startup"}				;// stops engine startup sequence
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
			{view pause "exhaust"}
			{view pause "exhaust2"}
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
	}
	{on "engine fullstop"				;// called on explosion
		{bone hide "engine_work"}
		{call "prop_still"}
		{bone hide "propeller_work"}
	}

	{on operatable off
		{if not tagged "deactivated"			;// stops engine off sequence from occuring if engine is already turned off.
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
			{tags add "no_scavenge"}		;// tag for conquest so that vehicle cannot be repaired/recovered
			{mark_for_persistence}			;// Conquest map persistence
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
			{if broken "wheel" 3
				{tags add "wheels_broken"}
			else
				{tags remove "wheels_broken"}
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
		{play_sound "bkg_rocket"}

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

		{##if name "00"
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
		else name "16"
			("bm13_fire")
		else name "17"
			("bm13_fire")
		else name "18"
			("bm13_fire")
		else name "19"
			("bm13_fire")
		else name "20"
			("bm13_fire")
		else name "21"
			("bm13_fire")
		else name "22"
			("bm13_fire")
		else name "23"
			("bm13_fire")
		else name "24"
			("bm13_fire")
		else name "25"
			("bm13_fire")
		else name "26"
			("bm13_fire")
		else name "27"
			("bm13_fire")
		else name "28"
			("bm13_fire")
		else name "29"
			("bm13_fire")
		else name "30"
			("bm13_fire")
		else name "31"
			("bm13_fire")
		else name "32"
			("bm13_fire")
		else name "33"
			("bm13_fire")
		else name "34"
			("bm13_fire")
		else name "35"
			("bm13_fire")
		else name "36"
			("bm13_fire")
		else name "37"
			("bm13_fire")
		else name "38"
			("bm13_fire")
		else name "39"
			("bm13_fire")
		else name "40"
			("bm13_fire")
		else name "41"
			("bm13_fire")
		else name "42"
			("bm13_fire")
		else name "43"
			("bm13_fire")
		else name "44"
			("bm13_fire")
		else name "45"
			("bm13_fire")
		else name "46"
			("bm13_fire")
		else name "47"
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
}

{"fuel_tank"
	{on pierce sync
		{if component "bodyback"
			{if not work "bodyback"
				{if stuff "ptr"						;// at rifles goes first then bullet
					{delay 5 5
						{call_synced "fueltank_fire"}
					}
					{burn fx "fire_fueltank_pierce_medium" time 15 fake}
				else stuff "bullet"
					{delay 5 5
						{call_synced "fueltank_fire"}
					}
					{burn fx "fire_fueltank_pierce" time 15 fake}
				else stuff "auto"
					{delay 5 5
						{call_synced "fueltank_fire"}
					}
					{burn fx "fire_fueltank_pierce_medium" time 15 fake}
				else stuff "shell"
					{call "fueltank_fire"}
					{burn fx "fire_fueltank_pierce_big" time 15 fake}
				}
			}
		}
	}
	{on blast
		{if component "bodyback"
			{if min_energy 4
				{component destroy}
				{call "explosion"}
			}
			{delay 0.1
				{if not work "bodyback"
					{call "fueltank_fire"}
				}
			}
		}
	}
	{on break_armor
		{if component "bodyback"
			{if not able "exploded"
				{if name "pierce"
					{if stuff "bullet"
						{burn fx "drops_fuel_small_short" time 10 fake}
					else stuff "ptr"
						{burn fx "drops_fuel_small_short" time 10 fake}
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
	{on "fueltank_fire"
		{if not tagged "fueltank_fire"
			{tags add "fueltank_fire"}
			{play_sound "flame" 1}
			{burn volume "bodyback1" fx "fire_fueltank_small" time 15 fake even_law}
			{burn volume "bodyback2" fx "fire_fueltank_small" time 15 fake even_law}
			{delay 10 5
				{burn volume "bodyback1" fx "fire_fueltank" time 30 fake even_law}
				{burn volume "bodyback2" fx "fire_fueltank" time 30 fake even_law}
				{delay 20 10
					{call "explosion"}
				}
			}
		}
	}
	{on "_explosion"
		{spawn "fuel_die" "basis"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 6 time 1 heating 10}
		{fire radius 5 time 10 heating 2}
		{delay 0.1
			{burn volume "bodyback1" fx "fire_fueltank" time 120 fake even_law}
			{burn volume "bodyback2" fx "fire_fueltank" time 120 fake even_law}
			{delay 120
				{stop_sound "flame"}
			}
		}
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
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")

	{on fire "gun"
		{ani_play "recoil"}
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{call "spawn_shell"}
	}
}

{"gaz_aaa_maximx4"
	("zis5_sound")
	{on "init_gun" overload
		{add_view "shell_mgun" "shell1" "fxshell1"}
		{add_view "shell_mgun" "shell2" "fxshell2"}
		{add_view "shell_mgun" "shell3" "fxshell3"}
		{add_view "shell_mgun" "shell4" "fxshell4"}
		{add_view "ejectsmoke_big" "ejectsmoke1" "FXshell1"}
		{add_view "ejectsmoke_big" "ejectsmoke2" "FXshell2"}
		{add_view "ejectsmoke_big" "ejectsmoke3" "FXshell3"}
		{add_view "ejectsmoke_big" "ejectsmoke4" "FXshell4"}
		{add_view "flash_gun_big" "flashbarrel00" "shooter00"}
		{add_view "flash_gun_big" "flashbarrel01" "shooter01"}
		{add_view "flash_gun_big" "flashbarrel02" "shooter02"}
		{add_view "flash_gun_big" "flashbarrel03" "shooter03"}
	}
	{on "add_weapon_sound" overload
		("Maxim_Gun")
	}
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
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
{"zis5_dshk car"
	("zis5_sound")
	{on "add_weapon_sound" overload
		("DShK38")
	}
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")

	{on "init_gun" overload
		{add_view "shell_hmgun" "shell" "fxshell"}
		{add_view "ejectsmoke_big" "ejectsmoke" "FXshell"}
	}

	{on fire "mgun1"
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{play_sound "action_recoil_HMG"}
		{view start "shell"}
		{view start "ejectsmoke"}
		{delay 0.12
			{view pause "shell"}
			{view pause "ejectsmoke"}
		}
	}
}

{"zis6_bm8_48 car"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"zis6_bm13_16 car"
	("zis5_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}
{"bm13_studebaker car"
	("studebaker_sound")
}
{"bm31_12 car"
	("studebaker_sound")
}
{"m72"
	("r12_sound")
}
{"bmw_r71"
	("r12_sound")
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
{"schwimmwagen car"
	("kubel_sound")
}
{"kfz15 car"
	("kubel_sound")
}

{"kettenkrad"
	("kettenkrad_sound")

	{on "wheel_torn_logic" overload
		{tags add "wheel_destroyed"}
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
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
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

{"kfz70"
	("Kfz70_sound")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
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

{"sdkfz10_4"
	("hanomag_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
	{on fire "gun"
		{ani_play "recoil"}
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{call "spawn_shell"}
	}
}

{"ford_b3000 car"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
}

{"ford_v3000 car"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
}

{"ford_3ton car"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
}

{"ford_3ton_breda car"
	("opel_sound")
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
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
}

{"ford_v3000_ammo car"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"ford_3ton_ammo car"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"ford_v3000_fuel car"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"ford_3ton_fuel car"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"ford_v3000_eng car"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"ford_3ton_eng car"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"latil_m2tl6 car"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"volvo_127d car"
	("opel_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
}

{"volvo_127d_itk40"
	{on "add_weapon_sound" overload
		("Autocannon_s1")
	}
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

{"universal"
	("s60_sound")
}

{"cckw"
	("cckw_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
}

{"cckw_engineer"
	("cckw_sound")

	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
}

{"cckw_engineer_late"
	("cckw_sound")
	{on "add_weapon_sound" overload
		("M2HB")
	}
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")

	{on "commander_hatch_open" overload
		{ani_wind "cabin_cover" end}
	}
	{on "commander_hatch_close" overload
		{ani_wind "cabin_cover" begin}
	}
}

{"cckw_art_ammo"
	("cckw_sound")

	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
}

{"cckw_redball"
	("cckw_sound")
	{on "add_weapon_sound" overload
		("M2HB")
	}
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")

	{on "commander_hatch_open" overload
		{ani_wind "cabin_cover" end}
	}
	{on "commander_hatch_close" overload
		{ani_wind "cabin_cover" begin}
	}
	{on spawn
		("rand_cut_else" args "redball1" "redball2")
	}
}

{"cckw_fuel"
	("cckw_sound")

	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
}

{"willys_mb"
	("willys_mb_sound")
}

{"willys_mb_30cal"
	("willys_mb_sound")
	{on "add_weapon_sound" overload
		("M1919A4")
	}
}

{"willys_mb_50cal"
	("willys_mb_sound")
	{on "add_weapon_sound" overload
		("M2HB")
	}
}

{"ford_gpa"
	("willys_mb_sound")
	{on "add_weapon_sound" overload
		("M1919A4")
	}
}

{"wc51"
	("wc51_sound")
}

{"wc52_50cal"
	("wc51_sound")
	{on "add_weapon_sound" overload
		("M2HB")
	}
}

{"citroen_7"
	("willys_mb_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")

	{on "cut_parts" overload
		("cut_part" args "doorleft1" 0.5)
		("cut_part" args "doorright2" 0.5)
		{inherited}
	}
}

{"renault_agr_civ"
	("cckw_sound")
	("animation_sound" args "open_left")
	("animation_sound" args "open_right")
	("animation_sound" args "open_rear")
	("animation_sound" args "close_rear")
}

;/*=========== Car Specifics End  ===========*/
