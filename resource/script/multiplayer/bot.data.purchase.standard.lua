Purchases["standard"] = {
	{--purchase 1
		Repeat = 3,
		Units = {
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
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_moto_ai(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_mech_btr50_ai(sov)"},
				
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
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m1919"},
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
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m1919"},
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
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "m48"}	
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
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "type58_tank"},
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
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m48a2c"},
			--Tanks_heavy
			--SPG
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid",  unit = "m108g"}
			}
		}
	},
	{--purchase intermediate, tank only
		Repeat = 1,
		Units = {
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
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "type59"},
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
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m48a2c"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "leopard_1"}
			--Tanks_heavy
			--SPG
			}
		}
	},
	{--purchase 4
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
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m1919"},
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
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "type63_mrl"},
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
				{priority = 0.5, class = UnitClass.ATTank, period = "mid",  unit = "rakjpz_1"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m41g"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m42g"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m47g"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m48g"},
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
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m1919"},
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
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "type63_mrl"},
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
				{priority = 0.5, class = UnitClass.ATTank, period = "mid",  unit = "rakjpz_1"},
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
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m1919"},
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
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "type63_mrl"},
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
				{priority = 0.5, class = UnitClass.ATTank, period = "mid",  unit = "rakjpz_1"},
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
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m1919"},
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
				{priority = 0.5, class = UnitClass.ATTank, period = "mid",  unit = "rakjpz_1"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m41g"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid",  unit = "m42g"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m47g"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m48g"},
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
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m1919"},
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
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "mid", unit = "type63_mrl"},
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
				{priority = 0.5, class = UnitClass.ATTank, period = "mid",  unit = "spz_123_m40"},
				{priority = 0.5, class = UnitClass.ATTank, period = "mid",  unit = "rakjpz_1"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m41g"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m42g"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m47g"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid",  unit = "m48g"},
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
