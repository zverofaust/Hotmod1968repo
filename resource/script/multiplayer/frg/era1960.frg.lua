Purchases["era1960.frg"] = {
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
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_reservist_mg(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad", "AT", "Class3",}, unit = "squad_reservist_at(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_rifle(frg)"},

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
				{priority = 0.3, type = {"Cannon", "Mortar", "Class2",}, unit = "81mm_krh36_frg_ai"},
				{priority = 0.3, type = {"Cannon", "Mortar", "Class1",}, unit = "120mm_krh40_frg"},
				--Infantry_Support
				--{priority = 1.0, type = {"Cannon", "Support", "Class3",}, unit = "75mm_m116g"},
				--Artillery
				--{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "105mm_m101g"},
				--{priority = 1.0, type = {"Cannon", "Artillery", "Class2",}, unit = "155mm_m114g"},
				--{priority = 1.0, type = {"Cannon", "Artillery", "Class1",}, unit = "203mm_m115g"},	
				--Rocket Artillery
	
			--APCs/BTRs
				{priority = 1.0, type = {"Vehicle", "MG", "Class3",}, unit = "munga4_mg3"},
				{priority = 1.0, type = {"Vehicle", "AT", "Class3",}, unit = "munga8_m40"},
				
			--Tanks
				{priority = 1.0, type = {"Tank", "Light", "Class3",}, unit = "spz_112"},
				{priority = 1.0, type = {"Tank", "Light", "Class2",}, unit = "m41g"},
				{priority = 1.0, type = {"Tank", "Light", "AA", "Class2",}, unit = "m42g"},
				{priority = 1.0, type = {"Tank", "Light", "AT", "Class2",}, unit = "kanjpz"},

				--{priority = 1.0, type = {"Tank", "Medium", "Class3",}, unit = "m47frg"},
				{priority = 1.0, type = {"Tank", "Medium", "Class3",}, unit = "m47g"},
				--{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "m48g"},
				{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "m48a2c"},
				{priority = 1.0, type = {"Tank", "Medium", "Class1",}, unit = "leopard_1"},
			--SPG
			--Air Assets
				--{priority = 1.0, type = {"Plane", "Sortie", "Class2",}, unit = "airstrike_250_frg"},
				--{priority = 1.0, type = {"Plane", "Sortie", "Class2",}, unit = "airstrike_napalm_frg"},
			--Offmap Supports
				
			-- Doctrine Armor = "Panzertruppe"
			
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_reservist_panzer_mech(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "doctrine_squad_panzer_mech(frg)"},
				
				{priority = 1.0, type = {"Tank", "Light", "AA", "Class2",}, unit = "doctrine_vehicle_m42(frg)"},
				{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "doctrine_vehicle_m47(frg)"},
				{priority = 1.0, type = {"Tank", "Medium", "AT", "Class2",}, unit = "doctrine_vehicle_m48a1(frg)"},
				{priority = 1.0, type = {"Tank", "Medium", "AT", "Class2",}, unit = "doctrine_vehicle_m48a2(frg)"},
				{priority = 1.0, type = {"Tank", "Light", "AT", "Class2",}, unit = "doctrine_vehicle_rakjpz2(frg)"},
				{priority = 1.0, type = {"Tank", "Medium", "AT", "Class2",}, unit = "doctrine_vehicle_leopard1(frg)"},
				
				{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Medium", "Tier2",}, unit = "doctrine_vehicle_leopard1a1(frg)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Tank", "Mortar", "Tier3",}, unit = "doctrine_vehicle_spz_morser(frg)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Tank", "Artillery", "Tier2",}, unit = "doctrine_vehicle_m109(frg)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Tank", "Artillery", "Tier1",}, unit = "doctrine_vehicle_m110g(frg)"},
				
			-- Doctrine Mechanized = "Panzergrenadiere"
				
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "doctrine_squad_jager(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "doctrine_squad_jager_marksman(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad", "AT", "Class3",}, unit = "doctrine_squad_pzgren(frg)"},				
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_reservist_mech(frg)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "doctrine_squad_pzgren_mech(frg)"},
			
				{priority = 1.0, type = {"Tank", "Light", "AT", "Class2",}, unit = "doctrine_vehicle_rakjpz1(frg)"},
				
				{priority = 1.0, type = {"Class2", "Doctrine", "Tank", "Light", "AT", "Tier3",}, unit = "doctrine_vehicle_spz_m40(frg)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Armored", "MG", "Tier2",}, unit = "doctrine_squad_panzergren_mech_hs30(frg)"},
						
			-- Doctrine Support = "Artilleriekompanie"	
				
				{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Tier1",}, unit = "doctrine_squad_bgs(frg)"},
		}
	}
}
