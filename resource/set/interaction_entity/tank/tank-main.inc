{"tank"
	{on spawn
		{set "smoke1" 0}				;// used in burn_emit call
		{set "smoke2" 0}				;// used in burn_emit call
		{set "turret" 0}  				;// allows for extra code to applied to mantlet damage when tank has no turret
		;{call "shield_checker"}		;// randomizes shield bones
		{call "update_hatch_on_spawn"}	;// updates vehicle hatches
		{call "add_overlay_sound"}		;// adds terrain specific sounds to enhance the tank track sounds
		{call "crew_able"}				;// re-enables seats for conquest on unit respawn
		;{tags add "cwsh_active"}
		;{tags add "cwsh_passive"}


		;/*=========== Sounds Begin ===========*/

		;//{example    "name used in code" 	    "sound file or folder"}
		{link_sound "flame"						"fire/metal"}
		{link_sound "flame_1"					"fire/metal"}
;		{link_sound "move"						"vehicle/tracks/trackclank"}
;		{link_sound "heavy_move"				"vehicle/tracks/heavy"}
		{link_sound "engine_idle"				"vehicle/engine/tank"}
		{link_sound "brake"						"vehicle/tracks/brake"}
		{link_sound "rotate_gun"				"vehicle/turret/gun/gun_vertical"}


		{link_sound "bkg_mg" "weapon/shot/bkg/gun/mg/"}
		{link_sound "contact" "fire/loops/big"}
		;/*=========== Sounds End ===========*/

		;/*=========== Track FX Begin ===========*/

	 ;//{example    "fx file"               "name used in code"   		"where fx plays (entity bone)"}
		{add_view	"dustrun_small"			"on_ground_slow"			"FXtraceR1"}
		{add_view	"dustrun_small"			"on_ground_slow"			"FXtraceL1"}
		{add_view	"tank_grit_small"		"on_grass_slow"				"FXtraceR1"}
		{add_view	"tank_grit_small"		"on_grass_slow"				"FXtraceL1"}
		{add_view	"dustrun_sand_small"	"on_sand_slow"				"FXtraceR1"}
		{add_view	"dustrun_sand_small"	"on_sand_slow"				"FXtraceL1"}
		{add_view	"dustrun_medium_grass2"	"on_snow_slow"				"FXtraceR1"}
		{add_view	"dustrun_medium_grass2"	"on_snow_slow"				"FXtraceL1"}
		{add_view	"dustrun_small"			"on_country_road_slow"		"FXtraceR1"}
		{add_view	"dustrun_small"			"on_country_road_slow"		"FXtraceL1"}

		{add_view	"dustrun_medium_grass"	"on_ground_medium"			"FXtraceR1"}
		{add_view	"dustrun_medium_grass"	"on_ground_medium"			"FXtraceL1"}
		{add_view	"dustrun_medium_grass"	"on_grass_medium"			"FXtraceR1"}
		{add_view	"dustrun_medium_grass"	"on_grass_medium"			"FXtraceL1"}
		{add_view	"dustrun_sand_medium"	"on_sand_medium"			"FXtraceR1"}
		{add_view	"dustrun_sand_medium"	"on_sand_medium"			"FXtraceL1"}
		{add_view	"dustrun_snow_medium"	"on_snow_medium"			"FXtraceR1"}
		{add_view	"dustrun_snow_medium"	"on_snow_medium"			"FXtraceL1"}
		{add_view	"dustrun_small"			"on_country_road_medium"	"FXtraceR1"}
		{add_view	"dustrun_small"			"on_country_road_medium"	"FXtraceL1"}

		{add_view	"dustrun_big"			"on_ground_fast"			"FXtraceR1"}
		{add_view	"dustrun_big"			"on_ground_fast"			"FXtraceL1"}
		{add_view	"dustrun_small"			"on_grass_fast"				"FXtraceR1"}
		{add_view	"dustrun_small"			"on_grass_fast"				"FXtraceL1"}
		{add_view	"dustrun_sand_big"		"on_sand_fast"				"FXtraceR1"}
		{add_view	"dustrun_sand_big"		"on_sand_fast"				"FXtraceL1"}
		{add_view	"dustrun_snow_big"		"on_snow_fast"				"FXtraceR1"}
		{add_view	"dustrun_snow_big"		"on_snow_fast"				"FXtraceL1"}
		{add_view	"dustrun_small"			"on_country_road_fast"		"FXtraceR1"}
		{add_view	"dustrun_small"			"on_country_road_fast"		"FXtraceL1"}

		{add_view	"disc_dustrun_big_sand"	"dust_sand"					"FXtraceM1"}
		{add_view	"disc_dustrun_big_snow"	"dust_snow"					"FXtraceM1"}
		{add_view	"disc_dustrun_big"		"dust"						"FXtraceM1"}

		{add_view	"tank_grit_small"		"on_ground"				"FXtraceR2"}
		{add_view	"tank_grit_small"		"on_ground"				"FXtraceL2"}
		{add_view	"tank_grit_big"			"on_ground_time_short"	"FXtraceR2"}
		{add_view	"tank_grit_big"			"on_ground_time_short"	"FXtraceL2"}
		{add_view	"tank_grit_small"		"on_grass"				"FXtraceR2"}
		{add_view	"tank_grit_small"		"on_grass"				"FXtraceL2"}
		{add_view	"tank_grit_big"			"on_grass_time_short"	"FXtraceR2"}
		{add_view	"tank_grit_big"			"on_grass_time_short"	"FXtraceL2"}
		{add_view	"drops_water"			"on_water"				"FXtraceR1"}
		{add_view	"drops_water"			"on_water"				"FXtraceL1"}
		{add_view	"tank_grit_big_mud"		"on_mud"				"FXtraceR2"}
		{add_view	"tank_grit_big_mud"		"on_mud"				"FXtraceL2"}
		{add_view	"tank_grit_big_snow"	"on_snow"				"FXtraceR2"}
		{add_view	"tank_grit_big_snow"	"on_snow"				"FXtraceL2"}
		{add_view	"drops_water_moto"		"on_puddle"				"FXtraceR1"}
		{add_view	"drops_water_moto"		"on_puddle"				"FXtraceL1"}
		{add_view	"tank_grit_small_w"		"on_puddle"				"FXtraceR2"}
		{add_view	"tank_grit_small_w"		"on_puddle"				"FXtraceL2"}

		;/*=========== Track FX End ===========*/

		;/*=========== Smoke/Fire FX Begin ===========*/

		{add_view	"smoke_white_steam"				"smoke1_1"				"FXfire1"} ;// engine

		{add_view	"smoke_black"					"smoke2"				 "turret"} ;// turret break smoke

		{add_view	"fire_cooking_aftersmoke"		"smoke3"				"FXfire3"} ;// burn out fx for mp destroy. turret hatch.
		{add_view	"fire_cooking_aftersmoke"		"smoke3"				"FXfire3_2"} ;// burn out fx for mp destroy. turret hatch.
		{add_view	"smoke_dead_norm"				"smoke3"				"FXfire5"} ;// burn out fx for mp destroy. open top vehicles.

		{add_view	"fire_vehicle_death_hatch"		"fire_vehicle_death"	"FXfire3"}
		{add_view	"fire_vehicle_death_hatch"		"fire_vehicle_death"	"FXfire3_2"}
		{add_view	"smoke_vehicle_death_hatch"		"smoke_vehicle_death"	"FXfire3"}
		{add_view	"smoke_vehicle_death_hatch"		"smoke_vehicle_death"	"FXfire3_2"}
		{add_view	"fire_vehicle_death"			"fire_vehicle_death"	"FXfire5"}
		{add_view	"smoke_vehicle_death"			"smoke_vehicle_death"	"FXfire5"}

		{add_view	"smoke_dead_small2"				"smoke3_1"				"FXfire3"}
		{add_view	"fire_cooking_smoke"			"smoke3_2"				"FXfire3"}
		{add_view	"fire_cooking_afterfire"		"smoke3_3"				"FXfire3"}
		{add_view	"fire_cooking_explosion_flames"	"smoke3_4"				"FXfire3"}
		{add_view	"fire_cooking_explosion"		"smoke3_5"				"FXfire3"}
		{add_view	"fire_cooking_explosion"		"smoke3_6"				"FXfire3"}
		{add_view	"fire_cooking_presmoke"			"smoke3_7"				"FXfire3"}
		{add_view	"fire_cooking_medium_1a"		"smoke3_8"				"FXfire3"}
		{add_view	"fire_cooking_medium_1b"		"smoke3_9"				"FXfire3"}
		{add_view	"fire_cooking_medium_1c"		"smoke3_10"				"FXfire3"}
		{add_view	"fire_cooking_high"				"smoke3_11"				"FXfire3"}
		{view hide "smoke3_11"}	;// fx has a glow that will show unless hidden until later called

		{add_view	"cooking_presmoke_1"		"cooking_presmoke_1"	"FXfire3"}
		{add_view	"cooking_presmoke_2"		"cooking_presmoke_2"	"FXfire3"}
		{add_view	"cooking_presmoke_3"		"cooking_presmoke_3"	"FXfire3"}
		{add_view	"cooking_high"				"cooking_high"			"FXfire3"}
		{view hide  "cooking_high"}	;// fx has a glow that will show unless hidden until later called
		{add_view	"cooking_high_2"			"cooking_high_2"	"FXfire3"}
		{view hide  "cooking_high_2"}	;// fx has a glow that will show unless hidden until later called
		{add_view	"cooking_hatch_fire"		"cooking_hatch_fire"	"FXfire3"}
		{view hide  "cooking_hatch_fire"}	;// fx has a glow that will show unless hidden until later called
		{add_view	"cooking_hatch_smoke"		"cooking_hatch_smoke"	"FXfire3"}

		{add_view	"cooking_presmoke_1"		"cooking_presmoke_1"	"FXfire3_2"}
		{add_view	"cooking_presmoke_2"		"cooking_presmoke_2"	"FXfire3_2"}
		{add_view	"cooking_presmoke_3"		"cooking_presmoke_3"	"FXfire3_2"}
		{add_view	"cooking_high"				"cooking_high"			"FXfire3_2"}
		{view hide  "cooking_high"}	;// fx has a glow that will show unless hidden until later called
		{add_view	"cooking_high_2"			"cooking_high_2"	"FXfire3_2"}
		{view hide  "cooking_high_2"}	;// fx has a glow that will show unless hidden until later called
		{add_view	"cooking_hatch_fire"		"cooking_hatch_fire"	"FXfire3_2"}
		{view hide  "cooking_hatch_fire"}	;// fx has a glow that will show unless hidden until later called
		{add_view	"cooking_hatch_smoke"		"cooking_hatch_smoke"	"FXfire3_2"}

		{add_view	"cooking_turret_ring"		"cooking_turret_fire"	"FXfire4"} ;// turret base
		{add_view	"cooking_turret_smoke"		"cooking_turret_smoke"	"FXfire4"}
		{add_view	"smoke_after_pen_hatch"		"smoke_after_pen_hatch"	"turret"}


		;{add_view	"smoke_dead_small2a"			"smoke3_12"				"FXfire3"}
		;{add_view	"smoke_dead_small2a"			"smoke3_13"				"FXfire3"}
		;{add_view	"smoke_dead_small2b"			"smoke3_14"				"FXfire3"}

		;{add_view	"fire_cooking_turret_smoke"		"smoke4"				"FXfire4"} ;// turret base
		;{add_view	"fire_cooking_turret_ring"		"smoke4_1"				"FXfire4"}
		;{add_view	"fire_cooking_turret_ring2"		"smoke4_2"				"FXfire4"}

		{add_view	"cooking_barrel"				"cooking_barrel_fire"	"Foresight1"}
		{add_view	"cooking_barrel_smoke"			"cooking_barrel_smoke" 	"Foresight1"}
		{add_view	"cooking_barrel_aftersmoke"		"cooking_barrel_aftersmoke" "Foresight1"}

;//		{add_view	"smoke_fuel_fire_smoke"			"smoke_fuel"			 "engine"}
;//		{add_view	"smoke_fuel_fire"				"smoke_fuel_1"			 "engine"}

		{add_view	"smoke_tank_hull_dead"			"smoke_hull_crush"		   "body"} ;// call on body break
		{add_view	"smoke_tank_hull_dead_engine"	"smoke_hull_crush_2"	 "engine"} ;// call on body break

		{call "add_exhaustview"}
		;{call "explosive_amount_tag"}	;// tool to determine explosive amount in vehicles
		;/*=========== Smoke/Fire FX End ===========*/

	}
	;/*=========== Spawn End ===========*/

	{on "add_overlay_sound"
		{link_sound "wheel_ground"				"vehicle/tracks/overlay/track_overlay_ground"}
		{link_sound "wheel_sand"				"vehicle/tracks/overlay/track_overlay_ground"}
		{link_sound "wheel_grass"				"vehicle/tracks/overlay/track_overlay_ground"}
		{link_sound "wheel_water"				"vehicle/tracks/overlay/track_overlay_water"}
		{link_sound "wheel_puddle"				"vehicle/tracks/overlay/track_overlay_water"}
		{link_sound "wheel_mud"					"vehicle/tracks/overlay/track_overlay_mud_snow"}
		{link_sound "wheel_snow"				"vehicle/tracks/overlay/track_overlay_mud_snow"}
		{link_sound "wheel_road"				"vehicle/tracks/overlay/track_overlay_road"}
		{link_sound "wheel_rock"				"vehicle/tracks/overlay/track_overlay_rock"}
		{link_sound "wheel_wood"				"vehicle/tracks/overlay/track_overlay_wood"}
	}

	;/*=========== Generic Calls Begin ===========*/

	{on "add_exhaustview"
		{delay 0.1
			{if not tagged "add_exhaustview"
				{add_view	"exhaust_dark_big"				"exhaust"			   "FXsmoke1"} ;// engine exhaust
				{add_view	"exhaust_dark_big"				"exhaust"			   "FXsmoke2"} ;// engine exhaust
				{add_view	"exhaust_dark_small2"			"exhaust2"			   "FXsmoke1"} ;// idle exhaust
				{add_view	"exhaust_dark_small2"			"exhaust2"			   "FXsmoke2"} ;// idle exhaust
			else
				{tags remove "add_exhaustview"}
			}
		}
	}
	{on "upside_down"				;// when tank flips over
		{reset_manual_control}
		{unlink_trailer}
	}

	{on "_explosion"				;// adds additional code to generic "_explosion" defined in vehicle prop
		{call "kill_cookoff"}
		{set "ammo_cooked" 1}
	}

	{on "spawn_shellhole"			;// called on "_explosion" in vehicle prop
		{if tagged "ammo_broken"
			{spawn "shellhole_dead_tank2" "basis" random_orientation}
		else
			{spawn "shellhole_dead_moto2" "basis" random_orientation}
		}
	}

	{on "cut_parts"					;// called on "_explosion" in vehicle prop
		(define "cut_part"
			{if rand %1
				{if tagged "ammo_broken"
					{tear "piece_medium_steel" bone %0
						{impulse up 8 1 dir 5 2 cx 5 2 cy 5 2 rnd_dir 10 no_position}
						{delay_effect 20 5 "stop"}			;// calls {on "stop"} in dummy.inc
					}
				else
					{tear "piece_medium_steel" bone %0
						{impulse up 4 1 dir 2.5 1 cx 2.5 1 cy 2.5 1 rnd_dir 5 no_position}
						{delay_effect 20 5 "stop"}			;// calls {on "stop"} in dummy.inc
					}
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
	}

	{on "check_burn_emit"								;// re-visit in future for efficiency
		{if not "burn_fire"
			{if not "smoke2"
				{if not "smoke1"
					{able "burning" 0}
				else
					{delay 5
						{call "burn_emit"}
					}
				}
			else
				{delay 5
					{call "burn_emit"}
				}
			}
		else
			{delay 5
				{call "burn_emit"}
			}
		}
	}

	{on fire "gun"
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{ani_play "fire"}
	}

	{on fire "gun1"
		{view start "flashbarrel2s"}
		{ani_play "fire1"}
	}

	{on fire "gun2"
		{view start "flashbarrel2s"}
		{ani_play "fire2"}
	}

	{on fire "gun3"
		{view start "flashbarrel12"}
		{view start "flashbarrel12s"}
		{ani_play "fire3"}
	}

	;/*=========== Generic Calls End ===========*/

	;/*=========== Damages Begin  ===========*/

	(define "cut_shield_part"
		{if component %0
			{delay_ex 0.11
				{tear "piece_medium_steel" bone %0
					{impulse up 3 1 dir 3 2 cx 5 2 cy 5 2 rnd_dir 5 no_position}
				}
			}
		}
	)

	(define "shed_shield_part"		;// used for extra details on vehicles that are wood (ex. wood log on pz2f)
		{if component %0
			{delay_ex 0.11
				{spawn "wood_crush_big" %0 x}
				{bone hide %0}
				{volumes %0 disable all}
			}
		}
	)

	{on break_armor					;// volume breaks
		{if volume "cupola"
			{call "kill_commander"}
		else volume "mg_port"
			{call "kill_gunner3"}
		}
	}

	{on break_armor_again			;// volume is broken again before related component is repaired
		{if volume "cupola"
			{call "kill_commander"}
		else volume "mg_port"
			{call "kill_gunner3"}
		}
	}

	{on break						;// {on break} is for when components break
		{if not tagged "exploded"
			{start_sound "crush/medium/metal"}
			{if component "ammo"
				{call "ammo_break"}
			}
			{if component "body"
				{tags add "body_break"}
				{tags add "turret_stopped_by_body"}
				{spawn "tank_die_particle" "body"}
				{reset_manual_control}
				{able select 0}			;// disables vehicle from being crewed until body is repaired
				{unlink_trailer}
			else component "engine"
				{tags add "engine_brake"}
				{spawn "tank_die_particle" "engine"}
				{view start "smoke1_1"}
				{set "smoke1" 1}
				{delay 30
					{view pause "smoke1_1"}
					{set "smoke1" 0}
				}
			else component "turret"
				{tags add "turret_brake"}
			else component "mantlet"
				{tags add "mantlet_brake"}
			else component "trackleft"
				{talk "broken_track"}
			else component "trackright"
				{talk "broken_track"}
			else component "fuel"

			else component "cut_part"
				;{if name "blast"} ;// does not work. Blast check comes to late code and is never triggered
				("cut_shield_part" args "shieldr1")
				("cut_shield_part" args "shieldr2")
				("cut_shield_part" args "shieldr3")
				("cut_shield_part" args "shieldr4")
				("cut_shield_part" args "shieldr5")
				("cut_shield_part" args "shieldr6")
				("cut_shield_part" args "shieldr7")
				("cut_shield_part" args "shieldr8")
				("cut_shield_part" args "shieldr9")

				("cut_shield_part" args "shieldl1")
				("cut_shield_part" args "shieldl2")
				("cut_shield_part" args "shieldl3")
				("cut_shield_part" args "shieldl4")
				("cut_shield_part" args "shieldl5")
				("cut_shield_part" args "shieldl6")
				("cut_shield_part" args "shieldl7")
				("cut_shield_part" args "shieldl8")
				("cut_shield_part" args "shieldl9")

				("cut_shield_part" args "shield1")
				("cut_shield_part" args "shield2")
				("cut_shield_part" args "shield3")
				("cut_shield_part" args "shield4")
				("cut_shield_part" args "shield5")
				("cut_shield_part" args "shield6")
				("cut_shield_part" args "shield7")
				("cut_shield_part" args "shield8")
				("cut_shield_part" args "shield9")

				("cut_shield_part" args "flapr1")
				("cut_shield_part" args "flapr2")
				("cut_shield_part" args "flapr3")
				("cut_shield_part" args "flapr4")
				("cut_shield_part" args "flapl1")
				("cut_shield_part" args "flapl2")
				("cut_shield_part" args "flapl3")
				("cut_shield_part" args "flapl4")



				("cut_shield_part" args "detail1")
				("cut_shield_part" args "detail2")
				("cut_shield_part" args "detail3")
				("cut_shield_part" args "detail4")
				("cut_shield_part" args "detail5")
				("cut_shield_part" args "detail6")
				("cut_shield_part" args "detail7")
				("cut_shield_part" args "detail8")
				("cut_shield_part" args "detail9")
				("cut_shield_part" args "detail10")
				("cut_shield_part" args "detail11")
				("cut_shield_part" args "detail12")
				("cut_shield_part" args "detail13")
				("cut_shield_part" args "detail14")
				("cut_shield_part" args "detail15")
				("cut_shield_part" args "detail16")
				("cut_shield_part" args "detail17")
				("cut_shield_part" args "detail18")
				("cut_shield_part" args "detail19")
				("cut_shield_part" args "detail20")

				("shed_shield_part" args "shieldw1")
				("shed_shield_part" args "shieldw2")
				("shed_shield_part" args "shieldw3")
				("shed_shield_part" args "shieldw4")
				("shed_shield_part" args "shieldw5")
				("shed_shield_part" args "shieldw6")
				("shed_shield_part" args "shieldw7")
				("shed_shield_part" args "shieldw8")
				("shed_shield_part" args "shieldw9")
			}
		}
	}

	{on destroy overload
		{if not tagged "exploded"
			{if component "body"
				{if not tagged "ammo_cooked"
					{tags add "ammo_broken"}
				}
				{call "explosion"}
			else component "engine"
				{call "_burn"}
			}
		}
	}

	{on "hull_destroyed"
		{if not tagged "hull_destroyed"
			{tags add "hull_destroyed"}
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
			{delay 10
				{call "hatch_fire"}
				{clear_inventory}
			}
			{delay 20 5
				{##/* if rand 0.5
					{call "cookoff"}
					{view stop "smoke3"}
					{stop_sound "flame_1"}
				*/}
			}
			{delay 87
				{stop_sound "flame_1"}
			}
		}
	}

	{on "vehicle_destroyed"
		{if not tagged "vehicle_destroyed"
			{if not tagged "ammo_cooked"
				{tags add "vehicle_destroyed"}
				{ani_wind "open" end}
				{ani_wind "open1" end}
				{tags add "no_scavenge"}		;// tag for conquest so that vehicle cannot be repaired/recovered
				{if not tagged "body_break"
					{components "body" break}
				}
				;//{damage_report "body" "component/body_destroyed"}
				{able select 0}
				{able repaired 0}
				{able minimap 0}
				{delay 2
					{kick_entity_manager}
					{tags add "destroyed"}
				}
				{if not tagged "exploded"
					;//{view pause "cooking_presmoke_1"}
					{view start "fire_vehicle_death"}
					{play_sound "flame_1" 1}
					{clear_inventory}
					{delay 500 60
						{if not tagged "exploded"
							{view pause "fire_vehicle_death"}
							{view start "smoke_vehicle_death"}
							{stop_sound "flame_1"}
							{tags add "ammo_cooked"}
						}
					}
				}
				{delay 200 200
					{if rand 0.3
						{call_synced "rand_break_ammo"}
					}
				}
			}
		}
	}

	{on "hatch_fire"
		{if not tagged "exploded"
			{view start "smoke3"}
			{play_sound "flame_1" 1}
			{ani_wind "open" end}
			{ani_wind "open1" end}
		}
	}

	{on "death_counter_check"
		{if tagged "death_counter_final"
			{call_synced "vehicle_destroyed"}
		}
		{if tagged "body_break"
			{if not tagged "death_counter_start"
				{tags add "death_counter_start"}
				{if stuff "size4"
					{tags add "death_counter_2"}
				else stuff "size3"
					{tags add "death_counter_2"}
				else
					{tags add "death_counter_1"}
				}
			}
		}
	}

	{on "death_counter"
		{if stuff "rocketlauncher"
			{if tagged "death_counter_1"
				{tags add "death_counter_2"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_3"}
				{tags remove "death_counter_2"}
			}
			{if tagged "death_counter_3"
				{tags add "death_counter_final"}
				{tags remove "death_counter_3"}
			}
		else stuff "bullet"
			;//nothing
		else stuff "auto"
			;// nothing
		else stuff "ptr"
			;// nothing
		else
			{if tagged "death_counter_1"
				{tags add "death_counter_2"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_3"}
				{tags remove "death_counter_2"}
			}
			{if tagged "death_counter_3"
				{tags add "death_counter_final"}
				{tags remove "death_counter_3"}
			}
		}
	}

	{on "death_counter_blast"
		{if min_energy 3.5
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
			{tags remove "death_counter_3"}
		}
	}

	(define "hull_death_fx"			;// defines fx size and burn time in specific tank props (light, medium, heavy..)
		{add_view "fire_dead_%3" "deathfx" "basis"}
		{add_view "smoke_dead_%3" "deathfx_smoke" "basis"}
		{add_view "smoke_dead_turret" "deathfx2" "basis"}
		{if tagged "ammo_broken"
			{view start "deathfx"}
			{play_sound "flame_1" 1}
			{delay %0 %1
				{view stop "deathfx"}
				{view start "deathfx_smoke"}
				{play_sound "flame_1" 0}
				{delay %0 %2
					{view stop "deathfx_smoke"}
				}
			}
		else
			{view start "deathfx2"}
			{delay %0 %1
				{view stop "deathfx2"}
			}
		}
	)

	(include "tank-damage.inc")		;// inserts code from other file for pierce, blast and other damage events

	;/*=========== Damages End  ===========*/

	;/*=========== Crew Begin  ===========*/

	{on "mantlet_jam"			;// temporarily disables gun elevation (up/down movement)
		{delay 0.1				;// stops code from running if mantlet or gun breaks
			{if work "gun"
				{if work "mantlet"
					{ik_enable "gun_rot" 0}
					{tags add "mantlet_jammed"}
					{delay 0.2 {damage_report "gun" "component/gun_jammed"}}
					{if not "turret"
						{ik_enable "turret" 0}
					}
					{delay 12 3
						{tags remove "mantlet_jammed"}
						{if not "turret"
							{ik_enable "turret" 1}
						}
						{if work "mantlet"
							{ik_enable "gun_rot" 1}
						}
					}
				}
			}
		}
	}

	{on "shock_check"
		{delay 0.3
			{if operatable 		;// checks if there is any crew in vehicle
				{if work "body"
					{if tagged "turret_jammed"
						{damage_report "crew" "component/shock"}
					else tagged "stopped"
						{damage_report "crew" "component/shock"}
					else
						;//do nothing
					}
				}
			}
		}
	}

	(define "kill_crewman"			;// general code for killing crew on peirce and blast events
		{on "kill_%0"
			{if crew_in_place "%0"
				{kill_crew "%0"}
				{crew_enable place "%0" 0}			;// disables seat in vehicle from being recrewed instantly after crew death
				{delay 0.2
					{damage_report "%0" "component/%0_die"}
					{talk "crew_die"}
				}
				{delay 8
					{crew_enable place "%0" 1}		;// re enables seat after crew death, after delay
				}
			}
		}
	)

	;// defines all crew positions/names used in game
	("kill_crewman" args gunner)
	("kill_crewman" args gunner2)
	("kill_crewman" args gunner3)
	("kill_crewman" args gunner4)
	("kill_crewman" args gunner5)
	("kill_crewman" args gunner6)
	("kill_crewman" args charger)
	("kill_crewman" args charger2)
	("kill_crewman" args charger3)
	("kill_crewman" args charger4)
	("kill_crewman" args charger5)
	("kill_crewman" args charger6)
	("kill_crewman" args commander)
	("kill_crewman" args driver)

	{on "crew_able"						;// called on spawn. re-enables seats for conquest on unit respawn
		{crew_enable place "gunner" 1}
		{crew_enable place "gunner1" 1}
		{crew_enable place "gunner2" 1}
		{crew_enable place "gunner3" 1}
		{crew_enable place "gunner4" 1}
		{crew_enable place "gunner5" 1}
		{crew_enable place "gunner6" 1}
		{crew_enable place "charger" 1}
		{crew_enable place "charger1" 1}
		{crew_enable place "charger2" 1}
		{crew_enable place "charger3" 1}
		{crew_enable place "charger4" 1}
		{crew_enable place "charger5" 1}
		{crew_enable place "charger6" 1}
		{crew_enable place "commander" 1}
		{crew_enable place "driver" 1}
	}

	;/*=========== Crew End  ===========*/

	;/*=========== Repairs Begin  ===========*/

	{on repair
		{if component "turret"
			{call "update_turret"}
			{tags remove "turret_brake"}
		else component "body"
			{view pause "smoke1"}
			{call "update_turret"}
			{tags remove "turret_stopped_by_body"}
			{tags remove "body_break"}
			{able "select" 1}
			{call "activate_vehicle"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
			{tags remove "death_counter_3"}
			{tags remove "death_counter_4"}
			{tags remove "death_counter_start"}
		else component "engine"
			{tags remove "engine_brake"}
			{view pause "smoke1_1"}
		else component "mantlet"
			{tags remove "mantlet_brake"}
			{call "update_mantlet"}
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
		{call "update_mantlet"}
	)

	{on "update_turret"
		("update_turret" n())
	}

	{on "update_mantlet"
		{if work "mantlet"
			{if work "body"
				{ik_enable "gun_rot" 1}
			else not "turret"
				{ik_enable "gun_rot" 0}
			}
		else not "turret"
			{ik_enable "gun_rot" 0}
		}
	}

	;/*=========== Repairs End  ===========*/

	;/*=========== Smoke Begin  ===========*/

	(define "smoke_shot"				;// spawns smoke grenade on vehicle and gives impulse instructions
		{delay %4
			{spawn %0 "%1" x
				{impulse forward %2 %3 rnd_dir %3 %3}
				{call "activate"}
			}
			{spawn "flash_grenade_launcher" "fx%1" x}	;// plays flash at grenade spawn/launch
			{bone hide "%1_cap"}
		}
		{delay %5
			{bone show "%1_cap"}
		}
	)

	{on "deploy_smoke"					;// UI button to deploy vehicle smoke screen
		{if operatable
			{if work "body"
				{call "smoke_screen"}
			}
		}
	}

	;/*=========== Smoke End  ===========*/

	{on "rand_break_body"
		{components "body" break}
	}
	{on "rand_break_engine"
		{components "engine" break}
	}
	{on "rand_break_trackleft"
		{components "trackleft" break}
	}
	{on "rand_break_trackright"
		{components "trackright" break}
	}
	{on "rand_break_ammo"
		{components "ammo" break}
	}
}

;/*=========== Tank End ===========*/

;/*=========== General Props Begin ===========*/


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
	{on "charger2_hatch_open"}
	{on "charger2_hatch_close"}

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
			("places" args gunner)
			("places" args gunner2)
			("places" args gunner4)
			("places" args commander)
			("places" args charger)
			("places" args charger2)
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

{"smoke nkav"						;// Nebelkerzenabwurfvorrichtung - German rear grenade dispenser
	{on "smoke_screen"
		{if tagged "smoke_launch1"
			("smoke_shot" args "nbk39" smoke_shot1 0.1 0.05 0)
			{tags remove "smoke_launch1"}
			{tags add "smoke_launch2"}
		else tagged "smoke_launch2"
			("smoke_shot" args "nbk39" smoke_shot2 0.1 0.05 0)
			{tags remove "smoke_launch2"}
			{tags add "smoke_launch3"}
		else tagged "smoke_launch3"
			("smoke_shot" args "nbk39" smoke_shot3 0.1 0.05 0)
			{tags remove "smoke_launch3"}
			{tags add "smoke_launch4"}
		else tagged "smoke_launch4"
			("smoke_shot" args "nbk39" smoke_shot4 0.1 0.05 0)
			{tags remove "smoke_launch4"}
			{tags add "smoke_launch5"}
		else tagged "smoke_launch5"
			("smoke_shot" args "nbk39" smoke_shot5 0.1 0.05 0)
			{tags remove "smoke_launch5"}
			{tags add "smoke_launch1"}
		else													;// first smoke launch
			("smoke_shot" args "nbk39" smoke_shot1 0.1 0.05 0)
			{tags add "smoke_launch2"}
		}
	}
}

{"smoke nwg"					;// Nebelwurfgerät - German smoke grenade launcher
	{on "smoke_screen"
		("smoke_shot" args "nbk39" smoke_shot1 -17 0.5 0 20)
		("smoke_shot" args "nbk39" smoke_shot4 -17 0.5 0.1 20)
		("smoke_shot" args "nbk39" smoke_shot2 -17 0.5 0.2 20)
		("smoke_shot" args "nbk39" smoke_shot5 -17 0.5 0.3 20)
		("smoke_shot" args "nbk39" smoke_shot3 -17 0.5 0.4 20)
		("smoke_shot" args "nbk39" smoke_shot6 -17 0.5 0.5 20)
	}
}

{"smoke nvw"					;// Nahverteidigungswaffe - German smoke grenade launcher
	{on "smoke_screen"
		("smoke_shot" args "nbk39" smoke_shot1 -17 0.5 0)
	}
}

{"smoke 2in"					;// Bomb Thrower 2in - British smoke launcher
	{on "smoke_screen"
		("smoke_shot" args "51mm_eng_mortar_sm" smoke_shot1 17 0.5 0)
	}
}

{"smoke 2in_wp"					;// Bomb Thrower 2in WP - British smoke launcher
	{on "smoke_screen"
		("smoke_shot" args "51mm_eng_mortar_wp" smoke_shot1 17 0.5 0)
	}
}

{"smoke 4in"					;// Bomb Thrower 4in - British smoke launcher
	{on "smoke_screen"
		("smoke_shot" args "no8_smoke" smoke_shot1 -17 0.5 0 20)
		("smoke_shot" args "no8_smoke" smoke_shot2 -17 0.5 0.5 20)
		{##if tagged "smoke_launch1"
			("smoke_shot" args "no8_smoke" smoke_shot1 -17 0.05 0)
			{tags remove "smoke_launch1"}
			{tags add "smoke_launch2"}
		else tagged "smoke_launch2"
			("smoke_shot" args "no8_smoke" smoke_shot2 -17 0.05 0)
			{tags remove "smoke_launch2"}
			{tags add "smoke_launch1"}
		else													;// first smoke launch
			("smoke_shot" args "no8_smoke" smoke_shot1 -17 0.05 0)
			{tags add "smoke_launch2"}
		}
	}
}

{"mantlet"					;// for tanks with "out" turrets that can rotate 360°
	{on spawn
		{call "update_mantlet"}
		{set "turret" 0}
	}
	{on break
		{if not tagged "exploded"
			{if component "mantlet"
				{call "update_mantlet"}
			else component "body"
				{spawn "circledust_norm" "turret"}
				{call "update_mantlet"}
			}
		}
	}
}

{"turret"			;// for tanks with turrets that can rotate 360°
	{on spawn
		{call "update_turret"}
		{set "turret" 1}
		{volumes "gun_recoil" disable blast} ;//add by ordos
	}
	{on break
		{if not tagged "exploded"
			(define "turret_break_effects"
				{call "update_turret%n"}
				{spawn "tank_die_particle" "turret%n"}
				{spawn "circledust_norm" "turret%n"}
				{call "turret_break_effects"}
			)
			{if component "turret"
				("turret_break_effects" n())
				{talk "broken_turret"}
			else component "body"
				{call "update_turret"}
			else component "mantlet"
				{call "update_turret"}
			}
		}
	}
	{on "slice_load"
		{if name "turret"
			{with_effector
				{add_view "smoke_black" "smoke" "basis"}
			}
		}
	}

	{on "cut_parts"				;// called on "_explosion" in vehicle prop
		{if "turret_teared"
			{bone cut "turret"}
		else
			{if tagged "ammo_broken"
				{call "tear_turret"}
			}
		}
	}
	(define "turret_torn"
		{on "tear_turret"
			{if not "turret_teared"
				{clear_inventory}
				{set "turret_teared" 1}
				{components "turret" break}
				{call "hull_destroyed"}
				{delay_ex 0
					{tear "piece_large_steel" bone "turret" id "turret"
						{impulse up %0 4 dir %0 4 rnd_dir %0 %0}
						{add_view "fire_dead_%5" "fire" "basis"}
						{add_view "smoke_dead_turret" "smoke" "basis"}
						{view start "fire"}
						{delay %1 %2
							{view stop "fire"}
							{view start "smoke"}
						}
						{delay_effect %3 %4 "pause"}				;// calls {on "pause"} in dummy.inc
						{delay 0.1
							{volumes "gun" disable obstacle}
						}
					}
				}
			}
		}
	)
}

{"tank turret light"			;// light tanks with a turret
	{on bullet_hit
		{if component "turret"
			{if stuff "shell size3"			;// 105-149mm cannon shells
				{call "tear_turret"}
			else stuff "shell size4"		;// 150-169mm cannon shells
				{call "tear_turret"}
			else stuff "shell size5"		;// 170+mm cannon shells
				{call "tear_turret"}
			else stuff "shell size6"		;// 240+mm cannon shells
				{call "tear_turret"}
			}
		}
	}
	("turret_torn" args 6 90 30 400 50 turret_light)
}
{"turret medium"
	("turret_torn" args 7 180 45 500 75 turret)
}
{"turret heavy"
	("turret_torn" args 8 200 60 600 100 turret)
}

{"tank turret multi_turret"
	{on spawn
		{call "update_multi_turret"}
	}
	{on break
		{if not tagged "exploded"
			{if component "aux_turret1"
				{call "update_multi_turret"}
				{damage_report "turret" "component/turret_broken"}
			else component "aux_turret2"
				{call "update_multi_turret"}
				{damage_report "turret" "component/turret_broken"}
			else component "aux_turret3"
				{call "update_multi_turret"}
				{damage_report "turret" "component/turret_broken"}
			else component "aux_turret4"
				{call "update_multi_turret"}
				{damage_report "turret" "component/turret_broken"}
			}
		}
	}
	{on "update_multi_turret"
		{if work "aux_turret1"
			{if work "body"
				{ik_enable "aux_turret1" 1}
			 else
				{ik_enable "aux_turret1" 0}
			}
		else
			{ik_enable "aux_turret1" 0}
		}
		{if work "aux_turret2"
			{if work "body"
				{ik_enable "aux_turret2" 1}
			 else
				{ik_enable "aux_turret2" 0}
			}
		else
			{ik_enable "aux_turret2" 0}
		}
		{if work "aux_turret3"
			{if work "body"
				{ik_enable "aux_turret3" 1}
			 else
				{ik_enable "aux_turret3" 0}
			}
		else
			{ik_enable "aux_turret3" 0}
		}
		{if work "aux_turret4"
			{if work "body"
				{ik_enable "aux_turret4" 1}
			 else
				{ik_enable "aux_turret4" 0}
			}
		else
			{ik_enable "aux_turret4" 0}
		}
	}
	{on repair
		{if component "aux_turret1"
			{call "update_multi_turret"}
		else component "aux_turret2"
			{call "update_multi_turret"}
		else component "aux_turret3"
			{call "update_multi_turret"}
		else component "aux_turret4"
			{call "update_multi_turret"}
		}
	}
	(define "multi_turret_rotate"
		{on ik begin "%0"
			{kill_delay "rotate_turret"}
			{if not "rotate_turret"
				{play_sound "rotate_turret" 1}
				{set "rotate_turret" 1}
			}
		}
		{on ik end "%0"
			{delay 0.25 "rotate_turret"
				{stop_sound "rotate_turret"}
				{set "rotate_turret" 0}
			}
		}
	)
	("multi_turret_rotate" args aux_turret1)
	("multi_turret_rotate" args aux_turret2)
	("multi_turret_rotate" args aux_turret3)
	("multi_turret_rotate" args aux_turret4)

	(define "multi_gun_rotate"
		{on ik begin "%0"
			{kill_delay "rotate_gun"}
			{if not "rotate_gun"
				{play_sound "rotate_gun" 1}
				{set "rotate_gun" 1}
			}
		}
		{on ik end "%0"
			{delay 0.25 "rotate_gun"
				{stop_sound "rotate_gun"}
				{set "rotate_gun" 0}
			}
		}
	)
	("multi_gun_rotate" args gun1)
	("multi_gun_rotate" args gun2)
}
{"armored_car"
	{on "explosion_blastwave" overload
		{impulse up 0.1 0.1 dir 0.2 0.1}
		{if tagged "ammo_broken"
			{blastwave c4 3 r0 2.5 r1 10}
			{spawn "tank_die_light" "basis"}
			{start_sound "detonation/explosion_vehicle/bkg/"}
		else
			{spawn "tank_die_peaceful_light" "basis"}
			{stop_sound "flame"}
			{stop_sound "flame_1"}
		}
	}
	{on "cut_parts"										;// called on "_explosion" in vehicle prop
		("hull_death_fx" args 500 75 100 tank_light)	;// defined in "tank" prop
	}
	{on "death_counter" overload
		{if stuff "rocketlauncher"
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
		else stuff "bullet"
			;//nothing
		else stuff "auto"
			;// nothing
		else stuff "ptr"
			;// nothing
		else stuff "pierce"
			{if stuff "size1"
				{if tagged "death_counter_1"
					{tags add "death_counter_2"}
					{tags remove "death_counter_1"}
				else tagged "death_counter_2"
					{tags add "death_counter_final"}
					{tags remove "death_counter_2"}
				}
			else stuff "size2"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
			else stuff "size3"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
			else stuff "size4"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
			}
		}
	}
	{on "death_counter_blast" overload
		{if min_energy 6
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
		else min_energy 3
			{if tagged "death_counter_1"
				{tags add "death_counter_2"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_final"}
				{tags remove "death_counter_2"}
			}
		}
	}
	(include "damage-armoredcar.inc")
}

{"light tank"
	{inflammation_time 25}
	{on "explosion_blastwave" overload
		{impulse up 0.1 0.1 dir 0.2 0.1}
		{if tagged "ammo_broken"
			{blastwave c4 4 r0 2.5 r1 10 offset 0 0 60}
			{blastwave c4 2 r0 6 r1 12 offset 0 0 60}

			{spawn "tank_die_light" "basis"}
			{start_sound "detonation/explosion_vehicle/bkg/"}
			{if terrain_fx "snow"
				{spawn "tank_die_snow_light" "basis"}
			else terrain_fx "ice"
				{spawn "tank_die_snow_light" "basis"}
			else
				{spawn "tank_die_dust_light" "basis"}
			}
		else
			{spawn "tank_die_peaceful_light" "basis"}
			{stop_sound "flame"}
			{stop_sound "flame_1"}
			{if terrain_fx "snow"
				{spawn "tank_die_snow_light" "basis"}
			else terrain_fx "ice"
				{spawn "tank_die_snow_light" "basis"}
			else
				{spawn "tank_die_dust_light" "basis"}
			}
		}
	}
	{on "cut_parts"									;// called on "_explosion" in vehicle prop
		("hull_death_fx" args 600 100 125 tank_light)	;// defined in "tank" prop
	}
	{on "death_counter" overload
		{if stuff "rocketlauncher"
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
		else stuff "bullet"
			;//nothing
		else stuff "auto"
			;// nothing
		else stuff "ptr"
			;// nothing
		else
			{if stuff "size1"
				{if tagged "death_counter_1"
					{tags add "death_counter_2"}
					{tags remove "death_counter_1"}
				else tagged "death_counter_2"
					{tags add "death_counter_final"}
					{tags remove "death_counter_2"}
				}
			else stuff "size2"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
			else stuff "size3"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
			else stuff "size4"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
			}
		}
	}
	{on "death_counter_blast" overload
		{if min_energy 7
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
		else min_energy 3.4
			{if tagged "death_counter_1"
				{tags add "death_counter_2"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_final"}
				{tags remove "death_counter_2"}
			}
		}
	}
	(include "damage-light.inc")
}

{"medium tank"
	{inflammation_time 35}
	{on "explosion_blastwave" overload
		{impulse up 0.1 0.1 dir 0.2 0.1}
		{if tagged "ammo_broken"
			{blastwave c4 5 r0 2.5 r1 10 offset 0 0 75}
			{blastwave c4 2 r0 10 r1 15 offset 0 0 75}
			{spawn "tank_die_medium" "basis"}
			{start_sound "detonation/explosion_vehicle/bkg/"}
			{if terrain_fx "snow"
				{spawn "tank_die_snow" "basis"}
			else terrain_fx "ice"
				{spawn "tank_die_snow" "basis"}
			else
				{spawn "tank_die_dust" "basis"}
			}
		else
			{spawn "tank_die_peaceful" "basis"}
			{stop_sound "flame"}
			{stop_sound "flame_1"}
			{if terrain_fx "snow"
				{spawn "tank_die_snow_light" "basis"}
			else terrain_fx "ice"
				{spawn "tank_die_snow_light" "basis"}
			else
				{spawn "tank_die_dust_light" "basis"}
			}
		}
	}
	{on "cut_parts"								;// called on "_explosion" in vehicle prop
		("hull_death_fx" args 700 150 150 tank)	;// defined in "tank" prop
	}
	{on "check_water_level" overload
		{if water_level 1.6
			{able "sinking" 1}
			{tags add "no_scavenge"}
		else
			{able "sinking" 0}
		}
	}
	{on "death_counter" overload
		{if stuff "rocketlauncher"
			{if tagged "death_counter_1"
				{tags add "death_counter_3"}
				{tags remove "death_counter_1"}
			else
				{tags add "death_counter_final"}
				{tags remove "death_counter_2"}
				{tags remove "death_counter_3"}
			}
		else stuff "bullet"
			;//nothing
		else stuff "auto"
			;// nothing
		else stuff "ptr"
			;// nothing
		else
			{if stuff "size1"
				{if tagged "death_counter_1"
					{tags add "death_counter_2"}
					{tags remove "death_counter_1"}
				else tagged "death_counter_2"
					{tags add "death_counter_3"}
					{tags remove "death_counter_2"}
				else tagged "death_counter_3"
					{tags add "death_counter_final"}
					{tags remove "death_counter_3"}
				}
			else stuff "size2"
				{if tagged "death_counter_1"
					{tags add "death_counter_3"}
					{tags remove "death_counter_1"}
				else
					{tags add "death_counter_final"}
					{tags remove "death_counter_2"}
					{tags remove "death_counter_3"}
				}
			else stuff "size3"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
				{tags remove "death_counter_3"}
			else stuff "size4"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
				{tags remove "death_counter_3"}
			}
		}
	}
	{on "death_counter_blast" overload
		{if min_energy 11.5
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
			{tags remove "death_counter_3"}
		else min_energy 8
			{if tagged "death_counter_1"
				{tags add "death_counter_3"}
				{tags remove "death_counter_1"}
			else
				{tags add "death_counter_final"}
				{tags remove "death_counter_2"}
				{tags remove "death_counter_3"}
			}
		else min_energy 4
			{if tagged "death_counter_1"
				{tags add "death_counter_2"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_3"}
				{tags remove "death_counter_2"}
			else tagged "death_counter_3"
				{tags add "death_counter_final"}
				{tags remove "death_counter_3"}
			}
		}
	}
	(include "damage-medium.inc")
}

{"heavy tank"
	{inflammation_time 45}
	{on "explosion_blastwave" overload
		{impulse up 0.1 0.1 dir 0.2 0.1}
		{if tagged "ammo_broken"
			{blastwave c4 5 r0 2.5 r1 10 offset 0 0 75}
			{blastwave c4 2 r0 10 r1 20 offset 0 0 75}
			{spawn "tank_die_heavy" "basis"}
			{start_sound "detonation/explosion_vehicle/bkg/"}
			{if terrain_fx "snow"
				{spawn "tank_die_snow" "basis"}
			else terrain_fx "ice"
				{spawn "tank_die_snow" "basis"}
			else
				{spawn "tank_die_dust" "basis"}
			}
		else
			{spawn "tank_die_peaceful" "basis"}
			{stop_sound "flame"}
			{stop_sound "flame_1"}
			{if terrain_fx "snow"
				{spawn "tank_die_snow_light" "basis"}
			else terrain_fx "ice"
				{spawn "tank_die_snow_light" "basis"}
			else
				{spawn "tank_die_dust_light" "basis"}
			}
		}
	}
	{on "cut_parts"								;// called on "_explosion" in vehicle prop
		("hull_death_fx" args 800 200 200 tank)	;// defined in "tank" prop
	}
	{on "check_water_level" overload
		{if water_level 1.8
			{able "sinking" 1}
			{tags add "no_scavenge"}
		else
			{able "sinking" 0}
		}
	}
	{on "death_counter" overload
		{if stuff "rocketlauncher"
			{if tagged "death_counter_1"
				{tags add "death_counter_3"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_4"}
				{tags remove "death_counter_2"}
			else
				{tags add "death_counter_final"}
				{tags remove "death_counter_3"}
				{tags remove "death_counter_4"}
			}
		else stuff "bullet"
			;//nothing
		else stuff "auto"
			;// nothing
		else stuff "ptr"
			;// nothing
		else
			{if stuff "size1"
				{if tagged "death_counter_1"
					{tags add "death_counter_2"}
					{tags remove "death_counter_1"}
				else tagged "death_counter_2"
					{tags add "death_counter_3"}
					{tags remove "death_counter_2"}
				else tagged "death_counter_3"
					{tags add "death_counter_4"}
					{tags remove "death_counter_3"}
				else tagged "death_counter_4"
					{tags add "death_counter_final"}
					{tags remove "death_counter_4"}
				}
			else stuff "size2"
				{if tagged "death_counter_1"
					{tags add "death_counter_3"}
					{tags remove "death_counter_1"}
				else tagged "death_counter_2"
					{tags add "death_counter_4"}
					{tags remove "death_counter_2"}
				else
					{tags add "death_counter_final"}
					{tags remove "death_counter_3"}
					{tags remove "death_counter_4"}
				}
			else stuff "size3"
				{if tagged "death_counter_1"
					{tags add "death_counter_4"}
					{tags remove "death_counter_1"}
				else
					{tags add "death_counter_final"}
					{tags remove "death_counter_2"}
					{tags remove "death_counter_3"}
					{tags remove "death_counter_4"}
				}
			else stuff "size4"
				{tags add "death_counter_final"}
				{tags remove "death_counter_1"}
				{tags remove "death_counter_2"}
				{tags remove "death_counter_3"}
				{tags remove "death_counter_4"}
			}
		}
	}
	{on "death_counter_blast" overload
		{if min_energy 13.9
			{tags add "death_counter_final"}
			{tags remove "death_counter_1"}
			{tags remove "death_counter_2"}
			{tags remove "death_counter_3"}
		else min_energy 8
			{if tagged "death_counter_1"
				{tags add "death_counter_3"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_4"}
				{tags remove "death_counter_2"}
			else
				{tags add "death_counter_final"}
				{tags remove "death_counter_3"}
				{tags remove "death_counter_4"}
			}
		else min_energy 5
			{if tagged "death_counter_1"
				{tags add "death_counter_2"}
				{tags remove "death_counter_1"}
			else tagged "death_counter_2"
				{tags add "death_counter_3"}
				{tags remove "death_counter_2"}
			else tagged "death_counter_3"
				{tags add "death_counter_4"}
				{tags remove "death_counter_3"}
			else tagged "death_counter_4"
				{tags add "death_counter_final"}
				{tags remove "death_counter_4"}
			}
		}
	}
	(include "damage-heavy.inc")
}

{"mine_exploder"
	{on spawn
		{bone hide "wheel_work"}
		{add_view "dustrun_sand_big"	"wheel_work_dust"	"FXWheel_Work1"}
		{add_view "dustrun_sand_big"	"wheel_work_dust"	"FXWheel_Work2"}
		{volumes "wheel_work" disable all}
		{ani_play "wheel_stop"}
	}
	{on move on
		{bone hide "wheel"}
		{bone show "wheel_work"}
		{view start "wheel_work_dust"}
		{volumes "wheel_work" enable all}
		{volumes "wheel" disable all}
	}
	{on move off
		{bone hide "wheel_work"}
		{bone show "wheel"}
		{ani_play "wheel_stop"}
		{view pause "wheel_work_dust"}
		{volumes "wheel_work" disable all}
		{volumes "wheel" enable all}
	}
	{on blast overload			;// blast-wave hits specific volume
		{if not volume "wheel_work"
			{inherited}
		else
			{ani_play "explosion"}
		}
	}
}

{"tank shield"
	{on "shield_checker"
		(define "randomized_shield"
			{if rand %1
				{bone cut %0}
			}
		)

		("randomized_shield" args "shieldl1" 0.1)
		("randomized_shield" args "shieldl2" 0.1)
		("randomized_shield" args "shieldl3" 0.1)
		("randomized_shield" args "shieldl4" 0.1)
		("randomized_shield" args "shieldl5" 0.1)
		("randomized_shield" args "shieldl6" 0.1)
		("randomized_shield" args "shieldl7" 0.1)
		("randomized_shield" args "shieldl8" 0.1)
		("randomized_shield" args "shieldl9" 0.1)

		("randomized_shield" args "shieldr1" 0.1)
		("randomized_shield" args "shieldr2" 0.1)
		("randomized_shield" args "shieldr3" 0.1)
		("randomized_shield" args "shieldr4" 0.1)
		("randomized_shield" args "shieldr5" 0.1)
		("randomized_shield" args "shieldr6" 0.1)
		("randomized_shield" args "shieldr7" 0.1)
		("randomized_shield" args "shieldr8" 0.1)
		("randomized_shield" args "shieldr9" 0.1)

		("randomized_shield" args "shield1" 0.1)
		("randomized_shield" args "shield2" 0.1)
		("randomized_shield" args "shield3" 0.1)
		("randomized_shield" args "shield4" 0.1)
		("randomized_shield" args "shield5" 0.1)
		("randomized_shield" args "shield6" 0.1)
		("randomized_shield" args "shield7" 0.1)
		("randomized_shield" args "shield8" 0.1)
		("randomized_shield" args "shield9" 0.1)

		("randomized_shield" args "shieldw1" 0.1)
		("randomized_shield" args "shieldw2" 0.1)
		("randomized_shield" args "shieldw3" 0.1)
		("randomized_shield" args "shieldw4" 0.1)
		("randomized_shield" args "shieldw5" 0.1)
	}
}

{"tank shell_eject"
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

{"open_death_fx"
	{on spawn
		{add_view	"fire_vehicle_death"			"fire_vehicle_death"	"body"}
		{add_view	"smoke_vehicle_death"			"smoke_vehicle_death"	"body"}
	}
}

{"open_death_fx_low"
	{on spawn
		{add_view	"fire_vehicle_death_low"		"fire_vehicle_death"	"body"}
		{add_view	"smoke_vehicle_death_low"		"smoke_vehicle_death"	"body"}
	}
}

{"goliath"
	{on fire "explosive"
		{components "body" destroy}
		{delay 0.1 {delete}}
	}
	{on "explosion"
		{delay 0.1 {delete}}
	}
}
;/*=========== General Props End ===========*/
