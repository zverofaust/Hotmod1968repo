;/*=========== Bomb Strike Handling ==========*/

;/////// SOV Bombrun Flares

{"flare_airstrike"
	{on spawn
		{link_sound "bkg_jet"				"vehicle/airborne/bkgjet/"}
		{play_sound "bkg_jet"}
		;{add_view "smoke_flare_red" "smoke" "root"}
		;{view start "smoke"}
		;{impulse up -5 rnd_dir 3 com}
		{delay 20 {stop_sound "bkg_jet"}{delete}}
	}
}

{"flare_airstrike_light_bomb_sov"
	{on spawn
		{delay 8 {spawn "mig-19_airstrike_bomb_light" "root" x}}
	}
}

{"flare_airstrike_light_wp_sov"
	{on spawn
		{delay 8 {spawn "mig-19_airstrike_wp_light" "root" x}}
	}
}

{"flare_airstrike_light_cluster_sov"
	{on spawn
		{delay 8 {spawn "mig-19_airstrike_cluster_light" "root" x}}
	}
}

{"flare_airstrike_light_rocket_sov"
	{on spawn
		{delay 5 {spawn "mig-19_airstrike_rocket_light" "root" x}}
	}
}

{"flare_airstrike_heavy_rocket_sov"
	{on spawn
		{delay 5 {spawn "su-7_airstrike_rocket_heavy" "root" x}}
	}
}

{"flare_airstrike_medium_bomb_sov"
	{on spawn
		{delay 12 {spawn "su-7_airstrike_bomb_medium" "root" x}}
	}
}

{"flare_airstrike_medium_wp_sov"
	{on spawn
		{delay 12 {spawn "su-7_airstrike_wp_medium" "root" x}}
	}
}

{"flare_airstrike_medium_cluster_sov"
	{on spawn
		{delay 12 {spawn "su-7_airstrike_cluster_medium" "root" x}}
	}
}

{"flare_airstrike_heavy_bomb_sov"
	{on spawn
		{delay 16 {spawn "yak-28_airstrike_bomb_heavy" "root" x}}
	}
}

{"flare_airstrike_heavy_wp_sov"
	{on spawn
		{delay 16 {spawn "yak-28_airstrike_wp_heavy" "root" x}}
	}
}

{"flare_airstrike_super_bomb_sov"
	{on spawn
		{delay 16 {spawn "yak-28_airstrike_bomb_super" "root" x}}
	}
}

;////////// USA

{"flare_airstrike_light_bomb_usa"
	{on spawn
		{delay 8 {spawn "a-4e_airstrike_bomb_light" "root" x}}
	}
}

{"flare_airstrike_light_napalm_usa"
	{on spawn
		{delay 8 {spawn "a-4e_airstrike_napalm_light" "root" x}}
	}
}

{"flare_airstrike_light_cluster_usa"
	{on spawn
		{delay 8 {spawn "a-4e_airstrike_cluster_light" "root" x}}
	}
}

{"flare_airstrike_light_rocket_usa"
	{on spawn
		{delay 5 {spawn "a-4e_airstrike_rocket_light" "root" x}}
	}
}

{"flare_airstrike_heavy_rocket_usa"
	{on spawn
		{delay 5 {spawn "a-4e_airstrike_rocket_heavy" "root" x}}
	}
}

{"flare_airstrike_medium_bomb_usa"
	{on spawn
		{delay 12 {spawn "a-4e_airstrike_bomb_medium" "root" x}}
	}
}

{"flare_airstrike_medium_napalm_usa"
	{on spawn
		{delay 12 {spawn "a-4e_airstrike_napalm_medium" "root" x}}
	}
}

{"flare_airstrike_medium_cluster_usa"
	{on spawn
		{delay 12 {spawn "a-4e_airstrike_cluster_medium" "root" x}}
	}
}

{"flare_airstrike_heavy_bomb_usa"
	{on spawn
		{delay 16 {spawn "f-105_airstrike_bomb_heavy" "root" x}}
	}
}

{"flare_airstrike_heavy_napalm_usa"
	{on spawn
		{delay 16 {spawn "f-105_airstrike_napalm_heavy" "root" x}}
	}
}

{"flare_airstrike_heavy_cluster_usa"
	{on spawn
		{delay 16 {spawn "f-105_airstrike_cluster_heavy" "root" x}}
	}
}

{"flare_airstrike_super_bomb_usa"
	{on spawn
		{delay 16 {spawn "f-105_airstrike_bomb_super" "root" x}}
	}
}

{"sortie"			;Sorties used to include 8 different animations to randomize direction of bombing run, now just uses flyin_1
	{on spawn
		;{delay 0
			;{if rand 0.33	
				;{ani_play "flyin_8" callback}	
				;else rand 0.33			
				;{ani_play "flyin_7" callback}	
				;else rand 0.33	
				;{ani_play "flyin_6" callback}	
				;else rand 0.33	
				;{ani_play "flyin_5" callback}	
				;else rand 0.33
				;{ani_play "flyin_4" callback}	
				;else rand 0.33			
				;{ani_play "flyin_3" callback}	
				;else rand 0.33	
				;{ani_play "flyin_2" callback}	
				;else 
				{ani_play "flyin_1" callback}
			;}
		;}
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

	(define "rocketsize"
		{on "rocket_salvo"
			{add_view	"dust_bm13"	"rocket_puff1"	"hardpoint_1"}
			{add_view	"dust_bm13"	"rocket_puff2"	"hardpoint_2"}
			{add_view	"dust_bm13"	"rocket_puff3"	"hardpoint_3"}
			{add_view	"dust_bm13"	"rocket_puff4"	"hardpoint_4"}
			{play_sound "rocketlaunch"}
			{delay 0.01 
				{spawn "rocket_%0" "hardpoint_1" x dir_velocity
					{impulse forward 130 rnd_dir 3 com}
					{gravity 0.2}
					{linear_damping 0}
				}
				{view start "rocket_puff1"}
				{delay 0.01 {view stop "rocket_puff1"}}
			}
			{delay 0.03 
				{spawn "rocket_%0" "hardpoint_2" x dir_velocity
					{impulse forward 130 rnd_dir 3 com}
					{gravity 0.2}
					{linear_damping 0}
				}
				{view start "rocket_puff2"}
				{delay 0.01 {view stop "rocket_puff2"}}
			}
			{delay 0.05 
				{spawn "rocket_%0" "hardpoint_3" x dir_velocity
					{impulse forward 130 rnd_dir 3 com}
					{gravity 0.2}
					{linear_damping 0}
				}
				{view start "rocket_puff3"}
				{delay 0.01 {view stop "rocket_puff3"}}
			}
			{delay 0.07 
				{spawn "rocket_%0" "hardpoint_4" x dir_velocity
					{impulse forward 130 rnd_dir 3 com}
					{gravity 0.2}
					{linear_damping 0}
				}
				{view start "rocket_puff4"}
				{delay 0.01 {view stop "rocket_puff4"}}
			}
		}
		
		{on "rocket_launch"
			{delay 0.01
				{call "rocket_salvo"}
				{delay 0.3
					{call "rocket_salvo"}
					{delay 0.3
						{call "rocket_salvo"}
						{delay 0.3
							{call "rocket_salvo"}
						}
					}
				}
			}
		}
	)
	
	(define "bombtype"
		{on "bomb_drop"
			{if tagged "hardpoint_count_2"
				{delay 0.12
					{play_sound "release"}
					{play_sound "bomb"}
					{spawn "bomb_single_%0" "hardpoint_1" x dir_velocity
						{impulse up -14 dir -5 forward 47}
					}
				}
				{delay 0.18 
					{play_sound "release"}
					{play_sound "bomb"}
					{spawn "bomb_single_%0" "hardpoint_4" x dir_velocity
					{impulse up -14 dir -5 forward 53}
					}
				}
			else tagged "hardpoint_count_4"
				{delay 0.12
					{play_sound "release"}
					{play_sound "bomb"}
					{spawn "bomb_single_%0" "hardpoint_1" x dir_velocity
						{impulse up -14 dir -5 forward 40}
					}
				}
				{delay 0.18 
					{play_sound "release"}
					{play_sound "bomb"}
					{spawn "bomb_single_%0" "hardpoint_2" x dir_velocity
					{impulse up -14 dir -5 forward 47}
					}
				}
				{delay 0.24 
					{play_sound "release"}
					{play_sound "bomb"}
					{spawn "bomb_single_%0" "hardpoint_2" x dir_velocity
					{impulse up -14 dir -5 forward 53}
					}
				}
				{delay 0.3 
					{play_sound "release"}
					{play_sound "bomb"}
					{spawn "bomb_single_%0" "hardpoint_2" x dir_velocity
					{impulse up -14 dir -5 forward 60}
					}
				}
			else tagged "hardpoint_count_8"
				{delay 0.1
					{play_sound "release"}
					{play_sound "bomb"}
					{spawn "bomb_single_%0" "hardpoint_1" x dir_velocity
						{impulse up -14 dir -5 forward 36}
					}
				}
				{delay 0.16 
					{play_sound "release"}
					{play_sound "bomb"}
					{spawn "bomb_single_%0" "hardpoint_2" x dir_velocity
					{impulse up -14 dir -5 forward 40}
					}
				}
				{delay 0.22 
					{play_sound "release"}
					{play_sound "bomb"}
					{spawn "bomb_single_%0" "hardpoint_3" x dir_velocity
					{impulse up -14 dir -5 forward 44}
					}
				}
				{delay 0.28 
					{play_sound "release"}
					{play_sound "bomb"}
					{spawn "bomb_single_%0" "hardpoint_4" x dir_velocity
					{impulse up -14 dir -5 forward 48}
					}
				}
				{delay 0.34
					{play_sound "release"}
					{play_sound "bomb"}
					{spawn "bomb_single_%0" "hardpoint_5" x dir_velocity
						{impulse up -14 dir -5 forward 52}
					}
				}
				{delay 0.4 
					{play_sound "release"}
					{play_sound "bomb"}
					{spawn "bomb_single_%0" "hardpoint_6" x dir_velocity
					{impulse up -14 dir -5 forward 56}
					}
				}
				{delay 0.46 
					{play_sound "release"}
					{play_sound "bomb"}
					{spawn "bomb_single_%0" "hardpoint_7" x dir_velocity
					{impulse up -14 dir -5 forward 60}
					}
				}
				{delay 0.52 
					{play_sound "release"}
					{play_sound "bomb"}
					{spawn "bomb_single_%0" "hardpoint_8" x dir_velocity
					{impulse up -14 dir -5 forward 64}
					}
				}
			}
		}
	)
}

;;;;;;;;;;;;;;;;;;;;// ROCKET STRIKES

{"airstrike_rocket_light"
	("rocketsize" args light)
}

{"airstrike_rocket_heavy"
	("rocketsize" args heavy)
}


;;;;;;;;;;;;;;;;;;;;// SOVIET AIRSTRIKES
{"airstrike_light"
	{on spawn
		{tags add "hardpoint_count_2"}
	}
	("bombtype" args 100)
}

{"airstrike_napalm_light"
	{on spawn
		{tags add "hardpoint_count_2"}
	}
	("bombtype" args napalm)
}

{"airstrike_wp_light"
	{on spawn
		{tags add "hardpoint_count_2"}
	}
	("bombtype" args wp)
}

{"airstrike_cluster_light"
	{on spawn
		{tags add "hardpoint_count_2"}
	}
	("bombtype" args cluster)
}

{"airstrike_medium"
	{on spawn
		{tags add "hardpoint_count_4"}
	}
	("bombtype" args 100)
}

{"airstrike_wp_medium"
	{on spawn
		{tags add "hardpoint_count_4"}
	}
	("bombtype" args wp)
}

{"airstrike_napalm_medium"
	{on spawn
		{tags add "hardpoint_count_4"}
	}
	("bombtype" args napalm)
}

{"airstrike_cluster_medium"
	{on spawn
		{tags add "hardpoint_count_4"}
	}
	("bombtype" args cluster)
}

{"airstrike_heavy"
	{on spawn
		{tags add "hardpoint_count_8"}
	}
	("bombtype" args 250)
}

{"airstrike_wp_heavy"
	{on spawn
		{tags add "hardpoint_count_8"}
	}
	("bombtype" args wp)
}

{"airstrike_napalm_heavy"
	{on spawn
		{tags add "hardpoint_count_8"}
	}
	("bombtype" args napalm)
}

{"airstrike_cluster_heavy"
	{on spawn
		{tags add "hardpoint_count_8"}
	}
	("bombtype" args cluster)
}

{"airstrike_super"
	{on spawn
		{tags add "hardpoint_count_2"}
	}
	("bombtype" args 1000)
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
		{add_view	"rocket_smoke_st"			"rockettrail"				"tail"}
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

{"bomb_single_wp"	;// Settings for WP bombs that leave smoke
	{on "explosion"
		(define "spawn_volume"
			{spawn "smoke_volume_%0" offset %1 %2 0
				{delay %3 {hide 1}}
			}
		)
		{spawn "smoke_volume_cylinder"
			{add_view "smoke_size4" "smoke1" "root"}
			{view start "smoke1"}
			{delay 81
				{view stop "smoke1"}
			}
			{delay 85
				{hide 1}
			}
		}
		{delay 2
			("spawn_volume" args cylinder 150 0 84)
			("spawn_volume" args cylinder -150 0 84)
			("spawn_volume" args cylinder 0 150 84)
			("spawn_volume" args cylinder 0 -150 84)
			("spawn_volume" args cylinder 104 104 84)
			("spawn_volume" args cylinder -104 -104 84)
			("spawn_volume" args cylinder -104 104 84)
			("spawn_volume" args cylinder 104 -104 84)

			("spawn_volume" args cylinder 50 50 84)
			("spawn_volume" args cylinder -50 -50 84)
			("spawn_volume" args cylinder -50 50 84)
			("spawn_volume" args cylinder 50 -50 84)
		}
		{delay 90
			{hide 1}
		}
	}
}

{"bomb_single_cluster"			;// Settings for cluster bombs
	{on spawn
		{delay 1.5
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