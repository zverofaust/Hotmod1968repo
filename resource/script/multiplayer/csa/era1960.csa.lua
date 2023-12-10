Purchases["era1960.csa"] = {
	{Repeat = 0,  --infinite
		Units = {
			---[====[
			-- Infantry
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_supporter(csa)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_at(csa)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_lat(csa)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_mg(csa)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_flamer(csa)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_scout(csa)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class1",}, unit = "single_sniper(csa)"},
				
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_reservist(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_reservist_m14(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_fireteamap(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_fireteamat(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_rifle(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_rifle_moto(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_weapon(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_weapon_moto(csa)"},
				
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_lrrp(csa)"},

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
				{priority = 0.75, type = {"Cannon", "Support", "Class3",}, unit = "75mm_m116"},
				--Artillery
				--{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "105mm_m101a1"},
				--{priority = 1.0, type = {"Cannon", "Artillery",}, unit = "155mm_m114"},
				--{priority = 1.0, type = {"Cannon", "Artillery",}, unit = "203mm_m115"},	
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
				{priority = 0.2, type = {"Helicopter", "Sortie", "AT", "Class3",}, unit = "uh-1b_m22_airborne"},
				{priority = 0.2, type = {"Helicopter", "Sortie", "AT", "Class3",}, unit = "uh-1b_maxwell_airborne"},
				{priority = 0.2, type = {"Helicopter", "Sortie", "Support", "Class3",}, unit = "uh-1b_ara_airborne"},
			--Offmap Supports
				
			
			-- Doctrine Irregular = "Armored Cavalry Squadron"
				{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Armored", "MG", "Tier1",}, unit = "doctrine_squad_acav_moto(csa)"},
				{priority = 0.5, type = {"Class3", "Doctrine", "Infantry", "Armored", "AT", "Tier1",}, unit = "doctrine_squad_acav_weapon_moto(csa)"},			
				{priority = 1.0, type = {"Class3", "Doctrine", "Armored", "Mortar", "Tier2",}, unit = "doctrine_vehicle_m106(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Light", "Artillery", "Tier2",}, unit = "doctrine_vehicle_m109_acav(csa)"},
				{priority = 0.5, type = {"Class3", "Doctrine", "Tank", "Light", "Medium", "Tier2",}, unit = "doctrine_vehicle_m48_acav(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Armored", "Support", "Tier2",}, unit = "doctrine_vehicle_m132(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Light", "Support", "AT", "Tier3",}, unit = "doctrine_vehicle_m551acav(csa)"},
				
			-- Doctrine Amphibious = "USMC Battalion Landing Team"
				{priority = 1.0, type = {"Class3", "Doctrine", "Tier1",}, unit = "doctrine_squad_usmc_fireteam(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Cannon", "Mortar", "Tier1",}, unit = "doctrine_vehicle_howtar(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Armored", "MG", "Tier2",}, unit = "doctrine_squad_usmc_lvtp(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Tier3",}, unit = "doctrine_squad_udt(csa)"},
				
			-- Doctrine Mechanized = "Air Cavalry Squadron"
				--[[It's all airlifted]]
	
			-- Doctrine Tank = "Armor Battalion Task Force"
				{priority = 1.0, type = {"Class3", "Doctrine", "Armored", "AA", "Tier2",}, unit = "doctrine_vehicle_m114a2(csa)"},			
				--{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Medium", "Tier2",}, unit = "doctrine_vehicle_m60(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Light", "Artillery", "Tier2",}, unit = "doctrine_vehicle_m109(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Medium", "Support", "Tier2",}, unit = "doctrine_vehicle_m728(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Armored", "Artillery", "Tier3",}, unit = "doctrine_vehicle_m110(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Armored", "AA", "Tier3",}, unit = "doctrine_vehicle_m163(csa)"},
				
			-- Doctrine Heavy = "USMC Expeditionary Brigade"				
				{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Tier1",}, unit = "doctrine_squad_usmc_scout(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Cannon", "MG", "Tier2",}, unit = "doctrine_vehicle_mk18(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Tier1",}, unit = "doctrine_squad_usmc(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Armored", "Support", "AT", "Tier1",}, unit = "doctrine_vehicle_m50(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Medium", "Support", "Tier3",}, unit = "doctrine_vehicle_m67_zippo(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Heavy", "Tier3",}, unit = "doctrine_vehicle_m103(csa)"},
				
			-- Doctrine Assault = "Airborne Battle Group"
				{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Tier2",}, unit = "doctrine_squad_82nd(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Tier2",}, unit = "doctrine_squad_specops(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Cannon", "Artillery", "Tier3",}, unit = "doctrine_vehicle_mgr3(csa)"},
				
			-- Doctrine Support = "Artillery Brigade"	
				--{priority = 1.0, type = {"Class3", "Doctrine", "Cannon", "Artillery", "Tier2",}, unit = "doctrine_vehicle_m114(csa)"},
				--{priority = 1.0, type = {"Class3", "Doctrine", "Cannon", "Artillery", "Tier3",}, unit = "doctrine_vehicle_m115(csa)"},
				
		}
	}
}
