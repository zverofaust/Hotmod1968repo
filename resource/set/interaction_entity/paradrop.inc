{"offmap_paradrop"			;// Helper that spawns stuff
	(define "offmap"
		{on spawn
			{delay 5
				{delay 1
					{spawn %0 offset -250 0 1000}
					{hide 1}
				}
			}
		}
	)
}

{"flare_paradrop_ammo"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_ammo_pallet"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"flare_paradrop_m56"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_m56"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"flare_paradrop_asu57"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_asu57"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"flare_paradrop_rpu14"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_rpu14"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"flare_paradrop_sd44"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_sd44"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"parachute_paradrop"
	{on spawn
		{start_sound "vehicle/deploy/tent"}
		{ani_play "flight" callback}
	}
	{on animation_end "flight"
		{ani_play "landing" callback}
		{with_linked_entity "attach"
			{unlink}
			{impulse up 0.1 com}
		}
	}
	{on animation_end "landing"
		{with_linked_entity "attach"
			{unlink}
			{impulse up 5 com}
		}
		{delay 1 {delete}}
	}
}
	
{"m56_para"			;// apply these params to m56
	{on spawn
		{impulse up -5 forward 5 rnd_dir 1 com}
		;{spawn "paratrooper_attach"}
	}
	{on ground_hit
		{spawn "paratrooper_attach"}
	}
}

{"asu57_para"			;// apply these params to asu57
	{on spawn
		{impulse up -5 forward 5 rnd_dir 1 com}
		{spawn "paratrooper_attach"}
	}
	{on ground_hit
		;{spawn "paratrooper_attach"}
	}
}

{"asu-85_para"			;// apply these params to asu57
	{on spawn
		{impulse up -5 forward 5 rnd_dir 1 com}
		;{spawn "paratrooper_attach"}
	}
	{on ground_hit
		{spawn "paratrooper_attach"}
	}
}

{"paratrooper_attach"			;// Parachute
	{on spawn
		{ani_play "flight" callback}
		;{ani_play "landing"}
	}
	{on animation_end "flight"
		{ani_play "landing" callback}	
		{delay 5 {delete}}
	}
}

{"paradrop_asu57"			;// Seems redunant
	{on spawn
		{spawn "paradrop_asu57_dummy" random_position 1000}
	}
}

{"paradrop_m56"			;// Seems redunant
	{on spawn
		{spawn "paradrop_m56_dummy" random_position 1000}
	}
}

{"paradrop_asu-85"			;// Seems redunant
	{on spawn
		{spawn "paradrop_asu-85_dummy" random_position 1000}
	}
}

{"paradrop_m56_dummy"			;// The real deal
	{on spawn
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 7
			{start_sound "vehicle/deploy/tent"}
			{spawn "m56_para" offset -250 0 1000}
			{hide 1}
		}
	}
}

{"paradrop_asu57_dummy"			;// The real deal
	{on spawn
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 7
			{start_sound "vehicle/deploy/tent"}
			{spawn "asu57_para" offset -250 0 1000}
			{hide 1}
		}
	}
}

{"paradrop_asu-85_dummy"			;// The real deal
	{on spawn
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 7
			{start_sound "vehicle/deploy/tent"}
			{spawn "asu-85_para" offset -250 0 1000}
			{hide 1}
		}
	}
}