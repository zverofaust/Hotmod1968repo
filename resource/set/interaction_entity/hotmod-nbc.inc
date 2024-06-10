{"shell_radiation" ;// based on chlorine shell from Some Desperate Glory
	{on spawn
		{add_view "smoke_radiation"		"cloud" "root"}
		{spawn "killzone_dummy_mininuke"}
		{call "activate"}
	}
	
	{on "spawn_zone"
		{spawn "radiation_zone_400"}
	}
	
	{on "activate" overload
		{spawn "radiation_warning"}
		{link_sound "geiger" "fire/loops/radiation/Geiger_01"}
		{delay 1
			{call "spawn_zone"}
		}		
		{delay 10
			{play_sound "geiger" 1}
		}
	}
}

{"killzone_dummy_mininuke"
	{on spawn
		{delay 0.5
			{spawn "killzone_mininuke"}
			{delete}
		}
	}
}
	
{"shell_chemical" ;// normal chlorine shell from Some Desperate Glory
	{on spawn
		{add_view "mustard_escape"		"escape" "root"}
		{add_view "mustard_cloud_big"		"cloud1" "root"}
		{add_view "mustard_bottom_big"		"cloud2" "root"}
		{call "activate"}
	}
	
	{on "spawn_zone"
		{spawn "chemical_zone_400"}
		{delay 2.5
			{call "spawn_zone"}
		}
	}
	
	{on "activate" overload
		(define "spawn_volume"
			{spawn "smoke_volume_%0" offset %1 %2 0
				{delay %3 {hide 1}}
			}
		)
		{spawn "gas_warning"}
		{link_sound "gas_hiss" "detonation/gas/gas_hiss"}
		{link_sound "gas_sound" "detonation/gas/gas_sound"}
		{delay 1
			{view start "escape"}
			{play_sound "gas_hiss" 1}
			{spawn "smoke_volume_cylinder" {delay 180 {hide 1}}}
			{call "spawn_zone"}
		}		
		{delay 4
			{view start "cloud1"}
			("spawn_volume" args cylinder 120 0 180)
			("spawn_volume" args cylinder -120 0 180)
			("spawn_volume" args cylinder 0 120 180)
			("spawn_volume" args cylinder 0 -120 180)
			("spawn_volume" args cylinder 83 83 180)
			("spawn_volume" args cylinder -83 -83 180)
			("spawn_volume" args cylinder -83 83 180)
			("spawn_volume" args cylinder 83 -83 180)
		}
		{delay 15
			{view stop "escape"}
			{view start "cloud2"}
		}
		{delay 19
			{play_sound "gas_sound" 1}
		}
		{delay 20
			{stop_sound "gas_hiss"}
		}
		{delay 120  ; two minute timer?
			{view stop "cloud1"}
			{stop_sound "gas_sound"}
			{view stop "cloud2"}
			{hide 1}
		}
	}
}