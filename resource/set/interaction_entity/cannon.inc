(define "handle_ik"
	{on ik begin "basis"				;// basis bone rotates
		{play_sound "basis_turret" 1}
	}
	{on ik end "basis"					;// basis stops rotation
		{stop_sound "basis_turret"}
	}
	{on ik begin "turret"				;// turret bone rotates (horizontal rotation)
		{if cannon_state "fire"
			{play_sound "rotate_turret" 1}
			{ani_play "aim_h" loop resume}
		}
	}
	{on ik end "turret"					;// turret stops rotation
		{stop_sound "rotate_turret"}
		{ani_stop "aim_h"}
	}
	{on ik begin "gun_rot"				;// gun bone rotates (vertical rotation)
		{if cannon_state "fire"
			{play_sound "rotate_gun" 1}
			{ani_play "aim_v" loop resume}
		}
	}
	{on ik end "gun_rot"				;// gun stops rotation
		{stop_sound "rotate_gun"}
		{ani_stop "aim_v"}
	}
)

;/*=========== Cannon Begin ===========*/

{"cannon"							;// master / base code for all cannons
	("handle_ik")

	{on "engine_toggle" overload}	;// disables engine toggle for cannons
	{on "engine_on"	overload}		;// disables engine fx and sound for cannons

	{on "gun_pebble_start"			;// special event called during mission script
		{add_view "gun_broken" "gun_broken" "foresight1"}
		{view start "gun_broken"}
	}

	{on "gun_pebble_stop"			;// special event called during mission script
		{view stop "gun_broken"}
	}

	{on spawn
		{set "engine_on" 0}
	}

	{on move on overload
		{play_sound "move" 1}
	}

	{on turn on overload
		{play_sound "move" 1}
	}

	{on turn off
		{stop_sound "move"}
	}

	{on move off
		{stop_sound "move"}
	}

	{on "add_movement_sound"
		{link_sound "move" "vehicle/cannon_roll"}
	}

	{on pierce sync
		{vehicle_health_damage_pierce}
	}

	(define "impluse_process_blast" 				;// {on blast_hit} blastwave hits any part of entity
		{if min_energy %blast_energy
			{if not linked			;// cannon linked to another vehicle (ex. being towed). Otherwise, impulse will break the link.
				{impulse up (/ %impulse 3) (/ %range 2) dir (/ %impulse 2) %range}
			}
			{if simulating			;// simulating: entity is being handled by physics right now. i.e. being thrown by impulse
				{attack_save}		;// saves attacker information (attacker entity/weapon)
				{delay_ex 0.1
					{attack_load}		;// loads attacker information (attacker entity/weapon)
					;//{crew_throw_off up 2 1 dir 5 1 turn 0 180 forward 1 force} ;// disabled as crew can be thrown of by direct blast to individuals
				}
			}
		}
	)

	{on blast_hit					;// any part of vehicle hit with blast energy
		{if min_mass 6000				;// if mass ≥ 6000 kg			;// Super Heavy Cannons
			("impluse_process_blast"	blast_energy(9)					;// 150 HE and Up, Dynamite, Air Bombs
				impulse(3.0)			;// impulse amount
				range(0.25)				;// ± to impulse amount
			)
			("impluse_process_blast"	blast_energy(7)					;// 100mm HE - 130mm HE
				impulse(2.0)
				range(0.25)
			)
			("impluse_process_blast"	blast_energy(5)					;// 85mm HE - 93mm HE, AT Mine, 12cm Mortar
				impulse(1.5)
				range(0.25)
			)
			("impluse_process_blast"	blast_energy(3.5)				;// 75mm HE - 77mm HE
				impulse(1.0)
				range(0.25)
			)
			("impluse_process_blast"	blast_energy(2)					;// 37mm HE - 65mm HE, 8cm Mortar, RPG's
				impulse(0.5)
				range(0.25)
			)

		else min_mass 2250	;// if mass ≥ 2,250 kg						;// Heavy Cannons
			("impluse_process_blast"	blast_energy(9)					;// 150 HE and Up, Dynamite, Air Bombs
				impulse(3.5)			;// impulse amount
				range(0.25)				;// ± to impulse amount
			)
			("impluse_process_blast"	blast_energy(7)					;// 100mm HE - 130mm HE
				impulse(2.5)
				range(0.25)
			)
			("impluse_process_blast"	blast_energy(5)					;// 85mm HE - 93mm HE, AT Mine, 12cm Mortar
				impulse(2.0)
				range(0.25)
			)
			("impluse_process_blast"	blast_energy(3.5)				;// 75mm HE - 77mm HE
				impulse(1.5)
				range(0.25)
			)
			("impluse_process_blast"	blast_energy(2)				;// 37mm HE - 65mm HE, 8cm Mortar, RPG's
				impulse(1.0)
				range(0.25)
			)

		else min_mass 800	;// if mass ≥ 800 kg						;// Small Medium Cannons
			("impluse_process_blast"	blast_energy(9)					;// 150 HE and Up, Dynamite, Air Bombs
				impulse(4.0)			;// impulse amount
				range(0.25)				;// ± to impulse amount
			)
			("impluse_process_blast"	blast_energy(7)					;// 100mm HE - 130mm HE
				impulse(3.0)
				range(0.25)
			)
			("impluse_process_blast"	blast_energy(5)					;// 85mm HE - 93mm HE, AT Mine, 12cm Mortar
				impulse(2.5)
				range(0.25)
			)
			("impluse_process_blast"	blast_energy(3.5)				;// 75mm HE - 77mm HE
				impulse(2.0)
				range(0.25)
			)
			("impluse_process_blast"	blast_energy(2)					;// 37mm HE - 65mm HE, 8cm Mortar, RPG's
				impulse(1.5)
				range(0.25)
			)

		else min_mass 300	;// if mass ≥ 300 kg						;// Light Cannons
			("impluse_process_blast"	blast_energy(9)					;// 150 HE and Up, Dynamite, Air Bombs
				impulse(4.5)			;// impulse amount
				range(0.25)				;// ± to impulse amount
			)
			("impluse_process_blast"	blast_energy(7)					;// 100mm HE - 130mm HE
				impulse(3.5)
				range(0.25)
			)
			("impluse_process_blast"	blast_energy(5)					;// 85mm HE - 93mm HE, AT Mine, 12cm Mortar
				impulse(3.0)
				range(0.25)
			)
			("impluse_process_blast"	blast_energy(3.5)				;// 75mm HE - 77mm HE
				impulse(2.5)
				range(0.25)
			)
			("impluse_process_blast"	blast_energy(2)				;// 37mm HE - 65mm HE, 8cm Mortar, RPG's
				impulse(2.0)
				range(0.25)
			)

		else				;// if mass less than 300 kg				;// Carried Cannons
			("impluse_process_blast"	blast_energy(9)					;// 150 HE and Up, Dynamite, Air Bombs
				impulse(5.0)			;// impulse amount
				range(0.25)				;// ± to impulse amount
			)
			("impluse_process_blast"	blast_energy(7)					;// 100mm HE - 130mm HE
				impulse(4.0)
				range(0.25)
			)
			("impluse_process_blast"	blast_energy(5)					;// 85mm HE - 93mm HE, AT Mine, 12cm Mortar
				impulse(3.5)
				range(0.25)
			)
			("impluse_process_blast"	blast_energy(3.5)				;// 75mm HE - 77mm HE
				impulse(3.0)
				range(0.25)
			)
			("impluse_process_blast"	blast_energy(2)					;// 37mm HE - 65mm HE, 8cm Mortar, RPG's
				impulse(2.5)
				range(0.25)
			)
		}
	}

	{on "cut_parts"
		{add_view "smoke_dead_norm" "deathfx" "fxfire1"}
		{view start "deathfx"}
		(define "cut_part"
			{if rand %1
				{if "crush"
					{tear "piece_medium_steel" bone %0
						{impulse up 2 1 dir 2 1 cx 2 1 cy 2 1 rnd_dir 1 no_position}
						{call "check_delete_part"}
					}
				else
					{tear "piece_medium_steel" bone %0
						{impulse up 4 1 dir 4 2 cx 2 1 cy 2 1 rnd_dir 4 no_position}
						{call "check_delete_part"}
					}
				}
			}
		)
		("cut_part" args "standL" 1)
		("cut_part" args "standR" 1)
		("cut_part" args "shield_lower" 1)
		("cut_part" args "part1" 0.6)
		("cut_part" args "part2" 0.6)
		("cut_part" args "part3" 0.6)
		("cut_part" args "part4" 0.6)
		("cut_part" args "part5" 0.6)
		("cut_part" args "part6" 0.6)
		("cut_part" args "part7" 0.6)
		("cut_part" args "part8" 0.6)
		("cut_part" args "part9" 0.6)
		("cut_part" args "fragment1" 1)
		("cut_part" args "fragment2" 1)
		("cut_part" args "fragment3" 1)
		("cut_part" args "fragment4" 1)
		("cut_part" args "fragment5" 1)
		{delay 14 {view stop "deathfx"}}
	}

	{on fire "gun"
		{ani_play "recoil"}
		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{call "spawn_shell"}
	}

	{on "spawn_shell"
		{tags add "gun_fired"}
		{call "spawn_shell_delay"}
		(define "shell_eject_delay"
			{delay_ex %0
				{ani_play "shell_eject" 1.0}
				{delay_ex %1
					{add_view "smoke_breach" "smoke_shell" "fx_invers"}
					{view start "smoke_shell"}
					{delay 2.5 0.5
						{view stop "smoke_shell"}
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
		("shell_eject_delay" args 0.15 0.05)
	}

	{on "reload"
		{call "reload_delay"}
		(define "reload_delay"
			{if tagged "gun_fired"
				{delay %0 ;4.5
					{tags remove "gun_fired"}
					{ani_play "shell_eject" -1.0}
					{talk "reloaded"}
				}
			else ;//switching ammo
				{delay %1 ;0.5
					{ani_play "shell_eject" 1.0}
				}
				{delay %2 ;5
					{ani_play "shell_eject" -1.0}
					{talk "reloaded"}
				}
			}
		)
		{delay 1
			{talk "reload"}
		}
	}

	{on "reload_delay"
		("reload_delay" args 4.5 0.5 5)
	}

	{on contact sync
		{if not impregnable
			{if not effector "armored_car"
				{if effector "tank"
					{if effector_velocity 10
						{if volume "body"
							{set "crush" 1}
							{call "explosion"}
						}
						{component destroy}
					else effector_velocity 5
						{component break}
					}
				else effector "train" ;// or "railway"
					{call "crush_damage"}
				else effector "airborne"
					{call "crush_damage"}
				else effector "grenade"
					{talk "grenade"}
					{crew_emit}
				}
			}
		}
	}

	{on "crush_damage"
		{if effector_velocity 6
			{set "crush" 1}
			{component break}
		}
	}

	{on "check_water_level" overload
		{if not linked
			{if water_level 1.3
				{able "sinking" 1}
				{tags add "no_scavenge"}
			else
				{able "sinking" 0}
			}
		}
	}

	{on "sandbag_cannon"
		{link_sound "deploy" "vehicle/deploy"}
		{play_sound "deploy"}
		{spawn "placement_sandbag_generic" "basis" x}
	}

	{on "tear_wheel" overload}

	{on "emit_crew" overload
		{crew_emit}
	}
}

;/*=========== Cannon End ===========*/

;/*=========== General Props Begin ===========*/

{"cannon no_shell"
	{on "spawn_shell" overload
		{tags add "gun_fired"}
		{call "no_spawn_shell_delay"}
		(define "no_shell_eject_delay"
			{delay_ex %0
				{ani_play "shell_eject" 1.0}
				{delay_ex %1
					{add_view "smoke_breach" "smoke_shell" "fx_invers"}
					{view start "smoke_shell"}
					{delay 2.5 0.5
						{view stop "smoke_shell"}
					}
				}
			}
		)
	}
	{on "no_spawn_shell_delay" overload
		("no_shell_eject_delay" args 0.15 0.05)
	}
}


{"cannon wheeled"
	{on "check_work_mover" overload			;// overrides wheel settings in car interaction scripts
		{if tagged "wheel_teared"
			{chassis_work 0}
		else
			{if broken "wheel" 2			;// 2 broken wheels
				{movement_limit slow}
				{chassis_work 1}
			else broken "wheel" 1			;// 1 broken wheel
				{movement_limit normal}
				{chassis_work 1}
			else not broken "wheel"			;// 0 broken wheels
				{chassis_work 1}
				{movement_limit fast}
			}
		}
	}
}

{"cannon wheeled invisible"			;// disables and enables wheel volumes for those cannons that hide their wheels when in "fire" state.
	{on spawn
		{if cannon_state "fire"
			{call "hide_wheels"}
		else
			{call "show_wheels"}
		}
	}
	{on animation_event "close"		;// event called on frame 0 of "close" animation
		{if cannon_state "fire"
			{call "hide_wheels"}
		else
			{call "show_wheels"}
		}
	}
	{on "show_wheels"				;// ables for all wheel volumes
		{volumes "invisible" enable visible bullet blast contact contact_ground select obstacle touch NoWoundDecal}
	}
	{on "hide_wheels"				;// removes ables for all wheel volumes
		{volumes "invisible" disable all}
	}
}

{"cannon ammo_crate"
	{##on animation_event "close"		;// event called on frame 0 of "close" animation
		{if cannon_state "fire"
			{crew_emit}
		}
	}
}

{"with_gun automatic"
	{on "spawn_shell" overload
		{call "spawn_shell_delay_auto"}
		(define "shell_eject_delay_auto"
			{delay_ex %0
				{spawn "shell_cannon_auto" "fx_invers" x scale 0.014
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

{"cannon_small"					;// allows cannon to be crushed by armored cars, when normally they cannot.
	{on contact sync
		{if not impregnable
			{if effector "armored_car"
				{call "crush_damage"}
			else effector "truck"
			;	{call "crush_damage"}
			else effector "car"
			;	{call "crush_damage"}
			}
		}
	}
	{on "crush_damage" overload
		{if effector_velocity 10
			{component destroy}
			{if volume "body"
				{set "crush" 1}
				{call "explosion"}
			}
		else effector_velocity 5
			{component break}
		}
	}
}

{"carried"			;// applies footstep sounds instead of wheeled sounds to cannon movement
	{on "add_movement_sound" overload
		{link_sound "move" "human/move/run/ground"}
	}
}

{"cannon sled"		;// applies dragging sounds instead of wheeled sounds to cannon movement
	{on "add_movement_sound" overload
		{link_sound "move" ""}
	}
}

{"mg_stan"			;// assigned to poperties/cannon_mgun.ext. Special code for machine gun class cannons.
	{on spawn
		{add_view "flash_gun_big" "flashbarrel"	"foresight14"}
	}
	{on fire "mgun"
		;{view start "flashbarrel"}
		{ani_play "recoil"}
	}
	{on fire "mgun1"
		;{view start "flashbarrel"}
		{ani_play "recoil"}
	}
	{on "explosion_blastwave" overload}

	{on "cut_parts" overload			;// Forces Mortars to cut all parts instead of using random chance.
		("cut_part" args "part1" 1)		;// Looks odd when legs cut but barrel floats in air.
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}
}

{"no_exp_blast"		;// disables blastwave damage and sound when vehicle is crushed or explodes.
	{on "explosion_blastwave" overload}
	{on "explosion_sound" overload}
}

{"mortar"			;// code unique to mortar class cannons
	{on spawn
		{add_view "flash_cannon_small" "flashbarrel1" "foresight"}
		{link_sound "whistle" "weapon/shot/mortar/whistle"}
		{link_sound "bkg_mortar" "weapon/shot/bkg/mortar/"}
	}
	{on fire "gun" overload
		{ani_play "recoil"}
		{view start "flashbarrel1"}
		{call "minimum_terrain_fx"}
		{play_sound "bkg_mortar"}
		{delay 1.5
			{play_sound "whistle"}
		}
		{delay 2
			{view pause "flashbarrel1"}
		}
	}
	{on "cut_parts" overload			;// Forces Mortars to cut all parts instead of using random chance.
		("cut_part" args "part1" 1)		;// Looks odd when legs cut but barrel floats in air.
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		{inherited}
	}

	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}
}

{"flak"				;// base code for multi-barrel cannons and vehicles. To customize, add unique code to specific cannon name prop
	("handle_ik")
	{on "init_gun"
		{add_view "light_flash_zenit"	"flashbarrel"	"foresight1"}
		{add_view "flash_zenit"			"flashbarrel00"	"shooter00"}
		{add_view "flash_zenit"			"flashbarrel01"	"shooter01"}
		{add_view "flash_zenit"			"flashbarrel02"	"shooter02"}
		{add_view "flash_zenit"			"flashbarrel03"	"shooter03"}
		{add_view "smoke_zenit"			"smoke00"		"shooter00"}
		{add_view "smoke_zenit"			"smoke01"		"shooter01"}
		{add_view "smoke_zenit"			"smoke02"		"shooter02"}
		{add_view "smoke_zenit"			"smoke03"		"shooter03"}
		{add_view "zenit_gilz"			"shell"			"FXshell1"}
		{add_view "zenit_gilz"			"shell"			"FXshell2"}
		{add_view "zenit_gilz"			"shell"			"FXshell3"}
		{add_view "zenit_gilz"			"shell"			"FXshell4"}
		{call "update_gun"}
	}
	{on "add_movement_sound"
		{link_sound "rotate_turret" "vehicle/turret/gun/gun_horizontal"}
		{link_sound "rotate_gun" "vehicle/turret/gun/gun_vertical"}
	}
	{on fire "gun" overload
		(define "fire_barrel"
			name "%0"
				{call "fire_barrel%0"}
				{view start "flashbarrel%0"}
				{ani_play "fire%0"}
				{delay 0.12
					{view start "smoke%0"}
					{delay 5
						{view pause "smoke%0"}
					}
				}
		)
		{if	("fire_barrel" args 00)
		else ("fire_barrel" args 01)
		else ("fire_barrel" args 02)
		else ("fire_barrel" args 03)
		}
		{if name "00"
			{call "fire_gun_common"}
		}
		{ani_play "recoil"}
		{view start "flashbarrel1"}
		{delay 0.15
			{view pause "flashbarrel1"}
		}
		{call "spawn_shell"}
	}
	{on "fire_gun_common"
		{view start "flashbarrel"}
		{ani_play "recoil"}
		{kill_delay "shell_off"}
		{view start "shell"}
		{delay 0.12 "shell_off"
			{view pause "shell"}
		}
	}
}

{"nebelwerfer"			;// code for the nebelwerfer rocket vehicles

	{on spawn
		{add_view	"flash_cannon_big"		"flashbarrel1"	"foresight"}
		{add_view	"dust_nebelfire"		"dust"			"turret"}
		{add_view	"dust_nebelfire_snow"	"snow"			"turret"}
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
	}
	{on fire "gun" overload
		{ani_play "recoil"}
		{play_sound "bkg_rocket"}
		{view start "flashbarrel1"}
		;{view start "dust"}
		;{delay 2
		;	{view pause "dust"}
		;}
		{delay 2
			{view pause "flashbarrel1"}
		}
		(define "nebelwerfer_fire"
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
		{if name "00"
			("nebelwerfer_fire")
		else name "01"
			("nebelwerfer_fire")
		else name "02"
			("nebelwerfer_fire")
		else name "03"
			("nebelwerfer_fire")
		else name "04"
			("nebelwerfer_fire")
		else name "05"
			("nebelwerfer_fire")
		}
	}
	{on ik begin "gun_rot"
		{play_sound "rotate_gun" 1}
	}
	{on ik end "gun_rot"
		{stop_sound "rotate_gun"}
	}
}

{"searchlight"			;// code for searchlight vehicles
	{on blast_hit
		{if min_energy 0.4
			{call "light_break"}
		}
	}
	{on "light_break"	;// handled in extender
		{call "lamp_broken"}
	}
	{on bullet_hit
		{if volume "lamp1"
			{call "lamp_broken"}
		}
	}
	{on "lamp_broken"
		{tags add "lamp_broken"}
	}
	{on ground_hit sync
		{call "explosion"}
	}
	{on "_explosion"
		{drop_orders}
		{call "light_break"}
	}
	{on operatable on}	; handled in extender
	{on operatable off}	; handled in extender
}

{"reset"	;// some cannons spawn with Aim by Motion broken. This prop/animation resets the cannon.
	{on spawn
		{delay 0.1
			{if not linked
				{ani_play "set" -1}
			}
		}
	}
}

{"ammo_crate wood"
	{on break													;// {on break ... is for when components break.
		{if component "body"
			{call "break"}
		}
	}

	{on "crush_damage" overload
		{if effector_velocity 1
			{set "crush" 1}
			{component break}
		}
	}

	{on "break"
		{if not "crush"
			{call "explosion"}
		}
		{call "crush_fx"}
		{delay 0.1 {delete}}
	}

	{on "crush_fx"
		{spawn "wood_hit_br" "root"}							;// dust fx
		{call "destroyed_stamp"}
	}
	{on "destroyed_stamp" overload
		{spawn "crash_wood" no_position random_orientation}		;// stamp
	}
	{on "explosion_blastwave" overload
		{blastwave c4 3 r0 2.5 r1 6}
		{spawn "ammo_crate_die" "basis"}
	}
}

;/*=========== General Props End ===========*/

;/*=========== Specific Cannons Begin ===========*/

;/*=========== Soviets Begin ===========*/

{"broneschitok_2"
}

{"maxim"
	{on "init_gun"
		{add_view "gun_gilz" "shell" "fxshell"}
		{add_view "ejectsmoke_big" "ejectsmoke" "FXshell"}
		{link_sound "bkg_mgun" "weapon/shot/bkg/gun/mg/"}
	}
	{on fire "mgun1"
		{view start "flashbarrel"}
		{play_sound "bkg_mgun"}
		{delay 0.2 "fire"
			{view pause "flashbarrel"}
		}
		{kill_delay "shell_off"}
		{view start "shell"}
		{view start "ejectsmoke"}
		{delay 0.12 "shell_off"
			{view pause "shell"}
			{view pause "ejectsmoke"}
		}
	}

	{on "add_movement_sound" overload
		{link_sound "move"					"vehicle/cannon_roll/metal_wood"}
	}
}

{"maxim_stand"
	 {on "init_gun"
		{link_sound "bkg_mgun" "weapon/shot/bkg/gun/mg/"}
	}

	{on fire "mgun1"
		{play_sound "bkg_mgun"}
	}
	{on "break_wheel_impulse" overload}		;// Disables broken wheel impulse.

	{on "add_movement_sound" overload
		{link_sound "move"					"vehicle/cannon_roll/metal_wood"}
	}
}

{"maxim_aa_4"
	{on "init_gun" overload
		{add_view "flash_gun_big" "flashbarrel00" "shooter00"}
		{add_view "flash_gun_big" "flashbarrel01" "shooter01"}
		{add_view "flash_gun_big" "flashbarrel02" "shooter02"}
		{add_view "flash_gun_big" "flashbarrel03" "shooter03"}
		{link_sound "bkg_mgun" "weapon/shot/bkg/gun/mg/"}
	}
	{on fire "mgun1"
		{play_sound "bkg_mgun"}
	}
}
	
{"zu-23-2"				
	{on "init_gun" overload
		{add_view "flash_gun_big"			"flashbarrel00"	"shooter00"}
		{add_view "flash_gun_big"			"flashbarrel01"	"shooter01"}
		{call "update_gun"}
	}
	{on fire "mgun" overload
		{play_sound "bkg_mg"}
		{if  name "00"
			{ani_wind "recoil" end}
			{view start "flashbarrel00"}
			{delay 0.2
				{view pause "flashbarrel00"}
			}
		}
		{if name "01"
			{view start "flashbarrel01"}
			{delay 0.2
				{view pause "flashbarrel01"}
			}
		}
	}
}


{"dshk_aa"
	{on "init_gun" overload
		{link_sound "bkg_hmgun" "weapon/shot/bkg/gun/hmg/"}
		{add_view "gun_gilz" "shell" "fxshell"}
		{add_view "ejectsmoke_big" "ejectsmoke" "FXshell"}
	}

	{on fire "mgun1"
		{play_sound "bkg_hmgun"}
	}
}

{"dshk_stan"
	{on "init_gun" overload
		{link_sound "bkg_hmgun" "weapon/shot/bkg/gun/hmg/"}
		{add_view "gun_gilz" "shell" "fxshell"}
		{add_view "ejectsmoke_big" "ejectsmoke" "FXshell"}
	}

	{on fire "mgun1"
		{play_sound "bkg_hmgun"}
	}
}

{"25mm_72k"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}

	{on "spawn_shell_delay_auto" overload
		("shell_eject_delay_auto" args 0.23) ;// delay cannot be longer than rate of fire else shell ejection is skipped and only played on last shell.
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part5" 1)
		{inherited}
	}

	("cannon_small")
}

{"37mm_61k"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}

	{on "spawn_shell_delay_auto" overload
		("shell_eject_delay_auto" args 0.35) ;// delay cannot be longer than rate of fire else shell ejection is skipped and only played on last shell.
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}

	("cannon_small")
}

{"45mm_m37"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}

{"45mm_m42"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}

{"57mm_zis2"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		{inherited}
	}

	("cannon_small")
}

{"76mm_m1902"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2 0.3)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		{inherited}
	}

	("cannon_small")
}

{"76mm_m43"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2 0.3)
	}

	("cannon_small")
}

{"76mm_f22"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}
	{on "reload_delay" overload
		("reload_delay" args 6.5 0.5 7)
	}

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}

{"76mm_zis3"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.3)
	}

	{on "cut_parts" overload
		("cut_part" args "part2" 1)
		{inherited}
	}

	("cannon_small")
}

{"85mm_52k"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1 0.3)
	}

	{on "reload_delay" overload
		("reload_delay" args 4.0 0.5 4.0)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		{inherited}
	}

	("cannon_big")
}

{"100mm_bs3"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.9 0.15)
	}

	{on "reload_delay" overload
		("reload_delay" args 6.1 0.5 6.1)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		{inherited}
	}

	("cannon_big")
}

{"122mm_m30"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2 0.3)
	}
	{on "reload_delay" overload
		("reload_delay" args 14 1.5 14)
	}
	("cannon_big")
}
{"122mm_a19"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_delay" args 18 1.5 18)
	}
	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		{inherited}
	}

	("cannon_big")
}
{"152mm_ml20"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_delay" args 23 1.5 23)
	}
	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		{inherited}
	}

	("cannon_big")
}

{"d1"

}

{"203mm_b4"
	{on "spawn_shell_delay" overload
		("no_shell_eject_delay" args 4 0.3)
	}
	{on "reload_delay" overload
		("reload_delay" args 12 1.5 12)
	}
	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		{inherited}
	}

	("cannon_big")
}

;/*=========== Soviets End ===========*/

;/*=========== Germans Begin ===========*/

{"flak38"
	("cannon_small")
}

{"20mm_flak30"
	("magazine" cut(0.4) show(1.8) override(overload) impulse({impulse up 0.3 forward 0.9 0.1}))

	("cannon_small")
}


{"37mm_flak37"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "part6" 1)
		("cut_part" args "part7" 1)
		{inherited}
	}

	("cannon_small")
}

{"37mm_pak36"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.4 0.05)
	}

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}

{"47mm_pakt"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}

	{on "reload_delay" overload
		("reload_delay" args 4.5 0.5 5)
	}

	("cannon_small")
}

{"50mm_pak38"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.75 0.3)
	}

	{on "reload_delay" overload
		("reload_delay" args 4.5 0.5 5)
	}

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part7" 1)
		{inherited}
	}

	("cannon_small")
}

{"75mm_leig18"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_delay" args 4.0 0.2 3.0)
	}

	("cannon_small")
}

{"75mm_legebig18"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_delay" args 4.0 0.2 3.0)
	}

	{on "cut_parts" overload
		("cut_part" args "part2" 1)
		("cut_part" args "part4" 1)
		{inherited}
	}

	("cannon_small")
}

{"75mm_legebig18_snow"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}

	{on "reload_delay" overload
		("reload_delay" args 4.0 0.2 3.0)
	}

	{on "cut_parts" overload
		("cut_part" args "part2" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "wheelL" 1)
		{inherited}
	}

	("cannon_skis")
}


{"75mm_pak9738"
	("cannon_small")
}

{"75mm_pak40"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.30 0.25)
	}

	{on "reload_delay" overload
		("reload_delay" args 4 1.4 5)
	}

	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part3" 1)
		{inherited}
	}

	("cannon_small")
}

{"88mm_flak18"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 0.6 0.22)
	}
	{on "reload_delay" overload
		("reload_delay" args 5.0 0.5 4.0)
	}

	("cannon_big")
}

{"88mm_flak36"
	("cannon_big")
}



{"105mm_lefh18"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 2.0 0.3)
	}
	{on "reload_delay" overload
		("reload_delay" args 10 1.5 10)
	}
	{on "cut_parts" overload
		("cut_part" args "part1" 0.8)
		("cut_part" args "part2" 0.8)
		("cut_part" args "part3" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}

	("cannon_big")
}

{"150mm_sig33"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}

	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.25)
	}

	{on "cut_parts" overload
		("cut_part" args "wheelR" 1)
		{inherited}
	}

	("cannon_big")
}

{"150mm_sfh18"
	{on "spawn_shell_delay" overload
		("shell_eject_delay" args 1.5 0.3)
	}
	{on "reload_delay" overload
		("reload_delay" args 23 1.5 23)
	}
	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}

	("cannon_big")
}

{"150mm_nebelwerfer41"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}

	("cannon_small")

	{on "cut_parts" overload
		("cut_part" args "part3" 1)
		("cut_part" args "part5" 1)
		("cut_part" args "part6" 1)
		{inherited}
	}
}

{"210mm_morser18"
	{on "spawn_shell_delay" overload
		("no_shell_eject_delay" args 4 0.3)
	}
	{on "reload_delay" overload
		("reload_delay" args 88 1.5 88)
	}
	{on "cut_parts" overload
		("cut_part" args "part1" 1)
		("cut_part" args "part2" 1)
		("cut_part" args "part3" 1)
		("cut_part" args "part4" 1)
		("cut_part" args "part8" 1)
		{inherited}
	}

	("cannon_big")
}

{"300mm_nebelwerfer42"
	{on "construction_sandbag_cannon_standard" overload
		("cannon_sandbag" args "sandbag_structured_curved_big" "sandbag")
	}

	("cannon_small")
}

;/*=========== Germans End ===========*/

;/*=========== Specific Cannons End ===========*/
