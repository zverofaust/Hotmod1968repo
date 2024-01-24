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
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_reservist_mg(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "AT", "Class3",}, unit = "squad_reservist_at(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_rifle(csa)"},
		
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
				{priority = 1.0, type = {"Armored", "MG", "Class2",}, unit = "m114"},
				{priority = 1.0, type = {"Armored", "MG", "Class2",}, unit = "m114a1"},
				{priority = 1.0, type = {"Armored", "AT", "Class3",}, unit = "m113_m40"},
				{priority = 1.0, type = {"Armored", "Mortar", "MG", "Class3",}, unit = "m125"},				
			--Tanks					
				{priority = 1.0, type = {"Tank", "Light", "Class3",}, unit = "m41"},			
			--SPG
			--Air Assets
				{priority = 0.2, type = {"Helicopter", "Sortie", "Support", "Class3",}, unit = "uh-1b_airborne"},
				{priority = 0.2, type = {"Helicopter", "Sortie", "AT", "Class3",}, unit = "uh-1b_m22_airborne"},
				{priority = 0.2, type = {"Helicopter", "Sortie", "AT", "Class3",}, unit = "uh-1b_maxwell_airborne"},
				{priority = 0.2, type = {"Helicopter", "Sortie", "Support", "Class3",}, unit = "uh-1b_ara_airborne"},
			--Offmap Supports
				
			
			-- Doctrine Irregular = "Armored Cavalry Squadron"
				--{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_acav_fireteam(csa)"},
				--{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_acav_fireteam_heavy(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_acav(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "doctrine_squad_acav_weapon(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "doctrine_squad_acav_reservist_moto(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "doctrine_squad_acav_moto(csa)"},
				
				{priority = 1.0, type = {"Armored", "AA", "Class2",}, unit = "doctrine_vehicle_m42_acav(csa)"},
				{priority = 1.0, type = {"Tank", "Medium", "Class3",}, unit = "doctrine_vehicle_m48a1_acav(csa)"},
				{priority = 1.0, type = {"Tank", "Medium", "Class3",}, unit = "doctrine_vehicle_m48a3_acav(csa)"},
				{priority = 1.0, type = {"Armored", "Artillery", "SPG", "Class3",}, unit = "doctrine_vehicle_m108_acav(csa)"},
				
				{priority = 0.5, type = {"Class3", "Doctrine", "Infantry", "Armored", "AT", "Tier2",}, unit = "doctrine_squad_acav_weapon_moto(csa)"},			
				{priority = 1.0, type = {"Class3", "Doctrine", "Armored", "Mortar", "Tier2",}, unit = "doctrine_vehicle_m106_acav(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Light", "Artillery", "Tier2",}, unit = "doctrine_vehicle_m109_acav(csa)"},
				{priority = 0.5, type = {"Class3", "Doctrine", "Tank", "Light", "Medium", "Tier2",}, unit = "doctrine_vehicle_m48_acav(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Armored", "Support", "Tier2",}, unit = "doctrine_vehicle_m132(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Light", "Support", "AT", "Tier3",}, unit = "doctrine_vehicle_m551_acav(csa)"},
				
			-- Doctrine Amphibious = "USMC Marine Expeditionary Unit"
				
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_usmc(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_usmc_mg(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_usmc_antitank(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_usmc_reservist_moto(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "doctrine_squad_usmc_moto(csa)"},
				
				{priority = 1.0, type = {"Cannon", "Mortar", "Class2",}, unit = "doctrine_vehicle_m98_usmc(csa)"},
				{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "doctrine_vehicle_m101_usmc(csa)"},
				
				{priority = 1.0, type = {"Armored", "AA", "Class2",}, unit = "doctrine_vehicle_m42_usmc(csa)"},
				{priority = 1.0, type = {"Tank", "Medium", "Class3",}, unit = "doctrine_vehicle_m48a1_usmc(csa)"},
				{priority = 1.0, type = {"Tank", "Medium", "Class3",}, unit = "doctrine_vehicle_m48a3_usmc(csa)"},
				{priority = 1.0, type = {"Tank", "Medium", "Support", "Class2",}, unit = "doctrine_vehicle_m67_usmc(csa)"},
				{priority = 1.0, type = {"Tank", "Heavy", "Class2",}, unit = "doctrine_vehicle_m103_usmc(csa)"},
				
				{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Tier1",}, unit = "doctrine_squad_usmc_scout(csa)"},
				--{priority = 1.0, type = {"Class3", "Doctrine", "Cannon", "MG", "Tier2",}, unit = "doctrine_vehicle_mk18(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Armored", "Support", "AT", "Tier1",}, unit = "doctrine_vehicle_m50(csa)"},				
				{priority = 1.0, type = {"Class3", "Doctrine", "Tier3",}, unit = "doctrine_squad_udt(csa)"},
				
			-- Doctrine Mechanized = "Air Cavalry Squadron"
				
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_aircav(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_aircav_weapon(csa)"},
	
			-- Doctrine Tank = "Armor Battalion Task Force"
				
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_armor_weapon(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_armor_reservist_moto(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "doctrine_squad_armor_rifle_moto(csa)"},
				
				{priority = 1.0, type = {"Armored", "Mortar", "Class2",}, unit = "doctrine_vehicle_m106_armor(csa)"},
				{priority = 1.0, type = {"Armored", "AA", "Class2",}, unit = "doctrine_vehicle_m42_armor(csa)"},
				{priority = 1.0, type = {"Tank", "Medium", "Class3",}, unit = "doctrine_vehicle_m48a1_armor(csa)"},
				{priority = 1.0, type = {"Tank", "Medium", "Class3",}, unit = "doctrine_vehicle_m48a3_armor(csa)"},
				{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "doctrine_vehicle_m60(csa)"},
				{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "doctrine_vehicle_m60a1(csa)"},
				{priority = 1.0, type = {"Armored", "Artillery", "SPG", "Class3",}, unit = "doctrine_vehicle_m108_armor(csa)"},
				
				{priority = 1.0, type = {"Class3", "Doctrine", "Armored", "AA", "Tier1",}, unit = "doctrine_vehicle_m114a2(csa)"},			
				{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Medium", "Tier1",}, unit = "doctrine_vehicle_m109_armor(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Medium", "Support", "Tier2",}, unit = "doctrine_vehicle_m728(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Armored", "Artillery", "Tier2",}, unit = "doctrine_vehicle_m110(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Armored", "AA", "Tier3",}, unit = "doctrine_vehicle_m163(csa)"},
		
				
			-- Doctrine Assault = "Airborne Battle Group"
				
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_82nd(csa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_82nd_weapon(csa)"},
				
				{priority = 1.0, type = {"Armored", "AT", "Class2",}, unit = "doctrine_vehicle_m56_82nd(csa)"},
				
				{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Light", "Tier2",}, unit = "doctrine_vehicle_m114a2(csa)"},	
				{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Light", "Support", "AT", "Tier3",}, unit = "doctrine_vehicle_m551_82nd(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Tier2",}, unit = "doctrine_squad_sadm(csa)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Cannon", "Artillery", "Tier3",}, unit = "doctrine_vehicle_mgr3(csa)"},
				
				
			-- Doctrine Support = "Artillery Brigade"	
			
				--{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_artillery_weapon(csa)"},
				
				--{priority = 1.0, type = {"Class3", "Doctrine", "Cannon", "Artillery", "Tier2",}, unit = "doctrine_vehicle_m114(csa)"},
				--{priority = 1.0, type = {"Class3", "Doctrine", "Cannon", "Artillery", "Tier3",}, unit = "doctrine_vehicle_m115(csa)"},
				
		}
	}
}
