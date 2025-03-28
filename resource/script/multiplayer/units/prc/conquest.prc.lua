Purchases["conquest.prc"] = {
	{Repeat = 0, --infinite
		Units = {
			---[====[
			-- Infantry
				
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_at(prc)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_mg_early(prc)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_scout(prc)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_sniper(prc)"},
				{priority = 0.2, type = {"Infantry", "Team",}, unit = "single_sapperap(prc)"},
				{priority = 0.2, type = {"Infantry", "Team",}, unit = "single_sapperat(prc)"},
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_militia_ambush_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_militia_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_militia_assault_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_militia_support_con(prc)"},
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_conscript_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_conscript_lmg_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad", "AT",}, unit = "squad_conscript_rpg_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_conscript_rifle_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_conscript_smg_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_conscript_ar_con(prc)"},
				
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_lmg_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad", "AT",}, unit = "squad_rifle_rpg_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_full_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_assault_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_support_con(prc)"},
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_lmg_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad", "AT",}, unit = "squad_guards_rpg_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_full_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_assault_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_support_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_ar_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_moto_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_ar_moto_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_support_moto_con(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_guards_assault_moto_con(prc)"},

				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_spc_recon_con(prc)"},
                                {priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_spc_recon_moto_con(prc)"},

			-- Cannons	
				--HMGs
				--{priority = 1.0, type = {"Cannon", "MG",}, unit = "sg43_stand_prc_ai"},
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "dshk_aa_prc_ai"},
				--Anti Aircraft
				{priority = 0.5, type = {"Cannon", "AA",}, unit = "zpu-4_prc"},
				{priority = 0.5, type = {"Cannon", "AA",}, unit = "37mm_61k_prc"},
				{priority = 0.5, type = {"Cannon", "AA",}, unit = "57mm_s-60_prc"},
				--Anti Tank
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "m20_prc_ai"},
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "b-10_prc_ai"},
				--Mortars
				{priority = 0.3, type = {"Cannon", "Mortar",}, unit = "82mm_bm37_prc_ai"},
				{priority = 0.3, type = {"Cannon", "Mortar",}, unit = "120mm_pm38_prc"},
				--Infantry_Support
				{priority = 1.0, type = {"Cannon", "Support",}, unit = "76mm_zis3_prc"},
				{priority = 1.0, type = {"Cannon", "Support", "AT",}, unit = "d-44_prc"},
				{priority = 1.0, type = {"Cannon", "Support",}, unit = "bs3_prc"},
				{priority = 1.0, type = {"Cannon", "Support",}, unit = "d-74_prc"},
				--Artillery
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "m30_prc"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "d1_prc"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "152mm_ml20_prc"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "d-20_prc"},
				--Rocket Artillery
				{priority = 0.2, type = {"Cannon", "Artillery",}, unit = "type63_mrl"},	
				{priority = 0.2, type = {"Vehicle", "Artillery",}, unit = "bm-13-17m_prc"},
				{priority = 0.2, type = {"Vehicle", "Artillery",}, unit = "bm-31m_prc"},
	
			--APCs/BTRs
				{priority = 0.5, type = {"Vehicle", "MG",}, unit = "cj-750"},
				{priority = 0.5, type = {"Vehicle", "MG",}, unit = "ba64_prc"},
				{priority = 1.0, type = {"Armored", "MG",}, unit = "btr-40_type55"},
				{priority = 1.0, type = {"Armored", "AA",}, unit = "btr-40a_prc"},
				
			--Tanks
				{priority = 2.0, type = {"Tank", "Light", "Support",}, unit = "su76_prc"},
				{priority = 0.5, type = {"Tank", "Light",}, unit = "type62_lt"},

				{priority = 0.5, type = {"Tank", "Medium",}, unit = "t-34-85_prc"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "type58_tank"},
				{priority = 0.5, type = {"Tank", "Medium", "AT",}, unit = "su100_prc"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "type59"},
				{priority = 1.0, type = {"Tank", "Heavy",}, unit = "is2_prc"},
				
			--SPG
				{priority = 0.5, type = {"Tank", "Heavy", "Support",}, unit = "isu-152_prc"},
			--Air Assets
		}
	}
}
