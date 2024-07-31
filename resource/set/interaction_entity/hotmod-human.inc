{"human"
	{on spawn
		{link_sound "gore_cough"		"talk/gore/cough/"}
		{link_sound "gore_asphyx"		"talk/gore/asphyx/"}
		{if not tagged "texmod_set"
			{if rand 0.2 {delay 0.1 {tex_mod ""}}}
			{if rand 0.2 {delay 0.1 {tex_mod "var1"}}}
			{if rand 0.2 {delay 0.1 {tex_mod "var2"}}}
			{if rand 0.2 {delay 0.1 {tex_mod "var3"}}}
			{if rand 0.2 {delay 0.1 {tex_mod "var4"}}}
			{if rand 0.2 {delay 0.1 {tex_mod "var5"}}}
			{if rand 0.2 {delay 0.1 {tex_mod "var6"}}}		
			{if rand 0.2 {delay 0.1 {tex_mod "var7"}}}	
			{if rand 0.2 {delay 0.1 {tex_mod "var8"}}}
		}
	}
	
	{on "radiation_sickness"
		{if not dead
			{if tagged "irradiated"
				{delay 20 5
					{ani_play "gore_gas\weltkrieg_asphyx_1"}
					{play_sound "gore_cough"}
					{damage_report "head" "<c(ffff00)>Mild Rad Sickness"}
					{drop_orders}
					{able select 0}
					{weapon_work "hand_right" 0}
					{health_damage_count 25
						{effects "" "" "" "die_gas" "die_gas"}
					}
					{call "radiation_sickness"}
					{delay 2 {weapon_work "hand_right" 1} {able select 1}}
					{delay 300 60
						{if tagged "irradiated"
							{tags remove "irradiated"}
							{tags add "irradiated_heavy"}
						}
					}
				}
			else tagged "irradiated_heavy"
				{delay 10 2.5
					{ani_play "gore_gas\weltkrieg_asphyx_1"}
					{play_sound "gore_cough"}
					{damage_report "head" "<c(ffb433)>Severe Rad Sickness"}
					{drop_orders}
					{able select 0}
					{weapon_work "hand_right" 0}
					{health_damage_count 25
						{effects "" "" "" "die_gas" "die_gas"}
					}
					{call "radiation_sickness"}
					{delay 2 {weapon_work "hand_right" 1} {able select 1}}
					{delay 300 60
						{if tagged "irradiated_heavy"
							{tags remove "irradiated_heavy"}
							{tags remove "irradiated"}
							{tags add "irradiated_fatal"}
						}
					}
				}
			else tagged "irradiated_fatal"
				{delay 10 2.5
					{ani_play "gore_gas\weltkrieg_asphyx_1"}
					{play_sound "gore_cough"}
					{damage_report "head" "<c(9c1700)>Terminal Rad Sickness"}
					{drop_orders}
					{able select 0}
					{weapon_work "hand_right" 0}
					{health_damage_count 50
						{effects "" "" "" "die_gas" "die_gas"}
					}
					{if rand 0.2
						("knock_out" t(30) r(15))
					}
					{call "radiation_sickness"}
					{delay 3 {weapon_work "hand_right" 1} {able select 1}}
				}
			}
		}
	}
			
		
	{on "radiation_checker"
		{if not tagged "irradiated"
			{if not tagged "irradiated_heavy"
				{if not tagged "irradiated_fatal"
					{if not tagged "nbc_protected"
						{delay 1
							{if tagged "rad_exposure"
									{tags add "irradiated_heavy"}
									{call "radiation_sickness"}
									{call "radiation_checker"}
							}
						}
					else tagged "nbc_protected"
						{delay 60 15
							{if tagged "rad_exposure"
								{tags add "irradiated"}
								{call "radiation_sickness"}
								{call "radiation_checker"}
							}
						}
					}
				}
			}
		}
	}
	
	{on "gasmask_on"
		{delay 0.5
			{if tagged "nbc"
				{if tagged "gassed"
					{if not tagged "nbc_protected"
						{drop_orders}
						{able select 0}
						{weapon_work "hand_right" 0}
						{damage_report "head" "Gasmask On"}
						{ani_play "stand_after_body-hit"}
						{add_view	"gasmask_gp5"	"gasmask_physical"	"head"} 
						{view start "gasmask_physical"}
						{tags add "nbc_protected"}
						{delay 2 {weapon_work "hand_right" 1} {able select 1}}
					}
					{delay 1 {call "gasmask_on"}}
				else tagged "rad_exposure"
					{if not tagged "nbc_protected"
						{drop_orders}
						{able select 0}
						{weapon_work "hand_right" 0}
						{damage_report "head" "Gasmask On"}
						{ani_play "stand_after_body-hit"}
						{add_view	"gasmask_gp5"	"gasmask_physical"	"head"} 
						{view start "gasmask_physical"}
						{tags add "nbc_protected"}
						{delay 2 {weapon_work "hand_right" 1} {able select 1}}
					}
					{delay 1 {call "gasmask_on"}}
				else
					{delay 5
						{call "gasmask_off"}
					}
				}
			else
				{call "gasmask_off"}
			}
		}
	}
	
	{on "gasmask_off"
		{delay 0.5
			{if not tagged "gassed"
				{damage_report "head" "Gasmask Off"}
				{ani_play "stand_after_body-hit"}
				{view stop "gasmask_physical"}
				{view hide "gasmask_physical"} 
				{tags remove "nbc_protected"}
			}
		}
	}
	
	{on contact
		{if not impregnable
			{if not volume "ram"
				{kill_flags reset}
				{volumes disable contact}
				{delay 2
					{volumes enable contact}
				}
				{if effector "chemicalzone"
					{if not tagged "nbc"
						{health_damage_count 30
							{effects "" "gassed_lung" "damage" "die_gas" "die_gas"}
						}
						{view stop "gasmask_physical"}
						{view hide "gasmask_physical"} 
						{drop_orders}
						{able "burning" 1}
						{if not dead
							;{damage_report "head" "<c(fcba03)>Gassed!"}
							{weapon_work "hand_right" 0}
							{able select 0}
							{able recruit 0}
							{able fight 0}
							{movement_limit slow}
							{call "unhealable"}
							{if not tagged "incapacitated"
								{ani_play "gore_gas\weltkrieg_asphyx_1"}
								{play_sound "gore_cough"}
								{delay 10
									{tags add "incapacitated"}
									{tags add "incapacitated_chemical"}
									{ani_play "gore_gas\weltkrieg_asphyx_1"}
									{play_sound "gore_asphyx"}
									{damage_report "head" "<c(9c1700)>Incapacitated"}
									("knock_out" t(120) r(2))
									{able "burning" 0}
								}
							}
						}
						{delay 11
							{if not dead
								{if not tagged "incapacitated"
									{weapon_work "hand_right" 1}
								}
								{able select 1}
								{able recruit 1}
								{able fight 1}
							}
							{delay 15
								{movement_limit normal}
							}
						}
					else tagged "nbc"
						{health_damage_count 1
							{effects "" "" "" "die_gas" "die_gas"}
						}
						{if not tagged "nbc_protected"
							{if not dead
								{call "gasmask_on"}
							}
						else tagged "nbc_protected"
							{if rand 0.1
								{ani_play "gore_gas\weltkrieg_asphyx_1"}
								{play_sound "gore_cough"}
								;{damage_report "head" "<c(ffff00)>Mild Rad Sickness"}
								{drop_orders}
								{able select 0}
								{weapon_work "hand_right" 0}
								{delay 2 
									{able select 1}
									{weapon_work "hand_right" 1}
								}		
							}
						}
					}
					{tags add "gassed"}
					{delay 10
						{tags remove "gassed"}
					}
				}
				{if effector "radiationzone"
					{if not tagged "nbc"
						{if not dead
							{delay 1 {call "radiation_checker"}}
						}
					else tagged "nbc"
						{if not tagged "nbc_protected"
							{if not dead
								{call "gasmask_on"}
								{delay 1 {call "radiation_checker"}}
							}
						}
					}
					{tags add "rad_exposure"}
					{delay 10
						{tags remove "rad_exposure"}
					}
				}
				{if effector "killzone_mininuke"
					{if not dead
						{call "_burn"}
					}
				}
			}
		}
	}
	
	{on "gassed_lung"
		{call "hit-scream"}
	}
	
	{on "die_gas"
		{call "die"}
		{tags add "no_revive"}
	}
	
	{on board out 					;// exiting a vehicle
		{if linked "airborne"
			{delay 0.01
				{call "eject"}
				{volumes disable contact}			;// stops humans from "colliding" with plane when ejecting.
				{volumes enable bullet}
				{delay 1 {volumes enable contact blast}}
			}
		}
		{if linked "helicopter"
			{delay 0.01
				{call "eject"}
				{volumes disable contact}			;// stops humans from "colliding" with plane when ejecting.
				{volumes enable bullet}
				{delay 1 {volumes enable contact blast}}
			}
		}
		{if linked "parachute_attach"
			{set "not_knocked" 1}			;// helps stops {knock_down} call when thrown off from plane
			{delay 0
				{physics_work 1}
				{if tagged "die_parachute"
					{throw_off up 0.5 0.2 forward 1 0.5 die force}
				else
					{throw_off up 0.5 0.2 forward 1 0.5}
				}
			}
		}
	}
	
}