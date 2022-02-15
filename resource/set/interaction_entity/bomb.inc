;/*=========== Bomb Run Types Begin ==========*/

{"flare_bombrun_cas"			;// Dummy object for non-bomb CAS callins
	{on spawn
		{delay 5 {delete}}
	}
}

{"flare_bombrun_50"			;// Dummy object that spawns bombrun.
	{on spawn
		{spawn "bombrun_50"}
		{delay 5 {delete}}
	}
}

{"flare_bombrun_100"			;// Dummy object that spawns bombrun.
	{on spawn
		{spawn "bombrun_100"}
		{delay 5 {delete}}
	}
}

{"flare_bombrun_250"			;// Dummy object that spawns bombrun.
	{on spawn
		{spawn "bombrun_250"}
		{delay 5 {delete}}
	}
}

{"flare_bombrun_500"			;// Dummy object that spawns bombrun.
	{on spawn
		{spawn "bombrun_500"}
		{delay 5 {delete}}
	}
}

{"flare_bombrun_napalm"			;// Dummy object that spawns bombrun.
	{on spawn
		{spawn "bombrun_napalm"}
		{delay 5 {delete}}
	}
}

{"bombrun_50"			;// Flare that spawns timed explosions randomized in area
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			(define "rnd_art_bomb"
				{delay %delay 0.0
					{spawn "bomb_single_50" {impulse up -20.5 forward 0 5 rnd_dir 12 com}}
				}
			)
			("rnd_art_bomb" delay(0.01))
			("rnd_art_bomb" delay(0.02))
			("rnd_art_bomb" delay(0.03))
			("rnd_art_bomb" delay(0.04))
			("rnd_art_bomb" delay(0.05))
			("rnd_art_bomb" delay(0.06))
			("rnd_art_bomb" delay(0.07))
			("rnd_art_bomb" delay(0.08))
			{hide 1}
		}
	}
}

{"bombrun_100"			;// Flare that spawns timed explosions randomized in area
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			(define "rnd_art_bomb"
				{delay %delay 0.0
					{spawn "bomb_single_100" {impulse up -20.5 forward 0 5 rnd_dir 10 com}}
				}
			)
			("rnd_art_bomb" delay(0.01))
			("rnd_art_bomb" delay(0.02))
			("rnd_art_bomb" delay(0.03))
			("rnd_art_bomb" delay(0.04))
			("rnd_art_bomb" delay(0.05))
			("rnd_art_bomb" delay(0.06))
			{hide 1}
		}
	}
}

{"bombrun_250"			;// Flare that spawns timed explosions randomized in area
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			(define "rnd_art_bomb"
				{delay %delay 0.0
					{spawn "bomb_single_250" {impulse up -20.5 forward 0 5 rnd_dir 8 com}}
				}
			)
			("rnd_art_bomb" delay(0.0))
			("rnd_art_bomb" delay(0.01))
			("rnd_art_bomb" delay(0.02))
			("rnd_art_bomb" delay(0.03))
			{hide 1}
		}
	}
}

{"bombrun_500"			;// Flare that spawns timed explosions randomized in area
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			(define "rnd_art_bomb"
				{delay %delay 0.0
					{spawn "bomb_single_500" {impulse up -20.5 forward 0 5 rnd_dir 6 com}}
				}
			)
			("rnd_art_bomb" delay(0.0))
			{hide 1}
		}
	}
}

{"bombrun_napalm"			;// Flare that spawns timed explosions randomized in area
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			(define "rnd_art_bomb"
				{delay %delay 0.0
					{spawn "bomb_single_napalm" {impulse up -20.5 forward 0 5 rnd_dir 7 com}}
				}
			)
			("rnd_art_bomb" delay(0.01))
			("rnd_art_bomb" delay(0.02))
			("rnd_art_bomb" delay(0.03))
			("rnd_art_bomb" delay(0.04))
			("rnd_art_bomb" delay(0.05))
			("rnd_art_bomb" delay(0.06))
			("rnd_art_bomb" delay(0.07))
			("rnd_art_bomb" delay(0.08))
			("rnd_art_bomb" delay(0.09))
			("rnd_art_bomb" delay(1.00))
			{hide 1}
		}
	}
}

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