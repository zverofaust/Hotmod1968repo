{"human"
	{on spawn
		{link_sound "gore_cough"		"talk/gore/cough/"}
		{link_sound "gore_asphyx"		"talk/gore/asphyx/"}
		{if not tagged "texmod_set"
			{if rand 0.2 {delay 0.1 {tex_mod ""}}}
			{if rand 0.2 {delay 0.1 {tex_mod "gasmask"}}}
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
			{if tagged "gasmask_basic"
				{tags add "radiation_sickness"}
					{delay 10
					{ani_play "gore_gas\weltkrieg_asphyx_1"}
					{play_sound "gore_cough"}
					{damage_report "body" "<c(9c1700)>Radiation Sickness"}
					{health_damage_count 10
						{effects "" "" "" "die_gas" "die_gas"}
					}
					{call "radiation_sickness"}
				}
			else tagged "gasmask_elite"
				{tags add "radiation_sickness"}
				{delay 10
					{ani_play "gore_gas\weltkrieg_asphyx_1"}
					{play_sound "gore_cough"}
					{damage_report "body" "<c(9c1700)>Radiation Sickness"}
					{health_damage_count 5
						{effects "" "" "" "die_gas" "die_gas"}
					}
					{call "radiation_sickness"}
				}
			else
				{tags add "radiation_sickness"}
				{delay 10
					{ani_play "gore_gas\weltkrieg_asphyx_1"}
					{play_sound "gore_cough"}
					{damage_report "body" "<c(9c1700)>Radiation Sickness"}
					{health_damage_count 20
						{effects "" "" "" "die_gas" "die_gas"}
					}
					{call "radiation_sickness"}
				}
			}
		else
			{tags remove "radiation_sickness"}
		}
	}
			
		
	
	{on "put_gasmask_order"
		{if not tagged "masked_100"
			{damage_report "gasmask" "Gasmasks!"}
			{play_sound "trench_whistle"}
			{add_view	"flashmine"	"flashorder"	"body"	not_manual	not_scenario}
			{view start ally neutral "flashorder"}
			{spawn "gasmask_order"}
			{delay 0.5
				{view stop "flashorder"}
			}
		else tagged "masked_100"
			{damage_report "gasmask" "Remove Gasmasks!"}
			{play_sound "trench_whistle"}
			{add_view	"flashmine"	"flashorder"	"body"	not_manual	not_scenario}
			{view start ally neutral "flashorder"}
			{spawn "gasmask_remove_order"}
			{delay 0.5
				{view stop "flashorder"}
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
				{if effector "gasmask_order"
					{if not dead
						{if not tagged "masked"
							{ani_play "stand_put_small"}
							{delay 0.5
								{tags add "masked"}
								{view start ally neutral "gasmask_view"}
								{add_view	"gasmask_ger"	"gasmask_physical"	"head"}
								{view start "gasmask_physical"}
							}
						}
					}
				}
				{if effector "gasmask_remove_order"
					{if not dead
						{if tagged "masked"
							{ani_play "stand_put_small"}
							{delay 0.5
								{tags remove "masked"}
								{tags add "removed_mask"}
								{view stop "gasmask_view"}
								{view stop "gasmask_physical"}
								{view hide "gasmask_physical"}
							}
							{delay 1
								{tags remove "removed_mask"}
							}
						}
					}
				}
				{if effector "chemicalzone"
					{if not tagged "masked"
						{health_damage_count 30
							{effects "" "gassed_lung" "damage" "die_gas" "die_gas"}
						}
						{drop_orders}
						{able "burning" 1}
						{if not dead
							{damage_report "body" "<c(fcba03)>Gassed"}
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
									{damage_report "body" "<c(9c1700)>Incapacitated"}
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
					else tagged "masked"
						{health_damage_count 1
							{effects "" "gassed_lung" "damage" "die_gas" "die_gas"}
						}
						{if rand 0.1
							{able "burning" 1}
							{delay 0.5
								{able "burning" 0}
							}
						}		
					}
				}
				
				{if effector "radiationzone"
					{if not tagged "masked"
						{health_damage_count 5
							{effects "" "" "" "die_gas" "die_gas"}
						}
						{if not dead
							{tags add "irradiated"}
							{damage_report "body" "<c(fcba03)>Irradiated"}
							{call "radiation_sickness"}
							{delay 25
								{tags remove "irradiated"}
							}
						}
					else tagged "masked"
						{health_damage_count 1
							{effects "" "" "" "die_gas" "die_gas"}
						}
					}
				}
			}
		}
	}
	
	{on "gassed_lung"
		{call "hit-scream"}
	}
	
	{on "die_gas"
		{tags add "gassed"}
		{call "die"}
		{tags add "no_revive"}
	}
}