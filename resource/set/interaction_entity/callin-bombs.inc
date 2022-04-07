;/*=========== Bomb Strike Handling ==========*/

{"sortie"			;
	{on spawn
		{delay 10
			{if rand 0.33	
				{ani_play "flyin_8" callback}	
				else rand 0.33			
				{ani_play "flyin_7" callback}	
				else rand 0.33	
				{ani_play "flyin_6" callback}	
				else rand 0.33
				{ani_play "flyin_5" callback}	
				else rand 0.33
				{ani_play "flyin_4" callback}	
				else rand 0.33			
				{ani_play "flyin_3" callback}	
				else rand 0.33	
				{ani_play "flyin_2" callback}	
				else 
				{ani_play "flyin_1" callback}
			}
		}
	}
	{on animation_end "flyin_1"
		{ani_play "approach_1" callback}		
	}
	{on animation_end "flyin_2"
		{ani_play "approach_2" callback}		
	}
	{on animation_end "flyin_3"
		{ani_play "approach_3" callback}		
	}
	{on animation_end "flyin_4"
		{ani_play "approach_4" callback}		
	}
	{on animation_end "flyin_5"
		{ani_play "approach_5" callback}		
	}
	{on animation_end "flyin_6"
		{ani_play "approach_6" callback}		
	}
	{on animation_end "flyin_7"
		{ani_play "approach_7" callback}		
	}
	{on animation_end "flyin_8"
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
}

;;;;;;;;;;;;;;;;;;;;// SOVIET AIRSTRIKES
{"mig-19_airstrike_2x250"
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

{"mig-19_airstrike_2x100"
	{on "bomb_drop"
		{delay 0.1 
			{spawn "bomb_single_100" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 45}
			}
		
		}
		{delay 0.13 
			{spawn "bomb_single_100" "hardpoint_4" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
	}
}

{"mig-19_airstrike_2xcluster"
	{on "bomb_drop"
		{delay 0.28 
			{spawn "bomb_single_cluster" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 60}
			}
		
		}
		{delay 0.3 
			{spawn "bomb_single_cluster" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
	}
}


{"su-7_airstrike_4xcluster"
	{on "bomb_drop"
		{delay 0.26 
			{spawn "bomb_single_cluster" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.28 
			{spawn "bomb_single_cluster" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 60}
			}
		
		}
		{delay 0.3 
			{spawn "bomb_single_cluster" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.32 
			{spawn "bomb_single_cluster" "hardpoint_4" x dir_velocity
				{impulse up -14 dir -5 forward 60}
			}
		
		}
	}
}
{"su-7_airstrike_4x500"
	{on "bomb_drop"
		{delay 0.01 
			{spawn "bomb_single_500" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 40}
			}
		
		}
		{delay 0.1 
			{spawn "bomb_single_500" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 45}
			}
		
		}
		{delay 0.15 
			{spawn "bomb_single_500" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 50}
			}
		
		}
		{delay 0.2 
			{spawn "bomb_single_500" "hardpoint_4" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
	}
}

{"su-7_airstrike_4xwp"
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

{"su-7_airstrike_6x250"
	{on "bomb_drop"
		{delay 0.01 
			{spawn "bomb_single_250" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 37}
			}
		
		}
		{delay 0.1 
			{spawn "bomb_single_250" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 42}
			}
		
		}
		{delay 0.15 
			{spawn "bomb_single_250" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 47}
			}
		
		}
		{delay 0.2 
			{spawn "bomb_single_250" "hardpoint_4" x dir_velocity
				{impulse up -14 dir -5 forward 51}
			}
		
		}
		{delay 0.22 
			{spawn "bomb_single_250" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.26 
			{spawn "bomb_single_250" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 58}
			}
		
		}
	}
}

{"yak-28_airstrike_8xcluster"
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

{"yak-28_airstrike_3x1000"
	{on "bomb_drop"
		{delay 0.01 
			{spawn "bomb_single_1000" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 43}
			}
		
		}
		{delay 0.1 
			{spawn "bomb_single_1000" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 47}
			}
		
		}
		{delay 0.15 
			{spawn "bomb_single_1000" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 52}
			}
		
		}
	}
}

;;;;;;;;;;;;;;;;;;;;// US AIRSTRIKES

{"f-105_airstrike_2x500"
	{on "bomb_drop"
		{delay 0.2 
			{spawn "bomb_single_500" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 51}
			}
		
		}
		{delay 0.22 
			{spawn "bomb_single_500" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
	}
}

{"f-105_airstrike_4xcluster"
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

{"f-105_airstrike_8xcluster"
	{on "bomb_drop"
		{delay 0.3 
			{spawn "bomb_single_cluster" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 37}
			}
		
		}
		{delay 0.32 
			{spawn "bomb_single_cluster" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 42}
			}
		
		}
		{delay 0.35 
			{spawn "bomb_single_cluster" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 47}
			}
		
		}
		{delay 0.38 
			{spawn "bomb_single_cluster" "hardpoint_4" x dir_velocity
				{impulse up -14 dir -5 forward 51}
			}
		
		}
		{delay 0.41 
			{spawn "bomb_single_cluster" "hardpoint_5" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.44 
			{spawn "bomb_single_cluster" "hardpoint_6" x dir_velocity
				{impulse up -14 dir -5 forward 58}
			}
		
		}
		{delay 0.47 
			{spawn "bomb_single_cluster" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.5 
			{spawn "bomb_single_cluster" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 58}
			}
		
		}
	}
}

{"f-105_airstrike_8x250"
	{on "bomb_drop"
		{delay 0.01 
			{spawn "bomb_single_250" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 37}
			}
		
		}
		{delay 0.1 
			{spawn "bomb_single_250" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 42}
			}
		
		}
		{delay 0.15 
			{spawn "bomb_single_250" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 47}
			}
		
		}
		{delay 0.2 
			{spawn "bomb_single_250" "hardpoint_4" x dir_velocity
				{impulse up -14 dir -5 forward 51}
			}
		
		}
		{delay 0.22 
			{spawn "bomb_single_250" "hardpoint_5" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.26 
			{spawn "bomb_single_250" "hardpoint_6" x dir_velocity
				{impulse up -14 dir -5 forward 58}
			}
		
		}
		{delay 0.3 
			{spawn "bomb_single_250" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.33 
			{spawn "bomb_single_250" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 58}
			}
		
		}
	}
}

{"f-105_airstrike_8x500"
	{on "bomb_drop"
		{delay 0.01 
			{spawn "bomb_single_500" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 37}
			}
		
		}
		{delay 0.1 
			{spawn "bomb_single_500" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 42}
			}
		
		}
		{delay 0.15 
			{spawn "bomb_single_500" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 47}
			}
		
		}
		{delay 0.2 
			{spawn "bomb_single_500" "hardpoint_4" x dir_velocity
				{impulse up -14 dir -5 forward 51}
			}
		
		}
		{delay 0.22 
			{spawn "bomb_single_500" "hardpoint_5" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.26 
			{spawn "bomb_single_500" "hardpoint_6" x dir_velocity
				{impulse up -14 dir -5 forward 58}
			}
		
		}
		{delay 0.3 
			{spawn "bomb_single_500" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.33 
			{spawn "bomb_single_500" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 58}
			}
		
		}
	}
}

{"f-105_airstrike_8xwp"
	{on "bomb_drop"
		{delay 0.3 
			{spawn "bomb_single_wp" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 37}
			}
		
		}
		{delay 0.32 
			{spawn "bomb_single_wp" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 42}
			}
		
		}
		{delay 0.35 
			{spawn "bomb_single_wp" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 47}
			}
		
		}
		{delay 0.38 
			{spawn "bomb_single_wp" "hardpoint_4" x dir_velocity
				{impulse up -14 dir -5 forward 51}
			}
		
		}
		{delay 0.41 
			{spawn "bomb_single_wp" "hardpoint_5" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.44 
			{spawn "bomb_single_wp" "hardpoint_6" x dir_velocity
				{impulse up -14 dir -5 forward 58}
			}
		
		}
		{delay 0.47 
			{spawn "bomb_single_wp" "hardpoint_1" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
		{delay 0.5 
			{spawn "bomb_single_wp" "hardpoint_2" x dir_velocity
				{impulse up -14 dir -5 forward 58}
			}
		
		}
	}
}

{"f-105_airstrike_3x1000"
	{on "bomb_drop"
		{delay 0.01 
			{spawn "bomb_single_1000" "hardpoint_5" x dir_velocity
				{impulse up -14 dir -5 forward 37}
			}
		
		}
		{delay 0.15 
			{spawn "bomb_single_1000" "hardpoint_3" x dir_velocity
				{impulse up -14 dir -5 forward 51}
			}
		
		}
		{delay 0.3 
			{spawn "bomb_single_1000" "hardpoint_4" x dir_velocity
				{impulse up -14 dir -5 forward 55}
			}
		
		}
	}
}

{"f-105_airstrike_napalm"
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