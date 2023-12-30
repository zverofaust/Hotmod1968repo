Purchases["era1960.prc"] = {
	{Repeat = 0,  --infinite
		Units = {
			---[====[
			-- Infantry
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_supporter(prc)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_at(prc)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_lat(prc)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_mg(prc)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_flamer(prc)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_scout(prc)"},
				--{priority = 1.0, type = {"Infantry", "Team", "Class1",}, unit = "single_sniper(prc)"},
				
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_militia(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_militia_ambush(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_conscript(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_conscript_at(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_conscript_mg(prc)"},
			

				-- Cannons	
				--HMGs
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "dshk_aa_prc_ai"},
				--Anti Aircraft
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "zpu-4_prc"},
				--Anti Tank
				{priority = 1.0, type = {"Cannon", "AT", "Class3",}, unit = "m20_prc_ai"},
				--Mortars
				{priority = 0.3, type = {"Cannon", "Mortar", "Class2",}, unit = "82mm_bm37_prc_ai"},
				{priority = 0.3, type = {"Cannon", "Mortar", "Class2",}, unit = "120mm_pm38_prc"},
				--Infantry_Support
				{priority = 1.0, type = {"Cannon", "Support", "Class3",}, unit = "d-44_prc"},
				--Artillery
				--{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "m30_prc"},
				--Rocket Artillery
				--{priority = 0.2, type = {"Cannon", "Artillery", "Class1",}, unit = "type63_mrl"},
				
				--APCs/BTRs
				
				--Tanks	
				{priority = 1.0, type = {"Tank", "Light", "Class3", "Support", "Class3",}, unit = "su76_prc"},
				{priority = 1.0, type = {"Tank", "Light", "Class3", "Class3",}, unit = "t-34-85_prc"},
				
				
				
				-- Doctrine = "Catalogue A/Northern Army"
			
				{priority = 1.0, type = {"Class3", "Doctrine", "AT", "Tier1",}, unit = "doctrine_platoon_antitank(prc)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Armored", "MG", "Tier2",}, unit = "doctrine_squad_mech(prc)"},
				--{priority = 1.0, type = {"Class3", "Doctrine", "Cannon", "Support", "Tier1",}, unit = "doctrine_vehicle_type60gun(prc)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Light", "Tier1",}, unit = "doctrine_vehicle_type62lt(prc)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Heavy", "Tier2",}, unit = "doctrine_vehicle_is2(prc)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Heavy", "Support", "Tier2",}, unit = "doctrine_vehicle_isu152(prc)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Vehicle", "Artillery", "Tier3",}, unit = "doctrine_vehicle_bm13(prc)"},
		}
	}
}
