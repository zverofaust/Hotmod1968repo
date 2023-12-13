{"mud_sp_mesh"   ;// fx test
	{on spawn
		{scale from 0.1 to 1 time 0.001}
		{delay 1.0
			{delete}
		}
	}
}

{"dummy"
	{on "stop"	{view stop ""}}
	{on "pause"	{view pause ""}}
	{on "delete"{delete}}
}

{"ps_dummy"
	{on "delete"{hide 3}}
}

{"physics_damping"
;	{friction 1000}
;	{restitution 0.001}
}


(define "throwing_weapon"
	{on contact
		{if effector "human"
			{delay 0
				{constrain_velocity 1}
			}
		}
	}
	{on "drop_item"							;// when item is not in hand and is dropped from inventory.
		{volumes "body" disable contact}	;// stops soldiers from killing themselves when removing knife from inventory
		{delay 1
			{volumes "body" enable contact}
		}
	}
)

{"knife" ("throwing_weapon")}
{"axe" ("throwing_weapon")}

{"stone"
	{on bullet_hit
		{bullet_detonate}
	}
}

{"wp_piece"		;// fx - white phosphorus
	{on spawn
		{add_view "wp_flare" "wp" "root"}
		{view start "wp"}
		{delay 0.05
			{volumes "body" enable contact}
			{delay 0.5
				{fire radius 0.5 time 0.5 heating 5 follow}
				{fire radius 0.3 time 15 heating 0.1 follow}
			}
		}
		{delay 25 10
			{delete}
		}
	}
}

(define "killzone_dummy"
	{"killzone_dummy_%cal"
		{on spawn
			{delay %delay
				{spawn "killzone_%cal"}
				{delete}
			}
		}
	}
)
("killzone_dummy" cal(75) delay(0.15))
("killzone_dummy" cal(88) delay(0.15))
("killzone_dummy" cal(105) delay(0.2))
("killzone_dummy" cal(122) delay(0.2))
("killzone_dummy" cal(150) delay(0.25))
("killzone_dummy" cal(200) delay(0.3))

{"killzone"
	{on spawn
		{delay 0.1
			{delete}
		}
	}
	{on contact
		{delay 0.01
			{delete}
		}
	}
}

(define "fx_service_entity"
	{"fx_%fx"
		{on spawn
			{spawn "%fx"}
			{delete}
		}
	}
)
("fx_service_entity" fx(aero_die))
("fx_service_entity" fx(ex_air_big))
("fx_service_entity" fx(ex_air_big2))
("fx_service_entity" fx(ex_air_he_size3))
("fx_service_entity" fx(ex_air_he_size5))
("fx_service_entity" fx(ex_air_sm))
("fx_service_entity" fx(ex_air_small))
("fx_service_entity" fx(ex_bul_sm))
("fx_service_entity" fx(ex_bul_sm_w))
("fx_service_entity" fx(ex_he_size2))
("fx_service_entity" fx(ex_he_size3))
("fx_service_entity" fx(ex_he_size4))
("fx_service_entity" fx(ex_he_size5))
("fx_service_entity" fx(ex_size1_water))
("fx_service_entity" fx(ex_size2_water))
("fx_service_entity" fx(ex_size3_water))
("fx_service_entity" fx(ex_size4_water))
("fx_service_entity" fx(vehicle_die))

{"part"
	{on "check_delete_part"				;// called only inside tear, so with_effector swaps entity & effector for flag check
		{with_effector
			{if "delete_parts"
				{with_effector
					{delay 20
						{hide 3}
					}
				}
			}
		}
	}
}

{"flesh part"
	{on spawn
		{delay 0.01 {volumes disable bullet contact blast touch}}
		{delay 1 {volumes enable bullet contact blast touch}}
		{delay 300 240 {hide 1}}
	}
	{on blast
		{delay 0.01 {volumes disable bullet contact blast touch}}
		{delay 3 {volumes enable bullet contact blast touch}}
		{if rand 0.2 {spawn "ground_blood_big"}}
		{if rand 0.3 {spawn "ground_blood_small"}}
		{if rand 0.25 {spawn "ground_blood01"}}
		{if rand 0.2 {spawn "ground_blood02"}}
		{if rand 0.15 {spawn "ground_blood03"}}
	}
	{on bullet_hit
		{if rand 0.3 {spawn "bloodspark_small01"}}
		{if rand 0.3 {spawn "bloodspark_small02"}}
		{if rand 0.3 {spawn "bloodsparks01"}}
		{if rand 0.3 {spawn "bloodsparks02"}}
		{if rand 0.2 {spawn "ground_blood_big"}}
		{if rand 0.1 {spawn "ground_blood_small"}}
		{if rand 0.15 {spawn "ground_blood01"}}
		{if rand 0.1 {spawn "ground_blood02"}}
		{if rand 0.2 {spawn "ground_blood03"}}
	}
	{on contact
		{if stuff "fg"
			{spawn "#_torse02" {impulse up 1 2 dir 1 3}}
			{spawn "#_guts02a" {impulse up 2 1 dir 2 1}}
			{spawn "#_hand05" {impulse up 2 1 dir 2 1}}
			{spawn "#_head02" {impulse up 2 2 dir 3 2}}
			{if rand 0.5
				{spawn "#_lowtor03" {impulse up 2 2 dir 3 2}}
			else rand 0.5
				{spawn "#_halflimb02" {impulse up 2 2 dir 3 2}}
				{spawn "#_leg04" {impulse up 2 2 dir 3 2}}
			}
		}
		{if stuff "ap"
			{spawn "#_torse02" {impulse up 1 2 dir 1 3}}
			{spawn "#_guts02a" {impulse up 2 1 dir 2 1}}
			{spawn "#_hand05" {impulse up 2 1 dir 2 1}}
			{spawn "#_head02" {impulse up 2 2 dir 3 2}}
			{if rand 0.5
				{spawn "#_lowtor03" {impulse up 2 2 dir 3 2}}
			else rand 0.5
				{spawn "#_halflimb02" {impulse up 2 2 dir 3 2}}
				{spawn "#_leg04" {impulse up 2 2 dir 3 2}}
			}
		}
		{if stuff "apds"
			{spawn "#_torse02" {impulse up 1 2 dir 1 3}}
			{spawn "#_guts02a" {impulse up 2 1 dir 2 1}}
			{spawn "#_hand05" {impulse up 2 1 dir 2 1}}
			{spawn "#_head02" {impulse up 2 2 dir 3 2}}
			{if rand 0.5
				{spawn "#_lowtor03" {impulse up 2 2 dir 3 2}}
			else rand 0.5
				{spawn "#_halflimb02" {impulse up 2 2 dir 3 2}}
				{spawn "#_leg04" {impulse up 2 2 dir 3 2}}
			}
		}
		{if stuff "apcb"
			{spawn "#_torse02" {impulse up 1 2 dir 1 3}}
			{spawn "#_guts02a" {impulse up 2 1 dir 2 1}}
			{spawn "#_hand05" {impulse up 2 1 dir 2 1}}
			{spawn "#_head02" {impulse up 2 2 dir 3 2}}
			{if rand 0.5
				{spawn "#_lowtor03" {impulse up 2 2 dir 3 2}}
			else rand 0.5
				{spawn "#_halflimb02" {impulse up 2 2 dir 3 2}}
				{spawn "#_leg04" {impulse up 2 2 dir 3 2}}
			}
		}
		{if stuff "heat_shell"
			{spawn "#_torse02" {impulse up 1 2 dir 1 3}}
			{spawn "#_guts02a" {impulse up 2 1 dir 2 1}}
			{spawn "#_hand05" {impulse up 2 1 dir 2 1}}
			{spawn "#_head02" {impulse up 2 2 dir 3 2}}
			{if rand 0.5
				{spawn "#_lowtor03" {impulse up 2 2 dir 3 2}}
			else rand 0.5
				{spawn "#_halflimb02" {impulse up 2 2 dir 3 2}}
				{spawn "#_leg04" {impulse up 2 2 dir 3 2}}
			}
		}
		{if stuff "sm"
			{spawn "#_torse02" {impulse up 1 2 dir 1 3}}
			{spawn "#_guts02a" {impulse up 2 1 dir 2 1}}
			{spawn "#_hand05" {impulse up 2 1 dir 2 1}}
			{spawn "#_head02" {impulse up 2 2 dir 3 2}}
			{if rand 0.5
				{spawn "#_lowtor03" {impulse up 2 2 dir 3 2}}
			else rand 0.5
				{spawn "#_halflimb02" {impulse up 2 2 dir 3 2}}
				{spawn "#_leg04" {impulse up 2 2 dir 3 2}}
			}
		}
		{delay 0.01 {volumes disable bullet contact blast touch}}
		{delay 15 {volumes enable bullet contact touch}}
		{if rand 0.02 {spawn "ground_blood01"}}
		{if rand 0.02 {spawn "ground_blood02"}}
		{if rand 0.02 {spawn "ground_blood03"}}
	}
	{on ground_hit
		{if min_speed 0.1
			{if rand 0.2 {spawn "ground_blood_big"}}
			{if rand 0.3 {spawn "ground_blood_small"}}
			{if rand 0.25 {spawn "ground_blood01"}}
			{if rand 0.2 {spawn "ground_blood02"}}
			{if rand 0.15 {spawn "ground_blood03"}}
		}
	}
}
{"small part"
	{on spawn
		{delay 0.01
			{volumes disable bullet contact blast touch}	;//prevent destroying at spawn moment
		}
		{delay 2 {volumes enable bullet contact blast}}
		;{call "stop_view"}
		{delay 25 15 {hide 10}}
	}
	{on blast_hit
		{if min_energy 0.5
			{hide 1}
		else
			{impulse up 3 1 dir 2 1}
		}
	}
	{on bullet_hit
		{if stuff "bullet"
			{impulse up 2 1 dir 1 0.5}
		else stuff "shell"
			{hide 1}
		}
	}
	{on contact
		{if effector "vehicle"
			{volumes disable bullet contact blast}		;//prevent destroing at spawn moment
			{hide 1}
		}
	}
}

{"small part fx"
	{on "stop_view"
		{delay 0.5 0.3 {view stop ""}}
	}
}

{"part concrete"
	{on ground_hit
		{if "crush"
			{if rand 0.2
				{call "destroy_part"}
			}
		}
		{set "ground_hit" 1}
	}
	{on contact
		{if effector "vehicle"
			{if "ground_hit"
				{call "destroy_part"}
			else "crush"
				{call "destroy_part"}
			}
		}
	}
	{on "destroy_part" overload
		{spawn "piece_crush"}
		{delete}
	}
}

{"medium part"
	{on spawn
		{delay 0.05
			{volumes disable bullet contact blast touch}	;//prevent destroing at spawn moment
		}
		{delay 1 {volumes enable bullet contact blast}}
	}
	{on blast_hit
		{if min_energy 20
			{call "destroy_part"}
		else min_energy 10
			{impulse up 10 0.3 dir 5 0.5}
		else min_energy 5
			{impulse up 5 0.3 dir 5 0.5}
		else min_energy 1
			{impulse up 1 0.3 dir 1 0.5}
		}
	}
	{on bullet_hit
		{if stuff "bullet"
			{if min_mass 100
				; do nothing
			else min_mass 55		;// wood medium part
				{impulse up 0.5 0.5 dir 0.5 0.5}
			}
		else stuff "shell"
			{call "destroy_part"}
		else stuff "zenite"
			{call "destroy_part"}
		}
	}
	{on contact
		{impulse up 0.1 0.1 dir 0.1 0.1}
	}
	{on "destroy_part"
		{hide 0.5}
	}
}

{"medium part ice"
	{on blast_hit
		{if min_energy 10
			{hide 1}
		}
	}
	{on contact overload
		{impulse up 0.04 0.02 dir 0.02 0.01}
		{##if effector "cannon"
			; do nothing
		else effector "vehicle"
			{delete}
		}
	}
}

{"big part concrete"
	{on contact
		{if effector "vehicle"
			{if "ground_hit"
				{call "destroy_part"}
			else "crush"
				{call "destroy_part"}
			}
		}
	}
	{on "destroy_part" overload
		{spawn "piece_crush_big"}
		{delete}
	}
}

{"big part"
	{on spawn
		{delay 0.1 {volumes disable touch}}
		{delay 1 {volumes enable bullet contact blast}}
	}
	{on blast_hit
		{if min_energy 25
			{call "destroy_part"}
		else min_energy 15
			{impulse up 10 0.3 dir 5 0.5}
		else min_energy 8
			{impulse up 5 0.3 dir 5 0.5}
		else min_energy 0.5
			{impulse up 1 0.3 dir 1 0.5}
		}
	}
	{on bullet_hit
		{if stuff "shell"
			{call "destroy_part"}
		else stuff "zenite"
			{impulse up 0.2 0.1 dir 0.1 0.05}
		}
	}
	{on contact
		{impulse up 0.1 0.1 dir 0.1 0.1}
	}
}


{"building_part part"
	{on blast_hit
		{if min_energy 40
			{impulse up 6 1 dir 5 1}
		else min_energy 20
			{impulse up 4 0.3 dir 4 0.5}
		else min_energy 10
			{impulse up 2 0.3 dir 2 0.5}
		else min_energy 5
			{impulse up 0.5 0.3 dir 0.5 0.5}
		}
	}
}

{"big part delete"
	{on spawn
		{delay 20
			{delete}
		}
	}
}

{"wood part"
	{on spawn
		{delay 0.1
			{volumes enable float}
		}
	}
	{on ground_hit
		{if terrain_pp "water"
			;{call "kick"}
		else terrain_pp "deep_water"
			;{call "kick"}
		}
	}
	{on "kick"
		{delay 15
			{kill_delay "kick_process"}
		}
		{call "kick_process"}
	}
	{on "kick_process"
		{delay 0.5 0.1 "kick_process"
			{impulse up 0.01}
			{call "kick_process"}
		}
	}
}

{"lamp_kerosene"
	{on spawn
		{add_view "light_kerosene_lamp" "light" "light"}
		{if tagged "broken"
			{bone hide "light"}
		else
			{view start "light"}
		}
	}
	{on break_armor
		{if volume "body"
			{if not tagged "broken"
				{call "break"}
			}
		}
	}
	{on contact
		{if can_crush
			{if not tagged "broken"
				{call "break"}
			}
		}
	}
	{on "break"
		{bone cut "light"}
		{spawn "lamp_kerosene_hit" "basis"}
		{tags add "broken"}
	}
}

{"fx_piece_flame"			;// fx entity that causes burn/heat damage for flamethrowers
	{on spawn
		{volumes "body" disable contact}
		{gravity 1}
		{call "delete_time"}
		{delay 0
			;{add_view "fire_flame_thrower_fly" "fire1" "root"}
			{view start "fire1"}
		}
		{delay 0.1
			{volumes "body" enable contact}
			{call "fire_radius"}
		}
		{delay 0.15 0.05
			{add_view "fire_flame_thrower_fly4" "fire2" "root"}
			{view start "fire2"}
		}
		{delay 0.3 0.05
			{add_view "fire_flame_thrower_fly4_1" "fire3" "root"}
			{view start "fire3"}
			{view stop "fire2"}
		}
	}
	{on contact
		{volumes disable contact}
		{fire radius 1 time 1 heating 0.3 effector follow}
		{if rand 0.2
			{call_synced "spawn_fire_die"}
		}
		{call "end"}
	}

	{on "spawn_fire_die"
		{spawn "fire_die"}
	}
	{##on grounded on			;// entity completely stopped moving on the ground and physics is disabled
		{view stop "fire1"}
		{view stop "fire2"}
		{call "ground_end"}
	}
	{on ground_hit
		{view stop "fire1"}
		{view stop "fire2"}
		{call "ground_end"}
	}
	{on "end"
		{view stop "fire1"}
		{view stop "fire2"}
		{view stop "fire3"}
		{delay 0.01
			{delete}
		}
	}
	{on "ground_end"
		{if not under_water
			{if terrain_fx "water"
				else terrain_fx "shallow_water"
				else
				{spawn "fire_flame_thrower" dir_velocity}
				{if rand 0.15
					{call_synced "ground_end_fire"}
				}
			}
		}
		{call "end"}
	}
	{on "ground_end_fire"
		{fire radius 1.2 time 20 heating 0.25}
		{spawn "fire_flame_thrower_ground" offset 0 0 -5}
		{spawn "burned_spot01" random_orientation}
	}
	{on "delete_time"}
	{on "fire_radius"}
}

;// Hand Held Flamethrowers
{"fx_piece_flame 20"			;// causes flamer thrower fuel to burn up after delay (disables far shooting)
	{on "delete_time" overload
		{delay 0.7
			{call "end"}
		}
	}
	{on "fire_radius" overload
		{fire radius 1 time 0.7 heating 0.65 follow}
	}
}

{"fx_piece_flame 30"			;// causes flamer thrower fuel to burn up after delay (disables far shooting)
	{on "delete_time" overload
		{delay 1.1
			{call "end"}
		}
	}
	{on "fire_radius" overload
		{fire radius 1 time 1.1 heating 0.65 follow}
	}
}
{"fx_piece_flame 40"			;// causes flamer thrower fuel to burn up after delay (disables far shooting)
	{on "delete_time" overload
		{delay 1.4
			{call "end"}
		}
	}
	{on "fire_radius" overload
		{fire radius 1 time 1.4 heating 0.65 follow}
	}
}

;// Vehicle Flamethrowers
{"fx_piece_flame 45"			;// causes flamer thrower fuel to burn up after delay (disables far shooting)
	{on "delete_time" overload
		{delay 1.2
			{call "end"}
		}
	}
	{on "fire_radius" overload
		{fire radius 1.2 time 1.2 heating 0.75 follow}
	}
}

{"fx_piece_flame 60"			;// causes flamer thrower fuel to burn up after delay (disables far shooting)
	{on "delete_time" overload
		{delay 1.5
			{call "end"}
		}
	}
	{on "fire_radius" overload
		{fire radius 1.2 time 1.5 heating 0.75 follow}
	}
}

{"fx_piece_flame 80"			;// causes flamer thrower fuel to burn up after delay (disables far shooting)
	{on "delete_time" overload
		{delay 1.8
			{call "end"}
		}
	}
	{on "fire_radius" overload
		{fire radius 1.2 time 1.8 heating 0.75 follow}
	}
}

;////----added for Hotmod
{"fx_piece_flame 100"			;// causes flamer thrower fuel to burn up after delay (disables far shooting)
	{on "delete_time" overload
		{delay 2
			{call "end"}
		}
	}
	{on "fire_radius" overload
		{fire radius 0.9 time 1.8 heating 0.75 follow}
	}
}

{"fx_piece_flame 160"			;// causes flamer thrower fuel to burn up after delay (disables far shooting)
	{on "delete_time" overload
		{delay 3.6
			{call "end"}
		}
	}
	{on "fire_radius" overload
		{fire radius 0.9 time 1.8 heating 0.75 follow}
	}
}
;////----added for Hotmod

{"burn_piece"					;// spawned entity that attaches fire damage to entities it contacts (ex. 125mm_ampulomet)
	{on contact
		{volumes disable contact}
		{fire radius 1 time 20 heating 0.25 effector follow}
		{delete}
	}
	{on grounded on			;// entity completely stopped moving on the ground and physics is disabled
		{delete}
	}
	{on ground_hit
		{delete}
	}
}

{"inventory_box"			;// used by ammo boxes and crates
	{on "break"
		{explode_inventory
			{5			"ex_ap_size1"	3	}
			{30			"ex_bomb_50kg"	8	}
			{100		"ex_bomb_100kg"	11	}
			{1000		"train_die"		15	}
			{10000		"train_die"		20	}
			{100000		"train_die"		25	}
			{1000000	"train_die"		30	}
		}
	}
}

{"flag"
	{on spawn
		{call "start"}
	}
	{on "stop"
		{ani_stop "flattern"}
		{ani_play "stop"}
	}
	{on "start"
		{ani_play "flattern" loop}
	}
}

{##"flag captureable" ;// No longer used?
	{on "capture"
		{if tex_mod "1"
			{ani_play "up" resume callback}
		else
			{ani_play "down" resume callback}
		}
	}
	{on "cancel"
		{set "stop" 1}
		{ani_stop "up"}
		{ani_stop "down"}
		{set "stop" 0}
	}
	{on "enable"
		{volumes "activate" enable contact}
	}
	{on "disable"
		{volumes "activate" disable contact}
	}
	{on animation_end "down"
		{if not "stop"
			{tex_mod "1"}
			{call "capture"}
		}
	}
	{on animation_end "up"
		{if not "stop"
			{tags add "captured"}
		}
	}
}

{"map_point"
	{on "start"
		{ani_play "rotate" loop}
	}
}

{"starshell"
	{on spawn
		{add_view "starshell_light"	"light" "root"}
		{delay 0.4
			{view start "light"}
		}
		{impulse up 40 fx 10 20 fy 10 20}
		{delay 4 1
			{delete}
		}
	}
}

{"water"
	{on spawn
		{ani_play "wave" loop}
		{add_view "wash_big_flow" "wash" "FX_wash"}
		{add_view "wash_big_flow" "wash" "FX_wash1"}
		{add_view "wash_big_flow" "wash" "FX_wash2"}
		{add_view "wash_big_flow" "wash" "FX_wash3"}
		{add_view "wash_big_flow" "wash" "FX_wash4"}
		{add_view "wash_big_flow" "wash" "FX_wash5"}
		{add_view "wash_big_flow" "wash" "FX_wash6"}
		{add_view "wash_big_flow" "wash" "FX_wash7"}
		{add_view "wash_big_flow" "wash" "FX_wash8"}
		{add_view "wash_big_flow" "wash" "FX_wash9"}
		{view start "wash"}
	}
}

{"water_animation_pingpong"
	{on spawn
		{set "backward" 0}
		{call "animate"}
	}
	{on animation_end "wave"
		{call "animate"}
	}
	{on "animate"
		{if "backward"
			{ani_play "wave" -1 callback}
			{set "backward" 0}
		else
			{ani_play "wave" 1 callback}
			{set "backward" 1}
		}
	}
}

{"cord_wood"
	{inflammation_time 3}
	(define "burn_start"
		{add_view "smoke_camp_norm" "fire" "fx_light"}
		{tags add "burning"}
		{view start "fire"}
		{burn time %0}
		{fire radius 0.7 time %0 heating 0.3 follow}
		{delay %0
			{view stop "fire"}
			{tags remove "burning"}
			{tags remove "burned"}
		}
	)
	{on spawn
		{if tagged "burning"
			{add_view "smoke_camp_norm" "fire" "fx_light"}
			{view start "fire"}
		}
	}
	{on "_burn"
		{if tagged "poured"
			{tags add "burned"}
			("burn_start" args 300)
		}
	}
	{on "burn"
		{if not burned
			{call "_burn"}
		}
	}
	{on contact
		{if effector "vehicle"
			{if not effector "bicycle"
				{call "break"}
			}
		}
	}
	{on blast
		{if volume "body"
			{if min_energy 0.5
				{call "break"}
			}
		}
	}
	{on "break"
		{if tagged "burning"
			{spawn "camp_die" no_position offset 0 0 5}
		else
			{spawn "wood_hit_small" no_position}
		}
		{delete}
	}
	{on "pour_over"
		{if name "fuel"
			{tags add "poured"}
		}
	}
}

{"camp_fire"
	{on spawn
		{call "burn"}
	}
	{on "_burn" overload
		("burn_start" args 7200)
	}
}

{"camp_fire_o"
	{on "_burn" overload}
}

{"camp_fire2"
	{on contact overload}
}

{"post_way"
	{on "hide"
		{bone hide "root"}
	}
	{on "show"
		{bone show "root"}
	}
}

{"stuff"
	{on "crush_container"
		{impulse up 0.4 0.2 dir 1 0.5}
		{impulse dir 2 1 cx 0 1 cy 0 1}
	}
	{on "drop_item"			;// when item is not in hand and is dropped from inventory.
		{impulse dir 2 1 cx 0 1 cy 0 1}
		{delay 0.4
			{link_sound "gunhit" "weapon/drop/gun_drop"}
			{play_sound "gunhit"}
		}
	}
	{on blast_hit
		{if not linked
			{call "blast_physics"}
		}
	}
	{on bullet_hit
		{if not linked
			{if stuff "shell"
				{call "shell_physics"}
			else
				{call "bullet_physics"}
			}
		}
	}
	{on "bullet_physics"
		{if min_mass 25
			{impulse up 0 dir 0.1 0.1}
		else min_mass 8
			{impulse up 0.1 0.05 dir 0.3 0.1}
		else
			{impulse up 0.4 0.2 dir 0.7 0.3}
		}
	}
	{on "shell_physics"
		{if min_mass 40
			{impulse up 0.2 0.1 dir 1 0.1}
		else min_mass 20
			{impulse up 0.4 0.2 dir 5 0.5}
		else min_mass 10
			{impulse up 1.0 0.2 dir 10 0.5}
		else min_mass 2
			{impulse up 1.5 0.2 dir 15 0.5}
		else
			{impulse up 2.5 0.2 dir 20 0.5}
		}
	}
	{on "blast_physics"
		{if min_energy 5
			{call "shell_physics"}
		else min_energy 0.3
			{call "bullet_physics"}
		}
	}
}

{"stuff no_blast_physics"
	{on "blast_physics" overload}
}

{"shell_cannon"		;// empty shell ejected from cannons
	{on spawn
		{volumes "body" disable contact}
		{delay 0.1
			{volumes "body" enable contact}
		}
	}
}

{"shell_cannon_auto"		;// empty shell ejected from cannons
	{on spawn
		{volumes "body" disable contact}
		{delay 0.05
			{volumes "body" enable contact}
		}
	}
}

{"paratrooper"
	{on spawn
		{tags add "base"}
		{view hide "parachute_x"}
	}
	{on "start"
		{ani_play "flight" callback}
		{tags add "_flight"}
	}
	{on animation_end "flight"
		{ani_play "landing" callback}
		{tags remove "_flight"}
	}
	{on animation_end "landing"
		{view show "parachute_x"}
		{hide 20}
	}
}

{"paratrooper_attach"
	{on animation_end "flight"
		{with_linked_entity "attach"
			{unlink}
		}
		{delay 10
			{delete}
		}
	}
}

{"parachute_attach"
	{inflammation_time 7}
	{on spawn
		{ani_wind "flight" end}
	}

	{on "start" overload
		{tags add "_flight"}
		{physics_work 1}
		{impulse up -0.01 forward 0.9} ;//Forward 1
		{gravity 0.35}

		;//Backward 2
		;{delay 0.6 {tags add "backward_2"}}
		{delay 0.6 "parachute_swing" {impulse forward -0.1}}
		{delay 0.7 "parachute_swing" {impulse forward -0.1}}
		{delay 0.8 "parachute_swing" {impulse forward -0.1}}
		{delay 0.9 "parachute_swing" {impulse forward -0.1}}
		{delay 1.0 "parachute_swing" {impulse forward -0.1}}
		{delay 1.1 "parachute_swing" {impulse forward -0.1}}
		{delay 1.2 "parachute_swing" {impulse forward -0.1}}
		{delay 1.3 "parachute_swing" {impulse forward -0.1}}
		{delay 1.4 "parachute_swing" {impulse forward -0.1}}
		{delay 1.5 "parachute_swing" {impulse forward -0.1}}
		{delay 1.6 "parachute_swing" {impulse forward -0.1}}
		{delay 1.7 "parachute_swing" {impulse forward -0.05}}
		{delay 1.8 "parachute_swing" {impulse forward -0.05}}
		{delay 1.9 "parachute_swing" {impulse forward -0.05}}
		{delay 2.0 "parachute_swing" {impulse forward -0.05}}
		{delay 2.1 "parachute_swing" {impulse forward -0.05}}
		{delay 2.2 "parachute_swing" {impulse forward -0.05}}
		{delay 2.3 "parachute_swing" {impulse forward -0.05}}
		;{delay 2.3 {tags remove "backward_2"}}

		;//Forward 3
		;{delay 2.8 {tags add "forward_3"}}
		{delay 2.8 "parachute_swing" {impulse forward 0.05}}
		{delay 2.9 "parachute_swing" {impulse forward 0.05}}
		{delay 3.0 "parachute_swing" {impulse forward 0.05}}
		{delay 3.1 "parachute_swing" {impulse forward 0.05}}
		{delay 3.2 "parachute_swing" {impulse forward 0.05}}
		{delay 3.3 "parachute_swing" {impulse forward 0.05}}
		{delay 3.4 "parachute_swing" {impulse forward 0.05}}
		{delay 3.5 "parachute_swing" {impulse forward 0.05}}
		{delay 3.6 "parachute_swing" {impulse forward 0.05}}
		{delay 3.7 "parachute_swing" {impulse forward 0.05}}
		{delay 3.8 "parachute_swing" {impulse forward 0.05}}
		{delay 3.9 "parachute_swing" {impulse forward 0.05}}
		{delay 4.0 "parachute_swing" {impulse forward 0.05}}
		{delay 4.1 "parachute_swing" {impulse forward 0.05}}
		{delay 4.2 "parachute_swing" {impulse forward 0.05}}
		{delay 4.3 "parachute_swing" {impulse forward 0.05}}
		;{delay 4.3 {tags remove "forward_3"}}

		;//Backward 4
		;{delay 5.2 {tags add "backward_4"}}
		{delay 5.2 "parachute_swing" {impulse forward -0.025}}
		{delay 5.3 "parachute_swing" {impulse forward -0.025}}
		{delay 5.4 "parachute_swing" {impulse forward -0.025}}
		{delay 5.5 "parachute_swing" {impulse forward -0.025}}
		{delay 5.6 "parachute_swing" {impulse forward -0.025}}
		{delay 5.7 "parachute_swing" {impulse forward -0.025}}
		{delay 5.8 "parachute_swing" {impulse forward -0.025}}
		{delay 5.9 "parachute_swing" {impulse forward -0.025}}
		{delay 6.0 "parachute_swing" {impulse forward -0.05}}
		{delay 6.1 "parachute_swing" {impulse forward -0.025}}
		{delay 6.2 "parachute_swing" {impulse forward -0.025}}
		{delay 6.3 "parachute_swing" {impulse forward -0.025}}
		{delay 6.4 "parachute_swing" {impulse forward -0.025}}
		{delay 6.5 "parachute_swing" {impulse forward -0.025}}
		{delay 6.6 "parachute_swing" {impulse forward -0.025}}
		{delay 6.7 "parachute_swing" {impulse forward -0.025}}
		;{delay 6.7 {tags remove "backward_4"}}

		;//Forward 5
		;{delay 7.6 {tags add "forward_5"}}
		{delay 7.6 "parachute_swing" {impulse forward 0.012}}
		{delay 7.7 "parachute_swing" {impulse forward 0.012}}
		{delay 7.8 "parachute_swing" {impulse forward 0.012}}
		{delay 7.9 "parachute_swing" {impulse forward 0.025}}
		{delay 8.0 "parachute_swing" {impulse forward 0.025}}
		{delay 8.1 "parachute_swing" {impulse forward 0.025}}
		{delay 8.2 "parachute_swing" {impulse forward 0.025}}
		{delay 8.3 "parachute_swing" {impulse forward 0.05}}
		{delay 8.4 "parachute_swing" {impulse forward 0.025}}
		{delay 8.5 "parachute_swing" {impulse forward 0.025}}
		{delay 8.6 "parachute_swing" {impulse forward 0.025}}
		{delay 8.7 "parachute_swing" {impulse forward 0.025}}
		{delay 8.8 "parachute_swing" {impulse forward 0.025}}
		;{delay 8.8 {tags remove "forward_5"}}

		;//Backward 6
		;{delay 10.0 {tags add "backward_6"}}
		{delay 10.0 "parachute_swing" {impulse forward -0.012}}
		{delay 10.1 "parachute_swing" {impulse forward -0.012}}
		{delay 10.2 "parachute_swing" {impulse forward -0.012}}
		{delay 10.3 "parachute_swing" {impulse forward -0.025}}
		{delay 10.4 "parachute_swing" {impulse forward -0.025}}
		{delay 10.5 "parachute_swing" {impulse forward -0.025}}
		{delay 10.6 "parachute_swing" {impulse forward -0.025}}
		{delay 10.7 "parachute_swing" {impulse forward -0.025}}
		{delay 10.8 "parachute_swing" {impulse forward -0.025}}
		{delay 10.9 "parachute_swing" {impulse forward -0.025}}
		{delay 11.0 "parachute_swing" {impulse forward -0.025}}
		{delay 11.1 "parachute_swing" {impulse forward -0.025}}
		;{delay 11.1 {tags remove "backward_6"}}

		;//Forward 7
		;{delay 12.5 {tags add "forward_7"}}
		{delay 12.5 "parachute_swing" {impulse forward 0.012}}
		{delay 12.6 "parachute_swing" {impulse forward 0.012}}
		{delay 12.7 "parachute_swing" {impulse forward 0.012}}
		{delay 12.8 "parachute_swing" {impulse forward 0.025}}
		{delay 12.9 "parachute_swing" {impulse forward 0.025}}
		{delay 13.0 "parachute_swing" {impulse forward 0.025}}
		{delay 13.1 "parachute_swing" {impulse forward 0.025}}
		{delay 13.2 "parachute_swing" {impulse forward 0.025}}
		{delay 13.3 "parachute_swing" {impulse forward 0.025}}
		{delay 13.4 "parachute_swing" {impulse forward 0.025}}
		{delay 13.5 "parachute_swing" {impulse forward 0.025}}
		;{delay 13.5 {tags remove "forward_7"}}

		;//Backward 8
		;{delay 14.7 {tags add "backward_8"}}
		{delay 14.7 "parachute_swing" {impulse forward -0.012}}
		{delay 14.8 "parachute_swing" {impulse forward -0.012}}
		{delay 14.9 "parachute_swing" {impulse forward -0.012}}
		{delay 15.0 "parachute_swing" {impulse forward -0.025}}
		{delay 15.1 "parachute_swing" {impulse forward -0.025}}
		{delay 15.2 "parachute_swing" {impulse forward -0.025}}
		{delay 15.3 "parachute_swing" {impulse forward -0.025}}
		{delay 15.4 "parachute_swing" {impulse forward -0.025}}
		{delay 15.5 "parachute_swing" {impulse forward -0.025}}
		{delay 15.6 "parachute_swing" {impulse forward -0.025}}
		{delay 15.7 "parachute_swing" {impulse forward -0.025}}
		;{delay 15.7 {tags remove "backward_8"}}

		;//Forward 9
		;{delay 16.8 {tags add "forward_9"}}
		{delay 16.8 "parachute_swing" {impulse forward 0.012}}
		{delay 16.9 "parachute_swing" {impulse forward 0.012}}
		{delay 17.0 "parachute_swing" {impulse forward 0.012}}
		{delay 17.1 "parachute_swing" {impulse forward 0.025}}
		{delay 17.2 "parachute_swing" {impulse forward 0.025}}
		{delay 17.3 "parachute_swing" {impulse forward 0.025}}
		{delay 17.4 "parachute_swing" {impulse forward 0.012}}
		;{delay 17.4 {tags remove "forward_9"}}

	}
	{on ground_hit
		{kill_delay "parachute_swing"}
		{ani_play "landing" callback}
		{tags remove "_flight"}
		{with_linked_entity "attach"
			{tags remove "can_die"}
			{unlink}
		}
		{physics_work 0}
	}
	{on animation_end "landing"
		{delete}
	}

	{on "burn"
		{if not burned
			{burn volume "chute" fx "smoke_dead_tree" time 20 1}
			{start_sound "fire/tree/"}
			{tags add "burned"}
		}
	}
}

{"parachute_attach ammo_crate"
	{on spawn
		{call "start"}
	}
	{on ground_hit overload
		{kill_delay "parachute_swing"}
		{ani_play "landing" callback}
		{tags remove "_flight"}
		{with_linked_entity "attach"
			{unlink}
			{ani_wind "close" begin}
			{impulse up 0.01}
		}
		{physics_work 0}
	}

}

{"parachute_cargo_attach"
	{on "start"
		{animate_place "attach" "paratruper_flight"}
	}
	{on animation_end "landing"
		{with_linked_entity "attach"
			{unlink}
		}
	}
}

{"parachute_inventory"			;// parachute ammo and weapon crates
	{on spawn
		{tags add "paratrooper_air"}
		{tags add "base"}
		{view hide "parachute_x"}
		{delay 0.7
			{tags remove "base"}
		}
		{ani_play "flight" callback}
	}
	{on "start"
		{ani_play "flight" callback}
	}
	{on animation_end "flight"
		{tags add "paratrooper"}
		{ani_play "landing" callback}
		{delay 5.0
			{spawn "inventory_box_parashute" "basis"}
		}
	}
	{on animation_end "landing"
		{view show "parachute_x"}
	}
}

{"random_animation"
	{on spawn
		{call "random_animation"}
	}

	(define "random_animation"
		rand 0.1
		{ani_play "animation%0" callback}
	)
	{on "random_animation"
		{if  ("random_animation" args 0)
		else ("random_animation" args 1)
		else ("random_animation" args 2)
		else ("random_animation" args 3)
		else ("random_animation" args 4)
		else ("random_animation" args 5)
		else ("random_animation" args 6)
		else ("random_animation" args 7)
		else ("random_animation" args 8)
		else rand 0.1
			{call "delay"}
		else
			{call "random_animation"}
		}
	}

	(define "random_animation_end"
		{on animation_end "animation%0"
			{call "random_animation"}
		}
	)
	("random_animation_end" args 0)
	("random_animation_end" args 1)
	("random_animation_end" args 2)
	("random_animation_end" args 3)
	("random_animation_end" args 4)
	("random_animation_end" args 5)
	("random_animation_end" args 6)
	("random_animation_end" args 7)
	("random_animation_end" args 8)

	{on "delay"
		{call "random_animation"}
	}
}

{"random_animation with_delay"
	{on "delay" overload
		{delay 12 4
			{call "random_animation"}
		}
	}
}

{"blast_flattern"
	{on blast
		{if volume "flattern"
			{if min_energy 0.3
				{ani_play "flattern"}
			}
		}
	}
}

{"pointer_attack"
	{on spawn
		{tags add "pointer_attack"}
	}
	{on "show"
		{inactive 0}
		{delay 5
			{inactive 1}
		}
	}
}

{"pointer_defend"
	{on spawn
		{tags add "pointer_defend"}
	}
	{on "show"
		{inactive 0}
		{delay 5
			{inactive 1}
		}
	}
}

{"pointer_enemy"
	{on spawn
		{tags add "pointer_enemy"}
	}
	{on "show"
		{inactive 0}
		{delay 5
			{inactive 1}
		}
	}
}

{"pointer_artillery"
	{on spawn
		{tags add "pointer_artillery"}
	}
}

{"pointer_mortar"
	{on spawn
		{tags add "pointer_mortar"}
	}
}

{"pointer_going"
	{on spawn
		{tags add "pointer_going"}
	}
	{on "show"
		{inactive 0}
		{delay 5
			{inactive 1}
		}
	}
}

{"pointer_watchout"
	{on spawn
		{tags add "pointer_watchout"}
	}
	{on "show"
		{inactive 0}
		{delay 5
			{inactive 1}
		}
	}
}

{"pointer_help"
	{on spawn
		{tags add "pointer_help"}
	}
	{on "show"
		{inactive 0}
		{delay 5
			{inactive 1}
		}
	}
}

{"user_guide"
	{on spawn
		{tags add "user_guide"}
		{inactive 0}
		{delay 10
			{hide 5}
		}
	}
}

{"radio_beacon"
	{on spawn
		{add_view "stop_signal" "lamp" "fx_lamp"}
		{view start "lamp"}
	}
}

{"eureka_beacon"
	{on spawn
		{spawn "light_boat_dir" "eureka_beacon_light" x}
		{delay 150.0
			{delete}
		}
	}
}

{"sandstorm"
	{on spawn
		{add_view "desert2_fx" "lamp" "fx_lamp"}
		{view start "super"}
	}
}

{"big_flying_rocket"
	{on spawn
		{link_sound "fly" "weapon/shot/reactive/rocket"}
		{play_sound "fly" 1}
	}
}

{"welding"
	{on spawn
		{add_view "spark_electro02a" "welding" "root"}
		{view start "welding"}
	}
}

{"air_cloud"
	{on spawn
		{add_view "dustrun_snow_big" "air_cloud" "root"}
		{view start "air_cloud"}
	}
}

{"exp_det_dust"
	{on "explode"
		{add_view "ex_det" "detonation" "basis"}
		{view start "detonation"}
	}
}

{"flash_gun_big_entity"
	{on "explode"
		{add_view "flash_gun_big" "detonation" "basis"}
		{view start "detonation"}
	}
}

{"light_plafond_dim_entity"
	{on spawn
		{add_view "light_plafond_dim" "welding" "root"}
		{view start "welding"}
	}
}

{"light_plafond_dim_w_entity"
	{on spawn
		{add_view "light_plafond_dim_w" "welding" "root"}
		{view start "welding"}
	}
}

(define "shellhole_show_with_delay"
	{on spawn
		{view hide "shellhole"}
		{delay %0
			{view show "shellhole"}
		}
	}
)

{"shellhole_dead_moto"
	("shellhole_show_with_delay" args 0.1)
}
{"shellhole_dead_car"
	("shellhole_show_with_delay" args 0.2)
}
{"shellhole_dead_tank"
	("shellhole_show_with_delay" args 0.35)
}

{"foxhole_spawned"
	{on spawn
		{tags add "foxhole_spawned"}		;// mission script helper
	}
}

{"trench_engineer"
	{on spawn
		{tags add "trench_spawned"}		;// mission script helper
	}
}

{"flare"
	{on spawn
		{gravity 1.3}
		{tags add "flare"}
		{add_view "signal_rocket" "flare" "root"}
		{view start "flare"}
		{delay 15.5
			{delete}
		}
	}
}

{"flare_marker"				;// Flare Marker ammo, for special missions scripting
	{on spawn
		{tags add "flare"}
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{delay 10 2 {view stop "smoke"}}
		{delay 50 {delete}}
	}
}

{"parachute_signal_fire"
	{on spawn
		{add_view "signal_rocket2" "signal" "fx_signal"}
		{view start "signal"}
		{ani_play "flight" 0.5}
		{delay 3
			{ani_stop "flight"}
			{delay 35
				{ani_play "flight" resume callback}
			}
		}
	}
	{on animation_end "flight"
		{delay 0
			{delete}
		}
	}
}

{"delete_after_spawn"
	{on spawn
		{delay 10
			{hide 2}
		}
	}
}

{"fire_source"
	{on spawn
		{set "burning" 1}
		{fire radius 1.5 time 99999 heating 0.5 follow}
	}
}

{"pointer"
	{on spawn
		{tags add "pointer"}
;		{add_view "mission_pointer" "mission_pointer" "pointer"}
;		{view start "mission_pointer"}
	}
	{on "show"
		{inactive 0}
		{link_sound "pointer" "world/pointer/"}
		{play_sound "pointer"}
		{delay 10
			{inactive 1}
		}
	}
}

{"pointer_green"
	{on spawn
		{tags add "pointer"}
;		{add_view "mission_pointer_g" "mission_pointer_g" "pointer"}
;		{view start "mission_pointer_g"}
	}
	{on "show"
		{inactive 0}
		{delay 10
			{inactive 1}
		}
	}
}

{"pointer_blue"
	{on spawn
		{tags add "pointer"}
;		{add_view "mission_pointer_b" "mission_pointer_b" "pointer"}
;		{view start "mission_pointer_b"}
	}
	{on "show"
		{inactive 0}
		{delay 10
			{inactive 1}
		}
	}

}
{"pointer_bait"				;// mission objective icon/helper
	{on spawn
		{tags add "pointer_bait"}
		{tags add "quest"}
		{add_view "bait" "bait" "upper"}
		{view start "bait"}
	}
}
{"pointer_wood"				;// mission objective icon/helper
	{on spawn
		{tags add "pointer_wood"}
		{tags add "quest"}
		{add_view "wood" "wood" "upper"}
		{view start "wood"}
	}
}
{"pointer_repair"				;// mission objective icon/helper
	{on spawn
		{tags add "pointer_repair"}
		{tags add "quest"}
		{add_view "repair" "repair" "upper"}
		{view start "repair"}
	}
}
{"pointer_ammo"				;// mission objective icon/helper
	{on spawn
		{tags add "pointer_ammo"}
		{tags add "quest"}
		{add_view "ammo" "ammo" "upper"}
		{view start "ammo"}
	}
}
{"pointer_mines"				;// mission objective icon/helper
	{on spawn
		{tags add "pointer_mines"}
		{tags add "quest"}
		{add_view "mines" "mines" "upper"}
		{view start "mines"}
	}
}
{"pointer_fuel"				;// mission objective icon/helper
	{on spawn
		{tags add "pointer_fuel"}
		{tags add "quest"}
		{add_view "fuel" "fuel" "upper"}
		{view start "fuel"}
	}
}

{"crosshair"				;// mission objective icon/helper
	{on spawn
		{tags add "crosshair"}
	}
	{on "mortar"
		{tags add "mortar_bombarding"}
		{spawn "mortar_barrage"}
	}
}

{"artillery_aim"			;// mission helper
	{on spawn
		{tags add "artillery_aim"}
	}
}

{"fire_small_fx"
	{on spawn
		{add_view "fire_small" "fire_small" "root"}
		{add_view "sun" "sun" "root"}
		{view start "sun"}
		{view start "fire_small"}
		;{add_view "light_spot_ground" "light_spot_ground" "root"}
		;{view start "light_spot_ground"}
	}
}

{"artillery_minimap_signal_heavy"
	{on spawn
		(mod "mp"
			{delay 1.50
				{delete}
			}
		)
		(mod not "mp"
			{delay 2.50
				{delete}
			}
		)
	}
}

{"artillery_minimap_signal_medium"
	{on spawn
		(mod "mp"
			{delay 0.75
				{delete}
			}
		)
		(mod not "mp"
			{delay 1.50
				{delete}
			}
		)
	}
}

{"artillery_minimap_signal_light"
	{on spawn
		(mod "mp"
			{delay 0.75
				{delete}
			}
		)
		(mod not "mp"
			{delay 1.00
				{delete}
			}
		)
	}
}

{"map_point_tagger"
	{on spawn
		{tags add "flag"}
	}
}

{"arrow_enemy"				;// mission objective icon/helper
	{on spawn
		{tags add "arrow_enemy"}
	}
}

{"arrow_friendly"			;// mission objective icon/helper
	{on spawn
		{tags add "arrow_enemy"}
	}
}

{"arrow_enemy_left"			;// mission objective icon/helper
	{on spawn
		{tags add "arrow_enemy_left"}
	}
}

{"arrow_enemy_right"		;// mission objective icon/helper
	{on spawn
		{tags add "arrow_friendly_straight"}
	}
}

{"arrow_enemy_straight"		;// mission objective icon/helper
	{on spawn
		{tags add "arrow_enemy_right"}
	}
}
{"arrow_friendly_left"		;// mission objective icon/helper
	{on spawn
		{tags add "arrow_friendly_left"}
	}
}
{"arrow_friendly_right"		;// mission objective icon/helper
	{on spawn
		{tags add "arrow_friendly_right"}
	}
}
{"arrow_friendly_straight"	;// mission objective icon/helper
	{on spawn
		{tags add "arrow_friendly_straight"}
	}
}
{"spawn_team_a"				;// mission objective icon/helper
	{on spawn
		{tags add "spawn_team_a"}
	}
}
{"spawn_team_b"				;// mission objective icon/helper
	{on spawn
		{tags add "spawn_team_b"}
	}
}

;//////////////////////armor comp /////////////////////////
{"hm68_cumulative_assistor"
	{on spawn {delay 0.7 {delete}}}
	{on ground_hit	{delete}}
	{on contact	{delete}}
}

{"cumulative_assistor_1gen"

	{on overlap begin
		{with_effector {call "armor_comp_on_1gen"}}
		{tags add "cumulative_assistor_spawn"}
	}
}



(define "cw_assist_spawner"
	{on spawn
		{spawn "%0" "sp_point1" x}
		{spawn "%0" "sp_point2" x}
		{spawn "%0" "sp_point3" x}
		{spawn "%0" "sp_point4" x}
		{spawn "%0" "sp_point5" x}
		{spawn "%0" "sp_point6" x}
		{spawn "%0" "sp_point7" x}
		{spawn "%0" "sp_point8" x}
		{spawn "%0" "sp_point9" x}
		{spawn "%0" "sp_point10" x}
		{spawn "%0" "sp_point11" x}
		{spawn "%0" "sp_point12" x}
		{spawn "%0" "sp_point13" x}
		{spawn "%0" "sp_point14" x}
		{spawn "%0" "sp_point15" x}
		{spawn "%0" "sp_point16" x}
		{spawn "%0" "sp_point17" x}
		{spawn "%0" "sp_point18" x}
		{spawn "%0" "sp_point19" x}
		{spawn "%0" "sp_point20" x}
		{spawn "%0" "sp_point21" x}
		{spawn "%0" "sp_point22" x}
		{spawn "%0" "sp_point23" x}
		{spawn "%0" "sp_point24" x}
		{spawn "%0" "sp_point25" x}
		{spawn "%0" "sp_point26" x}
		{spawn "%0" "sp_point27" x}
		{spawn "%0" "sp_point28" x}
		{spawn "%0" "sp_point29" x}
		{spawn "%0" "sp_point30" x}
		{spawn "%0" "sp_point31" x}
		{spawn "%0" "sp_point32" x}
		{spawn "%0" "sp_point33" x}
		{spawn "%0" "sp_point34" x}
		{spawn "%0" "sp_point35" x}
		{spawn "%0" "sp_point36" x}
		{spawn "%0" "sp_point37" x}
		{spawn "%0" "sp_point38" x}
		{spawn "%0" "sp_point39" x}
		{spawn "%0" "sp_point40" x}
		{spawn "%0" "sp_point41" x}
		{spawn "%0" "sp_point42" x}
		{spawn "%0" "sp_point43" x}
		{spawn "%0" "sp_point44" x}
		{spawn "%0" "sp_point45" x}
		{spawn "%0" "sp_point46" x}
		{spawn "%0" "sp_point47" x}
		{spawn "%0" "sp_point48" x}
		{spawn "%0" "sp_point49" x}
		{spawn "%0" "sp_point50" x}
		{spawn "%0" "sp_point51" x}
		{spawn "%0" "sp_point52" x}
		{spawn "%0" "sp_point53" x}
		{spawn "%0" "sp_point54" x}
		{spawn "%0" "sp_point55" x}
		{spawn "%0" "sp_point56" x}
		{spawn "%0" "sp_point57" x}
		{spawn "%0" "sp_point58" x}
		{spawn "%0" "sp_point59" x}
		{spawn "%0" "sp_point60" x}
		{spawn "%0" "sp_point61" x}
		{spawn "%0" "sp_point62" x}
		{spawn "%0" "sp_point63" x}
		{spawn "%0" "sp_point64" x}
		{spawn "%0" "sp_point65" x}
		{spawn "%0" "sp_point66" x}
		{spawn "%0" "sp_point67" x}
		{spawn "%0" "sp_point68" x}
		{spawn "%0" "sp_point69" x}
		{spawn "%0" "sp_point70" x}
		{spawn "%0" "sp_point71" x}
		{spawn "%0" "sp_point72" x}
		{spawn "%0" "sp_point73" x}
		{spawn "%0" "sp_point74" x}
		{spawn "%0" "sp_point75" x}
		{spawn "%0" "sp_point76" x}
		{spawn "%0" "sp_point77" x}
		{spawn "%0" "sp_point78" x}
		{spawn "%0" "sp_point79" x}
		{spawn "%0" "sp_point80" x}
		{spawn "%0" "sp_point81" x}
		{spawn "%0" "sp_point82" x}
		{spawn "%0" "sp_point83" x}
		{spawn "%0" "sp_point84" x}
		{spawn "%0" "sp_point85" x}
		{spawn "%0" "sp_point86" x}
		{spawn "%0" "sp_point87" x}
		{spawn "%0" "sp_point88" x}
		{spawn "%0" "sp_point89" x}
		{spawn "%0" "sp_point90" x}
		{spawn "%0" "sp_point91" x}
		{spawn "%0" "sp_point92" x}
		{spawn "%0" "sp_point93" x}
		{spawn "%0" "sp_point94" x}
		{spawn "%0" "sp_point95" x}
		{spawn "%0" "sp_point96" x}
		{spawn "%0" "sp_point97" x}
		{spawn "%0" "sp_point98" x}
		{spawn "%0" "sp_point99" x}
		{spawn "%0" "sp_point100" x}
		{spawn "%0" "sp_point101" x}
		{spawn "%0" "sp_point102" x}
		{spawn "%0" "sp_point103" x}
		{spawn "%0" "sp_point104" x}
		{spawn "%0" "sp_point105" x}
		{spawn "%0" "sp_point106" x}
		{spawn "%0" "sp_point107" x}
		{spawn "%0" "sp_point108" x}
		{spawn "%0" "sp_point109" x}
		{spawn "%0" "sp_point110" x}
		{spawn "%0" "sp_point111" x}
		{spawn "%0" "sp_point112" x}
		{spawn "%0" "sp_point113" x}
		{spawn "%0" "sp_point114" x}
		{spawn "%0" "sp_point115" x}
		{spawn "%0" "sp_point116" x}
		{spawn "%0" "sp_point117" x}
		{spawn "%0" "sp_point118" x}
		{spawn "%0" "sp_point119" x}
		{spawn "%0" "sp_point120" x}
		{delay 0.1 {delete}}

	}
)

{"armor_comp_assistor" ("cw_assist_spawner" args hm68_cumshell_assistor)}
;{"cw_cumshassist_spawner_1gen" ("cw_assist_spawner" args cw_cumshell_assistor_1gen)}

{"detector"
	{on spawn
	      {delay 0.2
		{delete}
	     }
	}
	{on bullet_hit overload
	       {impulse up 0.01 com}
	       {gravity 0.01}
	       {volumes "body" disable all}

	      {if stuff "heat_shell"
		 	{spawn "armor_comp_assistor" "missile_point" x}
	       else stuff "rocketlauncher"
	       	 	{spawn "armor_comp_assistor" "missile_point" x}
	       else stuff "cumulative_charge"
	      	 	{spawn "armor_comp_assistor" "missile_point" x}
	       else stuff "hesh"
	       		 {spawn "armor_comp_assistor" "missile_point" x}
	     }

	}
}

{"detector_big"
	{on spawn
	      {delay 0.2
		{delete}
	     }
	}
	{on bullet_hit overload
	       {impulse up 0.01 com}
	       {gravity 0.01}
	       {volumes "body" disable all}

	      {if stuff "heat_shell"
		 	{spawn "armor_comp_assistor" "missile_point" x}
	       else stuff "rocketlauncher"
	       	 	{spawn "armor_comp_assistor" "missile_point" x}
	       else stuff "cumulative_charge"
	      	 	{spawn "armor_comp_assistor" "missile_point" x}
	       else stuff "hesh"
	       		 {spawn "armor_comp_assistor" "missile_point" x}
	     }

	}
}


{"detector_extra_big"
	{on spawn
	      {delay 0.2
		{delete}
	     }
	}
	{on bullet_hit overload
	       {impulse up 0.01 com}
	       {gravity 0.01}
	       {volumes "body" disable all}

	      {if stuff "heat_shell"
		 	{spawn "armor_comp_assistor" "missile_point" x}
	       else stuff "rocketlauncher"
	       	 	{spawn "armor_comp_assistor" "missile_point" x}
	       else stuff "cumulative_charge"
	      	 	{spawn "armor_comp_assistor" "missile_point" x}
	       else stuff "hesh"
	       		 {spawn "armor_comp_assistor" "missile_point" x}
	     }

	}
}


;/////////////////////armor comp /////////////////////////

;// register engine-used props

{"steel"}
{"wood"}
{"flesh"}
{"concrete"}
{"sand"}
{"ice"}

{"capacity"}
{"collectable"}
{"crater"}
{"flag_slave"}
{"nocover"}
{"no_plant"}
{"obstacle_ignore_height"}
{"self_propelled"}
{"shoulderbag"}
{"slow_on_crush"}
{"spread_items"}
{"trailer"}
{"tractor"}
{"turn_over"}
{"captor"} 			;// source code: used for bots move orders and stop distance from flags

{"round_sandbag"}
{"round_sandbag2"}
{"round_sandbag2"}
{"round_sandbag3"}
{"sandbag_cannon"}
{"sandbag_cannon_concentric"}
{"sandbag_tank_3m"}
{"sandbag_tank_5m"}
{"sandbag_round"}
{"no_minimap_view"}
{"delete_after_burn"}


{"vision_lev01_air"}

{"vision_lev01_boat"}
{"vision_lev02_boat"}
{"vision_lev03_boat"}
{"vision_lev04_boat"}
{"vision_lev05_boat"}

{"vision_lev00_can"}
{"vision_lev01_can"}
{"vision_lev02_can"}
{"vision_lev03_can"}
{"vision_lev04_can"}
{"vision_lev05_can"}

{"vision_lev01"}
{"vision_lev02"}
{"vision_lev03"}
{"vision_lev04"}
{"vision_lev05"}
{"vision_lev06"}