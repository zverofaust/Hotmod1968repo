;/*=========== Bomb Strike Handling ==========*/

{"sortie"			;
	{on spawn
		{delay 1
			{if rand 0.33	
				{ani_play "flyin_1" callback}	
				else 
				{ani_play "flyin_1" callback}
			}
		}
	}
	{on animation_end "flyin_1"
		{call "rocket_launch"}
		{ani_play "approach_1" callback}		
	}
	{on animation_end "flyin_2"
		{call "rocket_launch"}
		{ani_play "approach_2" callback}		
	}
	{on animation_end "flyin_3"
		{call "rocket_launch"}
		{ani_play "approach_3" callback}		
	}
	{on animation_end "flyin_4"
		{call "rocket_launch"}
		{ani_play "approach_4" callback}		
	}
	{on animation_end "flyin_5"
		{call "rocket_launch"}
		{ani_play "approach_5" callback}		
	}
	{on animation_end "flyin_6"
		{call "rocket_launch"}
		{ani_play "approach_6" callback}		
	}
	{on animation_end "flyin_7"
		{call "rocket_launch"}
		{ani_play "approach_7" callback}		
	}
	{on animation_end "flyin_8"
		{call "rocket_launch"}
		{ani_play "approach_8" callback}		
	}
	;// End approach, drop bombs, bug out
	{on animation_end "approach_1"
		{call "bomb_drop"}
		{ani_play "flyout_1" callback}	
	}
	{on animation_end "approach_2"
		{call "bomb_drop"}
		{ani_play "flyout_2" callback}	
	}	
	{on animation_end "approach_3"
		{call "bomb_drop"}
		{ani_play "flyout_3" callback}	
	}	
	{on animation_end "approach_4"
		{call "bomb_drop"}
		{ani_play "flyout_4" callback}	
	}	
	{on animation_end "approach_5"
		{call "bomb_drop"}
		{ani_play "flyout_5" callback}	
	}
	{on animation_end "approach_6"
		{call "bomb_drop"}
		{ani_play "flyout_6" callback}	
	}	
	{on animation_end "approach_7"
		{call "bomb_drop"}
		{ani_play "flyout_7" callback}	
	}	
	{on animation_end "approach_8"
		{call "bomb_drop"}
		{ani_play "flyout_8" callback}	
	}
	;// Delete entity after bugging out
	{on animation_end "flyout_1"
		{delete}	
	}
	{on animation_end "flyout_2"
		{delete}	
	}
	{on animation_end "flyout_3"
		{delete}	
	}
	{on animation_end "flyout_4"
		{delete}	
	}
	{on animation_end "flyout_5"
		{delete}	
	}
	{on animation_end "flyout_6"
		{delete}	
	}
	{on animation_end "flyout_7"
		{delete}	
	}
	{on animation_end "flyout_8"
		{delete}	
	}	
;;;;;;;;;;;;;;;;;;;;// ROCKET STRIKES

	{on "rocket_salvo"
		{add_view	"dust_bm13"	"rocket_puff1"	"hardpoint_1"}
		{add_view	"dust_bm13"	"rocket_puff2"	"hardpoint_2"}
		{add_view	"dust_bm13"	"rocket_puff3"	"hardpoint_3"}
		{add_view	"dust_bm13"	"rocket_puff4"	"hardpoint_4"}
		{play_sound "rocketlaunch"}
		{delay 0.01 
			{spawn "mk4_ammo" "hardpoint_1" x dir_velocity
				{impulse forward 90 rnd_dir 1 com}
				{gravity 0.2}
				{linear_damping 0}
			}
			{view start "rocket_puff1"}
			{delay 0.01 {view stop "rocket_puff1"}}
		}
		{delay 0.03 
			{spawn "mk4_ammo" "hardpoint_2" x dir_velocity
				{impulse forward 90 rnd_dir 1 com}
				{gravity 0.2}
				{linear_damping 0}
			}
			{view start "rocket_puff2"}
			{delay 0.01 {view stop "rocket_puff2"}}
		}
		{delay 0.05 
			{spawn "mk4_ammo" "hardpoint_3" x dir_velocity
				{impulse forward 90 rnd_dir 1 com}
				{gravity 0.2}
				{linear_damping 0}
			}
			{view start "rocket_puff3"}
			{delay 0.01 {view stop "rocket_puff3"}}
		}
		{delay 0.07 
			{spawn "mk4_ammo" "hardpoint_4" x dir_velocity
				{impulse forward 90 rnd_dir 1 com}
				{gravity 0.2}
				{linear_damping 0}
			}
			{view start "rocket_puff4"}
			{delay 0.01 {view stop "rocket_puff4"}}
		}
	}
}

;;;;;;;;;;;;;;;;;;;;// ROCKET STRIKES

{"airstrike_rocket_light"
	{on "rocket_launch"
		{delay 1.0
			{call "rocket_salvo"}
			{delay 0.5
				{call "rocket_salvo"}
				{delay 0.5
					{call "rocket_salvo"}
					{delay 0.5
						{call "rocket_salvo"}
					}
				}
			}
		}
	}
}

;;;;;;;;;;;;;;;;;;;;// SOVIET AIRSTRIKES
{"airstrike_light"
	{on "bomb_drop"
		{delay 0.14 
			{spawn "bomb_single_250" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 47}
			}
		
		}
		{delay 0.2 
			{spawn "bomb_single_250" "hardpoint_4" x dir_velocity
				{impulse up -14 dir -5 forward 53}
			}
		
		}
	}
}

{"airstrike_napalm_light"
	{on "bomb_drop"
		{delay 0.14 
			{spawn "bomb_single_napalm" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 47}
			}
		
		}
		{delay 0.2 
			{spawn "bomb_single_napalm" "hardpoint_4" x dir_velocity
				{impulse up -14 dir -5 forward 53}
			}
		
		}
	}
}

{"airstrike_wp_light"
	{on "bomb_drop"
		{delay 0.1 
			{spawn "bomb_single_wp" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 45}
			}
		
		}
		{delay 0.13 
			{spawn "bomb_single_wp" "hardpoint_4" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
	}
}

{"airstrike_cluster_light"
	{on "bomb_drop"
		{delay 0.1 
			{spawn "bomb_single_cluster" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 45}
			}
		
		}
		{delay 0.13 
			{spawn "bomb_single_cluster" "hardpoint_4" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
	}
}

{"airstrike_medium"
	{on "bomb_drop"
		{delay 0.01 
			{spawn "bomb_single_250" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 40}
			}
		
		}
		{delay 0.1 
			{spawn "bomb_single_250" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 45}
			}
		
		}
		{delay 0.15 
			{spawn "bomb_single_250" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 50}
			}
		
		}
		{delay 0.2 
			{spawn "bomb_single_250" "hardpoint_4" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
	}
}

{"airstrike_wp_medium"
	{on "bomb_drop"
		{delay 0.01 
			{spawn "bomb_single_wp" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 40}
			}
		
		}
		{delay 0.1 
			{spawn "bomb_single_wp" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 45}
			}
		
		}
		{delay 0.15 
			{spawn "bomb_single_wp" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 50}
			}
		
		}
		{delay 0.2 
			{spawn "bomb_single_wp" "hardpoint_4" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
	}
}

{"airstrike_napalm_medium"
	{on "bomb_drop"
		{delay 0.35 
			{spawn "bomb_single_napalm" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 47}
			}
		
		}
		{delay 0.38 
			{spawn "bomb_single_napalm" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 51}
			}
		
		}
		{delay 0.41 
			{spawn "bomb_single_napalm" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.44 
			{spawn "bomb_single_napalm" "hardpoint_4" x dir_velocity
				{impulse up -14 dir -5 forward 58}
			}
		
		}
	}
}

{"airstrike_cluster_medium"
	{on "bomb_drop"
		{delay 0.35 
			{spawn "bomb_single_cluster" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 47}
			}
		
		}
		{delay 0.38 
			{spawn "bomb_single_cluster" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 51}
			}
		
		}
		{delay 0.41 
			{spawn "bomb_single_cluster" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.44 
			{spawn "bomb_single_cluster" "hardpoint_4" x dir_velocity
				{impulse up -14 dir -5 forward 58}
			}
		
		}
	}
}

{"airstrike_heavy"
	{on "bomb_drop"
		{delay 0.18 
			{spawn "bomb_single_250" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.22 
			{spawn "bomb_single_250" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 60}
			}
		
		}
		{delay 0.25 
			{spawn "bomb_single_250" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.28 
			{spawn "bomb_single_250" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 60}
			}
		
		}
		{delay 0.31 
			{spawn "bomb_single_250" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.33 
			{spawn "bomb_single_250" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 60}
			}
		
		}
		{delay 0.35
			{spawn "bomb_single_250" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.37 
			{spawn "bomb_single_250" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 60}
			}
		
		}
	}
}

{"airstrike_wp_heavy"
	{on "bomb_drop"
		{delay 0.18 
			{spawn "bomb_single_wp" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.22 
			{spawn "bomb_single_wp" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 60}
			}
		
		}
		{delay 0.25 
			{spawn "bomb_single_wp" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.28 
			{spawn "bomb_single_wp" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 60}
			}
		
		}
		{delay 0.31 
			{spawn "bomb_single_wp" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.33 
			{spawn "bomb_single_wp" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 60}
			}
		
		}
		{delay 0.35
			{spawn "bomb_single_wp" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.37 
			{spawn "bomb_single_wp" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 60}
			}
		
		}
	}
}

{"airstrike_napalm_heavy"
	{on "bomb_drop"
		{delay 0.01 
			{spawn "bomb_single_napalm" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 37}
			}
		
		}
		{delay 0.07 
			{spawn "bomb_single_napalm" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 42}
			}
		
		}
		{delay 0.11 
			{spawn "bomb_single_napalm" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 47}
			}
		
		}
		{delay 0.15 
			{spawn "bomb_single_napalm" "hardpoint_4" x dir_velocity
				{impulse up -14 dir -5 forward 51}
			}
		
		}
		{delay 0.19 
			{spawn "bomb_single_napalm" "hardpoint_5" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.23 
			{spawn "bomb_single_napalm" "hardpoint_6" x dir_velocity
				{impulse up -14 dir -5 forward 58}
			}
		
		}
		{delay 0.27 
			{spawn "bomb_single_napalm" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.31 
			{spawn "bomb_single_napalm" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 58}
			}
		
		}
		{delay 0.35 
			{spawn "bomb_single_napalm" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.38 
			{spawn "bomb_single_napalm" "hardpoint_4" x dir_velocity
				{impulse up -14 dir -5 forward 37}
			}
		
		}
		{delay 0.4 
			{spawn "bomb_single_napalm" "hardpoint_5" x dir_velocity
				{impulse up -14 dir -5 forward 44}
			}
		
		}
		{delay 0.44
			{spawn "bomb_single_napalm" "hardpoint_6" x dir_velocity
				{impulse up -14 dir -5 forward 58}
			}
		
		}
	}
}

{"airstrike_cluster_heavy"
	{on "bomb_drop"
		{delay 0.18 
			{spawn "bomb_single_cluster" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.22 
			{spawn "bomb_single_cluster" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 60}
			}
		
		}
		{delay 0.25 
			{spawn "bomb_single_cluster" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.28 
			{spawn "bomb_single_cluster" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 60}
			}
		
		}
		{delay 0.31 
			{spawn "bomb_single_cluster" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.33 
			{spawn "bomb_single_cluster" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 60}
			}
		
		}
		{delay 0.35
			{spawn "bomb_single_cluster" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.37 
			{spawn "bomb_single_cluster" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 60}
			}
		
		}
	}
}

{"airstrike_superheavy"
	{on "bomb_drop"
		{delay 0.01 
			{spawn "bomb_single_1000" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 43}
			}
		
		}
		{delay 0.15 
			{spawn "bomb_single_1000" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 47}
			}
		
		}
		{delay 0.3
			{spawn "bomb_single_1000" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 52}
			}
		
		}
	}
}

;;;;;;;;;;;;;;;;;;;;// Other Script


{"bomb_single"			;// Settings for all BOMBS that fall to ground
	{on spawn
		;{impulse up -20.5 forward 0 5 rnd_dir 7 com}
	}
	{on ground_hit
		{call "explosion"}
	}
	{on contact
		{call "explosion"}
	}
	{on "explosion"
		{stuff_detonate}
	}
}

{"rocket_single"			;// Settings for all ROCKETS that are launched by script	
	{on spawn
		{add_view	"rocket_smoke"			"rockettrail"				"tail"}
		{view start "rockettrail"}
	}
	{on ground_hit
		{call "explosion"}
	}
	{on contact
		{call "explosion"}
	}
	{on "explosion"
		{stuff_detonate}
	}
}

{"submunition"			;// Settings for all submunitions
	{on ground_hit
		{call "explosion"}
	}
	;{on contact
	;	{call "explosion"}
	;}
	{on "explosion"
		{stuff_detonate}
	}
}

{"bomb_single_cluster"			;// Settings for cluster bombs
	{on spawn
		{delay 1
			{call "explosion"}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
			{spawn "bomblet_single" "bomb" x dir_velocity
				{impulse up -10 dir -5 rnd_dir 20}
			}
		}
	}
}