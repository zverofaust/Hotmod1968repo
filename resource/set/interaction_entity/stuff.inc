;/*=========== Generic Weapon Settings Begin ===========*/

(define "shell_fx"
	{"stuff weapon %tag"
		{on spawn
			{add_view "%shell" "shell" "FXshell"}
		}
	}
)

("shell_fx" tag(pistol_shell)		shell(shell_pistol))
("shell_fx" tag(pistol2_shell)		shell(shell_pistol2))
("shell_fx" tag(inter_shell)		shell(shell_inter))
("shell_fx" tag(rifle_shell)		shell(shell_rifles))
("shell_fx" tag(hmg_shell)			shell(shell_hmgun))
("shell_fx" tag(ptr_shell)			shell(shell_ptr))
("shell_fx" tag(mgun_shell)			shell(shell_mgun))
("shell_fx" tag(shotgun_shell)		shell(shell_shotgun))

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
		{play_sound "mid"}
		{play_sound "far"}
		{play_sound "action_recoil"}
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
		{play_sound "eject_clip"}
		{delay 0.075
			{stop_sound "action_recoil"}
		}
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
		{call "instant_eject"}
	}
	{on "instant_eject"
		{call "case_eject"}
	}
}

{"stuff weapon auto_eject semi_auto"
	{on "instant_eject" overload
		{delay 0.065
			{call "case_eject"}
		}
	}
}

{"stuff weapon bolt_action"
	{on "fire"
		{tags add "fired"}
		{delay 0.35 "bolt_action"
			{ani_play "bolt_action" 1.5}
			{play_sound "open_bolt"}
			{delay 0.2 
				{call "case_eject"}
			}
		}
		{delay 0.4
			{tags remove "fired"}
		}
		{delay 0.6
			{play_sound "close_bolt"}
		}
	}
	{on "weapon_reload" overload
		{kill_delay "bolt_action"}
		{ani_play "reload"}
		{if tagged "fired"
			{delay 0.55
				{call "case_eject"}
			}
		else
		}
		{delay 5.5
			{play_sound "close_bolt"}
		}
	}
}

{"stuff weapon shotgun_double"
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

{"stuff weapon shotgun_pump"
	{on "fire"
		{tags add "fired"}
		{delay 0.35 "bolt_action"
			{ani_play "bolt_action" 1.0}
			{play_sound "open_bolt"}
			{delay 0.2 
				{call "case_eject"}
			}
		}
		{delay 0.4
			{tags remove "fired"}
		}
		{delay 0.6
			{play_sound "close_bolt"}
		}
	}
	{on "weapon_reload" overload
		{kill_delay "bolt_action"}
		{ani_play "reload"}
		{if tagged "fired"
			{delay 0.55
				{call "case_eject"}
			}
		else
		}
		{delay 5.5
			{play_sound "close_bolt"}
		}
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
			;//{add_view "flamer_fire_barrel"	"fire"	"foresight3"} ;// does not hide in FoW

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
			;//{view show	"fire"}
			;//{view start	"fire"}
		}
		{on "unlink_human"
			;//{view pause	"fire"}
		}
		{on "fire" overload
			{spawn "%flame" "foresight3" x
				{impulse forward 30 rnd_dir 0.01 com}
				{gravity 0.65}
				{linear_damping 0}
			}
			{view start "flame"}
			{kill_delay "fire"}
			{delay 0.05
				{spawn "%flame" "foresight3" x
					{impulse forward 30 rnd_dir 0.01 com}
					{gravity 0.65}
					{linear_damping 0}
				}
			}
			{delay 0.1 "fire"
				{view pause "flame"}
			}
		}
	}
)

("flame_fx" tag(range_20)		flame(fx_piece_flame_20))
("flame_fx" tag(range_30)		flame(fx_piece_flame_30))
("flame_fx" tag(range_40)		flame(fx_piece_flame_40))


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
	{on "link"					;// linked to vehicle
		{ani_wind "bipod_open" begin}
	}
	{on "link_open"				;// linked to vehicle opened
		{ani_wind "bipod_open" end}
	}
}

;/*=========== Generic Weapon Settings End ===========*/


;/*=========== SPECIFIC WEAPONS BEGIN ===========*/
;/**=========== ENG WEAPONS Begin ===========**/
{"stuff weapon Bren"				;// props added to Bren Gun
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/ENG/BREN_Gun/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/ENG/BREN_Gun/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/ENG/BREN_Gun/"}
	}
	("magazine" cut(1.0) show(3.0) override(overload) impulse({impulse up -0.01}))
}
;/**=========== ENG WEAPONS End ===========**/
;/**=========== FIN WEAPONS BEGIN ===========**/
{"stuff weapon boys_mk1"					;// props added to 14 mm PST KIV37:
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/AT_Rifle/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s4/d2/RUS/PTR/"}		; Placeholder
		{link_sound "far"		"weapon/shot/smallarms/s4/d3/RUS/PTR/"}		; Placeholder
	}
	("magazine" cut(1.00) show(2.75) override(overload) impulse({impulse up -0.01}))
}
{"stuff weapon bergmann_m20"				;// props added to 7,65 KP/Bergmann
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_smg/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/RUS/PPS43/"}	; Placeholder
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/RUS/PPS43/"}	; Placeholder
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}
{"stuff weapon chauchat"					;// props added to 800 PK 15
	{on spawn
		{link_sound "action_recoil"	"weapon/reload/action/recoil/open_bolt_mg/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/Shared/MAC1931/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/Shared/MAC1931/"}
	}
	("magazine" cut(1.00) show(1.95) override(overload) impulse({impulse up -0.01}))
}
{"stuff weapon lahti_l35"					;// props added to 900 PIST 35
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/pistol/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/FIN/L35/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/FIN/L35/"}
	}
}
{"stuff weapon suomi_m31_drum"				;// props added to 900 KP 31 w/ Drum Magazine 
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_smg/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/FIN/KP31/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/FIN/KP31/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon suomi_m31_stick"				;// props added to 900 KP 31 w/ Stick Magazine 
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_smg/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/FIN/KP31/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/FIN/KP31/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}
{"stuff weapon m26"							;// props added to 762 PK 26
	{on spawn 
		{link_sound "action_recoil"	"weapon/reload/action/recoil/open_bolt_mg/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/FIN/LS26/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/FIN/LS26/"}
	}
}
{"stuff weapon mosin_m27"					;// props added to 762 KIV 91-27
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/M9130/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/M9130/"}
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/FIN/M39/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/FIN/M39/"}
	}
}
{"stuff weapon mosin_m39"					;// props added to 762 KIV 39
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/M9130/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/M9130/"}
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/FIN/M39/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/FIN/M39/"}
	}
}
{"stuff weapon madsen"						;// props added to 762 PK 20
	{on spawn 
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/reciprocating/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/FIN/LS26/"}	; Placeholder
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/FIN/LS26/"}	; Placeholder
	}
}
;/**=========== FIN WEAPONS END ===========**/
;/**=========== GER WEAPONS BEGIN ===========**/
{"stuff weapon mp28"						;// props added to MP 28
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_smg/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/GER/MP40/"}	; Placeholder
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/GER/MP40/"}	; Placeholder
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}
{"stuff weapon mp40"						;// props added to MP 38, MP 40 variants and MP 41
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_smg/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/GER/MP40/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/GER/MP40/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}
{"stuff weapon stg44"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/StG44/"}
		{link_sound "mid"		"weapon/shot/smallarms/s2/d2/GER/StG44/"}
		{link_sound "far"		"weapon/shot/smallarms/s2/d3/GER/StG44/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}
{"stuff weapon k98"							;// props added to all  K 98k variants
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/K98k/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/K98k/"}
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/K98k/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/K98k/"}
	}
}
{"stuff weapon g41"							;// props added to G 41
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/G41/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/G41/"}
	}
}
{"stuff weapon g43"							;// props added to all G/K 43 variants
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/G43/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/G43/"}
	}
}
{"stuff weapon fg42"						;// props added to FG 42
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/FG42/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/FG42/"}
	}
	("magazine" cut(1) show(2.45) override(overload) impulse({impulse up -0.01}))
}
{"stuff weapon mg13_no_bipod"				;// props added to MG 13
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/MG13/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/MG13/"}
	}
	("magazine" cut(1) show(2.45) override(overload) impulse({impulse up -0.01}))
}
{"stuff weapon mg26t"						;// props added to MG 26(t)
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/GER/MG26t/"}
		{link_sound "mid"			"weapon/shot/smallarms/s3/d2/GER/MG26t/"}
		{link_sound "far"			"weapon/shot/smallarms/s3/d3/GER/MG26t/"}
	}
	("magazine" cut(1.0) show(3.0) override(overload) impulse({impulse up -0.01}))
}
{"stuff weapon mg34_doubledrum"				;// props added to MG 34 w/ Patronentrommel 34
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/MG34/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/MG34/"}
	}
	("magazine" cut(1) show(2.25) override(overload) impulse({impulse up 0.5 forward 0.9 0.1}))
}
{"stuff weapon mg34_drum"					;// props added to MG 34 w/ Gurttrommel 34
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/MG34/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/MG34/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.4 forward 0.9 0.1}))
}
{"stuff weapon mg34_belt"					;// props added to MG 34
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/MG34/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/MG34/"}
	}
}
{"stuff weapon mg34_belt_long"				;// props added to MG 34
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/MG34/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/MG34/"}
	}
}
{"stuff weapon mg42_drum"					;// props added to MG 42 w/ Gurttrommel 34
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/GER/MG42/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/MG42/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/MG42/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}
{"stuff weapon mg42_belt"					;// props added to MG 42
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/GER/MG42/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/MG42/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/MG42/"}
	}
}
{"stuff weapon mg42_belt_long"				;// props added to MG 42
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/GER/MG42/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/MG42/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/MG42/"}
	}
}
{"stuff weapon luger"						;// props added to P 08
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/pistol/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/GER/P08/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/GER/P08/"}
	}
}
{"stuff weapon p38"							;// props added to P 38
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/pistol/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/GER/P38/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/GER/P38/"}
	}
}
{"stuff weapon pzb_39"						;// props added to PzB 39
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/AT_Rifle/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s4/d2/RUS/PTR/"}		; Placeholder
		{link_sound "far"		"weapon/shot/smallarms/s4/d3/RUS/PTR/"}		; Placeholder
	}
}
{"stuff weapon panzerfaust"					;// props added to all Panzerfaust Variants
	{on spawn
		{link_sound "mid"		"weapon/shot/reactive/d2/GER/Panzerfaust/"}
		{link_sound "far"		"weapon/shot/reactive/d3/GER/Panzerfaust/"}
	}
}
{"stuff weapon schiessbecher"				;// props added to all K 98k Rifle Grenade Launchers
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/K98k/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/K98k/"}
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/K98k/Schiessbecher/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/K98k/Schiessbecher/"}
	}
}
;/**=========== GER WEAPONS END ===========**/
;/**=========== RUS WEAPONS BEGIN ===========**/

{"stuff weapon dp_bipod"					;// props added to DP 27
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/reciprocating/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/DP27/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/DP27/"}
	}
	("magazine" cut(0.75) show(2.5) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}
{"stuff weapon dt"							;// props added to DT 
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/reciprocating/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/DP27/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/DP27/"}
	}
	("magazine" cut(0.75) show(2.5) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}
{"stuff weapon dyakonov"					;// props added Mosin-Nagant 1891/30 Rifle Grenade Launchers
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/MN9130/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/MN9130/"}
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/M9130/Dyakonov/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/M9130/Dyakonov/"}
	}
}
{"stuff weapon mosin"						;// props added to all  Mosin-Nagant 1891/30 variants and Mosin Carbine
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/M9130/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/M9130/"}
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/M9130/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/M9130/"}
	}
}
{"stuff weapon mosin_silencer"				;// props added to all  Mosin-Nagant 1891/30 B
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/M9130/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/M9130/"}
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/Shared/Surpressed_Rifle/"}
	}
}
{"stuff weapon nagant_revolver"				;// props added to Nagant 1895
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/RUS/M1895/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/RUS/M1895/"}
	}
}
{"stuff weapon nagant_silencer"				;// props added to Nagant 1895 B
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/Shared/Surpressed_Pistol/"}
	}
}
{"stuff weapon ppd40"						;// props added to PPD 40
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_SMG/Type2/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/RUS/PPSh41/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/RUS/PPSh41/"}
	}
	("magazine" cut(1.85) show(1.75) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon ppsh41_drum"					;// props added to PPSh 41 w/ Drum Magazine
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_SMG/Type2/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/RUS/PPSh41/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/RUS/PPSh41/"}

	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon ppsh41_stick"				;// props added to PPSh 41 w/ Stick Magazine 
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_SMG/Type2/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/RUS/PPSh41/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/RUS/PPSh41/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon pps43"						;// props added to PPS 43
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_SMG/Type2/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/RUS/PPS43/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/RUS/PPS43/"}
	}
	("magazine" cut(0.85) show(1.95) override(overload) impulse({impulse up -0.01}))
}
{"stuff weapon ptrd"
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/AT_Rifle/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s4/d2/RUS/PTR/"}
		{link_sound "far"		"weapon/shot/smallarms/s4/d3/RUS/PTR/"}
	}
	{on "weapon_reload" overload
		{delay 3.2
			{ani_play "reload"}
		}
	}
}
{"stuff weapon ptrs"
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/AT_Rifle/semi_auto/"}
		{link_sound "mid"		"weapon/shot/smallarms/s4/d2/RUS/PTR/"}
		{link_sound "far"		"weapon/shot/smallarms/s4/d3/RUS/PTR/"}
	}
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
{"stuff weapon svt"							;// props added to AVT 40, SVT 38, SVT 40, and SKT 40
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/SVT40/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/SVT40/"}
	}
	("magazine" cut(1.75) show(2.1) override(overload) impulse({impulse up -0.01}))
}
{"stuff weapon tt33"						;// props added to TT 33
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/pistol/"}
		{link_sound "mid"			"weapon/shot/smallarms/s1/d2/RUS/TT33/"}
		{link_sound "far"			"weapon/shot/smallarms/s1/d3/RUS/TT33/"}
	}
}
;/**=========== RUS WEAPONS END ===========**/
;/**=========== USA WEAPONS Begin ===========**/
{"stuff weapon browning_m2"					;// props added to Browning M2HB .50 Cal
	("magazine" cut(0.1) show(5.85) override(overload) impulse({impulse up -0.01 com}))
}
{"stuff weapon m12_shotgun"
	{on spawn	
		{link_sound "open_bolt"		"weapon/reload/open_bolt/M12/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/M12/"}
	}
}
{"stuff weapon browning_m19a4"				;// props added to Browning M1919A4 .30 Cal
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound "mid"			"weapon/shot/smallarms/s3/d2/USA/M1919A4/"}
		{link_sound "far"			"weapon/shot/smallarms/s3/d3/USA/M1919A4/"}
	}
}
{"stuff weapon bar"							;// props added to M1918A2 BAR 
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/USA/M1918A2_BAR/"}
		{link_sound "mid"			"weapon/shot/smallarms/s3/d2/USA/M1918A2_BAR/"}
		{link_sound "far"			"weapon/shot/smallarms/s3/d3/USA/M1918A2_BAR/"}
	}
	("magazine" cut(1.05) show(2.95) override(overload) impulse({impulse up -0.01}))
}
{"stuff weapon garand"						;// props added to M1 Garand
	{on spawn
		{add_view "shell_rifle_M1_Garand"	"shell"		"FXshell"}
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/USA/M1_Garand/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/USA/M1_Garand/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/USA/M1_Garand/"}
		{link_sound "eject_clip"	"weapon/reload/M1_Garand/clip_eject/"}
	}
	("magazine" cut(0.1) show(2.9) override(overload) impulse({impulse up 2}))
}
{"stuff weapon garand_grenade_launcher"		;// props added to M1 Garand w/ M7 Grenade Launcher
	{on spawn
		{add_view "shell_rifle_M1_Garand"	"shell"		"FXshell"}
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/USA/M1_Garand/"}
		{link_sound "mid"			"weapon/shot/smallarms/s3/d2/USA/M1_Garand/M7_Grenade_Launcher/"}
		{link_sound "far"			"weapon/shot/smallarms/s3/d3/USA/M1_Garand/M7_Grenade_Launcher/"}
	}
}
{"stuff weapon hdm"
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s1/recoil/USA/M1911A1/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/Shared/Surpressed_Pistol/"}
	}
}
{"stuff weapon m3_grease"					;// props added to M3 Grease Gun
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s1/recoil/USA/M3_GreaseGun/"}
		{link_sound "mid"			"weapon/shot/smallarms/s1/d2/USA/M3_GreaseGun/"}
		{link_sound "far"			"weapon/shot/smallarms/s1/d3/USA/M3_GreaseGun/"}
	}
}
{"stuff weapon thompson"					;// props added to All Thompson Variants
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s1/recoil/USA/M1A1_Thompson/"}
		{link_sound "mid"			"weapon/shot/smallarms/s1/d2/USA/M1A1_Thompson/"}
		{link_sound "far"			"weapon/shot/smallarms/s1/d3/USA/M1A1_Thompson/"}
	}
	("magazine" cut(1.05) show(1.95) override(overload) impulse({impulse up -0.01}))
}
{"stuff weapon m1_carbine"						;// props added to M1 and M1A1 Carbines
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s2/recoil/USA/M1_Carbine/"}
		{link_sound "mid"			"weapon/shot/smallarms/s2/d2/USA/M1_Carbine/"}
		{link_sound "far"			"weapon/shot/smallarms/s2/d3/USA/M1_Carbine/"}
	}
	("magazine" cut(1.05) show(2.95) override(overload) impulse({impulse up -0.01}))
}
{"stuff weapon m1_carbine_grenade_launcher"						;// props added to M1 Carbine w/ M8 Grenade Launcher
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s2/recoil/USA/M1_Carbine/"}
		{link_sound "mid"			"weapon/shot/smallarms/s2/d2/USA/M1_Carbine/M8_Grenade_launcher/"}
		{link_sound "far"			"weapon/shot/smallarms/s2/d3/USA/M1_Carbine/M8_Grenade_launcher/"}
	}
}
{"stuff weapon m1a1_carbine_grenade_launcher"						;// props added to M1A1 Carbine w/ M8 Grenade Launcher
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s2/recoil/USA/M1_Carbine/"}
		{link_sound "mid"			"weapon/shot/smallarms/s2/d2/USA/M1_Carbine/M8_Grenade_launcher/"}
		{link_sound "far"			"weapon/shot/smallarms/s2/d3/USA/M1_Carbine/M8_Grenade_launcher/"}
	}
}
{"stuff weapon m1903"						;// props added to M1903A3 & M1903A4
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/M1903A3/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/M1903A3/"}
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/USA/M1903A3/"}
		{link_sound "mid"			"weapon/shot/smallarms/s3/d2/USA/M1903A3/"}
		{link_sound "far"			"weapon/shot/smallarms/s3/d3/USA/M1903A3/"}
	}
}
{"stuff weapon m1903_grenade_launcher"		;// props added to M1903A3 w/ M1 Grenade Launcher
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/M1903A3/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/M1903A3/"}
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/USA/M1903A3/"}
		{link_sound "mid"			"weapon/shot/smallarms/s3/d2/USA/M1903A3/M1_Grenade_Launcher/"}
		{link_sound "far"			"weapon/shot/smallarms/s3/d3/USA/M1903A3/M1_Grenade_Launcher/"}
	}
}
{"stuff weapon m1911"						;// props added to M1911A1
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s1/recoil/USA/M1911A1/"}
		{link_sound "mid"			"weapon/shot/smallarms/s1/d2/USA/M1911A1/"}
		{link_sound "far"			"weapon/shot/smallarms/s1/d3/USA/M1911A1/"}
	}
}
{"stuff weapon recoilless_m18"
	{on spawn
		{link_sound "mid"			"weapon/shot/reactive/d2/Shared/Rocket_Launcher/"}
		{link_sound "far"			"weapon/shot/reactive/d3/Shared/Rocket_Launcher/"}
	}
}
;/**=========== USA WEAPONS END ===========**/
;/*=========== SPECIFIC WEAPONS END ===========*/
;/*=========== SHARED WEAPONS BEGIN ===========*/
{"stuff weapon hipower_1935"				;// props added to FN Browning Hi-Power P35
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/pistol/"}
		{link_sound "mid"			"weapon/shot/smallarms/s1/d2/Shared/FN_Browning_HiPower_P35/"}
		{link_sound "far"			"weapon/shot/smallarms/s1/d3/Shared/FN_Browning_HiPower_P35/"}
	}
}
{"stuff weapon rocket_launcher"				;// props added to all Shoulder Fired Rocket Launchers
	{on spawn
		{link_sound "mid"			"weapon/shot/reactive/d2/Shared/Rocket_Launcher/"}
		{link_sound "far"			"weapon/shot/reactive/d3/Shared/Rocket_Launcher/"}
	}
}
{"stuff weapon shotgun"						;// props added to
	{on spawn
		{link_sound "action_recoil"		"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"			"weapon/shot/smallarms/s2/d2/Shared/Shotgun/"}
		{link_sound "far"			"weapon/shot/smallarms/s2/d3/Shared/Shotgun/"}
	}
}
;/***=========== SHARED WEAPONS END ===========***/


;//////---------Added for Hotmod
{"stuff weapon pk"
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon m60"
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}
;//////---------End Added for Hotmod