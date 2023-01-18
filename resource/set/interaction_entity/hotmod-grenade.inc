{"smoke_wp"
	{on "onThrow"
		{volumes disable touch select}
	}
	{on ground_hit
		{if stuff_activated
			{if not name "water"
				{if not tagged "activated"
					{tags add "activated"}
					{delay 3
						{call "activate"}
					}
				}
			else
				{hide 1}
			}
		}
	}
	{on contact
		{if stuff_activated
			{if not tagged "activated"
				{tags add "activated"}
				{delay 3
					{call "activate"}
				}
			}
		}
	}
	{on "activate" overload
		(define "spawn_volume"
			{spawn "smoke_volume_%0" offset %1 %2 0
				{delay %3 {hide 1}}
			}
		)
		{play_sound "smoke" 1}
		{fire radius 1.25 time 1 heating 10}
		{spawn "ex_wp_size1"}									; initial explosion fx
		{spawn "shell_smoke_wp_size1"}							; actual smoke and vision volumes
		{view start "smoke1"}
		{view start "smoke2"}
		{spawn "smoke_volume_cylinder" {delay 85 {hide 1}}}
		{delay 3
			{view start "smoke3"}
			("spawn_volume" args cylinder 110 0 84)
			("spawn_volume" args cylinder -110 0 84)
			("spawn_volume" args cylinder 0 110 84)
			("spawn_volume" args cylinder 0 -110 84)
			("spawn_volume" args cylinder 110 110 84)
			("spawn_volume" args cylinder -110 -110 84)
			("spawn_volume" args cylinder -110 110 84)
			("spawn_volume" args cylinder 110 -110 84)
			{delay 2
				{view stop "smoke1"}
				{view stop "smoke2"}
			}
		}
		{delay 5
			("spawn_volume" args cylinder_sm 220 0 82)
			("spawn_volume" args cylinder_sm -220 0 82)
			("spawn_volume" args cylinder_sm 0 220 82)
			("spawn_volume" args cylinder_sm 0 -220 82)
		}
		{delay 85
			{view stop "smoke3"}
			{stop_sound "smoke"}
		}
		{delay 90
			{hide 1}
		}
	}
	{on blast_hit overload}			;// keeps smoke grenades from deleting by blast damage after being thrown
	{on bullet_hit overload}		;// keeps smoke grenades from deleting by bullet hit after being thrown
}