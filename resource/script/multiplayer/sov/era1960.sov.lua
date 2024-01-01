Purchases["era1960.sov"] = {
	{Repeat = 0,  --infinite
		Units = {

			-- Infantry Teams
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_supporter(sov)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_at(sov)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_mg(sov)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_scout(sov)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_lat(sov)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class1",}, unit = "single_sniper(sov)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_flamer(sov)"},
				
			-- Common Squads	
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_conscript(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_conscript_mg(sov)"},
				{priority = 1.0, type = {"Infantry", "Squad", "AT", "Class3",}, unit = "squad_conscript_at(sov)"},

				
			--Automatic_weaponry
				{priority = 1.0, type = {"Cannon", "MG", "Class3",}, unit = "dshk_aa_sov_ai"},
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "zpu-4"},
			--AT_Weapons
				{priority = 1.0, type = {"Cannon", "AT", "Class3",},  unit = "b-10_82mm_ai"},
			--Mortaras
				{priority = 0.3, type = {"Cannon", "Mortar", "Class3",}, unit = "82mm_bm37_sov_ai"},
				{priority = 0.3, type = {"Cannon", "Mortar", "Class2",}, unit = "120mm_pm38_sov"},
			--Howitzers
				{priority = 1.0, type = {"Cannon", "Support", "Class3",}, unit = "d-44"},
				--{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "d30a"},
			--Wheel_vehicles
				{priority = 1.0, type = {"Armored", "MG", "Class3",}, unit = "brdm-1"},
				--{priority = 0.5, type = {"Armored", "AA", "Class2",}, unit = "btr-40a"},
				{priority = 1.0, type = {"Armored", "AA", "Class2",}, unit = "btr-152a"},
				{priority = 1.0, type = {"Armored", "AT", "Class2",}, unit = "2p27"},
			--Tanks
				{priority = 1.0, type = {"Tank", "Light", "Class3",}, unit = "pt-76"},	
				{priority = 1.0, type = {"Tank", "Light", "Class3",}, unit = "pt-76b"},	
			--Tanks_heavy
			--SPG
			--Air Assets
				--{priority = 0.2, type = {"Helicopter", "Sortie", "Class2",}, unit = "mil_mi4_airborne"},
				--{priority = 0.2, type = {"Helicopter", "Sortie", "Class1",}, unit = "mil_mi4_heavy_airborne"},
			--Offmap Supports
				
				
				
			-- Doctrine = "Motostrelki"
			
			{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "doctrine_squad_maneuv_motostrelki(sov)"},
			{priority = 1.0, type = {"Class3", "Infantry", "Squad", "AT",}, unit = "doctrine_squad_fireteam_motostrelki(sov)"},
			{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "doctrine_squad_rifle_motostrelki(sov)"},
			{priority = 1.0, type = {"Class3", "Squad", "Armored", "MG",}, unit = "doctrine_squad_conscript_moto(sov)"},
			{priority = 1.0, type = {"Class3", "Squad", "Armored", "MG",}, unit = "doctrine_squad_rifle_moto(sov)"},
			
			{priority = 1.0, type = {"Class3", "Doctrine", "Vehicle", "MG", "Tier2",}, unit = "doctrine_squad_spz_scout_moto(sov)"},
			{priority = 1.0, type = {"Class3", "Doctrine", "Armored", "MG", "Tier1",}, unit = "doctrine_vehicle_brdm2(sov)"},
			{priority = 1.0, type = {"Class3", "Doctrine", "Armored", "MG", "Tier2",}, unit = "doctrine_squad_guards_moto(sov)"},
			{priority = 1.0, type = {"Class3", "Doctrine", "Cannon", "AA", "Tier1",}, unit = "doctrine_vehicle_zu23(sov)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Armored", "AT", "Tier2",}, unit = "doctrine_vehicle_9p122(sov)"},
			{priority = 0.3, type = {"Class2", "Doctrine", "Vehicle", "Artillery", "Tier3",}, unit = "doctrine_vehicle_bm14(sov)"},
				
			-- Doctrine = "Heavy Independent Tank Brigade"
			{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "doctrine_squad_maneuv_tank(sov)"},
			{priority = 1.0, type = {"Class3", "Infantry", "Squad", "AT",}, unit = "doctrine_squad_fireteam_tank(sov)"},
			{priority = 1.0, type = {"Class3", "Infantry", "Squad",}, unit = "doctrine_squad_rifle_tank(sov)"},
			{priority = 1.0, type = {"Class3", "Squad", "Armored", "MG",}, unit = "doctrine_squad_conscript_mech(sov)"},
			{priority = 1.0, type = {"Class3", "Squad", "Armored", "MG",}, unit = "doctrine_squad_rifle_mech(sov)"},
			
			{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "doctrine_vehicle_t54a(sov)"},
			{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "doctrine_vehicle_t54b(sov)"},
			{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "doctrine_vehicle_t55(sov)"},
			{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "doctrine_vehicle_t55a(sov)"},
			{priority = 1.0, type = {"Class1", "Tank", "Medium",}, unit = "doctrine_vehicle_t62(sov)"},
			{priority = 1.0, type = {"Class3", "Tank", "AA", "Medium",}, unit = "doctrine_vehicle_zsu572(sov)"},
			{priority = 1.0, type = {"Class2", "Tank", "Heavy",}, unit = "doctrine_vehicle_t10(sov)"},
			
			{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Armored", "MG", "Tier1",}, unit = "doctrine_squad_guards_btr50(sov)"},
			{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Medium", "Tier2",}, unit = "doctrine_vehicle_ot55(sov)"},
			{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Medium", "AT", "Tier2",}, unit = "doctrine_vehicle_su12254(sov)"},
			{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Heavy", "Support", "Tier2",}, unit = "doctrine_vehicle_isu152m(sov)"},
			
			{priority = 1.0, type = {"Class2", "Doctrine", "Tank", "Light", "AA", "Tier2",}, unit = "doctrine_vehicle_shilka(sov)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Tank", "Medium", "AT", "Tier3",}, unit = "doctrine_vehicle_it1(sov)"},
			{priority = 1.0, type = {"Class1", "Doctrine", "Tank", "Light", "Infantry", "AT", "Tier3",}, unit = "doctrine_squad_guards_mech(sov)"},
			{priority = 0.3, type = {"Class1", "Doctrine", "Tank", "Medium", "Tier3",}, unit = "doctrine_vehicle_t64(sov)"},
			
				
			-- Doctrine = "VDV Air Assault Brigade"
			{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "doctrine_squad_maneuv_vdv(sov)"},
			{priority = 1.0, type = {"Class2", "Infantry", "Squad", "AT",}, unit = "doctrine_squad_fireteam_vdv(sov)"},
			{priority = 1.0, type = {"Class2", "Infantry", "Squad",}, unit = "doctrine_squad_rifle_vdv(sov)"},
			{priority = 1.0, type = {"Class3", "Cannon", "AA",}, unit = "doctrine_vehicle_zu2(sov)"},
			{priority = 1.0, type = {"Class3", "Cannon", "Artillery",}, unit = "doctrine_vehicle_gp1958(sov)"},
			{priority = 1.0, type = {"Class2", "Cannon", "Artillery",}, unit = "doctrine_vehicle_rpu14(sov)"},
			{priority = 1.0, type = {"Class3", "Tank", "Light", "AT",}, unit = "doctrine_vehicle_asu85(sov)"},
			
			{priority = 1.0, type = {"Class1", "Doctrine", "Infantry", "Tier1",}, unit = "doctrine_squad_spzteam(sov)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Tank", "Light", "AT", "Tier2",}, unit = "doctrine_squad_vdv_desantski(sov)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Armored", "AT", "Tier3",}, unit = "doctrine_vehicle_9p110(sov)"},
			{priority = 1.0, type = {"Class1", "Doctrine", "Tank", "Light", "AT", "Tier3",}, unit = "doctrine_squad_spz_desantski(sov)"},
			{priority = 0.2, type = {"Class1", "Doctrine", "Helicopter", "Sortie", "Tier3",}, unit = "mil_mi4_heavy_airborne"},
			
			-- Doctrine = "VMF Naval Infantry Brigade"
		
			
			-- Doctrine = "Rocket & Artillery Troops"
			
			{priority = 1.0, type = {"Class2", "Doctrine", "Cannon", "Artillery", "Tier1",}, unit = "doctrine_vehicle_d30(sov)"},
			{priority = 1.0, type = {"Class3", "Doctrine", "Cannon", "Support", "Tier1",}, unit = "doctrine_vehicle_d74(sov)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Cannon", "Artillery", "Tier1",}, unit = "doctrine_vehicle_d20(sov)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Cannon", "Artillery", "Tier2",}, unit = "doctrine_vehicle_b4(sov)"},
			{priority = 1.0, type = {"Class2", "Doctrine", "Armored", "AT", "Tier2",}, unit = "doctrine_vehicle_9p124(sov)"},
			{priority = 0.2, type = {"Class1", "Doctrine", "Vehicle", "Artillery", "Tier3",}, unit = "doctrine_vehicle_grad(sov)"},
			{priority = 0.2, type = {"Class1", "Doctrine", "Vehicle", "Artillery", "Tier3",}, unit = "doctrine_vehicle_bm24(sov)"},
			
		}
	}
}
