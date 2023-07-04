Purchases["mid.usa"] = {
	{Repeat = 0,  --infinite
		Units = {
			---[====[
			-- Infantry
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_supporter(usa)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_at(usa)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_lat(usa)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_mg(usa)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_flamer(usa)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_scout(usa)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class1",}, unit = "single_sniper(usa)"},
				
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_reservist(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_fireteamap(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_fireteamat(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_rifle(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_rifle_moto(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_weapon(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_weapon_moto(usa)"},
				
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_lrrp(usa)"},

			-- Cannons	
				--HMGs
				--{priority = 1.0, type = {"Cannon", "MG", "Class3",}, unit = "mg_stand_m60_ai"},
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "mg_stand_m2_ai"},
				--Anti Aircraft
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "m45_maxson"},
				--Anti Tank
				{priority = 1.0, type = {"Cannon", "AT", "Class3",}, unit = "m20_rcl_ai"},
				{priority = 1.0, type = {"Cannon", "AT", "Class2",}, unit = "m40"},
				--Mortars
				{priority = 0.2, type = {"Cannon", "Mortar", "Class2",}, unit = "m29_mortar_ai"},
				{priority = 0.2, type = {"Cannon", "Mortar", "Class2",}, unit = "m30_mortar"},
				--Infantry_Support
				{priority = 1.0, type = {"Cannon", "Support", "Class3",}, unit = "m116_packhow"},
				--Artillery
				--{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "m101a1"},
				--{priority = 1.0, type = {"Cannon", "Artillery",}, unit = "m114"},
				--{priority = 1.0, type = {"Cannon", "Artillery",}, unit = "m115"},	
				--Rocket Artillery
	
			--APCs/BTRs
				--{priority = 1.0, type = {"Vehicle", "MG", "Class3",}, unit = "m151_m1919"},
				{priority = 1.0, type = {"Vehicle", "MG", "Class3",}, unit = "m151_m60"},
				{priority = 1.0, type = {"Vehicle", "MG", "Class2",}, unit = "m151_m2"},
				{priority = 1.0, type = {"Vehicle", "AT", "Class2",}, unit = "m151_m40"},
				--{priority = 1.0, type = {"Vehicle", "AA", "Class1",}, unit = "m35_guntruck"},
				{priority = 1.0, type = {"Armored", "MG", "Class2",}, unit = "m114a1"},
				{priority = 1.0, type = {"Armored", "AT", "Class3",}, unit = "m113_m40"},
				{priority = 1.0, type = {"Armored", "Mortar", "MG", "Class3",}, unit = "m125"},				
			--Tanks					
				{priority = 1.0, type = {"Tank", "Light", "Class3",}, unit = "m41"},
				{priority = 1.0, type = {"Tank", "Medium", "Class3",}, unit = "m48a1"},
				{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "m48a3"},
				{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "m60a1"},				
			--SPG
				{priority = 1.0, type = {"Tank", "Light", "AA", "Class2",}, unit = "m42"},
				{priority = 1.0, type = {"Tank", "Medium", "Artillery", "Class3",}, unit = "m108"},
			--Air Assets
				{priority = 0.2, type = {"Helicopter", "Sortie", "Support", "Class3",}, unit = "uh-1b_airborne"},
			--Offmap Supports
				
			
			-- Doctrine Irregular = "Armored Cavalry"
				{priority = 1.0, type = {"Doctine", "Tier1",}, unit = "doctrine_squad_lrrp(usa)"},
				{priority = 1.0, type = {"Doctine", "Armored", "MG", "Tier1",}, unit = "doctrine_squad_acav_moto(usa)"},
				{priority = 1.0, type = {"Doctine", "Tank", "Light", "AT", "Tier1",}, unit = "doctrine_vehicle_m113_acav_m40(usa)"},
				{priority = 1.0, type = {"Doctine", "Vehicle", "MG", "Tier2",}, unit = "doctrine_vehicle_m114a2(usa)"},
				{priority = 1.0, type = {"Doctine", "Tank", "Light", "Mortar", "Tier1",}, unit = "doctrine_vehicle_m106(usa)"},
				{priority = 1.0, type = {"Doctine", "Tank", "Light", "Artillery", "Tier2",}, unit = "doctrine_vehicle_m109(usa)"},
				{priority = 1.0, type = {"Doctine", "Tank", "Light", "Support", "Tier2",}, unit = "doctrine_vehicle_m132(usa)"},
				{priority = 1.0, type = {"Doctine", "Artillery", "Light", "Support", "AT", "Tier2",}, unit = "doctrine_vehicle_m551acav(usa)"},
				
			-- Doctrine Mechanized = "Air Cavalry"
				--[[It's all bloody airlifted!]]
				{priority = 1.0, type = {"Doctine", "Tank", "Light", "Support", "AT", "Tier3",}, unit = "doctrine_vehicle_m551(usa)"},
				{priority = 1.0, type = {"Doctine", "Cannon", "Artillery", "Tier3",}, unit = "doctrine_vehicle_mgr3(usa)"},
				{priority = 0.2, type = {"Doctine", "Helicopter", "Sortie", "Tier2",}, unit = "uh-1b_ara_airborne"},
			
			-- Doctrine Heavy = "Armor Brigade"
				{priority = 1.0, type = {"Doctine", "Tank", "Light", "AA", "Tier3",}, unit = "doctrine_vehicle_m163(usa)"},
				{priority = 1.0, type = {"Doctine", "Tank", "Heavy", "Support", "AT", "Tier3",}, unit = "doctrine_vehicle_m60a1e2(usa)"},
				{priority = 1.0, type = {"Doctine", "Tank", "Medium", "Support", "Tier2",}, unit = "doctrine_vehicle_m728(usa)"},
				{priority = 1.0, type = {"Doctine", "Tank", "Light", "Artillery", "Tier2",}, unit = "doctrine_vehicle_m109(usa)"},
				{priority = 1.0, type = {"Doctine", "Tank", "Light", "Support", "Tier3",}, unit = "doctrine_vehicle_m110(usa)"},
				
			-- Doctrine Assault = "USMC"				
				{priority = 1.0, type = {"Doctine", "Tier1",}, unit = "doctrine_squad_usmc_fireteam(usa)"},
				{priority = 1.0, type = {"Doctine", "Tier1",}, unit = "doctrine_squad_usmc(usa)"},
				{priority = 1.0, type = {"Doctine", "Armored", "Support", "AT", "Tier1",}, unit = "doctrine_vehicle_m50(usa)"},
				{priority = 1.0, type = {"Doctine", "Tank", "Medium", "Support", "Tier3",}, unit = "doctrine_vehicle_m67_zippo(usa)"},
				{priority = 1.0, type = {"Doctine", "Tank", "Heavy", "AT", "Tier3",}, unit = "doctrine_vehicle_m103(usa)"},
				
			-- Doctrine Support = "Artillery Brigade"	
				--{priority = 1.0, type = {"Doctine", "Cannon", "Artillery", "Tier2",}, unit = "doctrine_vehicle_m114(usa)"},
				--{priority = 1.0, type = {"Doctine", "Cannon", "Artillery", "Tier3",}, unit = "doctrine_vehicle_m115(usa)"},
				
		}
	}
}
