Purchases["conquest.pol"] = {
	{Repeat = 0, --infinite
		Units = {
			---[====[
			-- Infantry
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_reservist(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_maneuv(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_fireteam(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_reservist_moto(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_reservist_moto2(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_moto(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_roz_recon(pol)"},
				
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_at(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_at2(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_atgren(pol)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_mg(pol)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_marksman(pol)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_scout(pol)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_sniper(pol)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_flamer(pol)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_sapperap(pol)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_sapperat(pol)"},
				-- Cannons	
				--HMGs
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "sg43_stand_pol_ai"},
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "dshk_aa_pol_ai"},
				--Anti Aircraft
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "zu-2_pol"},
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "zpu-4_pol"},
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "57mm_s-60_pol"},
				--Anti Tank
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "b-10_pol_ai"},
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "spg9_pol_ai"},
				--Mortars
				{priority = 0.3, type = {"Cannon", "Mortar",}, unit = "82mm_bm37_pol_ai"},
				{priority = 0.3, type = {"Cannon", "Mortar",}, unit = "120mm_pm38_pol"},
				--Infantry_Support
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "76mm_zis3_pol"},
				{priority = 1.0, type = {"Cannon", "Support",}, unit = "d-44_pol"},
				--Artillery
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "d1_pol"},
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "m30_pol"},
				--Rocket Artillery		
				{priority = 0.2, type = {"Vehicle", "Artillery",}, unit = "bm-14_pol"},
				{priority = 0.2, type = {"Vehicle", "Artillery",}, unit = "bm-21_pol"},
				--APCs/BTRs
				{priority = 1.0, type = {"Vehicle", "MG",}, unit = "gaz-69_dshk_pol"},
				{priority = 0.5, type = {"Vehicle", "MG",}, unit = "gaz-69_b10_pol"},
				{priority = 0.2, type = {"Vehicle", "MG",}, unit = "gaz-69_mortar_pol"},
				{priority = 2.0, type = {"Armored", "MG",}, unit = "brdm-1_pol"},
				{priority = 0.5, type = {"Armored", "AA",}, unit = "btr-40a_pol"},
				{priority = 1.0, type = {"Armored", "MG",}, unit = "brdm-2_pol"},
				{priority = 0.5, type = {"Armored", "AT",}, unit = "2p27_pol"},
				{priority = 1.0, type = {"Armored", "AT",}, unit = "9p110_pol"},
			--Tanks
				{priority = 1.0, type = {"Tank", "Light",}, unit = "pt-76_pol"},	
				{priority = 1.0, type = {"Tank", "Light",}, unit = "pt-76p"},
				{priority = 1.0, type = {"Tank", "Light", "AT",}, unit = "asu-85_pol"},
				
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "t-34-85_pol"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "t-54a_pol"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "t-54am_pol"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "t-54am1_pol"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "t-54am2_pol"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "t-55_pol"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "t-55a_pol"},
			--SPG
				
			--Air Assets
		}
	}
}