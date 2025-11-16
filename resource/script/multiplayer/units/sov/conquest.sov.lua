Purchases["conquest.sov"] = {
	{Repeat = 0, --infinite
		Units = {
			---[====[
			-- Infantry
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_internal_con(sov)"},
			
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_conscript_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_conscript_ak_con(sov)"},
				{priority = 1.0, type = {"Armored", "MG", "Infantry", "Squad",}, unit = "squad_conscript_moto_con(sov)"},
				{priority = 1.0, type = {"Armored", "MG", "Infantry", "Squad",}, unit = "squad_conscript_ak_moto_con(sov)"},
				{priority = 1.0, type = {"Armored", "MG", "Infantry", "Squad",}, unit = "squad_conscript_ak_moto2_con(sov)"},
				{priority = 1.0, type = {"Armored", "MG", "Infantry", "Squad",}, unit = "squad_conscript_ak_moto3_con(sov)"},
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_con(sov)"},
				{priority = 1.0, type = {"Armored", "MG", "Infantry", "Squad",}, unit = "squad_rifle_moto_con(sov)"},
				{priority = 1.0, type = {"Armored", "MG", "Infantry", "Squad",}, unit = "squad_rifle_moto2_con(sov)"},
				{priority = 1.0, type = {"Armored", "MG", "Infantry", "Squad",}, unit = "squad_rifle_moto3_con(sov)"},
				{priority = 1.0, type = {"Armored", "MG", "Infantry", "Squad",}, unit = "squad_rifle_moto4_con(sov)"},
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_con(sov)"},
				{priority = 1.0, type = {"Armored", "MG", "Infantry", "Squad",}, unit = "squad_guards_moto_con(sov)"},
				{priority = 1.0, type = {"Armored", "MG", "Infantry", "Squad",}, unit = "squad_guards_moto2_con(sov)"},
				{priority = 1.0, type = {"Armored", "AT", "Infantry", "Squad",}, unit = "squad_guards_mech_con(sov)"},
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_vdv_con(sov)"},
				{priority = 1.0, type = {"Armored", "AT", "Infantry", "Squad",}, unit = "squad_vdv_bmd1_con(sov)"},
				
				{priority = 1.0, type = {"Infantry", "Squad", "AT",}, unit = "squad_spz_sabo_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_spz_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_spz_bmd1_con(sov)"},
				{priority = 1.0, type = {"Vehicle", "MG", "Infantry", "Squad",}, unit = "squad_spz_scout_moto_con(sov)"},

				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_vmf_con(sov)"},
				{priority = 1.0, type = {"Armored", "Infantry", "Squad",}, unit = "squad_vmf_moto_con(sov)"},
				{priority = 1.0, type = {"Armored", "Infantry", "Squad",}, unit = "squad_vmf_moto2_con(sov)"},
				
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_atgren_1950_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_atgren_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_at_1950_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_at_con(sov)"},				
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_at_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_mg_1950_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_mg_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_marksman_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_scout_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_sniper_con(sov)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_flamer_con(sov)"},
				{priority = 0.2, type = {"Infantry", "Team",}, unit = "single_sapperap_con(sov)"},
				{priority = 0.2, type = {"Infantry", "Team",}, unit = "single_sapperat_con(sov)"},
			--Cannons
			--HMGs
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "sg43_stand_sov_ai"},
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "mg_stand_pk_ai"},
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "dshk_stan_sov_ai"},
			--Anti_Aircraft
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "dshk_aa_sov_ai"},
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "zu-2"},
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "zpu-4"},
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "zu-23-2"},
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "57mm_s-60"},
			--Anti_Tank
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "b-10_82mm_ai"},
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "spg9_ai"},
				{priority = 0.5, type = {"Cannon", "AT",}, unit = "t-12"},
				--{priority = 0.5, type = {"Cannon", "AT",}, unit = "9m14"},
			--Mortars
				{priority = 0.3, type = {"Cannon", "Mortar",}, unit = "82mm_bm37_sov_ai"},
				{priority = 0.3, type = {"Cannon", "Mortar",}, unit = "120mm_pm38_sov"},
			--Infantry_Support
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "76mm_zis3_sov"},
				{priority = 1.0, type = {"Cannon", "Support",}, unit = "gp1958"},
				{priority = 1.0, type = {"Cannon", "Support",}, unit = "d-44"},
			--Artillery
				{priority = 1.0, type = {"Cannon", "Support",}, unit = "d-74"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "d1"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "d-20"},
				{priority = 1.0, type = {"Cannon", "Artillery",}, unit = "d-44"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "122mm_d-30"},
			--Rocket_Artillery
				{priority = 0.2, type = {"Cannon", "Artillery",}, unit = "9p132_ai"},
				{priority = 0.2, type = {"Cannon", "Artillery",}, unit = "rpu-14"},
				{priority = 0.2, type = {"Vehicle", "Artillery",}, unit = "bm-14-16"},
				{priority = 0.2, type = {"Vehicle", "Artillery",}, unit = "bm-24m"},
				{priority = 0.2, type = {"Vehicle", "Artillery",}, unit = "bm-21_grad"},
			--Wheel_vehicles
				{priority = 1.0, type = {"Armored", "MG",}, unit = "brdm-1"},
				{priority = 0.5, type = {"Armored", "AA",}, unit = "btr-40a"},
				{priority = 1.0, type = {"Armored", "MG",}, unit = "brdm-2"},
				{priority = 0.5, type = {"Armored", "AT",}, unit = "9p110"},
				{priority = 0.5, type = {"Armored", "AT",}, unit = "9p122"},
				{priority = 0.5, type = {"Armored", "AT",}, unit = "9p124"},
				{priority = 0.5, type = {"Armored", "AA",}, unit = "btr-152a"},
			--Tanks_light
				{priority = 0.5, type = {"Tank", "Light",}, unit = "pt-76"},	
				{priority = 1.0, type = {"Tank", "Light",}, unit = "pt-76b"},
				{priority = 0.5, type = {"Tank", "Light", "AT",}, unit = "bmp-1"},
				{priority = 0.5, type = {"Tank", "Light", "AT",}, unit = "bmd-1"},
			--Tanks_medium
				--{priority = 1.0, type = {"Tank", "Medium",}, unit = "t-44"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "t-54a"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "t-54b"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "t-55"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "t-55a"},
				{priority = 0.25, type = {"Tank", "Medium", "Support",}, unit = "ot-55"},				
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "t-62_1960"},
				{priority = 0.7, type = {"Tank", "Medium",}, unit = "t-62_1967"},
				{priority = 0.3, type = {"Tank", "Heavy",}, unit = "t-64_obj432"},
			--Tanks_heavy
				{priority = 0.5, type = {"Tank", "Heavy",}, unit = "is-2m"},
				{priority = 0.5, type = {"Tank", "Heavy",}, unit = "is-3m"},
				{priority = 1.0, type = {"Tank", "Heavy",}, unit = "t-10m_1957"},
				{priority = 1.0, type = {"Tank", "Heavy",}, unit = "t-10m"},
			--Tank_destroyers	
				{priority = 1.0, type = {"Tank", "Light", "Support",}, unit = "asu57"},
				{priority = 1.0, type = {"Tank", "Light", "AT",}, unit = "asu-85"},
				{priority = 0.5, type = {"Tank", "Light", "AT",}, unit = "isu-152m"},
				{priority = 1.0, type = {"Tank", "Light", "AT",}, unit = "su-122-54_1955"},
				{priority = 1.0, type = {"Tank", "Light", "AT",}, unit = "su-122-54"},
				{priority = 1.0, type = {"Tank", "Light", "AT",}, unit = "it-1"},
			--SPAAG
				{priority = 0.5, type = {"Vehicle", "AA",}, unit = "ural375_zu-23"},
				{priority = 0.5, type = {"Armored", "AA",}, unit = "btr-50pk_zu-23"},
				{priority = 0.5, type = {"Tank", "Light", "AA",}, unit = "zsu-23-4b"},	
				{priority = 1.0, type = {"Tank", "Medium", "AA",}, unit = "zsu-57-2"},
			--SPG
				{priority = 0.2, type = {"Tank", "Light", "Artillery",}, unit = "2s3"},
				{priority = 0.5, type = {"Armored", "Artillery", "AT",}, unit = "btr-50_d44"},
			       
			--Air Assets
				{priority = 1.0, type = {"Helicopter", "Sortie",}, unit = "mil_mi4_unarmed_airborne"},
				{priority = 1.0, type = {"Helicopter", "Sortie",}, unit = "mil_mi4_airborne"},
				{priority = 1.0, type = {"Helicopter", "Sortie", "AT",}, unit = "mil_mi4_heavy_airborne"},
		}
	}
}
