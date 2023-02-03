;/*=========== Generic Weapon Settings Begin ===========*/

(define "shell_fx"
	{"stuff weapon %tag"
		{on spawn
			{add_view "%shell" "shell" "FXshell"}
		}
	}
)

("shell_fx" tag(pistol)			shell(pistol_gilz))
("shell_fx" tag(smg_shell)		shell(pistol_gilz))
("shell_fx" tag(rifle_shell)	shell(gun_gilz))
("shell_fx" tag(mgun)			shell(gun_gilz))
("shell_fx" tag(shotgun)		shell(shell_shotgun))

(define "flash_fx"
	{"stuff weapon %tag"
		{on spawn
			{if not prop "silenced"
				{add_view "%flash" "flashbarrel" "foresight%foresight"}
			else
				{add_view "flash_gun_silencer" "flashbarrel" "foresight%foresight"}
			}
		}
	}
)

("flash_fx" tag(pistol)			flash(flash_gun_small)	foresight(3))
("flash_fx" tag(smg)			flash(flash_gun_small)	foresight(11))
("flash_fx" tag(rifle)			flash(flash_gun_rifle)	foresight(12))
("flash_fx" tag(mgun)			flash(flash_gun_big)	foresight(14))
("flash_fx" tag(at_rifle)		flash(flash_gun_atrifle)foresight(18))
("flash_fx" tag(shotgun)		flash(flash_shotgun)	foresight(3))

(define "ejectsmoke_fx"
	{"stuff weapon %tag"
		{on spawn
			{add_view "%ejectsmoke" "ejectsmoke" "FXshell"}
		}
	}
)

("ejectsmoke_fx" tag(smg)		ejectsmoke(ejectsmoke_small))
("ejectsmoke_fx" tag(rifle)		ejectsmoke(ejectsmoke_small))
("ejectsmoke_fx" tag(mgun)		ejectsmoke(ejectsmoke_big))

(define "holster_fx"
	{"stuff weapon %tag"
		{on spawn
			{link_sound "holster"	"human/holster/%sound"}
		}
	}
)

("holster_fx" tag(pistol)			sound(pistol))
("holster_fx" tag(smg)				sound(weapon))
("holster_fx" tag(rifle)			sound(weapon))
("holster_fx" tag(mgun)				sound(weapon))
("holster_fx" tag(shotgun)			sound(weapon))
("holster_fx" tag(ptr)				sound(big))
("holster_fx" tag(bazooka)			sound(big))
("holster_fx" tag(flame_thrower)	sound(flame))
("holster_fx" tag(melee)			sound(knife))

(define "sound_fx"
	{"stuff weapon %tag"
		{on spawn
			{if not prop "silenced"
				{link_sound "bkg"	"weapon/shot/bkg/gun/%sound"}
			}
		}
	}
)

("sound_fx" tag(pistol)		sound(smg))
("sound_fx" tag(smg)		sound(smg))
("sound_fx" tag(rifle)		sound(rifle))
("sound_fx" tag(mgun)		sound(mg))
("sound_fx" tag(at_rifle)	sound(hmg))
("sound_fx" tag(shotgun)	sound(rifle))

{"stuff weapon"
	{on "drop_item"}			;// when item is not in hand and is dropped from inventory.
	
	{on "fire"
		{play_sound "bkg"}
		{ani_play "recoil"}
		{view show "flashbarrel"}
		{view start "flashbarrel"}
		{delay 0.2 "fire"
			{view hide	"flashbarrel"}
			{view pause	"flashbarrel"}
		}
	}
	{on "link_human"
		{play_sound "holster"}
		{delay 0.4
			{ani_play "prepare"}
		}
	}
	{on "unlink_human"
		{ani_play "prepare" -1}
	}
	{on "case_eject"
		{view start "shell"}
		{view show	"ejectsmoke"}
		{view start	"ejectsmoke"}
		{delay 0.1 "shell"
			{view pause "shell"}
			{view hide	"ejectsmoke"}
			{view pause	"ejectsmoke"}
		}
	}
	{on "weapon_reload"
		{kill_delay "bolt_action"}
		{ani_play "reload"}
		{call "magazine_delay"}
	}
	(define "magazine"
		{on "magazine_delay" %override
			{delay %cut
				{view hide "bullet"}
				{tear "piece_tiny_steel" bone "magazine" copy
					%impulse
				}
				{delay 0
					{view hide "magazine"}
					{delay %show
						{view show "magazine"}
						{view show "bullet"}
					}
				}
			}
		}
	)
	("magazine" cut(0) show(1.8) override() impulse({impulse up -0.01 com}))

	(define "drop"
		{on ground_hit %override
			{if terrain_fx "road"
				{start_sound "weapon/drop/%material/rock"}
			
			else terrain_fx "ice"
				{start_sound "weapon/drop/%material/rock"}
			
			else terrain_fx "snow"
				{start_sound "weapon/drop/%material/snow"}
			
			else terrain_fx "sand"
				{start_sound "weapon/drop/%material/snow"}
			
			else terrain_fx "bridge_wood"
				{start_sound  "weapon/drop/%material/wood"}
			
			else terrain_fx "shallow_water"

			else terrain_fx "water"

			else
				{start_sound "weapon/drop/%material/ground"}
			}
		}
	)
	("drop" material(metal) override())
}

{"stuff weapon wood_stock"
	("drop" material(wood) override(overload))
}

{"stuff weapon auto_eject"
	{on "fire"
		{call "case_eject"}
	}
}

{"stuff weapon bolt_action"
	{on "fire"
		{delay 0.75 "bolt_action"
			{ani_play "bolt_action"}
		}
	}
	{on animation_event "eject"
		{call "case_eject"}
	}
}

{"stuff weapon shotgun"
	{on "weapon_reload" overload
		{delay 0.5
			{ani_play "reload"}
		}
		(define "double_shot"
			{delay %0
				{tear "piece_tiny_steel" bone "shell%1" copy
					{impulse up -0.01}
				}
				{delay 0
					{view hide "shell%1"}
					{delay 2.0
						{view show "shell%1"}
					}
				}
			}
		)
		("double_shot" args 0.9 1)
		("double_shot" args 1.00 2)
	}
}

{"stuff weapon flare_gun"
	{on "weapon_reload" overload
		{delay 0.5
			{ani_play "reload"}
		}

		{delay 1
			{tear "piece_tiny_steel" bone "flare" copy
				{impulse up -0.01}
			}
			{delay 0
				{view hide "flare"}
				{delay 1.5
					{view show "flare"}
				}
			}
		}
	}
}


(define "flame_fx"
	{"stuff weapon flame_thrower %tag"
		{on spawn
			{add_view "flamer_fire"			"flame"	"foresight3"}
			{add_view "flamer_fire_barrel"	"fire"	"foresight3"}

			{link_sound "start"	"weapon/shot/flame/handheld/flamer_start"}
			{link_sound "loop"	"weapon/shot/flame/handheld/flamer_loop"}
			{link_sound "end"	"weapon/shot/flame/handheld/flamer_stop"}
		}
		{on "start_burst"
			{play_sound "start"}
			{delay 0.1 "loop"
				{play_sound "loop" 1}
			}
		}
		{on "end_burst"
			{kill_delay "loop"}
			{play_sound "end"}
			{stop_sound "loop"}
		}
		
		{on "link_human"
			{view show	"fire"}
			{view start	"fire"}
		}
		{on "unlink_human"
			{view pause	"fire"}
		}
		{on "fire" overload
			{spawn "%flame" "foresight3" x
				{impulse forward 30 rnd_dir 0.01 com}
				{gravity 0.65}
				{linear_damping 0}
			}
			{view start "flame"}
			{kill_delay "fire"}
			{delay 0.1 "fire"
				{view pause "flame"}
			}
		}
	}
)

("flame_fx" tag(range_30)		flame(fx_piece_flame_30))
("flame_fx" tag(range_40)		flame(fx_piece_flame_40))
("flame_fx" tag(range_60)		flame(fx_piece_flame_60))
("flame_fx" tag(range_80)		flame(fx_piece_flame_80))


{"stuff weapon rocketlauncher"
	{on "fire"
		{spawn "bazooka_shot"	"fxshot" x}
		{with_effector
			{if terrain_fx "water"
			else terrain_fx "shallow_water"
			else terrain_fx "mud"
			else terrain_fx "snow"
				{spawn "bazooka_snow"	"basis" x}
			else terrain_fx "ice"
				{spawn "bazooka_snow"	"basis" x}
			else
				{spawn "bazooka_dust"	"basis" x}
			}
		}
	}
	{on "link_human" overload
		{delay 1.3
			{ani_play "prepare"}
		}
	}
}

{"stuff weapon bipod"			;// weapons with bipods
	{on spawn 
		{ani_wind "bipod_open" begin}
	}
	{on "link_human"
		{delay 0.6
			{ani_play "bipod_open"}
		}
	}
	{on "unlink_human"
		{ani_play "bipod_open" -1}
	}
	{on "link" 					;// linked to vehicle
		{ani_wind "bipod_open" begin}
	}
}

;/*=========== Generic Weapon Settings End ===========*/


;/*=========== Sepcific Weapons Begin ===========*/

{"stuff weapon mp40"					;// props added to all MP40 variants
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon ppd40"
	("magazine" cut(1.85) show(1.75) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon ppsh41_drum"
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon ppsh41_stick"
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon pps43"
	("magazine" cut(0.85) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon dp_bipod"
	("magazine" cut(0.75) show(2.5) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon dt"					;// props added to all DT variants
	("magazine" cut(0.75) show(2.5) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon mg34_doubledrum"
	("magazine" cut(1) show(2.25) override(overload) impulse({impulse up 0.5 forward 0.9 0.1}))
}

{"stuff weapon mg34_drum"
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.4 forward 0.9 0.1}))
}

{"stuff weapon mg42_drum"
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon fg42"
	("magazine" cut(1) show(2.45) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon svt"					;// props added to all SVT variants
	("magazine" cut(1.75) show(2.1) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon ptrd"
	{on "weapon_reload" overload
		{delay 4.2
			{ani_play "reload"}
		}
	}
}

{"stuff weapon ptrs"
	{on "weapon_reload" overload
		{delay 0.5
			{kill_delay "bolt_action"}
			{ani_play "reload"}
			{view hide "bullet"}
			{call "magazine_delay"}
		}
	}
	("magazine" cut(0.1) show(2.9) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon pk"
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon m60"
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

;/*=========== Sepcific Weapons End ===========*/