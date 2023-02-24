Purchases["standard"] = {
	{--purchase 1
		Repeat = 3,
		Units = {
			["ger"] = {--Germany
			--Infantry Squads
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lw_fusilier_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_recon_late(ger)"},
				{priority = 3.5, class = UnitClass.Infantry, period = "mid", unit = "squad_grenadiere_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgrenadiere_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_jager_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_fusilier_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_gebirgsjaeger_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgrenadiere_gd_late(ger)"}
			},
			["rus"] = {--Russia
			--Infantry Squads
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscripts_late(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_recon_late(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_smg(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_guardsrifle(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_smg_heavy(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_marines_late(rus)"}
			},
			["fin"] = {--Finland
			--Infantry Squads
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_marksmen(fin)"},

				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_reserves_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_scout_late(fin)"},
				{priority = 3.5, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_antitank_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_jag_antitank_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_cav_late(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_jag_late(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_border_jag_late(fin)"}
			},
			["sov"] = {--Soviet Union
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_maneuv(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteam(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_moto(sov)"},
			--Automatic_weaponry
				--{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "dshk_aa_sov"},
			--AT_Weapons
				--{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "b-10_82mm"},
			--Howitzers
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "82mm_bm37_sov"}
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
			--Tanks_light
			--Tanks_medium
			--Tanks_heavy
			--SPG
			},
			["usa"] = {--United States
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_reservist(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAP(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAT(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lrrp(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_moto(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_weapon_moto(usa)"},
			--Automatic_weaponry
				--{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m63_browning"},
			--AT_Weapons
			--Howitzers
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "m116_packhow"},
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "m29_mortar"}
			--Wheel_vehicles
			--Tanks_light
			--Tanks_medium
			--Tanks_heavy
			--SPG
			},
			["prc"] = {--Soviet Union
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_militia(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript_antitank(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_militia_ambush(prc)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_autorifle(prc)"},
			--Automatic_weaponry
				--{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "dshk_aa_prc"},
			--AT_Weapons
				--{priority = 0.5, class = UnitClass.ATTank, period = "mid",  unit = "b-10_prc"},
			--Howitzers
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "82mm_bm37_prc"}
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
			--Tanks_light
			--Tanks_medium
			--Tanks_heavy
			--SPG
			},
			["frg"] = {--Federal Republic of Germany - aka West Germany
			--Infantry Singles
			--Infantry Squads
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "squad_reservist(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAP(frg)"},
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "squad_fireteamAT(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamDM(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_mech(frg)"},
			--HMGs
				--{priority = 0.25, class = UnitClass.Vehicle, period = "mid", unit = "mg3_lafette"},
				--{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m63g"},
			--Anti_Aircraft
			--Anti_Tank
			--Mortars
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m29g_mortar"}
			--Infantry_Support
			--Artillery
			--Rocket_Artillery
			--Wheel_vehicles	
			--APCs/BTRs
			--Tanks_light
			--Tanks_medium
			--Tanks_heavy
			--SPG
			}
		}
	},
	{--purchase 2m inf+btr
		Repeat = 1,
		Units = {
			["ger"] = {--Germany
			--Infantry Singles
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(ger)"},
				{priority = 2.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_bazooker(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_riflegrenade(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(ger)"},

			--Infantry Squads
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lw_fusilier_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_recon_late(ger)"},
				{priority = 3.5, class = UnitClass.Infantry, period = "mid", unit = "squad_grenadiere_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgrenadiere_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_jager_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_fusilier_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_gebirgsjaeger_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgrenadiere_gd_late(ger)"},

				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "37mm_flak37"},

			--Wheel_vehicles
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "bmw_r71"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "kubelwagen_mg"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "blitz3_6_flak30"},
				{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz231"},
				{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz221"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz222a"},

			--Half_tracks
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz251c"}
			},
			["rus"] = {--Russia
			--Infantry Singles
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(rus)"},
				{priority = 1.5, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(rus)"},
				{priority = 2.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_bazooker(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(rus)"},

			--Infantry Squads
				{priority = 3.5, class = UnitClass.Infantry, period = "mid", unit = "squad_rifleunit(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_at_rifle(rus)"},

				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscripts_late(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_recon_late(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_smg(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_guardsrifle(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_smg_heavy(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_marines_late(rus)"},

				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "37mm_61k"},

			--Wheel_vehicles
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "ba10"},
				{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "gaz67b"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "ba64"}
			},
			["fin"] = {--Finland
			--Infantry Singles
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(fin)"},
				{priority = 1.5, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(fin)"},
				{priority = 1.5, class = UnitClass.ATInfantry, period = "mid", unit = "single_bazooker(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(fin)"},

			--Infantry Squads
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_reserves_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_scout_late(fin)"},
				{priority = 3.5, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_antitank_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_jag_antitank_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_cav_late(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_jag_late(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_border_jag_late(fin)"},

			--Cannons
			--Anti_Aircraft
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "20mm_itk35"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "20mm_itk40"},

			--Wheel_vehicles
				--{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "m42_truppenfahrrad"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "ford_3ton_breda"},
				
			--BTRs
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "l182"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "t20_fin"}
			},
			["sov"] = {--Soviet Union
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_maneuv(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteam(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_mech(sov)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(sov)"},
			--Automatic_weaponry
			--AT_Weapons
				--{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "b-10_82mm"},
			--Howitzers
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-1"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "pt-76b"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu57"}
			--Tanks_medium
			--Tanks_heavy
			--SPG
			},
			["usa"] = {--United States
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_reservist(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAP(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAT(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lrrp(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_moto(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_weapon_moto(usa)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(usa)"},
			--Automatic_weaponry
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m63_browning"},
			--AT_Weapons
			--Howitzers
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m116_packhow"},
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "m29_mortar"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m60"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m40"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m125"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m41"}
			--Tanks_medium
			--Tanks_heavy
			--SPG
			},
			["prc"] = {--Peoples Republic of China
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_militia(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript_antitank(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_militia_ambush(prc)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_autorifle(prc)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_masswave_ai(prc)"},
			--Automatic_weaponry
			--AT_Weapons
				--{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "b-10_prc"},
			--Howitzers
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "82mm_bm37_prc"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "btr-40_type55"},
			--Tanks_light
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "su76_prc"}
			--Tanks_medium
			--Tanks_heavy
			--SPG
			},
			["frg"] = {--Federal Republic of Germany - aka West Germany
			--Infantry Singles
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(frg)"},
			--Infantry Squads
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "squad_reservist(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAP(frg)"},
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "squad_fireteamAT(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamDM(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lrrp(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_mech(frg)"},
			--HMGs
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "mg3_lafette"},
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m63g"},
			--Anti_Aircraft
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m45g"},
			--Anti_Tank
				{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "m40g"},
			--Mortars
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m29g_mortar"},
			--Infantry_Support
			--Artillery
			--Rocket_Artillery
			--Wheel_vehicles	
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "munga4_mg3"},
			--APCs/BTRs
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "spz_112"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m41g"}
			--Tanks_medium
			--Tanks_heavy
			--SPG
			}
		}
	},
	{--purchase 3, inf+tanks
		Repeat = 1,
		Units = {
			["ger"] = {--Germany
			--Infantry Singles
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(ger)"},
				{priority = 2.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_bazooker(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_riflegrenade(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(ger)"},

			--Infantry Squads
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lw_fusilier_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_recon_late(ger)"},
				{priority = 3.5, class = UnitClass.Infantry, period = "mid", unit = "squad_grenadiere_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgrenadiere_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_jager_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_fusilier_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_gebirgsjaeger_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgrenadiere_gd_late(ger)"},
			
			--Cannons
			--HMGs
			--	{priority = 3.5, class = UnitClass.Vehicle, period = "mid", unit = "mg42_lafette"},

			--Anti_Aircraft
			--	{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "20mm_flak30"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "37mm_flak37"},

			--Anti_Tank
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "37mm_pak36_late"},
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "50mm_pak38_late"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "75mm_pak40"},

			--Mortars
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "80mm_sgrw34"},

			--Infantry_Support
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "75mm_leig18"},

			--Artillery
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "105mm_lefh18"},

			--Rocket_Artillery

			--Wheel_vehicles
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "bmw_r71"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "kubelwagen_mg"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "blitz3_6_flak30"},
				{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz231"},
				{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz221"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz222a"},

			--Half_tracks
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz251c"},

			--Tanks_light
			--Tanks_medium
				{priority = 2.5, class = UnitClass.Tank, period = "mid", unit = "panzer3m"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "panzer3n"},
				{priority = 3.0, class = UnitClass.Tank, period = "mid", unit = "panzer4g"},
				{priority = 3.5, class = UnitClass.Tank, period = "mid", unit = "panzer4h"},

			--Tanks_heavy
				{priority = 2.5, class = UnitClass.HeavyTank, period = "mid", unit = "panzer5a"},
				{priority = 1.5, class = UnitClass.HeavyTank, period = "mid", unit = "tiger1e"},

			--SPG
				{priority = 2.5, class = UnitClass.ATTank, period = "mid", unit = "marder3m"},
				{priority = 3.0, class = UnitClass.ATTank, period = "mid", unit = "stug3g"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "stuh42"}

			},
			["rus"] = {--Russia
			--Infantry Singles
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(rus)"},
				{priority = 1.5, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(rus)"},
				{priority = 2.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_bazooker(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(rus)"},

			--Infantry Squads

				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_partisan(rus)"},
				{priority = 3.5, class = UnitClass.Infantry, period = "mid", unit = "squad_rifleunit(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_at_rifle(rus)"},

				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscripts_late(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_recon_late(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_smg(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_guardsrifle(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_smg_heavy(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_marines_late(rus)"},

			--Cannons
			--HMGs
		
				{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "sg43_stand"},
				{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "dshk_stan"},
				{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "dshk_aa"},

			--Anti_Aircraft
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "37mm_61k"},

			--Anti_Tank
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "45mm_m42"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "57mm_zis2"},
				{priority = 2.0, class = UnitClass.ATTank, period = "mid", unit = "76mm_zis3"},

			--Mortars
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "82mm_bm37"},

			--Infantry_Support
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "76mm_m43"},

			--Artillery
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "122mm_m30"},

			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "gaz_aaa_72k"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "ba10"},
				{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "gaz67b"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "ba64"},

			--Tanks_light
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t20"},

				{priority = 3.0, class = UnitClass.Tank, period = "mid", unit = "t70"},

			--Tanks_medium

				{priority = 3.5, class = UnitClass.Tank, period = "late ", unit = "t3476_43"},
				{priority = 2.5, class = UnitClass.Tank, period = "late ", unit = "t3485_44"},

			--Tanks_heavy

				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid", unit = "kv1s"},
				{priority = 0.5, class = UnitClass.HeavyTank, period = "mid", unit = "is1_43"},
				{priority = 1.5, class = UnitClass.HeavyTank, period = "mid", unit = "is2_43"},

			--SPG
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "su76"},
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "su85"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "su122"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "su152"}
			},
			["fin"] = {--Finland
			--Infantry Singles
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(fin)"},
				{priority = 1.5, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(fin)"},
				{priority = 1.5, class = UnitClass.ATInfantry, period = "mid", unit = "single_bazooker(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(fin)"},

			--Infantry Squads

				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_assault(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_marksmen(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_reserves_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_scout_late(fin)"},
				{priority = 3.5, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_antitank_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_jag_antitank_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_cav_late(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_jag_late(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_border_jag_late(fin)"},

			--Cannons
			--HMGs

			--Anti_Tank
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "20mm_l39"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "37mm_pstk36"},
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "76mm_k02"},

			--Mortars
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "50mm_krh38"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "81mm_krh36"},

			--Infantry_Support
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "76mm_m1927_fin"},

			--Artillery
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "105mm_k13"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "120mm_k78_31"},

		
				
			--BTRs
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "l182"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "t20_fin"},

			--Tanks_light
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "vickers_6t_altb"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "t26_33_fin"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "t26e"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "kht130_fin"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "bt42"},

			--Tanks_medium
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t28_38_fin"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t3476_41_fin"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t3485_44_fin"},

			--Tanks_heavy
			--SPG
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "stug3g_fin"}
			},
			["sov"] = {--Soviet Union
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_maneuv(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteam(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_mech(sov)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(sov)"},
			--Automatic_weaponry
				--{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "dshk_aa_sov"},
			--AT_Weapons
				--{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "b-10_82mm"},
				--{priority = 2.0, class = UnitClass.ATTank, period = "mid", unit = "spg9"},
			--Howitzers
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "82mm_bm37_sov"},
			--Wheel_vehicles
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-1"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "btr-40a"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "9p110"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "pt-76b"},	
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu57"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu-85"},
			--Tanks_medium
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t-44"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54a"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54b"},
				{priority = 0.3, class = UnitClass.Tank, period = "mid", unit = "zsu-57-2"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "su-122-54"}
			--Tanks_heavy
			--SPG
			},
			["usa"] = {--United States
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_reservist(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAP(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAT(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lrrp(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_moto(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_weapon_moto(usa)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(usa)"},
			--Automatic_weaponry
				--{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "m63_browning"},
			--AT_Weapons
				{priority = 2.0, class = UnitClass.ATTank, period = "mid", unit = "m40"},
			--Howitzers
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "m29_mortar"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m60"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m40"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m35_guntruck"},
			--Tanks_light
				{priority = 0.75, class = UnitClass.Tank, period = "mid", unit = "m114a1"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m113_m40"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m125"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m106"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m42"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m132_zippo"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m56"},
			--Tanks_medium
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "m48"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "m48a1"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48a3"}
			--Tanks_heavy
			--SPG
			},
			["prc"] = {--Peoples Republic of China
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_militia(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript_antitank(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_militia_ambush(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(prc)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_autorifle(prc)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_guards(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_assault(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_masswave_ai(prc)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(prc)"},
			--Automatic_weaponry
				--{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "dshk_aa_prc"},
			--AT_Weapons
				--{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "b-10_prc"},
			--Howitzers
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "82mm_bm37_prc"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "btr-40_type55"},
			--Tanks_light
				{priority = 2, class = UnitClass.Tank, period = "mid", unit = "su76_prc"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-34-85_prc"},	
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "type58_tank"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "su100_prc"}
			--Tanks_heavy
			--SPG
			},
			["frg"] = {--Federal Republic of Germany - aka West Germany
			--Infantry Singles
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(frg)"},
			--Infantry Squads
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "squad_reservist(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAP(frg)"},
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "squad_fireteamAT(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamDM(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lrrp(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_mech(frg)"},
			--HMGs
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "mg3_lafette"},
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m63g"},
			--Anti_Aircraft
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m45g"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "40mm_bofors_l70_frg"},
			--Anti_Tank
				{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "m40g"},
			--Mortars
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m29g_mortar"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "120mm_krh40_frg"},
			--Infantry_Support
			--Artillery
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m101g"},
			--	{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m114g"},
			--	{priority = 0.1, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m115g"},	
			--Rocket_Artillery
			--Wheel_vehicles	
			{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "munga4_mg3"},
			--APCs/BTRs
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "spz_112"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m41g"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m42g"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m47g"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m48g"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid",  unit = "m48a2c"},
			--Tanks_heavy
			--SPG
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m108g"}
			}
		}
	},
	{--purchase intermediate, tank only
		Repeat = 1,
		Units = {
			["ger"] = {--Germany
			--Tanks_light

			--Tanks_medium

				{priority = 2.5, class = UnitClass.Tank, period = "mid", unit = "panzer3m"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "panzer3n"},
				{priority = 3.0, class = UnitClass.Tank, period = "mid", unit = "panzer4g"},
				{priority = 3.5, class = UnitClass.Tank, period = "mid", unit = "panzer4h"},

			--Tanks_heavy
				{priority = 2.5, class = UnitClass.HeavyTank, period = "mid", unit = "panzer5a"},
				{priority = 1.5, class = UnitClass.HeavyTank, period = "mid", unit = "tiger1e"},

			--SPG
				{priority = 2.5, class = UnitClass.ATTank, period = "mid", unit = "marder3m"},
				{priority = 3.0, class = UnitClass.ATTank, period = "mid", unit = "stug3g"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "stuh42"}

			},
			["rus"] = {--Russia
			--Tanks_light
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t20"},
				{priority = 3.0, class = UnitClass.Tank, period = "mid", unit = "t70"},

			--Tanks_medium
				{priority = 3.5, class = UnitClass.Tank, period = "late ", unit = "t3476_43"},
				{priority = 2.5, class = UnitClass.Tank, period = "late ", unit = "t3485_44"},

			--Tanks_heavy
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid", unit = "kv1s"},
				{priority = 0.5, class = UnitClass.HeavyTank, period = "mid", unit = "is1_43"},
				{priority = 1.5, class = UnitClass.HeavyTank, period = "mid", unit = "is2_43"},

			--SPG
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "su76"},
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "su85"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "su122"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "su152"}
			},
			["fin"] = {--Finland
			--Tanks_light
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "vickers_6t_altb"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "t26_33_fin"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "t26e"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "kht130_fin"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "bt42"},

			--Tanks_medium
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t28_38_fin"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t3476_41_fin"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t3485_44_fin"},

			--Tanks_heavy
			--SPG
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "stug3g_fin"}
			},
			["sov"] = {--Soviet Union
			--Infantry
			--Automatic_weaponry
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
			--Tanks_light
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "pt-76b"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu57"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu-85"},
			--Tanks_medium
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t-44"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54a"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "t-54b"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "t-55a"},
				{priority = 0.25, class = UnitClass.Tank, period = "mid", unit = "ot-55"},
				{priority = 0.3, class = UnitClass.Tank, period = "mid", unit = "zsu-57-2"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "su-122-54"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-62_1967"}
			--Tanks_heavy
			--SPG
			},
			["usa"] = {--United States
			--Infantry
			--Automatic_weaponry
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m42"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48a1"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m67_zippo"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "m48a3"},	
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m60a1"}				
			--Tanks_heavy
			--SPG
			},
			["prc"] = {--Peoples Republic of China
			--Infantry
			--Automatic_weaponry
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
			--Tanks_light
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "su76_prc"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-34-85_prc"},	
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "type58_tank"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "su100_prc"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "type59"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "is2_prc"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "isu152_prc"}
			--SPG
			},
			["frg"] = {--Federal Republic of Germany - aka West Germany
			--Infantry Singles
			--Infantry Squads
			--HMGs
			--Anti_Aircraft
			--Anti_Tank
			--Mortars
			--Infantry_Support
			--Artillery
			--Rocket_Artillery
			--Wheel_vehicles	
			--APCs/BTRs
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m41g"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m42g"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m47g"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m48g"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid",  unit = "m48a2c"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "leopard_1"}
			--Tanks_heavy
			--SPG
			}
		}
	},
	{--purchase 4
		Repeat = 1,
		Units = {
			["ger"] = {--Germany
			--Infantry Singles
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(ger)"},
				{priority = 2.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_bazooker(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_riflegrenade(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(ger)"},

			--Infantry Squads


				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lw_fusilier_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_recon_late(ger)"},
				{priority = 3.5, class = UnitClass.Infantry, period = "mid", unit = "squad_grenadiere_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgrenadiere_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_jager_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_fusilier_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_gebirgsjaeger_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgrenadiere_gd_late(ger)"},
			
			--Cannons
			--HMGs
			--	{priority = 3.5, class = UnitClass.Vehicle, period = "mid", unit = "mg42_lafette"},

			--Anti_Aircraft
			--	{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "20mm_flak30"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "37mm_flak37"},

			--Anti_Tank
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "37mm_pak36_late"},
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "50mm_pak38_late"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "75mm_pak40"},

			--Mortars
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "80mm_sgrw34"},

			--Infantry_Support
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "75mm_leig18"},

			--Artillery
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "105mm_lefh18"},

			--Rocket_Artillery

			--Wheel_vehicles
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "bmw_r71"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "kubelwagen_mg"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "blitz3_6_flak30"},
				{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz231"},
				{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz221"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz222a"},

			--Half_tracks
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz251c"},

			--Tanks_light

			--Tanks_medium


				{priority = 2.5, class = UnitClass.Tank, period = "mid", unit = "panzer3m"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "panzer3n"},
				{priority = 3.0, class = UnitClass.Tank, period = "mid", unit = "panzer4g"},
				{priority = 3.5, class = UnitClass.Tank, period = "mid", unit = "panzer4h"},

			--Tanks_heavy
				{priority = 2.5, class = UnitClass.HeavyTank, period = "mid", unit = "panzer5a"},
				{priority = 1.5, class = UnitClass.HeavyTank, period = "mid", unit = "tiger1e"},

			--SPG
				{priority = 2.5, class = UnitClass.ATTank, period = "mid", unit = "marder3m"},
				{priority = 3.0, class = UnitClass.ATTank, period = "mid", unit = "stug3g"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "stuh42"}

			},
			["rus"] = {--Russia
			--Infantry Singles
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(rus)"},
				{priority = 1.5, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(rus)"},
				{priority = 2.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_bazooker(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(rus)"},

			--Infantry Squads

				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_partisan(rus)"},
				{priority = 3.5, class = UnitClass.Infantry, period = "mid", unit = "squad_rifleunit(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_at_rifle(rus)"},

				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscripts_late(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_recon_late(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_smg(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_guardsrifle(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_smg_heavy(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_marines_late(rus)"},

			--Cannons
			--HMGs
			--	{priority = 3.5, class = UnitClass.Vehicle, period = "mid", unit = "maxim"},
			--	{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "sg43_stand"},
			--	{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "dshk_stan"},
			--	{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "dshk_aa"},

			--Anti_Aircraft
			--	{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "25mm_72k"},
			--	{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "37mm_61k"},

			--Anti_Tank
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "45mm_m42"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "57mm_zis2"},
				{priority = 2.0, class = UnitClass.ATTank, period = "mid", unit = "76mm_zis3"},

			--Mortars
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "82mm_bm37"},

			--Infantry_Support
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "76mm_m43"},

			--Artillery
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "122mm_m30"},

			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "gaz_aaa_72k"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "ba10"},
				{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "gaz67b"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "ba64"},

			--Tanks_light
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t20"},
				{priority = 3.0, class = UnitClass.Tank, period = "mid", unit = "t70"},

			--Tanks_medium
				{priority = 3.5, class = UnitClass.Tank, period = "late ", unit = "t3476_43"},
				{priority = 2.5, class = UnitClass.Tank, period = "late ", unit = "t3485_44"},

			--Tanks_heavy
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid", unit = "kv1s"},
				{priority = 0.5, class = UnitClass.HeavyTank, period = "mid", unit = "is1_43"},
				{priority = 1.5, class = UnitClass.HeavyTank, period = "mid", unit = "is2_43"},

			--SPG
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "su76"},
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "su85"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "su122"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "su152"}
			},
			["fin"] = {--Finland
			--Infantry Singles
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(fin)"},
				{priority = 1.5, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(fin)"},
				{priority = 1.5, class = UnitClass.ATInfantry, period = "mid", unit = "single_bazooker(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(fin)"},

			--Infantry Squads
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_assault(fin)"},

				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_marksmen(fin)"},

				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_reserves_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_scout_late(fin)"},
				{priority = 3.5, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_antitank_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_jag_antitank_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_cav_late(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_jag_late(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_border_jag_late(fin)"},

			--Cannons
			--HMGs

			--Anti_Aircraft
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "20mm_itk35"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "20mm_itk40"},

			--Anti_Tank
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "20mm_l39"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "37mm_pstk36"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "45mm_pstk32"},
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "76mm_k02"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "76mm_k36"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "75mm_pstk9738"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "75mm_itk37"},

			--Mortars
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "50mm_krh38"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "81mm_krh36"},

			--Infantry_Support
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "76mm_m1927_fin"},

			--Artillery
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "105mm_k13"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "120mm_k78_31"},

			--Wheel_vehicles
			--	{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "m42_truppenfahrrad"},

			--BTRs
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "l182"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "t20_fin"},

			--Tanks_light
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "vickers_6t_altb"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "t26_33_fin"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "t26e"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "kht130_fin"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "bt42"},

			--Tanks_medium
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t28_38_fin"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t3476_41_fin"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t3485_44_fin"},

			--Tanks_heavy
			--SPG
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "stug3g_fin"}
			},
			["sov"] = {--Soviet Union
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_maneuv(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteam(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_mech(sov)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(sov)"},
			--Automatic_weaponry
				--{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "dshk_aa_sov"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "zpu-4"},
			--AT_Weapons
				--{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "b-10_82mm"},
				--{priority = 2.0, class = UnitClass.ATTank, period = "mid", unit = "spg9"},
			--Howitzers
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "82mm_bm37_sov"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "120mm_pm38_sov"},
			--Wheel_vehicles
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-1"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "btr-40a"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "btr-152a"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "9p110"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "9p122"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "pt-76b"},	
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu57"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "asu-85"},
			--Tanks_medium
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t-44"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54a"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54b"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-55a"},
				{priority = 0.25, class = UnitClass.Tank, period = "mid", unit = "ot-55"},
				{priority = 0.3, class = UnitClass.Tank, period = "mid", unit = "zsu-57-2"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "su-122-54"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-62_1967"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "t-10m"}
			--SPG
			},
			["usa"] = {--United States
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_reservist(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAP(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAT(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lrrp(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_moto(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_weapon_moto(usa)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(usa)"},
			--Automatic_weaponry
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m63_browning"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m45_maxson"},
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m40"},
			--Howitzers
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "m29_mortar"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "m30_mortar"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "m98_howtar"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m116_packhow"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m60"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m40"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m35_guntruck"},
			--Tanks_light
				{priority = 0.75, class = UnitClass.Tank, period = "mid", unit = "m114a1"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m113_m40"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m125"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m106"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m42"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m132_zippo"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m50"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m56"},
				{priority = 0.75, class = UnitClass.Tank, period = "mid", unit = "m551"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48a1"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m67_zippo"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48a3"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m60a1"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m728"},				
			--Tanks_heavy
				{priority = 0.5, class = UnitClass.HeavyTank, period = "mid", unit = "m103"},	
			--SPG
				{priority = 0.2, class = UnitClass.ArtilleryTank, period = "mid", unit = "m108"}
			}
			,
			["prc"] = {--Peoples Republic of China
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_militia(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript_antitank(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_militia_ambush(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(prc)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_autorifle(prc)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_guards(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_assault(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_masswave_ai(prc)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(prc)"},
			--Automatic_weaponry
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "dshk_aa_prc"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "zpu-4_prc"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "37mm_61k_prc"},
			--AT_Weapons
				--{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "b-10_prc"},
			--Howitzers
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "82mm_bm37_prc"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "120mm_pm38_prc"},
			--Rocket Artillery	
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "type63_mrl"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "btr-40_type55"},
			--Tanks_light
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "su76_prc"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "type62_lt"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-34-85_prc"},	
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "type58_tank"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "su100_prc"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "type59"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "is2_prc"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "isu152_prc"}
			--SPG
			},
			["frg"] = {--Federal Republic of Germany - aka West Germany
			--Infantry Singles
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(frg)"},
			--Infantry Squads
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "squad_reservist(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAP(frg)"},
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "squad_fireteamAT(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamDM(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lrrp(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_mech(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgren_mech_ai(frg)"},
				
			--HMGs
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "mg3_lafette"},
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m63g"},
			--Anti_Aircraft
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m45g"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "40mm_bofors_l70_frg"},
			--Anti_Tank
				{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "m40g"},
			--Mortars
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m29g_mortar"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "120mm_krh40_frg"},
			--Infantry_Support
			--Artillery
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m101g"},
			--	{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m114g"},
			--	{priority = 0.1, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m115g"},	
			--Rocket_Artillery
			--Wheel_vehicles	
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "munga4_mg3"},
			--APCs/BTRs
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "spz_112"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "rakjpz_1"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m41g"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m42g"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m47g"},
				--{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m48g"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m48a2c"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "leopard_1"},
			--Tanks_heavy
			--SPG
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m108g"}
			}
		}
	},
	{--purchase 4
		Repeat = 1,
		Units = {
			["ger"] = {--Germany
			--Tanks_light

			--Tanks_medium


				{priority = 2.5, class = UnitClass.Tank, period = "mid", unit = "panzer3m"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "panzer3n"},
				{priority = 3.0, class = UnitClass.Tank, period = "mid", unit = "panzer4g"},
				{priority = 3.5, class = UnitClass.Tank, period = "mid", unit = "panzer4h"},

			--Tanks_heavy
				{priority = 2.5, class = UnitClass.HeavyTank, period = "mid", unit = "panzer5a"},
				{priority = 1.5, class = UnitClass.HeavyTank, period = "mid", unit = "tiger1e"},

			--SPG
				{priority = 2.5, class = UnitClass.ATTank, period = "mid", unit = "marder3m"},
				{priority = 3.0, class = UnitClass.ATTank, period = "mid", unit = "stug3g"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "stuh42"}
			},
			["rus"] = {--Russia
			--Tanks_light
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t20"},
				{priority = 3.0, class = UnitClass.Tank, period = "mid", unit = "t70"},

			--Tanks_medium
				{priority = 3.5, class = UnitClass.Tank, period = "late ", unit = "t3476_43"},
				{priority = 2.5, class = UnitClass.Tank, period = "late ", unit = "t3485_44"},

			--Tanks_heavy
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid", unit = "kv1s"},
				{priority = 0.5, class = UnitClass.HeavyTank, period = "mid", unit = "is1_43"},
				{priority = 1.5, class = UnitClass.HeavyTank, period = "mid", unit = "is2_43"},

			--SPG
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "su76"},
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "su85"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "su122"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "su152"}
			},
			["fin"] = {--Finland
			--Tanks_light
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "vickers_6t_altb"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "t26_33_fin"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "t26e"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "kht130_fin"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "bt42"},

			--Tanks_medium
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t28_38_fin"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t3476_41_fin"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t3485_44_fin"},

			--Tanks_heavy
			--SPG
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "stug3g_fin"}
			},
			["sov"] = {--Soviet Union
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_maneuv(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteam(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_mech(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_moto_ai(sov)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(sov)"},
			--Automatic_weaponry
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "dshk_aa_sov"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "zpu-4"},
			--AT_Weapons
				--{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "b-10_82mm"},
				--{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "spg9"},
			--Howitzers
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "82mm_bm37_sov"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "120mm_pm38_sov"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "d30a"},
			--Wheel_vehicles
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-1"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "btr-40a"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "btr-152a"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "9p110"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "9p122"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "pt-76b"},	
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu57"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu-85"},
			--Tanks_medium
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t-44"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54a"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54b"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-55a"},
				{priority = 0.25, class = UnitClass.Tank, period = "mid", unit = "ot-55"},
				{priority = 0.3, class = UnitClass.Tank, period = "mid", unit = "zsu-57-2"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "su-122-54"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-62_1967"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "it-1"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "shilka"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "t-10m"},
			--SPG
				--{priority = 0.2, class = UnitClass.ArtilleryTank, period = "mid", unit = "2s3"},
				{priority = 0.1, class = UnitClass.ArtilleryTank, period = "mid", unit = "bm-14-16"}
			},
			["usa"] = {--United States
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_reservist(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAP(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAT(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lrrp(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_moto(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_weapon_moto(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_acav_moto_ai(usa)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(usa)"},
			--Automatic_weaponry
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m63_browning"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m45_maxson"},
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m40"},
			--Howitzers
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "m29_mortar"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "m30_mortar"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "m98_howtar"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m116_packhow"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m60"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m40"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m35_guntruck"},
			--Tanks_light
				{priority = 0.75, class = UnitClass.Tank, period = "mid", unit = "m114a1"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "m114a2"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m113_m40"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m125"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m106"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m163"},				
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m42"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m132_zippo"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m50"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m56"},
				{priority = 0.75, class = UnitClass.Tank, period = "mid", unit = "m551"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48a1"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m67_zippo"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48a3"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m60a1"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m728"},				
			--Tanks_heavy
				{priority = 0.5, class = UnitClass.HeavyTank, period = "mid", unit = "m103"},				
			--SPG
				{priority = 0.2, class = UnitClass.ArtilleryTank, period = "mid", unit = "m108"},
				{priority = 0.2, class = UnitClass.ArtilleryTank, period = "mid", unit = "m109"}
			},
			["prc"] = {--Peoples Republic of China
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_militia(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript_antitank(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_militia_ambush(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(prc)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_autorifle(prc)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_guards(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_assault(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_masswave_ai(prc)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(prc)"},
			--Automatic_weaponry
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "dshk_aa_prc"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "zpu-4_prc"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "37mm_61k_prc"},
			--AT_Weapons
				--{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "b-10_prc"},
			--Howitzers
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "82mm_bm37_prc"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "120mm_pm38_prc"},
			--Rocket Artillery
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "type63_mrl"},
				{priority = 0.3, class = UnitClass.ArtilleryTank, period = "mid", unit = "bm-13-17m_prc"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "btr-40_type55"},
			--Tanks_light
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "su76_prc"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "type62_lt"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-34-85_prc"},	
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "type58_tank"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "su100_prc"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "type59"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "is2_prc"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "isu152_prc"}
			--SPG
			},
			["frg"] = {--Federal Republic of Germany - aka West Germany
			--Infantry Singles
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(frg)"},
			--Infantry Squads
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "squad_reservist(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAP(frg)"},
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "squad_fireteamAT(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamDM(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lrrp(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_mech(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgren_mech_ai(frg)"},
			--HMGs
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "mg3_lafette"},
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m63g"},
			--Anti_Aircraft
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m45g"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "40mm_bofors_l70_frg"},
			--Anti_Tank
				{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "m40g"},
			--Mortars
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m29g_mortar"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "120mm_krh40_frg"},
			--Infantry_Support
			--Artillery
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m101g"},
			--	{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m114g"},
			--	{priority = 0.1, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m115g"},	
			--Rocket_Artillery
			--Wheel_vehicles	
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "munga4_mg3"},
			--APCs/BTRs
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "spz_112"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid",  unit = "spz_123_m40"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "rakjpz_1"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m41g"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m42g"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m47g"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m48g"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid",  unit = "m48a2c"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid",  unit = "leopard_1"},
			--Tanks_heavy
			--SPG
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m108g"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m109g"}
			}
		}
	},
	{--purchase 5
		Repeat = 3,
		Units = {
			["ger"] = {--Germany
			--Infantry Singles
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(ger)"},
				{priority = 2.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_bazooker(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_riflegrenade(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(ger)"},

			--Infantry Squads


				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lw_fusilier_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_recon_late(ger)"},
				{priority = 3.5, class = UnitClass.Infantry, period = "mid", unit = "squad_grenadiere_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgrenadiere_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_jager_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_fusilier_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_gebirgsjaeger_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgrenadiere_gd_late(ger)"},
			
			--Cannons
			--HMGs
			--	{priority = 3.5, class = UnitClass.Vehicle, period = "mid", unit = "mg42_lafette"},

			--Anti_Aircraft
			--	{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "20mm_flak30"},
			--	{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "37mm_flak37"},

			--Anti_Tank
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "37mm_pak36_late"},
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "50mm_pak38_late"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "75mm_pak40"},

			--Mortars
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "80mm_sgrw34"},

			--Infantry_Support
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "75mm_leig18"},

			--Artillery
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "105mm_lefh18"},

			--Rocket_Artillery

			--Wheel_vehicles
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "bmw_r71"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "kubelwagen_mg"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "blitz3_6_flak30"},
				{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz231"},
				{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz221"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz222a"},

			--Half_tracks
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz251c"},

			--Tanks_light

			--Tanks_medium


				{priority = 2.5, class = UnitClass.Tank, period = "mid", unit = "panzer3m"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "panzer3n"},
				{priority = 3.0, class = UnitClass.Tank, period = "mid", unit = "panzer4g"},
				{priority = 3.5, class = UnitClass.Tank, period = "mid", unit = "panzer4h"},

			--Tanks_heavy
				{priority = 2.5, class = UnitClass.HeavyTank, period = "mid", unit = "panzer5a"},
				{priority = 1.5, class = UnitClass.HeavyTank, period = "mid", unit = "tiger1e"},

			--SPG
				{priority = 2.5, class = UnitClass.ATTank, period = "mid", unit = "marder3m"},
				{priority = 3.0, class = UnitClass.ATTank, period = "mid", unit = "stug3g"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "stuh42"}
			},
			["rus"] = {--Russia
			--Infantry Singles
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(rus)"},
				{priority = 1.5, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(rus)"},
				{priority = 2.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_bazooker(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(rus)"},

			--Infantry Squads

				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_partisan(rus)"},
				{priority = 3.5, class = UnitClass.Infantry, period = "mid", unit = "squad_rifleunit(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_at_rifle(rus)"},

				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscripts_late(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_recon_late(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_smg(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_guardsrifle(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_smg_heavy(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_marines_late(rus)"},

			--Cannons
			--HMGs
			--	{priority = 3.5, class = UnitClass.Vehicle, period = "mid", unit = "maxim"},
			--	{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "sg43_stand"},
			--	{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "dshk_stan"},
			--	{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "dshk_aa"},

			--Anti_Aircraft
			--	{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "25mm_72k"},
			--	{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "37mm_61k"},

			--Anti_Tank
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "45mm_m42"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "57mm_zis2"},
				{priority = 2.0, class = UnitClass.ATTank, period = "mid", unit = "76mm_zis3"},

			--Mortars
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "82mm_bm37"},

			--Infantry_Support
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "76mm_m43"},

			--Artillery
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "122mm_m30"},

			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "gaz_aaa_72k"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "ba10"},
				{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "gaz67b"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "ba64"},

			--Tanks_light
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t20"},
				{priority = 3.0, class = UnitClass.Tank, period = "mid", unit = "t70"},

			--Tanks_medium
				{priority = 3.5, class = UnitClass.Tank, period = "late ", unit = "t3476_43"},
				{priority = 2.5, class = UnitClass.Tank, period = "late ", unit = "t3485_44"},

			--Tanks_heavy
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid", unit = "kv1s"},
				{priority = 0.5, class = UnitClass.HeavyTank, period = "mid", unit = "is1_43"},
				{priority = 1.5, class = UnitClass.HeavyTank, period = "mid", unit = "is2_43"},

			--SPG
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "su76"},
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "su85"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "su122"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "su152"}
			},
			["fin"] = {--Finland
			--Infantry Singles
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(fin)"},
				{priority = 1.5, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(fin)"},
				{priority = 1.5, class = UnitClass.ATInfantry, period = "mid", unit = "single_bazooker(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(fin)"},

			--Infantry Squads
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_assault(fin)"},

				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_marksmen(fin)"},

				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_reserves_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_scout_late(fin)"},
				{priority = 3.5, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_antitank_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_jag_antitank_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_cav_late(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_jag_late(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_border_jag_late(fin)"},

			--Cannons
			--HMGs

			--Anti_Aircraft
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "20mm_itk35"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "20mm_itk40"},

			--Anti_Tank
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "20mm_l39"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "37mm_pstk36"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "45mm_pstk32"},
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "76mm_k02"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "76mm_k36"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "75mm_pstk9738"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "75mm_itk37"},

			--Mortars
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "50mm_krh38"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "81mm_krh36"},

			--Infantry_Support
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "76mm_m1927_fin"},

			--Artillery
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "105mm_k13"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "120mm_k78_31"},

			--Wheel_vehicles
			--	{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "m42_truppenfahrrad"},

			--BTRs
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "l182"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "t20_fin"},

			--Tanks_light
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "vickers_6t_altb"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "t26_33_fin"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "t26e"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "kht130_fin"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "bt42"},

			--Tanks_medium
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t28_38_fin"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t3476_41_fin"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t3485_44_fin"},

			--Tanks_heavy
			--SPG
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "stug3g_fin"}
			},
			["sov"] = {--Soviet Union
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_maneuv(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteam(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_mech(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_moto_ai(sov)"},
				{priority = 0.25, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_mech_ai(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_mech_btr50_ai(sov)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(sov)"},
			--Automatic_weaponry
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "dshk_aa_sov"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "zpu-4"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "57mm_s-60"},
			--AT_Weapons
				--{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "b-10_82mm"},
				--{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "spg9"},
			--Howitzers
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "82mm_bm37_sov"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "120mm_pm38_sov"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "d30a"},
			--Wheel_vehicles
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-1"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "btr-40a"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "btr-152a"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "9p110"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "9p122"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "pt-76b"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu57"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu-85"},
			--Tanks_medium
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t-44"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54a"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54b"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-55a"},
				{priority = 0.25, class = UnitClass.Tank, period = "mid", unit = "ot-55"},
				{priority = 0.3, class = UnitClass.Tank, period = "mid", unit = "zsu-57-2"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "su-122-54"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-62_1967"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "it-1"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "shilka"},			
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "t-10m"},
			--SPG
				--{priority = 0.2, class = UnitClass.ArtilleryTank, period = "mid", unit = "2s3"},
				{priority = 0.1, class = UnitClass.ArtilleryTank, period = "mid", unit = "bm-14-16"}
			},
			["usa"] = {--United States
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_reservist(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAP(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAT(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lrrp(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_moto(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_weapon_moto(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_acav_moto_ai(usa)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(usa)"},
			--Automatic_weaponry
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m63_browning"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m45_maxson"},
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m40"},
			--Howitzers
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "m29_mortar"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "m30_mortar"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "m98_howtar"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m116_packhow"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m60"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m40"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m35_guntruck"},
			--Tanks_light
				{priority = 0.75, class = UnitClass.Tank, period = "mid", unit = "m114a1"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "m114a2"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m113_m40"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m125"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m106"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m163"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m42"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m132_zippo"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m50"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m56"},
				{priority = 0.75, class = UnitClass.Tank, period = "mid", unit = "m551"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "m551_acav"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48a1"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m67_zippo"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48a3"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m60a1"},
				{priority = 0.3, class = UnitClass.Tank, period = "mid", unit = "m60a1e2"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m728"},				
			--Tanks_heavy
				{priority = 0.5, class = UnitClass.HeavyTank, period = "mid", unit = "m103"},
			--SPG
				{priority = 0.2, class = UnitClass.ArtilleryTank, period = "mid", unit = "m108"},
				{priority = 0.2, class = UnitClass.ArtilleryTank, period = "mid", unit = "m109"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "m110"}
			},
			["prc"] = {--Peoples Republic of China
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_militia(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript_antitank(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_militia_ambush(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(prc)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_autorifle(prc)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_guards(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_assault(prc)"},
				
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_mech_ai(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_masswave_ai(prc)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(prc)"},
			--Automatic_weaponry
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "dshk_aa_prc"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "zpu-4_prc"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "37mm_61k_prc"},
			--AT_Weapons
				--{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "b-10_prc"},
			--Howitzers
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "82mm_bm37_prc"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "120mm_pm38_prc"},
			--Rocket Artillery
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "type63_mrl"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "bm-13-17m_prc"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "btr-40_type55"},
			--Tanks_light
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "su76_prc"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "type62_lt"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-34-85_prc"},	
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "type58_tank"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "su100_prc"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "type59"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "is2_prc"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "isu152_prc"}
			--SPG
			},
			["frg"] = {--Federal Republic of Germany - aka West Germany
			--Infantry Singles
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(frg)"},
			--Infantry Squads
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "squad_reservist(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAP(frg)"},
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "squad_fireteamAT(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamDM(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lrrp(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_mech(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgren_mech_ai(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgren_mech2_ai(frg)"},
			--HMGs
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "mg3_lafette"},
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m63g"},
			--Anti_Aircraft
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m45g"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "40mm_bofors_l70_frg"},
			--Anti_Tank
				{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "m40g"},
			--Mortars
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m29g_mortar"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "120mm_krh40_frg"},
			--Infantry_Support
			--Artillery
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m101g"},
			--	{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m114g"},
			--	{priority = 0.1, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m115g"},	
			--Rocket_Artillery
			--Wheel_vehicles	
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "munga4_mg3"},
			--APCs/BTRs
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "spz_112"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid",  unit = "spz_123_m40"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "rakjpz_1"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m41g"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid",  unit = "m42g"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m47g"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m48g"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid",  unit = "m48a2c"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid",  unit = "leopard_1"},
			--Tanks_heavy
			--SPG
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m108g"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m109g"}
			}
		}
	},
	{--purchase 5
		Repeat = 1,
		Units = {
			["sov"] = {--Soviet Union
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_maneuv(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteam(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_mech(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_moto_ai(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_mech_ai(sov)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(sov)"},
			--Automatic_weaponry
			--AT_Weapons
				--{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "b-10_82mm"},
				--{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "spg9"},
			--Howitzers
			--Wheel_vehicles
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-1"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "btr-40a"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "btr-152a"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "9p110"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "9p122"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "pt-76b"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu57"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu-85"},
			--Tanks_medium
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t-44"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54a"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54b"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-55a"},
				{priority = 0.25, class = UnitClass.Tank, period = "mid", unit = "ot-55"},
				{priority = 0.3, class = UnitClass.Tank, period = "mid", unit = "zsu-57-2"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "su-122-54"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-62_1967"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "it-1"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "shilka"},
				--{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "t-64"},			
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "t-10m"},
			--SPG
				--{priority = 0.2, class = UnitClass.ArtilleryTank, period = "mid", unit = "2s3"},
				{priority = 0.1, class = UnitClass.ArtilleryTank, period = "mid", unit = "bm-14-16"},
				{priority = 0.1, class = UnitClass.ArtilleryTank, period = "mid", unit = "bm-21_grad"}
			},
			["usa"] = {--United States
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_reservist(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAP(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAT(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lrrp(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_moto(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_weapon_moto(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_acav_moto_ai(usa)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(usa)"},
			--Automatic_weaponry
			--AT_Weapons
				{priority = 2.0, class = UnitClass.ATTank, period = "mid", unit = "m40"},
			--Howitzers
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m60"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m40"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m35_guntruck"},
			--Tanks_light
				{priority = 0.75, class = UnitClass.Tank, period = "mid", unit = "m114a1"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "m114a2"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m42"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m132_zippo"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m125"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m106"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m163"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m50"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m56"},
				{priority = 0.75, class = UnitClass.Tank, period = "mid", unit = "m551"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "m551_acav"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48a1"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m67_zippo"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48a3"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m60a1"},
				{priority = 0.3, class = UnitClass.Tank, period = "mid", unit = "m60a1e2"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m728"},				
			--Tanks_heavy
				{priority = 0.5, class = UnitClass.HeavyTank, period = "mid", unit = "m103"},
			--SPG
				{priority = 0.2, class = UnitClass.ArtilleryTank, period = "mid", unit = "m108"},
				{priority = 0.2, class = UnitClass.ArtilleryTank, period = "mid", unit = "m109"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "m110"}
			},
			["prc"] = {--Peoples Republic of China
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_militia(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript_antitank(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_militia_ambush(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(prc)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_autorifle(prc)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_guards(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_assault(prc)"},
				
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_mech_ai(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_masswave_ai(prc)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(prc)"},
			--Automatic_weaponry
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "dshk_aa_prc"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "zpu-4_prc"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "37mm_61k_prc"},
			--AT_Weapons
				--{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "b-10_prc"},
			--Howitzers
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "btr-40_type55"},
			--Tanks_light
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "su76_prc"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "type62_lt"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-34-85_prc"},	
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "type58_tank"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "su100_prc"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "type59"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "is2_prc"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "isu152_prc"}
			--SPG
			},
			["frg"] = {--Federal Republic of Germany - aka West Germany
			--Infantry Singles
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(frg)"},
			--Infantry Squads
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "squad_reservist(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAP(frg)"},
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "squad_fireteamAT(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamDM(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lrrp(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_mech(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgren_mech_ai(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgren_mech2_ai(frg)"},
			--HMGs
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "mg3_lafette"},
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m63g"},
			--Anti_Aircraft
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m45g"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "40mm_bofors_l70_frg"},
			--Anti_Tank
				--{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "m40g"},
			--Mortars
			--Infantry_Support
			--Artillery
			--Rocket_Artillery
			--Wheel_vehicles	
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "munga4_mg3"},
			--APCs/BTRs
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "spz_112"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid",  unit = "spz_123_m40"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "rakjpz_1"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m41g"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid",  unit = "m42g"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m47g"},
				--{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m48g"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid",  unit = "m48a2c"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid",  unit = "leopard_1"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid",  unit = "leopard_1a1"},
			--Tanks_heavy
			--SPG
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m108g"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m109g"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m110g"}
			}
		}
	},
	{--purchase 6
		Repeat = 0, --infinite
		Units = {
			["ger"] = {--Germany
			--Infantry Singles
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(ger)"},
				{priority = 2.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_bazooker(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_riflegrenade(ger)"},		
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(ger)"},

			--Infantry Squads


				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lw_fusilier_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_recon_late(ger)"},
				{priority = 3.5, class = UnitClass.Infantry, period = "mid", unit = "squad_grenadiere_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgrenadiere_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_jager_late(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_fusilier_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_gebirgsjaeger_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgrenadiere_gd_late(ger)"},
			
			--Cannons
			--HMGs
			--	{priority = 3.5, class = UnitClass.Vehicle, period = "mid", unit = "mg42_lafette"},

			--Anti_Aircraft
			--	{priority = 2.5, class = UnitClass.ATTank, period = "mid", unit = "20mm_flak30"},
			--	{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "37mm_flak37"},

			--Anti_Tank
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "37mm_pak36_late"},
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "50mm_pak38_late"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "75mm_pak40"},

				--Doctrine Units
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "88mm_pak4341"},

			--Mortars
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "80mm_sgrw34"},

				--Doctrine Units
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "120mm_sgrw42"},

			--Infantry_Support
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "75mm_leig18"},

			--Artillery
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "105mm_lefh18"},
				{priority = 0.1, class = UnitClass.ArtilleryTank, period = "mid", unit = "600mm_thor"},

			--Rocket_Artillery
				--Doctrine Units
			--	{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "150mm_nebelwerfer41"},
			--	{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "300mm_nebelwerfer42"},

			--Wheel_vehicles
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "bmw_r71"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "kubelwagen_mg"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "blitz3_6_flak30"},
				{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz231"},
				{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz221"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz222a"},


				--Doctrine Units
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz234_2"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz234_1"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz234_3"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz234_4"},

			--Half_tracks
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz251c"},

				--Doctrine Units
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz250a_3"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "sdkfz7_2"},

			--Tanks_light

				--Doctrine Units
				{priority = 0.1, class = UnitClass.Tank, period = "mid", unit = "panzer1f"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "panzer2l"},

			--Tanks_medium


				{priority = 2.5, class = UnitClass.Tank, period = "mid", unit = "panzer3m"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "panzer3n"},
				{priority = 3.0, class = UnitClass.Tank, period = "mid", unit = "panzer4g"},
				{priority = 3.5, class = UnitClass.Tank, period = "mid", unit = "panzer4h"},

				--Doctrine Units
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "panzer3_flamm"},
				{priority = 3.0, class = UnitClass.Tank, period = "mid", unit = "panzer4j"},

			--Tanks_heavy
				{priority = 2.5, class = UnitClass.HeavyTank, period = "mid", unit = "panzer5a"},
				{priority = 1.5, class = UnitClass.HeavyTank, period = "mid", unit = "tiger1e"},

				--Doctrine Units
				{priority = 0.0, class = UnitClass.HeavyTank, period = "mid", unit = "panzer5d"},
				{priority = 2.5, class = UnitClass.HeavyTank, period = "mid", unit = "panzer5g"},
				{priority = 0.1, class = UnitClass.HeavyTank, period = "mid", unit = "tiger1hunt"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "tiger2h"},

			--SPG
				{priority = 2.5, class = UnitClass.ATTank, period = "mid", unit = "marder3m"},
				{priority = 3.0, class = UnitClass.ATTank, period = "mid", unit = "stug3g"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "stuh42"},

				--Doctrine Units
				{priority = 0.1, class = UnitClass.Tank, period = "mid", unit = "grille_m"},
				{priority = 0.1, class = UnitClass.ArtilleryTank, period = "mid", unit = "grille_k"},
				{priority = 2.5, class = UnitClass.ATTank, period = "mid", unit = "hetzer"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "stug3g_late"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "sturmpanzer4"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "jagdpanther"},
				{priority = 0.1, class = UnitClass.ATTank, period = "mid", unit = "ferdinand"},
				{priority = 0.1, class = UnitClass.ATTank, period = "mid", unit = "jagdtiger"},
				{priority = 0.1, class = UnitClass.ATTank, period = "mid", unit = "sturmtiger"}
			},
			["rus"] = {--Russia
			--Infantry Singles
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(rus)"},
				{priority = 1.5, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(rus)"},
				{priority = 2.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_bazooker(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(rus)"},

			--Infantry Squads

				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_partisan(rus)"},
				{priority = 3.5, class = UnitClass.Infantry, period = "mid", unit = "squad_rifleunit(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_at_rifle(rus)"},

				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscripts_late(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_recon_late(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_smg(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_guardsrifle(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_smg_heavy(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_marines_late(rus)"},

			--Cannons
			--HMGs
			--	{priority = 3.5, class = UnitClass.Vehicle, period = "mid", unit = "maxim"},
			--	{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "sg43_stand"},
			--	{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "dshk_stan"},
			--	{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "dshk_aa"},

				--Doctrine Units

			--Anti_Aircraft
			--	{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "25mm_72k"},
			--	{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "37mm_61k"},

			--Anti_Tank
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "45mm_m42"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "57mm_zis2"},
				{priority = 2.0, class = UnitClass.ATTank, period = "mid", unit = "76mm_zis3"},

				--Doctrine Units
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "100mm_bs3"},

			--Mortars
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "82mm_bm37"},

				--Doctrine Units=
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "120mm_pm38"},

			--Infantry_Support
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "76mm_m43"},

			--Artillery
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "122mm_m30"},

			--Rocket_Artillery
				--Doctrine Units
			--	{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "bm31_12"},

			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "gaz_aaa_72k"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "ba10"},
				{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "gaz67b"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "ba64"},

				--Doctrine Units

			--Tanks_light
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t20"},
				{priority = 3.0, class = UnitClass.Tank, period = "mid", unit = "t70"},

				--Doctrine Units
				{priority = 0.1, class = UnitClass.Tank, period = "mid", unit = "t50"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t60"},
				{priority = 3.0, class = UnitClass.Tank, period = "mid", unit = "t70m"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "valentine7"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "valentine9"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m3_stuart_late_rus"},

			--Tanks_medium
				{priority = 3.5, class = UnitClass.Tank, period = "late ", unit = "t3476_43"},
				{priority = 2.5, class = UnitClass.Tank, period = "late ", unit = "t3485_44"},

				--Doctrine Units
				{priority = 0.1, class = UnitClass.Tank, period = "late ", unit = "t3457_43"},
				{priority = 1.0, class = UnitClass.Tank, period = "late ", unit = "t3476_43_flame"},
				{priority = 0.1, class = UnitClass.Tank, period = "late ", unit = "t3485_44b"},
				{priority = 0.1, class = UnitClass.Tank, period = "late ", unit = "t3485_44a_flame"},
				{priority = 1.0, class = UnitClass.Tank, period = "late ", unit = "m4a2_75_late_rus"},

			--Tanks_heavy
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid", unit = "kv1s"},
				{priority = 0.5, class = UnitClass.HeavyTank, period = "mid", unit = "is1_43"},
				{priority = 1.5, class = UnitClass.HeavyTank, period = "mid", unit = "is2_43"},

				--Doctrine Units
				{priority = 0.5, class = UnitClass.HeavyTank, period = "mid", unit = "churchill3"},
				{priority = 0.5, class = UnitClass.HeavyTank, period = "mid", unit = "kv85"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid", unit = "is2_44"},
				{priority = 0.5, class = UnitClass.HeavyTank, period = "mid", unit = "is2_45"},

			--SPG
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "su76"},
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "su85"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "su122"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "su152"},

				--Doctrine Units
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "su85m"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "su100"},
				{priority = 2.0, class = UnitClass.ATTank, period = "mid", unit = "isu122s"},
				{priority = 2.0, class = UnitClass.ATTank, period = "mid", unit = "isu152"}
			},
			["fin"] = {--Finland
			--Infantry Singles
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(fin)"},
				{priority = 1.5, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(fin)"},
				{priority = 1.5, class = UnitClass.ATInfantry, period = "mid", unit = "single_bazooker(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(fin)"},

			--Infantry Squads
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_assault(fin)"},

				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_marksmen(fin)"},

				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_reserves_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_scout_late(fin)"},
				{priority = 3.5, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_antitank_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_jag_antitank_late(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_cav_late(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_jag_late(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_border_jag_late(fin)"},

			--Cannons
			--HMGs

			--Anti_Aircraft
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "20mm_itk35"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "20mm_itk40"},

			--Anti_Tank
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "20mm_l39"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "37mm_pstk36"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "45mm_pstk32"},
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "76mm_k02"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "76mm_k36"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "75mm_pstk9738"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "75mm_itk37"},

				--Doctrine Units
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "47mm_pstk39"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "76mm_k02_30_40"},
				{priority = 0.1, class = UnitClass.ATTank, period = "mid", unit = "75mm_k44"},

			--Mortars
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "50mm_krh38"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "81mm_krh36"},

				--Doctrine Units
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "120mm_krh40"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "170mm_minewerfer"},

			--Infantry_Support
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "76mm_m1927_fin"},

				--Doctrine Units
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "84mm_k18_late"},

			--Artillery
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "105mm_k13"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "120mm_k78_31"},

			--Wheel_vehicles
				--{priority = 1.5, class = UnitClass.Vehicle, period = "mid", unit = "m42_truppenfahrrad"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "ford_3ton_breda"},

			--BTRs
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "l182"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "t20_fin"},

			--Tanks_light
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "vickers_6t_altb"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "t26_33_fin"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "t26e"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid", unit = "kht130_fin"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "bt42"},

				--Doctrine Units
				{priority = 0.1, class = UnitClass.Tank, period = "mid", unit = "t50_fin"},
				{priority = 0.1, class = UnitClass.Tank, period = "mid", unit = "l62"},

			--Tanks_medium
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t28_38_fin"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t3476_41_fin"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "t3485_44_fin"},

				--Doctrine Units

			--Tanks_heavy
				--Doctrine Units
				{priority = 0.1, class = UnitClass.Tank, period = "mid", unit = "kv1_40e_fin"},
				{priority = 0.1, class = UnitClass.Tank, period = "mid", unit = "kv1_42_fin"},
				{priority = 0.1, class = UnitClass.ATTank, period = "mid", unit = "isu152_fin"},

			--SPG
				{priority = 1.5, class = UnitClass.ATTank, period = "mid", unit = "stug3g_fin"},

				--Doctrine Units
			},
			["sov"] = {--Soviet Union
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_maneuv(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteam(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_mech(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_moto_ai(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_mech_ai(sov)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(sov)"},
			--Automatic_weaponry
			--AT_Weapons
				--{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "b-10_82mm"},
				--{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "spg9"},
			--Howitzers
			--Wheel_vehicles
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-1"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "btr-40a"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "btr-152a"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "9p110"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "9p122"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "pt-76b"},	
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu57"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu-85"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54b"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54a"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-55a"},
				{priority = 0.25, class = UnitClass.Tank, period = "mid", unit = "ot-55"},
				{priority = 0.3, class = UnitClass.Tank, period = "mid", unit = "zsu-57-2"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "su-122-54"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-62_1967"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "it-1"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "shilka"},
				--{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "t-64"},			
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "t-10m"},
			--SPG
				--{priority = 0.2, class = UnitClass.ArtilleryTank, period = "mid", unit = "2s3"},
				{priority = 0.1, class = UnitClass.ArtilleryTank, period = "mid", unit = "bm-14-16"},
				{priority = 0.1, class = UnitClass.ArtilleryTank, period = "mid", unit = "bm-21_grad"}
			},
			["usa"] = {--United States
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_reservist(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAP(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAT(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lrrp(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_moto(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_weapon_moto(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_acav_moto_ai(usa)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(usa)"},
			--Automatic_weaponry
			--AT_Weapons
				{priority = 2.0, class = UnitClass.ATTank, period = "mid", unit = "m40"},
			--Howitzers
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m60"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m40"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m35_guntruck"},
			--Tanks_light
				{priority = 0.75, class = UnitClass.Tank, period = "mid", unit = "m114a1"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "m114a2"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m113_m40"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m125"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m106"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m163"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m42"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m132_zippo"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m50"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m56"},
				{priority = 0.75, class = UnitClass.Tank, period = "mid", unit = "m551"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "m551_acav"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48a1"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m67_zippo"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48a3"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m60a1"},
				{priority = 0.3, class = UnitClass.Tank, period = "mid", unit = "m60a1e2"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m728"},				
			--Tanks_heavy
				{priority = 0.5, class = UnitClass.HeavyTank, period = "mid", unit = "m103"},
			--SPG
				{priority = 0.2, class = UnitClass.ArtilleryTank, period = "mid", unit = "m108"},
				{priority = 0.2, class = UnitClass.ArtilleryTank, period = "mid", unit = "m109"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "m110"}
			},
			["prc"] = {--Peoples Republic of China
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_militia(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript_antitank(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_militia_ambush(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(prc)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_autorifle(prc)"},
				{priority = 1.5, class = UnitClass.Infantry, period = "mid", unit = "squad_guards(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_assault(prc)"},
				
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_mech_ai(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_masswave_ai(prc)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(prc)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(prc)"},
			--Automatic_weaponry
			--AT_Weapons
				--{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "b-10_prc"},
			--Howitzers
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "82mm_bm37_prc"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "120mm_pm38_prc"},
			--Rocket Artillery
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "type63_mrl"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "bm-13-17m_prc"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "btr-40_type55"},
			--Tanks_light
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "su76_prc"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "type62_lt"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-34-85_prc"},	
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "type58_tank"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "su100_prc"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "type59"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "is2_prc"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "isu152_prc"}
			--SPG
			},
			["frg"] = {--Federal Republic of Germany - aka West Germany
			--Infantry Singles
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(frg)"},
			--Infantry Squads
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "squad_reservist(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamAP(frg)"},
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "squad_fireteamAT(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteamDM(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_lrrp(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_mech(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgren_mech_ai(frg)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pzgren_mech2_ai(frg)"},
			--HMGs
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "mg3_lafette"},
				--{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m63g"},
			--Anti_Aircraft
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m45g"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "40mm_bofors_l70_frg"},
			--Anti_Tank
				{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "m40g"},
			--Mortars
				--{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m29g_mortar"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "120mm_krh40_frg"},
			--Infantry_Support
			--Artillery
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m101g"},
			--	{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m114g"},
			--	{priority = 0.1, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m115g"},	
			--Rocket_Artillery
			--Wheel_vehicles	
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "munga4_mg3"},
			--APCs/BTRs
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "spz_112"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "spz_123_m40"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid",  unit = "rakjpz_1"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m41g"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m42g"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m47g"},
				--{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m48g"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m48a2c"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid",  unit = "leopard_1"},
				{priority = 1.5, class = UnitClass.Tank, period = "mid",  unit = "leopard_1a1"},
			--Tanks_heavy
			--SPG
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m108g"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m109g"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m110g"}
			}
		}
	}
}
