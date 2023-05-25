Purchases["mid.frg"] = {
	{Repeat = 0,  --infinite
		Units = {
			---[====[
			-- Infantry
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_supporter(frg)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_at(frg)"},
				--{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_lat(frg)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_mg(frg)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_flamer(frg)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_scout(frg)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class1",}, unit = "single_sniper(frg)"},
				
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_reservist(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_fireteamap(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_fireteamat(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_fireteamdm(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_rifle(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_rifle_mech(frg)"},
				
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_lrrp(frg)"},

			-- Cannons	
				--HMGs
				{priority = 1.0, type = {"Cannon", "MG", "Class3",}, unit = "mg3_lafette_ai"},
				--{priority = 1.0, type = {"Cannon", "MG",}, unit = "mg_stand_m2g_ai"},
				--Anti Aircraft
				--{priority = 1.0, type = {"Cannon", "AA",}, unit = "m45g"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "fk20-2"},
				{priority = 0.5, type = {"Cannon", "AA", "Class1",}, unit = "40mm_bofors_l70_frg"},
				--Anti Tank
				{priority = 1.0, type = {"Cannon", "AT", "Class3",}, unit = "m20g_rcl_ai"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "m40g"},
				--Mortars
				{priority = 1.0, type = {"Cannon", "Mortar", "Class2",}, unit = "81mm_krh36_frg_ai"},
				{priority = 1.0, type = {"Cannon", "Mortar", "Class1",}, unit = "120mm_krh40_frg"},
				--Infantry_Support
				--{priority = 1.0, type = {"Cannon", "Support",}, unit = "m116g"},
				--Artillery
				--{priority = 1.0, type = {"Cannon", "Artillery",}, unit = "m101g"},
				--{priority = 1.0, type = {"Cannon", "Artillery",}, unit = "m114g"},
				--{priority = 1.0, type = {"Cannon", "Artillery",}, unit = "m115g"},	
				--Rocket Artillery
	
			--APCs/BTRs
				{priority = 1.0, type = {"Vehicle", "MG", "Class3",}, unit = "munga4_mg3"},
				
			--Tanks
				{priority = 1.0, type = {"Tank", "Light",}, unit = "spz_112"},
				{priority = 1.0, type = {"Tank", "Light", "AT",}, unit = "rakjpz_1"},
				{priority = 1.0, type = {"Tank", "Light",}, unit = "m41g"},
				{priority = 1.0, type = {"Tank", "Light", "AA",}, unit = "m42g"},

				--{priority = 1.0, type = {"Tank", "Medium",}, unit = "m47frg"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "m47g"},
				--{priority = 1.0, type = {"Tank", "Medium",}, unit = "m48g"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "m48a2c"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "leopard_1"},
			--SPG
			--Air Assets
				{priority = 1.0, type = {"Plane", "Airstrike", "Class2",}, unit = "cas_uh1_frg"},
				--{priority = 1.0, type = {"Plane", "Airstrike", "Class2",}, unit = "airstrike_250_frg"},
				--{priority = 1.0, type = {"Plane", "Airstrike", "Class2",}, unit = "airstrike_napalm_frg"},
			--Offmap Supports
				
			
			-- Doctrine Mechanized = "Panzergrenadiere"
				{priority = 1.0, type = {"Doctine", "Armored", "MG", "Tier1",}, unit = "doctrine_squad_panzergren(frg)"},
				{priority = 1.0, type = {"Doctine", "Armored", "MG", "Tier2",}, unit = "doctrine_squad_panzergren_hs30(frg)"},
				{priority = 1.0, type = {"Doctine", "Tank", "Light", "AT", "Tier2",}, unit = "doctrine_vehicle_spz_m40(frg)"},
				{priority = 1.0, type = {"Doctine", "Tank", "Medium", "Tier2",}, unit = "doctrine_vehicle_leopard1a1(frg)"},
				{priority = 1.0, type = {"Doctine", "Tank", "Light", "Artillery", "Tier1",}, unit = "doctrine_vehicle_m109g(frg)"},
				
		}
	}
}
