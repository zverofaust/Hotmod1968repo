{"helicopter"
	{on spawn
		{link_sound	"fall" "vehicle/airborne/fw_deep"}

		{add_view "smoke_black" "smoke_engine" 		"FXfire1"}
		{add_view "smoke_black" "smoke_rotor" 		"FXfire2"}
		{add_view "smoke_black" "smoke_rotor_back" 	"FXfire3"}
		{add_view "spheredust_heli" "spheredust_heli" "basis"}
		{add_view "spheredust_heli" "spheredust_heli" "basis"}
		{call "init_gun"}
	}
	
	{on "add_movement_sound"
		{link_sound "fly"			"vehicle/airborne/uh1h/uh1h_engine_full"}
		{link_sound "engine_start"	"vehicle/airborne/uh1h/uh1h_engine_start"}
		{link_sound "engine_work"	"vehicle/airborne/uh1h/uh1h_engine_full"}
		{link_sound "engine_stop"	"vehicle/airborne/uh1h/uh1h_engine_stop"}
		{link_sound "engine_idle"			"vehicle/airborne/uh1h/uh1h_engine_idle"}
		{link_sound "engine_full"			"vehicle/airborne/uh1h/uh1h_engine_full"}
		{link_sound "engine_accelerate"		"vehicle/airborne/uh1h/uh1h_accelerate"}
		{link_sound "engine_decelerate"		"vehicle/airborne/uh1h/uh1h_decelerate"}
	}
	
	{on engine on overload
		{call "engine_on"}
	}
	
	{on "engine_toggle" overload			;// UI button to toggle engine on/off
	}
	
	{on bullet_hit
		{if stuff "ammo grenade fg"
			{bullet_detonate}
;			{component break}
		}
	}
	
	{on "engine_started"
		{if not "engine_started"
			{set "engine_started" 1}
			{ani_stop "engine_stop"}
			{stop_sound "engine_stop"}
		}
	}
	{on "engine_stopped"
		{if "engine_started"
			{set "engine_started" 0}
			{ani_stop "engine_work"}
			{ani_play "engine_stop"}
			{stop_sound "engine_start"}
			{stop_sound "uh1h_engine_idle"}
			{stop_sound "uh1h_engine_full"}
			{stop_sound "engine_work"}
			{stop_sound "fly"}
		}
	}
	
	{on "engine_on"
		{if not "engine_started"
			{set "engine_started" 1}
			{play_sound "engine_start"}
			{ani_play "engine_start" callback}
		else
			{ani_play "engine_work" loop}
			{play_sound "engine_work" 1}
			{delay 0.3 "start_check_altitude" 
				{call "check_altitude"}
			}
		}
	}
	
	{on "check_altitude"
		{if tagged "dusty"					
			{view start "spheredust_heli"}	
			{delay 1 
				{view start "spheredust_heli"}
			}																
			{delay 0.6 "check_altitude"					
				{call "check_altitude"}					
			}
		else	
		}
	}
		
	{on animation_end "engine_start"
		{ani_play "engine_work" loop}
		{play_sound "engine_work" 1}
	}
	
	{on engine off overload
		{call "engine_stop"}
		{play_sound "engine_stop"}
	}
	
	{on "engine_stop"
		{kill_delay "engine_stopped"}
		{if "engine_started"
			{set "engine_started" 0}
			{ani_stop "engine_start"}
			{ani_stop "engine_work"}
			{ani_play "engine_stop"}
			{stop_sound "engine_start"}
			{stop_sound "uh1h_engine_idle"}
			{stop_sound "uh1h_engine_full"}
			{stop_sound "engine_work"}
			{stop_sound "fly"}
		}
	}
	
	{on "update_moveable" overload
		{if chassis "helicopter"
			{call "check_work_mover"}
		}
		{if not work "engine"
			{view start "smoke_engine"}
		else
			{view stop "smoke_engine"}
		}
		{if not work "rotor"
			{view start "smoke_rotor"}
		else
			{view stop "smoke_rotor"}
		}
		{if not work "rotor_b"
			{view start "smoke_rotor_back"}
		else
			{view stop "smoke_rotor_back"}
		}
		{inherited}
	}
	
	{on "check_work_mover" overload
		{if broken "rotor"
			{movement_limit slow}
		else broken "rotor_b"
			{movement_limit slow}
		else broken "body"
			{movement_limit slow}
		else broken "engine"
			{movement_limit slow}
		else
			{movement_limit fast}
		}
	}

	{on pierce sync
		{vehicle_health_damage_pierce}
	}
	
	{on "fall"
		{if not "fall"
			{set "fall" 1}
			{impulse up 0.1 com}
			{explosive 1}
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

	{on break
		{if component "body"
			{spawn "car_die_particle"}
		else component "engine"
			{tags add "engine_brake"}
			{spawn "car_die_particle"}
			{view start "smoke2"}
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
		{call "engine_off"}
	}
	
	{on "_explosion" overload
		{kill_crew}
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

(define "helicopter_sound"
	{on "add_movement_sound"
		{link_sound "fly"			"vehicle/airborne/uh1h/uh1h_engine_full"}
		{link_sound "engine_start"	"vehicle/airborne/uh1h/uh1h_engine_start"}
		{link_sound "engine_work"	"vehicle/airborne/uh1h/uh1h_engine_full"}
		{link_sound "engine_stop"	"vehicle/airborne/uh1h/uh1h_engine_stop"}
		{link_sound "engine_idle"			"vehicle/airborne/uh1h/uh1h_engine_idle"}
		{link_sound "engine_full"			"vehicle/airborne/uh1h/uh1h_engine_full"}
		{link_sound "engine_accelerate"		"vehicle/airborne/uh1h/uh1h_accelerate"}
		{link_sound "engine_decelerate"		"vehicle/airborne/uh1h/uh1h_decelerate"}
	}
)
{"uh-1h"
	("helicopter_sound")
}