Purchases["era1960.pol"] = {
	{Repeat = 0,  --infinite
		Units = {
			---[====[
			-- Infantry
				{priority = 1.0, type = {"Infantry", "Team", "Aux", "Class3",}, unit = "single_supporter(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_at(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_lat(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_mg(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_flamer(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_scout(pol)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class1",}, unit = "single_sniper(pol)"},
				
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_reservist(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_reservist_mg(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_reservist_at(pol)"},

				-- Cannons	
				--HMGs
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "dshk_aa_pol_ai"},
				--Anti Aircraft
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "zpu-4_pol"},
				--Anti Tank
				{priority = 1.0, type = {"Cannon", "AT", "Class3",}, unit = "b-10_pol_ai"},
				--Mortars
				{priority = 0.3, type = {"Cannon", "Mortar", "Class2",}, unit = "82mm_bm37_pol_ai"},
				{priority = 0.3, type = {"Cannon", "Mortar", "Class2",}, unit = "120mm_pm38_pol"},
				--Infantry_Support
				{priority = 1.0, type = {"Cannon", "Support", "Class3",}, unit = "d-44_pol"},
				--Artillery

				--Rocket Artillery
				
				--Vehicles
				{priority = 1.0, type = {"Vehicle", "MG", "Class3",}, unit = "gaz-69_dshk_pol"},
				--APCs/BTRs
				{priority = 1.0, type = {"Armored", "MG", "Class3",}, unit = "brdm-1_pol"},
				{priority = 1.0, type = {"Armored", "MG", "Class2",}, unit = "btr-40a_pol"},
				{priority = 1.0, type = {"Armored", "AT", "Class2",}, unit = "2p27_pol"},
				
				--Tanks	
				{priority = 1.0, type = {"Tank", "Light", "Class3", "Class3",}, unit = "pt-76_pol"},
				{priority = 1.0, type = {"Tank", "Light", "Class3", "Class3",}, unit = "pt-76b_pol"},
				{priority = 1.0, type = {"Tank", "Light", "Class3", "Class3",}, unit = "t-34-85_pol"},
				
				
				
				-- Doctrine = "7 Łużycka Dywizja Desantowa" 7th Lusatian Landing Division
				
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_des_fireteam(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_des_fireteam_heavy(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_des(pol)"},
				{priority = 1.0, type = {"Infantry", "Armored", "Squad", "MG", "Class3",}, unit = "doctrine_squad_des_reservist_moto(pol)"},
				{priority = 1.0, type = {"Infantry", "Armored", "Squad", "MG", "Class3",}, unit = "doctrine_squad_des_moto(pol)"},
				
				{priority = 1.0, type = {"Class3", "Tank", "Light",}, unit = "doctrine_vehicle_pt76_des(pol)"},
						
				{priority = 1.0, type = {"Class3", "Doctrine", "Cannon", "AT", "Tier1",}, unit = "spg9_pol_ai"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Vehicle", "MG", "Tier2",}, unit = "doctrine_vehicle_brdm2(pol)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Tank", "Medium", "Tier2",}, unit = "doctrine_vehicle_t54am1(pol)"},		
				{priority = 1.0, type = {"Class3", "Doctrine", "Armored", "Infantry", "MG", "Tier3",}, unit = "doctrine_squad_des_mech(pol)"},
				
				
				-- Doctrine = "6 Pomorska Dywizja Powietrznodesantowa" 6th Pomeranian Air Assault Division
				
				{priority = 1.0, type = {"Infantry", "Doctrine", "Squad", "Class3",}, unit = "doctrine_squad_pdes_fireteam(pol)"},
				{priority = 1.0, type = {"Infantry", "Doctrine", "Squad", "Class3",}, unit = "doctrine_squad_pdes_fireteam_heavy(pol)"},
				{priority = 1.0, type = {"Infantry", "Doctrine", "Squad", "Class3",}, unit = "doctrine_squad_pdes(pol)"},
				
				{priority = 1.0, type = {"Class3", "Vehicle", "AT",}, unit = "doctrine_vehicle_gaz69_b10(pol)"},
				{priority = 1.0, type = {"Class3", "Tank", "Light", "AT",}, unit = "doctrine_vehicle_asu85_pdes(pol)"},
				
				{priority = 1.0, type = {"Class3", "Doctrine", "Vehicle", "MG", "Tier1",}, unit = "doctrine_vehicle_m72(pol)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Vehicle", "Mortar", "Tier1",}, unit = "doctrine_vehicle_gaz69_mortar(pol)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Tank", "Squad", "Light", "AT", "Tier2",}, unit = "doctrine_squad_pdes_desantski(pol)"},
				{priority = 1.0, type = {"Class1", "Doctrine", "Infantry", "Tier2",}, unit = "doctrine_squad_roz(pol)"},
				{priority = 1.0, type = {"Class1", "Doctrine", "Armored", "AT", "Tier3",}, unit = "doctrine_vehicle_9p110(pol)"},
			
				-- Doctrine = "1 Praski Pułk Zmechanizowany" 1st Prague Mechanized Regiment
				
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_rifle_fireteam(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_rifle_fireteam_heavy(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "doctrine_squad_rifle(pol)"},		
				{priority = 1.0, type = {"Infantry", "Armored", "Squad", "MG", "Class3",}, unit = "doctrine_squad_reservist_moto(pol)"},
				{priority = 1.0, type = {"Infantry", "Armored", "Squad", "MG", "Class3",}, unit = "doctrine_squad_rifle_moto(pol)"},
				
				{priority = 1.0, type = {"Class3", "Tank", "AT", "Medium",}, unit = "doctrine_vehicle_su100(pol)"},
				{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "doctrine_vehicle_t54a(pol)"},
				{priority = 1.0, type = {"Class3", "Tank", "Medium",}, unit = "doctrine_vehicle_t54am2(pol)"},
				{priority = 1.0, type = {"Class2", "Tank", "Medium",}, unit = "doctrine_vehicle_t55(pol)"},
				
				{priority = 1.0, type = {"Class2", "Doctrine", "Vehicle", "MG", "Tier1",}, unit = "doctrine_vehicle_m72(pol)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad", "Armored", "Tier2",}, unit = "doctrine_squad_rifle_mech(pol)"},
				{priority = 1.0, type = {"Class2", "Doctrine", "Infantry", "Squad", "AT", "Armored", "Tier2",}, unit = "doctrine_squad_at_mech(pol)"},
				{priority = 1.0, type = {"Class1", "Doctrine", "Tank", "Medium", "Tier3",}, unit = "doctrine_vehicle_t55a(pol)"},
				{priority = 1.0, type = {"Class1", "Doctrine", "Vehicle", "Artillery", "Tier3",}, unit = "doctrine_vehicle_bm14(pol)"},
				
				-- Doctrine = "Dywizjon Artylerii/Brygada Obrony Terytorialnej" Artillery/Territorial Defene Forces Division
				
				{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Armored", "Squad", "MG", "Tier1",}, unit = "doctrine_squad_border_moto(pol)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Squad", "Tier2",}, unit = "doctrine_team_sapper(pol)"},
				{priority = 1.0, type = {"Class3", "Doctrine", "Infantry", "Squad", "Armored", "Tier1",}, unit = "doctrine_squad_border_moto(pol)"},
				{priority = 1.0, type = {"Class1", "Doctrine", "Tank", "Heavy", "AT", "Tier3",}, unit = "doctrine_vehicle_isu152(pol)"},
				{priority = 1.0, type = {"Class1", "Doctrine", "Vehicle", "Artillery", "Tier3",}, unit = "doctrine_vehicle_bm21(pol)"},
		}
	}
}
