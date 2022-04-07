
;==================================flying animation spawn
{"f4_strike_anima"
	{on spawn
		{if rand 0.2
			{ani_play "drop_rotate_01"}
			else rand 0.2
			{ani_play "drop_rotate_02"}
			else rand 0.2
			{ani_play "drop_rotate_03"}
			else rand 0.2
			{ani_play "drop_rotate_04"}
			else rand 0.2
			{ani_play "drop_rotate_05"}
			else rand 0.2
			{ani_play "drop_rotate_06"}
		}					
		{if rand 0.25
			{ani_play "fly" callback}
			else rand 0.25
			{ani_play "fly1" callback}
			else rand 0.25
			{ani_play "fly2" callback}
			else rand 0.25
			{ani_play "fly3" callback}
			else
			{ani_play "fly4" callback}
		}				
		{add_view	"exhaust_dark_big_heli_fly"	"engine_exhaust_loop"		"FXsmoke2"	}
		{view start "engine_exhaust"}
		{view start "engine_exhaust_loop"}
	}
	{on animation_end "fly"
		{delete}
	}	
	{on animation_end "fly1"
		{delete}
	}	
	{on animation_end "fly2"
		{delete}
	}	
	{on animation_end "fly3"
		{delete}
	}	
	{on animation_end "fly4"
		{delete}
	}
}

;-----AIR MP stikes
(define "sup_air_strike"
{"%name"
	{on spawn
		{add_view "%smoke_type"		"smoke" "root"}
		{view start "smoke"}
	{delay 10
		{view stop "smoke"}
		{spawn "%spawn_type" "basic1" offset 0 0 700}
		{delay 15 {delete}}
	}
	}
}
)
("sup_air_strike" name(sup_mig17_strike_fg) smoke_type(smoke_support_norm_red) spawn_type(mig17_strike_fg))
("sup_air_strike" name(sup_tr33a_strike_fg) smoke_type(smoke_support_norm_red) spawn_type(tr_33a_strike_fg))
("sup_air_strike" name(sup_f4_strike_nap) smoke_type(smoke_support_norm_purple) spawn_type(f4_strike_nap))
("sup_air_strike" name(sup_f4_strike_clust_fg) smoke_type(smoke_support_norm_red) spawn_type(f4_strike_fg_cl))
("sup_air_strike" name(sup_f4_strike_ph) smoke_type(smoke_support_norm_blue) spawn_type(f4_strike_ph))
("sup_air_strike" name(sup_f4_strike_fg) smoke_type(smoke_support_norm_red) spawn_type(f4_strike_fg))

;-----AIR SINGLE stikes
(define "sup_air_strike_random_oriet"
{"%name"
	{on spawn
		{add_view "%smoke_type"		"smoke" "root"}
		{view start "smoke"}
	{delay 10
		{view stop "smoke"}
		{spawn "%spawn_type" "basic1" offset 0 0 700}
		{delay 15 {delete}}
	}
	}
}
)
("sup_air_strike_random_oriet" name(sup_mig17_strike_fg_random_orient) smoke_type(smoke_support_norm_red) spawn_type(mig17_strike_fg_random_rot))
("sup_air_strike_random_oriet" name(sup_tr33a_strike_fg_random_orient) smoke_type(smoke_support_norm_red) spawn_type(tr_33a_strike_fg_random_rot))
("sup_air_strike_random_oriet" name(sup_f4_strike_nap_random_orient) smoke_type(smoke_support_norm_purple) spawn_type(f4_strike_nap_random_rot))
("sup_air_strike_random_oriet" name(sup_f4_strike_clust_fg_random_orient) smoke_type(smoke_support_norm_red) spawn_type(f4_strike_fg_cl_random_rot))
("sup_air_strike_random_oriet" name(sup_f4_strike_ph_random_orient) smoke_type(smoke_support_norm_blue) spawn_type(f4_strike_ph_random_rot))
("sup_air_strike_random_oriet" name(sup_f4_strike_fg_random_orient) smoke_type(smoke_support_norm_red) spawn_type(f4_strike_fg_random_rot))

;-----ART MP stikes
{"sup_art_strike_light"
	{on spawn
		{delay 0.01
			{spawn "light_art_support"}
			{call "add_smoke"}
		}
	}
	{on "add_smoke"
		{add_view "smoke_support_norm_orange"		"smoke" "root"}
		{view start "smoke"}
		{delay 10 	{view stop "smoke"} {hide 1}}
	}
}
{"sup_art_strike_large"
	{on spawn
		{delay 0.01
			{spawn "large_art_support"}
			{call "add_smoke"}
		}
	}
	{on "add_smoke"
		{add_view "smoke_support_norm_red"		"smoke" "root"}
		{view start "smoke"}
		{delay 10 	{view stop "smoke"} {hide 1}}
	}
}
{"sup_art_strike_heavy"
	{on spawn
		{delay 0.01
			{spawn "heavy_art_support"}
			{call "add_smoke"}
		}
	}
	{on "add_smoke"
		{add_view "smoke_support_norm_red"		"smoke" "root"}
		{view start "smoke"}
		{delay 10 	{view stop "smoke"} {hide 1}}
	}
}
{"sup_art_strike_smoke"
	{on spawn
		{delay 0.01
			{spawn "smoke_art_support"}
			{call "add_smoke"}
		}
	}
	{on "add_smoke"
		{add_view "smoke_support_norm_green"		"smoke" "root"}
		{view start "smoke"}
		{delay 10 	{view stop "smoke"} {hide 1}}
	}
}

{"sup_art_strike_attack_smoke"
	{on spawn
		{delay 0.01
			{spawn "smoke_attack_art_support"}
			{call "add_smoke"}
		}
	}
	{on "add_smoke"
		{add_view "smoke_support_norm_red"		"smoke" "root"}
		{view start "smoke"}
		{delay 10 	{view stop "smoke"} {hide 1}}
	}
}
{"sup_art_strike_react"
	{on spawn
		{delay 0.01
			{spawn "katusha_support"}
			{call "add_smoke"}
		}
	}
	{on "add_smoke"
		{add_view "smoke_support_norm_red"		"smoke" "root"}
		{view start "smoke"}
		{delay 10 	{view stop "smoke"} {hide 1}}
	}
}

(define "air_recog_support"
{"%name"
	{on spawn
	}		
	{on move on
			{reset_manual_control}
			{able select 0}
			;{chassis_work 0} 
	}
	{on move off
			{delay 1 {call "activation"}}
	}
	{on "activation"
		{if rand 0.33		
			{ani_play "fly2_start" callback}	
			else rand 0.33	
			{ani_play "fly1_start" callback}	
			else 
			{ani_play "fly_start" callback}	
		}
		;{delay 6 {start_sound "weapon/shot/f4_strike"}}
		{add_view	"exhaust_dark_big_heli_fly"	"engine_exhaust_loop"		"FXsmoke1"	}
		{add_view	"exhaust_dark_big_heli_fly"	"engine_exhaust_loop"		"FXsmoke2"	}
		{add_view	"air_wing_tail"	"wing_tail"		"wing_tail_01"	}
		{add_view	"air_wing_tail"	"wing_tail"		"wing_tail_02"	}
		{add_view	"air_tail"		"air_tail"		"FXsmoke1"	}
		{add_view	"air_tail"		"air_tail"		"FXsmoke2"	}
		{view start "air_tail"}
		;{view start "wing_tail"}
		{view start "engine_exhaust"}
		{view start "engine_exhaust_loop"}
		{reset_manual_control}
		{able select 0}
		{chassis_work 0} 
		{delay 45 {hide 1}}
	}
	{on animation_end "fly_start"
		{ani_play "fly_end" callback}	
	}	
	{on animation_end "fly_end"
		{delete}
	}	
	{on animation_end "fly1_start"
		{ani_play "fly1_end" callback}	
	}	
	{on animation_end "fly1_end"
		{delete}
	}	
	{on animation_end "fly2_start"
		{ani_play "fly2_end" callback}	
	}	
	{on animation_end "fly2_end"
		{delete}
	}	
}
)


(define "air_strike_support"
{"%name"
	{on spawn
		{if rand 0.2
			{ani_play "drop_rotate_01"}
			else rand 0.2
			{ani_play "drop_rotate_02"}
			else rand 0.2
			{ani_play "drop_rotate_03"}
			else rand 0.2
			{ani_play "drop_rotate_04"}
			else rand 0.2
			{ani_play "drop_rotate_05"}
			else rand 0.2
			{ani_play "drop_rotate_06"}
		}			
		{if rand 0.33		
			{ani_play "fly2_start" callback}	
			else rand 0.33	
			{ani_play "fly1_start" callback}	
			else 
			{ani_play "fly_start" callback}	
		}
		{add_view	"exhaust_dark_big_heli_fly"	"engine_exhaust_loop"		"FXsmoke1"	}
		{add_view	"exhaust_dark_big_heli_fly"	"engine_exhaust_loop"		"FXsmoke2"	}
		{add_view	"air_wing_tail"	"wing_tail"		"wing_tail_01"	}
		{add_view	"air_wing_tail"	"wing_tail"		"wing_tail_02"	}
		{add_view	"air_tail"		"air_tail"		"FXsmoke1"	}
		{add_view	"air_tail"		"air_tail"		"FXsmoke2"	}
		{view start "air_tail"}
		;{view start "wing_tail"}
		{view start "engine_exhaust"}
		{view start "engine_exhaust_loop"}
		{delay 45 {hide 1}}
	}	
	{on "bomb_drop"
		{delay 0.01 
			{spawn "%bomb_type" "bomb2" x dir_velocity
				{impulse up -14 dir -5 forward 10}
			}
		
		}
		{delay 0.38 
			{spawn "%bomb_type4" "bomb2" x dir_velocity
				{impulse up -14 dir -5 forward 20}
			}
		
		}
		{delay 0.1 
			{spawn "%bomb_type2" "bomb2" x dir_velocity
				{impulse up -14 dir -5 forward 30}
			}
		
		}
		{delay 0.1 
			{spawn "%bomb_type3" "bomb2" x dir_velocity
				{impulse up -14 dir -5 forward 40}
			}
		
		}
		{delay 0.2
			{spawn "%bomb_type" "bomb2" x dir_velocity
				{impulse up -14 dir -5 forward 50}
			}
		}
		{delay 0.52
			{spawn "%bomb_type4" "bomb2" x dir_velocity
				{impulse up -14 dir -5 forward 60}
			}
		}
		{delay 0.35 
			{spawn "%bomb_type3" "bomb2" x dir_velocity
				{impulse up -14 dir -5 forward 70}
			}
		
		}
	}
	{on animation_end "fly_start"
		{call "bomb_drop"}
		{ani_play "fly_end" callback}	
	}	
	{on animation_end "fly_end"
		{delete}
	}	
	
	{on animation_end "fly1_start"
		{call "bomb_drop"}
		{ani_play "fly1_end" callback}	
	}	
	{on animation_end "fly1_end"
		{delete}
	}	
	{on animation_end "fly2_start"
		{call "bomb_drop"}
		{ani_play "fly2_end" callback}	
	}	
	{on animation_end "fly2_end"
		{delete}
	}	
}
)

(define "heli_strike_support"
{"%name"
	{on spawn
		{if rand 0.2
			{ani_play "drop_rotate_01"}
			else rand 0.2
			{ani_play "drop_rotate_02"}
			else rand 0.2
			{ani_play "drop_rotate_03"}
			else rand 0.2
			{ani_play "drop_rotate_04"}
			else rand 0.2
			{ani_play "drop_rotate_05"}
			else rand 0.2
			{ani_play "drop_rotate_06"}
		}			
		{ani_play "start_strike_01" callback}	
		{able select 0}
		{view start "light_uh1"}
		{call "light_lamp_on"}
		{view start "engine_exhaust"}
		{ani_play "engine_start"}
		{ani_play "move_on_loop"}
		{delay 2 {ani_play "engine_work" loop}}
		;{delay 6 {start_sound "weapon/shot/f4_strike"}}
	
		{add_view	"exhaust_dark_big_heli_fly"	"engine_exhaust_loop"		"FXsmoke2"	}
		{view start "engine_exhaust"}
		{view start "engine_exhaust_loop"}
	}
	;dir_velocity
	{on animation_end "start_strike_01"
		{delay 0.01 
			{spawn "%rocket" "shooter_r10" x
				{impulse up -14 forward 300}
			}
			{play_sound "weapon/shot/reactive/xm157/"}
			{play_sound "weapon/shot/distance/rocket/"}
		
		}
		{delay 0.05
			{spawn "%rocket" "shooter_r07" x
				{impulse up -14  forward 300}
			}
			{play_sound "weapon/shot/reactive/xm157/"}
			{play_sound "weapon/shot/distance/rocket/"}
		}
		{delay 0.3 
			{spawn "%rocket" "shooter_r04" x
				{impulse up -14  forward 300}
			}
			{play_sound "weapon/shot/reactive/xm157/"}
			{play_sound "weapon/shot/distance/rocket/"}
		
		}
		{delay 0.35
			{spawn "%rocket" "shooter_r10" x
				{impulse up -14  forward 300}
			}
			{play_sound "weapon/shot/reactive/xm157/"}
			{play_sound "weapon/shot/distance/rocket/"}
		}
		{ani_play "end_strike_01" callback}	
	}	
	{on animation_end "end_strike_01"
		{delete}
	}	
}
)

("heli_strike_support" name(uh1_c_strike_fg) 	 rocket(70mm_ffar_act))
("heli_strike_support" name(uh1_c_strike_fg_b) 	 rocket(70mm_ffar_fg_act))
("heli_strike_support" name(uh1_c_strike_wp) 	 rocket(70mm_ffar_wp_act))

("air_recog_support" name(tr_33a_recog))
("air_strike_support" name(tr_33a_strike_fg)  	 bomb_type(bomb_single_250) bomb_type2(bomb_single_250))

("air_strike_support" name(mig17_strike_fg) 	  bomb_type(bomb_single_250) bomb_type2(bomb_single_250))

("air_strike_support" name(f4_strike_nap) 		 	bomb_type(bomb_single_napalm))
("air_strike_support" name(f4_strike_fg) 	 	 	bomb_type(bomb_single_250) 	bomb_type2(bomb_single_250) bomb_type3(bomb_single_250) bomb_type4(bomb_single_250))
("air_strike_support" name(f4_strike_ph) 	 	 	bomb_type(bomb_single_napalm))
("air_strike_support" name(f4_strike_fg_cl)  		bomb_type4(bomb_single_250))

("air_strike_support" name(f4_strike_nap_r)  	 bomb_type(bomb_single_napalm) bomb_type2(bomb_single_napalm) bomb_type3(bomb_single_napalm) bomb_type4(bomb_single_napalm))


(define "air_strike_support_random_rot"
{"%name"
	{on spawn
		{if rand 0.2
			{ani_play "drop_rotate_01"}
			else rand 0.2
			{ani_play "drop_rotate_02"}
			else rand 0.2
			{ani_play "drop_rotate_03"}
			else rand 0.2
			{ani_play "drop_rotate_04"}
			else rand 0.2
			{ani_play "drop_rotate_05"}
			else rand 0.2
			{ani_play "drop_rotate_06"}
		}	
		{if rand 0.33		
			{ani_play "fly2_start" callback}	
			else rand 0.33	
			{ani_play "fly1_start" callback}	
			else 
			{ani_play "fly_start" callback}	
		}
		{add_view	"exhaust_dark_big_heli_fly"	"engine_exhaust_loop"		"FXsmoke1"	}
		{add_view	"exhaust_dark_big_heli_fly"	"engine_exhaust_loop"		"FXsmoke2"	}
		{add_view	"air_wing_tail"	"wing_tail"		"wing_tail_01"	}
		{add_view	"air_wing_tail"	"wing_tail"		"wing_tail_02"	}
		{add_view	"air_tail"		"air_tail"		"FXsmoke1"	}
		{add_view	"air_tail"		"air_tail"		"FXsmoke2"	}
		{view start "air_tail"}
		;{view start "wing_tail"}
		{view start "engine_exhaust"}
		{view start "engine_exhaust_loop"}
		{delay 45 {hide 1}}
	}	
	{on "bomb_drop"
		{delay 0.01 
			{spawn "%bomb_type" "bomb2" x dir_velocity
				{impulse up -14 dir -5 forward 300}
			}
		
		}
		{delay 0.38 
			{spawn "%bomb_type4" "bomb2" x dir_velocity
				{impulse up -14 dir -5 forward 100}
			}
		
		}
		{delay 0.1 
			{spawn "%bomb_type2" "bomb2" x dir_velocity
				{impulse up -14 dir -5 forward 300}
			}
		
		}
		{delay 0.1 
			{spawn "%bomb_type3" "bomb2" x dir_velocity
				{impulse up -14 dir -5 forward 300}
			}
		
		}
		{delay 0.2
			{spawn "%bomb_type" "bomb2" x dir_velocity
				{impulse up -14 dir -5 forward 300}
			}
		}
		{delay 0.52
			{spawn "%bomb_type4" "bomb2" x dir_velocity
				{impulse up -14 dir -5 forward 200}
			}
		}
		{delay 0.35 
			{spawn "%bomb_type3" "bomb2" x dir_velocity
				{impulse up -14 dir -5 forward 300}
			}
		
		}
	}
	{on animation_end "fly_start"
		{call "bomb_drop"}
		{ani_play "fly_end" callback}	
	}	
	{on animation_end "fly_end"
		{delete}
	}	
	
	{on animation_end "fly1_start"
		{call "bomb_drop"}
		{ani_play "fly1_end" callback}	
	}	
	{on animation_end "fly1_end"
		{delete}
	}	
	{on animation_end "fly2_start"
		{call "bomb_drop"}
		{ani_play "fly2_end" callback}	
	}	
	{on animation_end "fly2_end"
		{delete}
	}	
}
)

("air_strike_support_random_rot" name(tr_33a_strike_fg_random_rot)  	 bomb_type(air_bomb_f4) bomb_type2(air_bomb_f4))
("air_strike_support_random_rot" name(mig17_strike_fg_random_rot) 	  bomb_type(fab250_bomb) bomb_type2(fab250_bomb))

("air_strike_support_random_rot" name(f4_strike_fg_random_rot) 	 	 	bomb_type(air_bomb_f4) 		bomb_type2(air_bomb_f4))
("air_strike_support_random_rot" name(f4_strike_ph_random_rot) 	 	 	bomb_type(air_bomb_f4_ph))
("air_strike_support_random_rot" name(f4_strike_fg_cl_random_rot)  		bomb_type4(cbu-2a_bomb))
("air_strike_support_random_rot" name(f4_strike_nap_random_rot) 	 	bomb_type(air_bomb_f4_nap))
