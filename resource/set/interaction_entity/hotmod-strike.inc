;/*=========== Airstrike Aircraft Script Handling ==========*/

{"sortie"
	{on spawn
		{link_sound "release"				"vehicle/deploy"}
		{link_sound "bomb"					"weapon/shot/mortar/whistle"}
		{link_sound "rocketlaunch"			"weapon/shot/reactive/rocket_burst"}
		{link_sound "jet_incoming"			"vehicle/airborne/bkgjet"}
		;{add_view	"nebel_tail"			"engine_afterburner"			"FXSmoke1"}	
		;{add_view	"nebel_tail"			"engine_afterburner2"			"FXSmoke2"}
	}
	
	{on "bomb_drop"
		{add_view	"rocket_smoke"			"engine_exhaust"				"FXSmoke1"}
		{add_view	"rocket_smoke"			"engine_exhaust2"				"FXSmoke2"}			
		{add_view	"pfaust_tail"			"wingtipr_trail"				"wingtipr"}
		{add_view	"pfaust_tail"			"wingtipl_trail"				"wingtipl"}
		;{play_sound "release"}
		;{delay 0.2 {play_sound "bomb"}}
		{view start "engine_exhaust"}
		{view start "engine_exhaust2"}
		{view start "wingtipr_trail"}
		{view start "wingtipl_trail"}
	}
	
	{on bullet_hit
		{vehicle_health_damage_pierce}
		{if stuff "sam"
			{call "explosion"}
		}
		{spawn "aero_die_particle" "body"}
		{start_sound "interface/Bad"}
	}
	
	{on blast_hit										;// blast-wave hits any part of entity
		{if not effector "air_bomb"
			{vehicle_health_damage_blast}
			;{call "explosion"}
			{spawn "aero_die_particle" "body"}
			{start_sound "interface/Good"}
		else
			{start_sound "interface/Bad"}
		}
	}

	{on pierce sync
		{vehicle_health_damage_pierce}
		;{spawn "aero_die_particle" "body"}
	}
	
	{on "fall"
		{view stop "engine_exhaust"}
		{view stop "engine_exhaust2"}
		{view stop "wingtipr_trail"}
		{view stop "wingtipl_trail"}
		;{view stop "engine_afterburner"}
		;{view stop "engine_afterburner2"}
		{call "fall_fx"}
		{delay 0.1
			(define "cut_part"
				{if rand %1
					{tear "piece_big_airborne_wing" bone %0
						{impulse up -15 dir 4 forward 50}
					}
					{delay 0.5
						{tear "piece_big_airborne_wing" bone "body" id "fuselage"
							{impulse up -15 dir 4 forward 50}
						}
					}
				}
			)
			("cut_part" args "wingr1"	0.75)
			("cut_part" args "wingr2"	0.75)
			("cut_part" args "wingl1"	0.75)
			("cut_part" args "wingl2"	0.75)
			("cut_part" args "aileronl"	0.75)
			("cut_part" args "aileronr"	0.75)
			("cut_part" args "flapl"	0.75)
			("cut_part" args "flapr"	0.5)
			("cut_part" args "rudder"	0.5)
			("cut_part" args "elevatorr"	0.5)
			("cut_part" args "elevatorl"	0.5)
		}
		{delay 1 
			{delete}
		}
	}
	
	{on "fall_fx"
		{add_view "smoke_aero_dead_big" "fire" "body"}
		{view start "fire"}
		{delay 10
			{view stop "fire"}
		}
		{burn volume "body" fx "smoke_aero_big" time 10 fake}
		{burn volume "engine" fx "smoke_aero_big" time 10 fake}
		{delay 10
			{burn volume "body" fx "smoke_black" time 40 10 fake}
		}
	}
	
	{on break
		{set_skeleton "_x" sync}
		{if component "body"
			{spawn "aero_die_particle" "body"}
			{call "fall"}
		else component "engine"
			{tags add "engine_brake"}
			{spawn "aero_die_particle" "body"}
			{call "fall"}
		else component "wing"
			{tags add "wing_brake"}
			{spawn "aero_die_particle" "body"}
			{call "fall"}
		}
	}

	{on "tear_part"
		{spawn "spheredust_big_short"}
		{component destroy}
		{volume disable contact contact_ground}
		{tear "piece_big_airborne_wing" bone from_volume
			{impulse up 2 1 dir 2 1}
		}
		{impulse up 0.1 com}
	}
	
	{on "_explosion" overload
		{call "die"}
		{add_view "aero_die" "fire" "body"}
		{add_view "aero_die_fire" "fire" "body"}
		{view start "fire"}
		{spawn "aero_die_particle"}
		{start_sound "crush/big/airborne"}
		{tags add "destroyed"}

		{delay 0.1
			(define "cut_part"
				{if rand %1
					{tear "piece_big_airborne_wing" bone %0
						{impulse up -15 dir 4 forward 50}
					}
					{delay 0.5
						{tear "piece_big_airborne_wing" bone "body" id "fuselage"
							{impulse up -15 dir 4 forward 50}
						}
					}
				}
			)
			("cut_part" args "wingr1"	0.75)
			("cut_part" args "wingr2"	0.75)
			("cut_part" args "wingl1"	0.75)
			("cut_part" args "wingl2"	0.75)
			("cut_part" args "aileronl"	0.75)
			("cut_part" args "aileronr"	0.75)
			("cut_part" args "flapl"	0.75)
			("cut_part" args "flapr"	0.5)
			("cut_part" args "rudder"	0.5)
			("cut_part" args "elevatorr"	0.5)
			("cut_part" args "elevatorl"	0.5)
		}
		{delay 1 
			{delete}
		}
	}
	
	{on ground_hit sync
		{if volume "body"
			{burn volume "body" fx "aero_die" time 2 fake}
			{burn volume "engine" fx "aero_die_fire" time 2 fake}
			{add_view "aero_die" "boom" "body"}
			{add_view "aero_die_fire" "boom" "body"}
			{view start "boom"}
		}
	}
	
	{on blast sync		 					;// blastwave hits specific volume
		{if component "body"
			{if not effector "bomb"
				{if min_energy 2
					{call "explosion"}
					{start_sound "interface/Good"}
				}
			else
				{start_sound "interface/Bad"}
			}
		}
	}
	
	{on "die"
	}
}

{"air_part"
	{on spawn
		{delay 0.1
			{volumes enable contact contact_ground}
		}
		{view stop ""}
		{add_view "smoke_black" "smoke" "root"}
		{view start "smoke"}
		{delay 30 5
			{view stop "smoke"}
		}
		{delay 20 {if under_water {delete}}}
		{if volume "fuselage"
			{gravity 1.9}
		}
	}
	{on ground_hit
		{if volume "fuselage"
			{add_view "tank_die_medium" "fire" "root"}
			{add_view "aero_die_fire" "fire" "root"}
			{view start "fire"}
			{start_sound "detonation/explosion_fiery"}
			{delay 0.1
		}
		{blastwave c4 7 r0 5 r1 8}
			{delay 0.1 {delete}}
		else
			{add_view "aero_die" "fire" "root"}
			{add_view "aero_fire" "fire" "root"}
			{add_view "tank_die_medium" "fire" "body"}
			{add_view "aero_die_fire" "fire" "body"}
			{add_view "aero_die_fire" "fire" "engine"}
			{view start "fire"}
			{start_sound "detonation/explosion_fiery"}
			{delay 0.1 {delete}}
		}
	}
}

{"sound_jet"			;
	{on spawn
		{link_sound "fly"					"vehicle/airborne/f4_move2"}
		{delay 1 
			{play_sound "fly" 1}
			{delay 25 {delete}}
		}
	}
	{on blast_hit
		{delete}
	}
}


;;;;;;;;;;;;;;;;;;;;// Plane Specific

{"a4e"
	{on spawn
		{ani_play "gear_up"}
	}
}

{"yak-28"
	{on spawn
		{ani_play "gear_up"}
	}
}

{"f-105"
	{on spawn
		{ani_play "gear_up"}
	}
}