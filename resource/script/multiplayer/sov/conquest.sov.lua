Purchases["conquest.sov"] = {
	{Repeat = 0, --infinite
		Units = {
			---[====[
			-- Infantry
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_conscript_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_conscript_maneuv_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad", "AT",}, unit = "squad_conscript_fireteam_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_conscript_ak_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_conscript_moto_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_conscript_ak_moto2_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_conscript_mech_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_conscript_ak_moto3_con(sov)"},
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_maneuv_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad", "AT",}, unit = "squad_fireteam_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_moto_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_moto2_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_mech_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_mech2_con(sov)"},
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_maneuv_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad", "AT",}, unit = "squad_guards_fireteam_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_shock_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_moto_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_moto2_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_mech_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_mech2_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_shock_moto_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_shock_moto2_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_shock_mech_con(sov)"},
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_vdv_recon_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad", "AT",}, unit = "squad_vdv_hunter_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_vdv_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_vdv_asu85_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_vdv_bmd1_con(sov)"},
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_spz_recon_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad", "AT",}, unit = "squad_spz_sabo_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_spz_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_spz_asu85_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_spz_bmd1_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_spz_scout_moto_con(sov)"},
				
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_at(sov)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_mg(sov)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_marksman(sov)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_scout(sov)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_sniper(sov)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_flamer(sov)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_sapperap(sov)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_sapperat(sov)"},
			--Cannons
			--HMGs
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "sg43_stand_sov_ai"},
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "dshk_aa_sov_ai"},
			--Anti_Aircraft
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "zu-2"},
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "zpu-4"},
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "zu-23-2"},
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "57mm_s-60"},
			--Anti_Tank
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "b-10_82mm_ai"},
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "spg9_ai"},
				--{priority = 0.5, type = {"Cannon", "AT",}, unit = "t-12"},
				--{priority = 0.5, type = {"Cannon", "AT",}, unit = "9m14"},
			--Mortars
				{priority = 0.3, type = {"Cannon", "Mortar",}, unit = "82mm_bm37_sov_ai"},
				{priority = 0.3, type = {"Cannon", "Mortar",}, unit = "120mm_pm38_sov"},
			--Infantry_Support
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "76mm_zis3_sov"},
				--{priority = 1.0, type = {"Cannon", "Support",}, unit = "gp1958"},
				{priority = 1.0, type = {"Cannon", "Support",}, unit = "d-44"},
			--Artillery
				{priority = 1.0, type = {"Cannon", "Support",}, unit = "d-74"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "d1"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "d-20"},
				{priority = 1.0, type = {"Cannon", "Artillery",}, unit = "d-44"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "d30a"},
			--Rocket_Artillery
			--Wheel_vehicles
				{priority = 2.0, type = {"Armored", "MG",}, unit = "brdm-1"},
				{priority = 0.5, type = {"Armored", "AA",}, unit = "btr-40a"},
				{priority = 1.0, type = {"Armored", "MG",}, unit = "brdm-2"},
				{priority = 1.0, type = {"Armored", "AT",}, unit = "9p110"},
				{priority = 0.5, type = {"Armored", "AT",}, unit = "9p122"},
				{priority = 0.2, type = {"Vehicle", "Artillery",}, unit = "bm-14-16"},
				{priority = 0.2, type = {"Vehicle", "Artillery",}, unit = "bm-24m"},
				{priority = 0.2, type = {"Vehicle", "Artillery",}, unit = "bm-21_grad"},
			--Tanks_light
				{priority = 1.0, type = {"Tank", "Light",}, unit = "pt-76"},	
				{priority = 1.0, type = {"Tank", "Light", "Support",}, unit = "asu57"},
				{priority = 1.0, type = {"Tank", "Light", "AT",}, unit = "asu-85"},
			--Tanks_medium
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "t-44"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "t-54"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "t-55a"},
				{priority = 0.25, type = {"Tank", "Medium",}, unit = "ot-55"},
				{priority = 1.0, type = {"Tank", "Medium", "AA",}, unit = "zsu-57-2"},
				{priority = 1.0, type = {"Tank", "Light", "AT",}, unit = "su-122-54"},
				{priority = 1.0, type = {"Tank", "Light", "AT",}, unit = "it-1"},
				{priority = 0.5, type = {"Tank", "Light", "AA",}, unit = "shilka"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "t-62a"},
				{priority = 0.3, type = {"Tank", "Heavy",}, unit = "t-64_obj432"},
			--Tanks_heavy
				{priority = 1.0, type = {"Tank", "Heavy",}, unit = "t-10m_1957"},
				{priority = 1.0, type = {"Tank", "Heavy",}, unit = "t-10m"},
			--SPG
				--{priority = 1.0, type = {"Tank", "Light", "Artillery",}, unit = "2s3"},
			--Air Assets
				{priority = 1.0, type = {"Helicopter", "Sortie",}, unit = "mil_mi4_airborne"},
				{priority = 1.0, type = {"Helicopter", "Sortie", "AT",}, unit = "mil_mi4_heavy_airborne"},
		}
	}
}