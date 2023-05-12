Purchases["conquest.usa"] = {
	{Repeat = 0, --infinite
		Units = {
			---[====[
			-- Infantry
				
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_at_early(usa)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_at(usa)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_lat_early(usa)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT",}, unit = "single_lat(usa)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_mg(usa)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_grenadier_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_scout(usa)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_flamer(usa)"},
				{priority = 1.0, type = {"Infantry", "Team",}, unit = "single_marksman(usa)"},
				{priority = 0.2, type = {"Infantry", "Team",}, unit = "single_sniper(usa)"},
				{priority = 0.2, type = {"Infantry", "Team",}, unit = "single_sapperap(usa)"},
				{priority = 0.2, type = {"Infantry", "Team",}, unit = "single_sapperat(usa)"},
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_reservist_con_early(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_reservist_fireteamap_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "AT",}, unit = "squad_reservist_fireteamat_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_reservist_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_reservist_moto2_con(usa)"},
				
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_natguard_con_early(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_natguard_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_natguard_moto2_con(usa)"},
				
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_con_early(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_fireteamap_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad", "AT",}, unit = "squad_rifle_fireteamat_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_con(usa)"},
				{priority = 0.5, type = {"Infantry", "Squad",}, unit = "squad_weapon_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_moto_con(usa)"},
				{priority = 0.5, type = {"Infantry", "Squad",}, unit = "squad_weapon_moto_con(usa)"},
				
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_m16_con(usa)"},
				{priority = 0.5, type = {"Infantry", "Squad",}, unit = "squad_weapon_m16_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_rifle_m16_moto_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_weapon_m16_moto_con(usa)"},
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_acav_moto_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_acav_weapon_moto_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_acav_m16_moto_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_acav_m16_weapon_moto_con(usa)"},
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_aircav_recon_con(usa)"},
				{priority = 0.5, type = {"Infantry", "Squad",}, unit = "squad_aircav_fireteam_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_aircav_con(usa)"},
				
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_usmc_fireteam_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_usmc_con(usa)"},
				{priority = 0.5, type = {"Infantry", "Squad",}, unit = "squad_usmc_mg_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_usmc_m16_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_usmc_scout_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_usmc_fireteam_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_usmc_moto_con(usa)"},
				{priority = 0.5, type = {"Infantry", "Squad",}, unit = "squad_usmc_m16_moto_con(usa)"},
				
				
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_lrrp_moto_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_ranger_lrrp_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_ranger_demo_con(usa)"},
				{priority = 1.0, type = {"Infantry", "Squad",}, unit = "squad_ranger_con(usa)"},
				

			-- Cannons	
				--HMGs
				{priority = 0.5, type = {"Cannon", "MG",}, unit = "mg_stand_m1919_ai"},
				{priority = 0.5, type = {"Cannon", "MG",}, unit = "mg_stand_m60_ai"},
				{priority = 1.0, type = {"Cannon", "MG",}, unit = "mg_stand_m2_ai"},
				--Anti Aircraft
				{priority = 1.0, type = {"Cannon", "AA",}, unit = "m45_maxson"},
				--Anti Tank
				{priority = 1.0, type = {"Cannon", "AT",}, unit = "m40"},
				--Mortars
				{priority = 1.0, type = {"Cannon", "Mortar",}, unit = "m29_mortar_ai"},
				{priority = 1.0, type = {"Cannon", "Mortar",}, unit = "m30_mortar"},
				{priority = 1.0, type = {"Cannon", "Mortar",}, unit = "m98_howtar"},
				--Infantry_Support
				{priority = 1.0, type = {"Cannon", "Support",}, unit = "m116_packhow"},
				--Artillery
				{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "m101a1"},
				--{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "m114"},
				--{priority = 0.5, type = {"Cannon", "Artillery",}, unit = "m59_longtom"},
				--{priority = 0.1, type = {"Cannon", "Artillery",}, unit = "m115"},	
				--Rocket Artillery
				--{priority = 0.1, type = {"Cannon", "AA",}, unit = "m192"},	
	
			--APCs/BTRs
				{priority = 1.0, type = {"Vehicle", "MG",}, unit = "m151_m1919"},
				{priority = 1.0, type = {"Vehicle", "MG",}, unit = "m151_m60"},
				{priority = 1.0, type = {"Vehicle", "MG",}, unit = "m151_m2"},
				{priority = 1.0, type = {"Vehicle", "AT",}, unit = "m151_m40"},
				--{priority = 1.0, type = {"Vehicle", "AA",}, unit = "m35_guntruck"},
				{priority = 1.0, type = {"Armored", "AA",}, unit = "m16gmc"},
				{priority = 1.0,type =  {"Armored", "AT",}, unit = "m113_m40"},
				{priority = 1.0, type = {"Armored", "AT",}, unit = "m113_acav_m40"},
				
				{priority = 1.0, type = {"Armored", "MG",}, unit = "m114a1"},
				{priority = 1.0, type = {"Armored", "MG",}, unit = "m114a2"},
				{priority = 1.0, type = {"Armored", "Mortar",}, unit = "m125"},
				{priority = 1.0, type = {"Armored", "Mortar",}, unit = "m106"},
				{priority = 1.0, type = {"Armored", "Mortar",}, unit = "m106_acav"},
				{priority = 1.0, type = {"Armored", "Support",}, unit = "m132_zippo"},
				
			--Tanks
				{priority = 1.0, type = {"Tank", "Light",}, unit = "m41_early"},
				{priority = 1.0, type = {"Tank", "Light",}, unit = "m41"},
				{priority = 1.0, type = {"Tank", "Light", "AT",}, unit = "m56"},
				{priority = 1.0, type = {"Tank", "Light", "Support",}, unit = "m551"},
				{priority = 1.0, type = {"Tank", "Light", "Support",}, unit = "m551_acav"},
				{priority = 1.0, type = {"Tank", "Light", "AT", "Support",}, unit = "m50"},
				
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "m47_patton"},
				{priority = 0.5, type = {"Tank", "Medium",}, unit = "m48"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "m48a1"},
				{priority = 1.0, type = {"Tank", "Medium", "Support",}, unit = "m67_zippo"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "m48a3"},
				{priority = 0.5, type = {"Tank", "Medium",}, unit = "m60_patton"},
				{priority = 1.0, type = {"Tank", "Medium",}, unit = "m60a1"},
				{priority = 0.5, type = {"Tank", "Medium", "AT", "Support",}, unit = "m60a1e2"},
				{priority = 0.5, type = {"Tank", "Medium", "Support",}, unit = "m728"},
				{priority = 1.0, type = {"Tank", "Medium", "Support",}, unit = "m103"},
				{priority = 0.5, type = {"Tank", "Medium", "Support",}, unit = "m103_usmc"},
				
			--SPG
				{priority = 1.0, type = {"Tank", "Light", "AA",}, unit = "m42"},
				{priority = 1.0, type = {"Armored", "AA",}, unit = "m163"},
				{priority = 1.0, type = {"Tank", "Medium", "Artillery",}, unit = "m108"},
				{priority = 0.5, type = {"Tank", "Medium", "Artillery",}, unit = "m109"},
				{priority = 0.5, type = {"Tank", "Medium", "Artillery",}, unit = "m109_acav"},
				{priority = 0.5, type = {"Tank", "Medium", "Artillery",}, unit = "m110"},
			--Air Assets
				{priority = 1.0, type = {"Helicopter", "Support",}, unit = "uh-1b_airborne"},
				{priority = 1.0, type = {"Helicopter", "Support",}, unit = "uh-1b_ara_airborne"},
				{priority = 1.0, type = {"Helicopter", "Support", "AT",}, unit = "uh-1b_maxwell_airborne"},
		}
	}
}