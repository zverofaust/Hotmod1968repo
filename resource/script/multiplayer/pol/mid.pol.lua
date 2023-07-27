Purchases["mid.pol"] = {
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
				
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_maneuv(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_fireteam(pol)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_rifle(pol)"},
				
				{priority = 0.75, type = {"Infantry", "Squad", "Class2",}, unit = "squad_reservist_moto(pol)"},
				--{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_rifle_moto(pol)"},
				{priority = 0.5, type = {"Infantry", "Squad", "Class1",}, unit = "squad_roz_recon(pol)"},

				-- Cannons	
				--HMGs
				{priority = 1.0, type = {"Cannon", "MG", "Class2",}, unit = "dshk_aa_pol_ai"},
				--Anti Aircraft
				{priority = 1.0, type = {"Cannon", "AA", "Class2",}, unit = "zpu-4_pol"},
				{priority = 1.0, type = {"Cannon", "AA", "Class3",}, unit = "57mm_s-60_pol"},
				--Anti Tank
				{priority = 1.0, type = {"Cannon", "AT", "Class3",}, unit = "b-10_pol_ai"},
				{priority = 1.0, type = {"Cannon", "AT", "Class3",}, unit = "spg9_pol_ai"},
				--Mortars
				{priority = 0.3, type = {"Cannon", "Mortar", "Class2",}, unit = "82mm_bm37_pol_ai"},
				{priority = 0.3, type = {"Cannon", "Mortar", "Class2",}, unit = "120mm_pm38_pol"},
				--Infantry_Support
				{priority = 1.0, type = {"Cannon", "Support", "Class3",}, unit = "d-44_pol"},
				--Artillery
				--{priority = 1.0, type = {"Cannon", "Artillery", "Class3",}, unit = "m30_pol"},
				--Rocket Artillery
				
				--APCs/BTRs
				--{priority = 1.0, type = {"Armored", "MG", "Class3",}, unit = "btr-40_pol"},
				{priority = 1.0, type = {"Armored", "MG", "Class3",}, unit = "brdm-1_pol"},
				{priority = 1.0, type = {"Armored", "MG", "Class2",}, unit = "btr-40a_pol"},
				{priority = 1.0, type = {"Armored", "AT", "Class2",}, unit = "2p27_pol"},
				
				--Tanks	
				{priority = 1.0, type = {"Tank", "Light", "Class3", "Class3",}, unit = "pt-76_pol"},
				{priority = 1.0, type = {"Tank", "Light", "Class3", "Class3",}, unit = "t-34-85_pol"},
				{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "t-54a_pol"},
				{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "t-54am_pol"},
				{priority = 1.0, type = {"Tank", "Medium", "Class2",}, unit = "t-55_pol"},
				
				
				
				-- Doctrine = "Batalion Specjalna"
				{priority = 1.0, type = {"Doctine", "Tier1",}, unit = "doctrine_squad_roz(pol)"},
				{priority = 1.0, type = {"Doctine", "Tank", "Medium", "Tier2",}, unit = "doctrine_vehicle_t54am1(pol)"},
				{priority = 1.0, type = {"Doctine", "Armored", "AT", "Tier3",}, unit = "doctrine_vehicle_9p110(pol)"},
				
				-- Doctrine = "Batalion Szturmowy"
				{priority = 1.0, type = {"Doctine", "Armored", "MG", "Tier1",}, unit = "doctrine_squad_rifle_mech(pol)"},
				{priority = 1.0, type = {"Doctine", "Tank", "Light", "Tier1",}, unit = "doctrine_vehicle_pt76b(pol)"},
				{priority = 1.0, type = {"Doctine", "Tank", "Medium", "Tier2",}, unit = "doctrine_vehicle_t55a(pol)"},
				{priority = 1.0, type = {"Doctine", "Vehicle", "MG", "Tier2",}, unit = "doctrine_vehicle_brdm2(pol)"},
				
		}
	}
}
