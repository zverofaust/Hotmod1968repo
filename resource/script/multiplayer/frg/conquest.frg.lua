Purchases["conquest.frg"] = {
	{Repeat = 0, --infinite
		Units = {
			---[====[
			-- Infantry
				
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_at(frg)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_mg(frg)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_scout(frg)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_marksman(frg)"},
				{priority = 0.2, type = {"Infantry", "Team",}, unit = "single_sniper(frg)"},
				{priority = 0.2, type = {"Infantry", "Team",}, unit = "single_sapperap(frg)"},
				{priority = 0.2, type = {"Infantry", "Team",}, unit = "single_sapperat(frg)"},
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_reservist_con(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_fireteamap_con(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_fireteamat_con(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_fireteamss_con(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_con(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_moto_con(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_moto2_con(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_pzgren_moto_con(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_pzgren_moto2_con(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_pzgren_mech_con(frg)"},
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_fernspah_lrrp_con(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_fernspah_fireteam_con(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_fernspah_con(frg)"},

			-- Cannons	
				--HMGs
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "mg3_lafette_ai"},
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "m63g_ai"},
				--Anti Aircraft
				{priority = 0.5, type = {"Cannon", "AA",}, unit = "m45g"},
				{priority = 0.5, type = {"Cannon", "AA",}, unit = "40mm_bofors_l70_frg"},
				--Anti Tank
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "m40g"},
				--Mortars
				{priority = 1.5, type = {"Cannon", "Mortar",}, unit = "81mm_krh36_frg_ai"},
				{priority = 1.0, type = {"Cannon", "Mortar",}, unit = "120mm_krh40_frg"},
				--Infantry_Support
				{priority = 1.0, type = {"Cannon", "Support",}, unit = "m116g"},
				--Artillery
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "m101g"},
				--{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "m114g"},
				--{priority = 0.1, type = {"Cannon", "Artillery",}, unit = "m115g"},	
				--Rocket Artillery
	
			--APCs/BTRs
				{priority = 0.5, type = {"Tank", "Light",}, unit = "spz_112"},
				{priority = 0.5, {"Tank", "Light", "AT",}, unit = "spz_123_m40"},
				{priority = 0.5, {"Tank", "Light", "AT",}, unit = "rakjpz_1"},
				
			--Tanks
				{priority = 1.0, type = {"Tank", "Light",}, unit = "m41g"},
				{priority = 1.0, type = {"Tank", "Light", "AA",}, unit = "m42g"},

				{priority = 0.5, type = {"Tank", "Medium",}, unit = "m47frg"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "m47g"},
				{priority = 0.5, type = {"Tank", "Medium",}, unit = "m48g"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "m48a2c"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "leopard_1"},
				{priority = 0.5, type = {"Tank", "Medium",}, unit = "leopard_1a1"},
				
			--SPG
				{priority = 0.5, type = {"Tank", "Medium", "Artillery",}, unit = "m108g"},
				{priority = 0.5, type = {"Tank", "Medium", "Artillery",}, unit = "m109g"},
				{priority = 0.5, type = {"Tank", "Medium", "Artillery",}, unit = "m110g"}
			--Air Assets
				--{priority = 2.0, type = {"Plane", "Airstrike", "Support",}, unit = "uh-1b"},
				--{priority = 2.0, type = {"Plane", "Airstrike", "Support",}, unit = "uh-1b_ara"},
		}
	}
}