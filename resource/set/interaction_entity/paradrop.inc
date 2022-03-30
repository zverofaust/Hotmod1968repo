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

{"ammocrate_usa"			;//
	{on spawn
		{impulse up -5 forward 5 rnd_dir 1 com}
	}
	{on ground_hit
	}
}

{"ammocrate_sov"			;//
	{on spawn
		{impulse up -5 forward 5 rnd_dir 1 com}
	}
	{on ground_hit
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
		;{spawn "paratrooper_attach"}
	}
	{on ground_hit
		{spawn "paratrooper_attach"}
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
		;{ani_play "flight"}
		{ani_play "landing"}
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