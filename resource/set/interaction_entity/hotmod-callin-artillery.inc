;/*=========== Artillery Begin ==========*/

{"offmap_dummy"			;// Helper that spawns firing sounds and falling shells after delay
	(define "offmap"
		{on spawn
			{start_sound "weapon/shot/ambient_cannon"}
			{delay 5
				{start_sound "weapon/shot/mortar/whistle"}
				{delay 1
					{start_sound "weapon/shot/artillery"}
					{spawn %0 offset -250 0 1000}
					{hide 1}
				}
			}
		}
	)
}

{"offmap_dummy 80"
	("offmap" args "mortar_single_80")
}

{"offmap_dummy 120"
	("offmap" args "mortar_single_120")
}

{"offmap_dummy 160"
	("offmap" args "mortar_single_160")
}

{"offmap_dummy 105"
	("offmap" args "artillery_single_105")
}

{"offmap_dummy 150"
	("offmap" args "artillery_single_150")
}

{"offmap_dummy 203"
	("offmap" args "artillery_single_203")
}

{"offmap_dummy smoke"
	("offmap" args "artillery_single_smoke")
}

{"offmap_dummy chem"
	("offmap" args "artillery_single_chem")
}

{"artillery_shell"			;// Settings for all shells that fall to ground
	{on spawn
		{add_view "pfaust_tail" "trace" "tail"}
		{view start "trace"}
		{impulse up -75 forward 20 rnd_dir 3 com}
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

{"artillery_single_105"			;// Settings for all shells that fall to ground
	{on "explosion"
		{stuff_detonate}
		{blastwave c4 25 	r0 0.6 r1 3.2}
		{blastwave c4 8 	r0 4.15 r1 6.85}
		{blastwave c4 0.5 	r0 6.72 r1 9.08}
	}
}

{"artillery_single_150"			;// Settings for all shells that fall to ground
	{on "explosion"
		{stuff_detonate}
		{blastwave c4 35 	r0 1.6 r1 4.2}
		{blastwave c4 10 	r0 6.15 r1 10.85}
		{blastwave c4 1.0 	r0 10.72 r1 15.08}
	}
}

{"artillery_single_203"			;// Settings for all shells that fall to ground
	{on "explosion"
		{stuff_detonate}
		{blastwave c4 45	r0 2.6 r1 5.2}
		{blastwave c4 13.05 r0 13.15 r1 18.85}
		{blastwave c4 1.5 	r0 20.72 r1 30.08}
	}
}

{"artillery_single_rocket"			;// Settings for all shells that fall to ground
	{on "explosion"
		{stuff_detonate}
		{blastwave c4 25 	r0 0.6 r1 3.2}
		{blastwave c4 8 	r0 4.15 r1 6.85}
		{blastwave c4 0.5 	r0 6.72 r1 9.08}
	}
}

{"artillery_single_rocket_heavy"			;// Settings for all shells that fall to ground
	{on "explosion"
		{stuff_detonate}
		{blastwave c4 45 r0 2.6 r1 5.2}
		{blastwave c4 13.05 r0 13.15 r1 18.85}
		{blastwave c4 1.538 r0 20.72 r1 30.08}
	}
}

{"smoke_shell_small"			;// Settings for all shells that fall to ground
	{on spawn
		{add_view "pfaust_tail" "trace" "tail"}
		{view start "trace"}
		{impulse up -75 forward 20 rnd_dir 3 com}
	}
	{on ground_hit
		{call "explosion"}
	}
	{on contact
		{call "explosion"}
	}
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
		{stuff_detonate}
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

{"smoke_shell_large"			;// Settings for all shells that fall to ground
	{on spawn
		{add_view "pfaust_tail" "trace" "tail"}
		{view start "trace"}
		{impulse up -75 forward 20 rnd_dir 3 com}
	}
	{on ground_hit
		{call "explosion"}
	}
	{on contact
		{call "explosion"}
	}
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
		{stuff_detonate}
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

{"artillery_rocket"			;// Settings for all shells that fall to ground
	{on spawn
		{add_view "rocket_smoke_bm13" "trace" "tail"}
		{view start "trace"}
		{impulse up -60 forward 25 rnd_dir 3 com}
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

{"artillery_barrage_105"
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			(define "rnd_art_bomb"
				{delay %delay 0.5
					{spawn "artillery_single_105_dummy" random_position 550}
				}
			)
			("rnd_art_bomb" delay(0.5))
			("rnd_art_bomb" delay(1))
			("rnd_art_bomb" delay(1.5))
			("rnd_art_bomb" delay(2))
			("rnd_art_bomb" delay(6.5))
			("rnd_art_bomb" delay(7))
			("rnd_art_bomb" delay(7.5))
			("rnd_art_bomb" delay(8))
			("rnd_art_bomb" delay(12.5))
			("rnd_art_bomb" delay(13))
			("rnd_art_bomb" delay(13.5))
			("rnd_art_bomb" delay(14))
			("rnd_art_bomb" delay(18.5))
			("rnd_art_bomb" delay(19))
			("rnd_art_bomb" delay(19.5))
			("rnd_art_bomb" delay(20))
			{hide 21}
		}
	}
}

{"artillery_barrage_150"
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			(define "rnd_art_bomb"
				{delay %delay 0.5
					{spawn "artillery_single_150_dummy" random_position 700}
				}
			)
			("rnd_art_bomb" delay(0.5))
			("rnd_art_bomb" delay(1))
			("rnd_art_bomb" delay(1.5))
			("rnd_art_bomb" delay(2))
			("rnd_art_bomb" delay(6.5))
			("rnd_art_bomb" delay(7))
			("rnd_art_bomb" delay(7.5))
			("rnd_art_bomb" delay(8))
			("rnd_art_bomb" delay(12.5))
			("rnd_art_bomb" delay(13))
			("rnd_art_bomb" delay(13.5))
			("rnd_art_bomb" delay(14))
			("rnd_art_bomb" delay(18.5))
			("rnd_art_bomb" delay(19))
			("rnd_art_bomb" delay(19.5))
			("rnd_art_bomb" delay(20))
			{hide 21}
		}
	}
}

{"artillery_barrage_203"
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			(define "rnd_art_bomb"
				{delay %delay 0.5
					{spawn "artillery_single_203_dummy" random_position 900}
				}
			)
			("rnd_art_bomb" delay(0.5))
			("rnd_art_bomb" delay(1))
			("rnd_art_bomb" delay(1.5))
			("rnd_art_bomb" delay(2))
			("rnd_art_bomb" delay(7.5))
			("rnd_art_bomb" delay(8))
			("rnd_art_bomb" delay(8.5))
			("rnd_art_bomb" delay(9))
			("rnd_art_bomb" delay(14.5))
			("rnd_art_bomb" delay(115))
			("rnd_art_bomb" delay(15.5))
			("rnd_art_bomb" delay(16))
			("rnd_art_bomb" delay(21.5))
			("rnd_art_bomb" delay(22))
			("rnd_art_bomb" delay(22.5))
			("rnd_art_bomb" delay(23))
			{hide 24}
		}
	}
}

{"artillery_barrage_smoke"
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			(define "rnd_art_bomb"
				{delay %delay 0.5
					{spawn "artillery_single_smoke_dummy" random_position 700}
				}
			)
			("rnd_art_bomb" delay(0.5))
			("rnd_art_bomb" delay(1))
			("rnd_art_bomb" delay(1.5))
			("rnd_art_bomb" delay(2))
			("rnd_art_bomb" delay(6.5))
			("rnd_art_bomb" delay(7))
			("rnd_art_bomb" delay(7.5))
			("rnd_art_bomb" delay(8))
			("rnd_art_bomb" delay(12.5))
			("rnd_art_bomb" delay(13))
			("rnd_art_bomb" delay(13.5))
			("rnd_art_bomb" delay(14))
			("rnd_art_bomb" delay(18.5))
			("rnd_art_bomb" delay(19))
			("rnd_art_bomb" delay(19.5))
			("rnd_art_bomb" delay(20))
			{hide 21}
		}
	}
}

{"artillery_barrage_chem"
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			(define "rnd_art_bomb"
				{delay %delay 0.5
					{spawn "artillery_single_chem_dummy" random_position 700}
				}
			)
			("rnd_art_bomb" delay(0.5))
			("rnd_art_bomb" delay(1))
			("rnd_art_bomb" delay(1.5))
			("rnd_art_bomb" delay(2))
			("rnd_art_bomb" delay(6.5))
			("rnd_art_bomb" delay(7))
			("rnd_art_bomb" delay(7.5))
			("rnd_art_bomb" delay(8))
			("rnd_art_bomb" delay(12.5))
			("rnd_art_bomb" delay(13))
			("rnd_art_bomb" delay(13.5))
			("rnd_art_bomb" delay(14))
			("rnd_art_bomb" delay(18.5))
			("rnd_art_bomb" delay(19))
			("rnd_art_bomb" delay(19.5))
			("rnd_art_bomb" delay(20))
			{hide 21}
		}
	}
}

{"flare_artillery"			;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{delay 6 {spawn "artillery_barrage_105"}}
		{delay 31 {spawn "artillery_barrage_105"}}
		{delay 40 {view stop "smoke"}}
		{delay 40 {delete}}
	}
}

{"flare_artillery_105"			;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{impulse up 35 forward 3 rnd_dir 3 com}
		{delay 17 {spawn "artillery_barrage_105"}}
		{delay 41 {view stop "smoke"}}
		{delay 41 {delete}}
	}
}

{"flare_artillery_150"			;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{impulse up 35 forward 3 rnd_dir 3 com}
		{delay 20 {spawn "artillery_barrage_150"}}
		{delay 41 {view stop "smoke"}}
		{delay 41 {delete}}
	}
}

{"flare_artillery_203"			;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{impulse up 35 forward 3 rnd_dir 3 com}
		{delay 20 {spawn "artillery_barrage_203"}}
		{delay 41 {view stop "smoke"}}
		{delay 41 {delete}}
	}
}

{"flare_artillery_smoke"			;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{impulse up 35 forward 3 rnd_dir 3 com}
		{delay 20 {spawn "artillery_barrage_smoke"}}
		{delay 29 {view stop "smoke"}}
		{delay 29 {delete}}
	}
}

{"flare_artillery_rocket"			;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{impulse up 35 forward 3 rnd_dir 3 com}
		{delay 20 {spawn "artillery_barrage_rocket"}}
		{delay 51 {view stop "smoke"}}
		{delay 51 {delete}}
	}
}

{"flare_artillery_rocket_heavy"			;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{impulse up 35 forward 3 rnd_dir 3 com}
		{delay 30 {spawn "artillery_barrage_rocket_heavy"}}
		{delay 51 {view stop "smoke"}}
		{delay 51 {delete}}
	}
}

{"flare_mortar_80"			;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{impulse up 35 forward 3 rnd_dir 3 com}
		{delay 2 {spawn "mortar_barrage_80"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"flare_mortar_120"			;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{impulse up 35 forward 3 rnd_dir 3 com}
		{delay 3 {spawn "mortar_barrage_120"}}
		{delay 25 {view stop "smoke"}}
		{delay 25 {delete}}
	}
}

{"flare_mortar_160"			;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{impulse up 35 forward 3 rnd_dir 3 com}
		{delay 4 {spawn "mortar_barrage_160"}}
		{delay 25 {view stop "smoke"}}
		{delay 25 {delete}}
	}
}

{"flare_mortar_smoke"			;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{impulse up 35 forward 3 rnd_dir 3 com}
		{delay 2 {spawn "mortar_barrage_smoke"}}
		{delay 25 {view stop "smoke"}}
		{delay 25 {delete}}
	}
}

{"offmap_mortar"			;// Spawns delayed explosion (fake mortar)
	{on spawn
		{start_sound "weapon/mortar/whistle"}
		{delay 1.5
			{stuff_detonate}
		}
	}
}

{"mortar_single_120_dummy"			;// Shells that fall to ground. Source Off-map artillery
	{on spawn
		{start_sound "weapon/shot/mortar/ambient_mortar" ambient}
		{delay 7
			{start_sound "weapon/shot/artillery"}
			{spawn "mortar_single_120" offset -250 0 1000}
			{hide 1}
		}
	}
}

{"mortar_barrage_120"			;// Flare that spawns timed explosions randomized in area
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			(define "rnd_art_bomb"
				{delay %delay 0.5
					{spawn "mortar_single_120_dummy" random_position 350}
				}
			)
			("rnd_art_bomb" delay(0.25))
			("rnd_art_bomb" delay(0.5))
			("rnd_art_bomb" delay(0.75))
			("rnd_art_bomb" delay(1))
			("rnd_art_bomb" delay(4.25))
			("rnd_art_bomb" delay(4.5))
			("rnd_art_bomb" delay(4.75))
			("rnd_art_bomb" delay(5))
			("rnd_art_bomb" delay(9.25))
			("rnd_art_bomb" delay(9.5))
			("rnd_art_bomb" delay(9.75))
			("rnd_art_bomb" delay(10))
			("rnd_art_bomb" delay(14.25))
			("rnd_art_bomb" delay(14.5))
			("rnd_art_bomb" delay(14.75))
			("rnd_art_bomb" delay(15))
			{hide 15}
		}
	}
}

{"mortar_single_160_dummy"			;// Shells that fall to ground. Source Off-map artillery
	{on spawn
		{start_sound "weapon/shot/mortar/ambient_mortar" ambient}
		{delay 7
			{start_sound "weapon/shot/artillery"}
			{spawn "mortar_single_160" offset -250 0 1000}
			{hide 1}
		}
	}
}

{"mortar_barrage_160"			;// Flare that spawns timed explosions randomized in area
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			(define "rnd_art_bomb"
				{delay %delay 0.5
					{spawn "mortar_single_160_dummy" random_position 350}
				}
			)
			("rnd_art_bomb" delay(0.25))
			("rnd_art_bomb" delay(0.5))
			("rnd_art_bomb" delay(0.75))
			("rnd_art_bomb" delay(1))
			("rnd_art_bomb" delay(4.25))
			("rnd_art_bomb" delay(4.5))
			("rnd_art_bomb" delay(4.75))
			("rnd_art_bomb" delay(5))
			("rnd_art_bomb" delay(9.25))
			("rnd_art_bomb" delay(9.5))
			("rnd_art_bomb" delay(9.75))
			("rnd_art_bomb" delay(10))
			("rnd_art_bomb" delay(14.25))
			("rnd_art_bomb" delay(14.5))
			("rnd_art_bomb" delay(14.75))
			("rnd_art_bomb" delay(15))
			{hide 15}
		}
	}
}

{"mortar_single_80_dummy"			;// Shells that fall to ground. Source Off-map artillery
	{on spawn
		{start_sound "weapon/shot/mortar/ambient_mortar" ambient}
		{delay 7
			{start_sound "weapon/shot/artillery"}
			{spawn "mortar_single_80" offset -250 0 1000}
			{hide 1}
		}
	}
}

{"mortar_barrage_80"			;// Flare that spawns timed explosions randomized in area
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			(define "rnd_art_bomb"
				{delay %delay 0.5
					{spawn "mortar_single_80_dummy" random_position 250}
				}
			)
			("rnd_art_bomb" delay(0.25))
			("rnd_art_bomb" delay(0.5))
			("rnd_art_bomb" delay(0.75))
			("rnd_art_bomb" delay(1))
			("rnd_art_bomb" delay(4.25))
			("rnd_art_bomb" delay(4.5))
			("rnd_art_bomb" delay(4.75))
			("rnd_art_bomb" delay(5))
			("rnd_art_bomb" delay(9.25))
			("rnd_art_bomb" delay(9.5))
			("rnd_art_bomb" delay(9.75))
			("rnd_art_bomb" delay(10))
			("rnd_art_bomb" delay(14.25))
			("rnd_art_bomb" delay(14.5))
			("rnd_art_bomb" delay(14.75))
			("rnd_art_bomb" delay(15))
			{hide 15}
		}
	}
}

{"mortar_single_smoke_dummy"			;// Shells that fall to ground. Source Off-map artillery
	{on spawn
		{start_sound "weapon/shot/mortar/ambient_mortar" ambient}
		{delay 7
			{start_sound "weapon/shot/artillery"}
			{spawn "mortar_single_smoke" offset -250 0 1000}
			{hide 1}
		}
	}
}

{"mortar_barrage_smoke"			;// Flare that spawns timed explosions randomized in area
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			(define "rnd_art_bomb"
				{delay %delay 0.5
					{spawn "mortar_single_smoke_dummy" random_position 500}
				}
			)
			("rnd_art_bomb" delay(0.25))
			("rnd_art_bomb" delay(0.5))
			("rnd_art_bomb" delay(0.75))
			("rnd_art_bomb" delay(1))
			("rnd_art_bomb" delay(4.25))
			("rnd_art_bomb" delay(4.5))
			("rnd_art_bomb" delay(4.75))
			("rnd_art_bomb" delay(5))
			{hide 15}
		}
	}
}

{"artillery_single_rocket_dummy"			;// Shells that fall to ground. Source Off-map artillery
	{on spawn
		{start_sound "weapon/shot/ambient_rocket" ambient}
		{delay 7
			{start_sound "weapon/shot/reactive/rocket_far_incoming"}
			{spawn "artillery_single_rocket" offset -250 0 1000}
			{hide 1}
		}
	}
}

{"artillery_single_rocket_heavy_dummy"			;// Shells that fall to ground. Source Off-map artillery
	{on spawn
		{start_sound "weapon/shot/ambient_rocket" ambient}
		{delay 7
			{start_sound "weapon/shot/reactive/rocket_far_incoming"}
			{spawn "artillery_single_rocket_heavy" offset -250 0 1000}
			{hide 1}
		}
	}
}

{"artillery_barrage_rocket"			;// Flare that spawns timed explosions randomized in area
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			(define "rnd_art_bomb"
				{delay %delay 0.25
					{spawn "artillery_single_rocket_dummy" random_position 1000}
				}
			)
			("rnd_art_bomb" delay(0.5))
			("rnd_art_bomb" delay(1))
			("rnd_art_bomb" delay(1.5))
			("rnd_art_bomb" delay(2))
			("rnd_art_bomb" delay(2.5))
			("rnd_art_bomb" delay(3))
			("rnd_art_bomb" delay(3.5))
			("rnd_art_bomb" delay(4))
			("rnd_art_bomb" delay(4.5))
			("rnd_art_bomb" delay(5))
			("rnd_art_bomb" delay(5.5))
			("rnd_art_bomb" delay(6))
			("rnd_art_bomb" delay(6.5))
			("rnd_art_bomb" delay(7))
			("rnd_art_bomb" delay(7.5))
			("rnd_art_bomb" delay(8))
			("rnd_art_bomb" delay(8.5))
			("rnd_art_bomb" delay(9))
			("rnd_art_bomb" delay(9.5))
			("rnd_art_bomb" delay(10))
			("rnd_art_bomb" delay(10.5))
			("rnd_art_bomb" delay(11))
			("rnd_art_bomb" delay(11.5))
			("rnd_art_bomb" delay(12)))
			("rnd_art_bomb" delay(12.5))
			("rnd_art_bomb" delay(13))
			("rnd_art_bomb" delay(13.5))
			("rnd_art_bomb" delay(14))
			("rnd_art_bomb" delay(14.5))
			("rnd_art_bomb" delay(15))
			("rnd_art_bomb" delay(15.5))
			("rnd_art_bomb" delay(16))
			("rnd_art_bomb" delay(16.5))
			("rnd_art_bomb" delay(17))
			("rnd_art_bomb" delay(17.5))
			("rnd_art_bomb" delay(18))
			("rnd_art_bomb" delay(18.5))
			("rnd_art_bomb" delay(19))
			("rnd_art_bomb" delay(19.5))
			("rnd_art_bomb" delay(20))
			{hide 21}
		}
	}
}

{"artillery_barrage_rocket_heavy"			;// Flare that spawns timed explosions randomized in area
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			(define "rnd_art_bomb"
				{delay %delay 0.25
					{spawn "artillery_single_rocket_heavy_dummy" random_position 1000}
				}
			)
			("rnd_art_bomb" delay(0.5))
			("rnd_art_bomb" delay(1))
			("rnd_art_bomb" delay(1.5))
			("rnd_art_bomb" delay(2))
			("rnd_art_bomb" delay(2.5))
			("rnd_art_bomb" delay(3))
			("rnd_art_bomb" delay(3.5))
			("rnd_art_bomb" delay(4))
			("rnd_art_bomb" delay(4.5))
			("rnd_art_bomb" delay(5))
			("rnd_art_bomb" delay(5.5))
			("rnd_art_bomb" delay(6))
			{hide 8}
		}
	}
}

;/*=========== Artillery End ==========*/