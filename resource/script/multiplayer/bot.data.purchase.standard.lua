Purchases["standard"] = {
	{--purchase 1
		Repeat = 3,
		Units = {
			["ger"] = {--Germany
			--Infantry 
				{priority = 2.0, class = UnitClass.Infantry, period = "early", unit = "squad_light(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_strafbatallion(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_recon(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_regular(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_regular_armored(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pionier(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_lw_fusilier_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_recon_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_grenadiere_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_pzgrenadiere_late(ger)"},
			--	{priority = 2.0, class = UnitClass.Infantry, period = "early mid", unit = "squad_pionier(ger)"},
			--	{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_grenadiere(ger)"},
			--	{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_sturm(ger)"},
			--	{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "squad_fallschirmjaeger(ger)"},

			--Automatic_weaponry
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
			--Tanks_light
			--Tanks_medium
			--Tanks_heavy
			--SPG

			},
			["rus"] = {--Russia
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, period = "early", unit = "squad_basic(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "early", unit = "squad_heavy(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "squad_partisan(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscripts(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_recon(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifleunit_alt(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifleunit_42(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_conscripts_late(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_recon_late(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid late", unit = "squad_rifleunit(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_rifleunit_44(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_rifleunit_heavy(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_smg(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_smg_heavy(rus)"},
			--	{priority = 2.0, class = UnitClass.Infantry, period = "mid late", unit = "squad_guardsrifle(rus)"},
			--	{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "squad_marines(rus)"},
			--	{priority = 1.0, class = UnitClass.Infantry, period = "early", unit = "squad_paratrooper(rus)"}
			--Automatic_weaponry
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
			--Tanks_light
			--Tanks_medium
			--Tanks_heavy
			--SPG
			},
			["sov"] = {--Soviet Union
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_maneuv(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_fireteam(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscript_moto(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifle_moto(sov)"}
			--Automatic_weaponry
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
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_weapon_moto(usa)"}
			--Automatic_weaponry
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
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
				--Infantry
				{priority = 2.0, class = UnitClass.Infantry, period = "early", unit = "squad_light(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_strafbatallion(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_recon(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_regular(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_regular_armored(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pionier(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_regular_vet(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_gd_mid(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_lw_fusilier_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_recon_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_grenadiere_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_pzgrenadiere_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_fusilier_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_jager_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_gebirgsjaeger_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_pzgrenadiere_gd_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_mg(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_sniper(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_flamer(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_riflegrenade(ger)"},		
				{priority = 1.0, class = UnitClass.ATInfantry, period = "early mid", unit = "single_at(ger)"},
				{priority = 1.0, class = UnitClass.ATInfantry, period = "late", unit = "single_bazooker(ger)"},
			--Automatic_weaponry
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "mg34_lafette"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "mg42_lafette"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "20mm_flak30"},
			--AT_Weapons
			--Howitzers				
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "early", unit = "p204_f"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "early mid late", unit = "sdkfz251c"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "early mid late", unit = "sdkfz231"},		
				{priority = 1.0, class = UnitClass.Vehicle, period = "early mid late", unit = "sdkfz221"},	
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "panzer1b"}		
			--Tanks_medium
			--Tanks_heavy			
			--SPG
			},
			["rus"] = {--Russia
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "squad_partisan(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscripts(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_recon(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifleunit_alt(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifleunit_42(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_marines(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_paras(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_conscripts_late(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_recon_late(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid late", unit = "squad_rifleunit(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_rifleunit_44(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_rifleunit_heavy(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_smg(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_smg_heavy(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_guardsrifle(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_guards_smg_heavy(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_marines_late(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early", unit = "squad_paratrooper(rus)"},
			--Automatic_weaponry
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "25mm_72k"},
			--AT_Wreapon
			--Howitzers
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "early", unit = "ba20"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid late", unit = "ba64"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "early mid late", unit = "ba6"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t26_31"}		
			--Tanks_medium
			--Tanks_heavy
			--SPG
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
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_moto"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(sov)"},
			--Automatic_weaponry
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-1"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "pt-76"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu57"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu-85"}
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
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m1919"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m113_m40"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m125"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m106"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m41"},		
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m132_zippo"}
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
				--Infantry
				{priority = 2.0, class = UnitClass.Infantry, period = "early", unit = "squad_light(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_strafbatallion(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_recon(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_regular(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_regular_armored(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pionier(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_regular_vet(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_gd_mid(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_lw_fusilier_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_recon_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_grenadiere_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_pzgrenadiere_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_fusilier_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_jager_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_gebirgsjaeger_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_pzgrenadiere_gd_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_mg(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_sniper(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_flamer(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_riflegrenade(ger)"},		
				{priority = 1.0, class = UnitClass.ATInfantry, period = "early mid", unit = "single_at(ger)"},
				{priority = 1.0, class = UnitClass.ATInfantry, period = "late", unit = "single_bazooker(ger)"},
			--Automatic_weaponry
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "mg34_lafette"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "mg42_lafette"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "20mm_flak30"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "37mm_flak37"},
			--AT_Weapons
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "37mm_pak36"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "47mm_pakt"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "75mm_leig18"},
			--Howitzers
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "80mm_sgrw34"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "105mm_lefh18"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "mid late", unit = "120mm_sgrw42"},				
			--Wheel_vehicles
				{priority = 2.0, class = UnitClass.Vehicle, period = "early", unit = "p204_f"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "early mid late", unit = "sdkfz251c"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "early mid late", unit = "sdkfz231"},	
				{priority = 2.0, class = UnitClass.Vehicle, period = "early mid late", unit = "sdkfz221"},		
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "panzer1b"},
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer2c"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "pz38t_g"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "panzer2l"},
				{priority = 0.2, class = UnitClass.Tank, period = "late", unit = "panzer1f"},
			--Tanks_medium
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer3f"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "early", unit = "panzer4f1"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid late", unit = "panzer3m"},
			--Tanks_heavy
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid", unit = "panzer5d"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "tiger1h"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "panzer5g"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "late", unit = "tiger1e"}	
			--SPG			
			},
			["rus"] = {--Russia
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, period = "early", unit = "squad_basic(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "early", unit = "squad_heavy(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "squad_partisan(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscripts(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_recon(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifleunit_alt(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifleunit_42(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_marines(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_paras(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_conscripts_late(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_recon_late(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid late", unit = "squad_rifleunit(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_rifleunit_44(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_rifleunit_heavy(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_smg(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_smg_heavy(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_guardsrifle(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_guards_smg_heavy(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_marines_late(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_mg(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_sniper(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_flamer(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_riflegrenade(rus)"},		
				{priority = 1.0, class = UnitClass.ATInfantry, period = "early mid late", unit = "single_at(rus)"},
			--Automatic_weaponry
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "maxim"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "dshk_stan"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "25mm_72k"},
			--AT_Weeapon
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "45mm_m37"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "75mm_m43"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "early mid late", unit = "76mm_f22"},
			--Howitzers
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "82mm_bm37"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "120mm_pm38"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "early", unit = "ba20"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid late", unit = "ba64"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "early mid late", unit = "ba6"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t26_31"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t26_33"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t26_39"},
				{priority = 1.0, class = UnitClass.Tank, period = "early mid", unit = "t40"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "t70"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "t70m"},
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "bt2"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "bt5"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "bt7"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t28"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t3476_40"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t3476_41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late ", unit = "t3476_43"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late ", unit = "t3457_43"},
			--Tanks_heavy
				{priority = 2.0, class = UnitClass.HeavyTank, period = "early", unit = "kv1_40"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid", unit = "kv1_41"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid late", unit = "kv1s"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "early mid", unit = "kv2_40"},
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "zis30"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "su76"},
				{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "su85"}
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
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_moto"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(sov)"},
			--Automatic_weaponry
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-1"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "9p110"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "pt-76"},	
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu57"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu-85"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "zsu-57-2"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "su-122-54"}
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
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m1919"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m40"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m35_guntruck"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m113_m40"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m125"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m106"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m42"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m132_zippo"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m56"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48_patton"}	
			--Tanks_heavy
			--SPG
			}
		}
	},
	{--purchase intermediate, tank only
		Repeat = 1,
		Units = {
			["ger"] = {--Germany
			--Infantry
			--Automatic_weaponry
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "mg34_lafette"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "mg42_lafette"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "20mm_flak30"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "37mm_flak37"},
			--AT_Weapons
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "37mm_pak36"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "47mm_pakt"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "75mm_leig18"},
			--Howitzers
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "80mm_sgrw34"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "105mm_lefh18"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "mid late", unit = "120mm_sgrw42"},				
			--Wheel_vehicles
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "p204_f"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "early mid late", unit = "sdkfz251c"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "early mid late", unit = "sdkfz231"},	
				{priority = 2.0, class = UnitClass.Vehicle, period = "early mid late", unit = "sdkfz221"},	
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "panzer1b"},
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer2c"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "panzer2f"},
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer3e"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "panzer35t"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "pz38t_f"},
				{priority = 0.2, class = UnitClass.Tank, period = "late", unit = "panzer1f"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "panzer2l"},
			--Tanks_medium
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer3f"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "early", unit = "panzer4d"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "panzer4f1"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "late", unit = "panzer3n"},	
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "panzer3j"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "panzer3j1"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "panzer3l"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid late", unit = "panzer3m"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "panzer4f2"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "panzer4j"},
			--SPG
				{priority = 2.0, class = UnitClass.ATTank, period = "early", unit = "panzerjager1"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "stug3b"},
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "stug3g"},
				{priority = 2.0, class = UnitClass.ATTank, period = "mid", unit = "marder2"},
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "marder3m"}
			},
			["rus"] = {--Russia
			--Infantry
			--Automatic_weaponry
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "maxim"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "dshk_stan"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "25mm_72k"},
			--AT_Weeapon
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "45mm_m37"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "75mm_m43"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "early mid late", unit = "76mm_f22"},
			--Howitzers
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "82mm_bm37"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "120mm_pm38"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "early", unit = "ba20"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid late", unit = "ba64"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "early mid", unit = "ba6"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t26_31"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t26_33"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t26_39"},
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t30"},
				{priority = 1.0, class = UnitClass.Tank, period = "early mid", unit = "t40"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late", unit = "t60"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "t70"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "t70m"},
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "bt2"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "bt5"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "bt7"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t28"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t3476_40"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t3476_41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late ", unit = "t3476_43"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late ", unit = "t3457_43"},
			--Tanks_heavy
				{priority = 2.0, class = UnitClass.HeavyTank, period = "early", unit = "kv1_40"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid", unit = "kv1_41"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid late", unit = "kv1s"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "early mid", unit = "kv2_40"},
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "zis30"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "su76"},
				{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "su85"}
			},
			["sov"] = {--Soviet Union
			--Infantry
			--Automatic_weaponry
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-1"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "9p110"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "pt-76"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu57"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu-85"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-55a"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "zsu-57-2"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "su-122-54"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-62a"}
				
			--Tanks_heavy
			--SPG
			},
			["usa"] = {--United States
			--Infantry
			--Automatic_weaponry
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m1919"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m40"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m35_guntruck"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m113_m40"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m125"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m106"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m42"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m132_zippo"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m50"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m56"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48_patton"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m67_zippo"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48a3"},	
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m60a1"}				
			--Tanks_heavy
			--SPG
			}
		}
	},
	{--purchase 4
		Repeat = 1,
		Units = {
			["ger"] = {--Germany
				{priority = 2.0, class = UnitClass.Infantry, period = "early", unit = "squad_light(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_strafbatallion(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_recon(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_regular(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_regular_armored(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pionier(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_regular_vet(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_gd_mid(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_lw_fusilier_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_recon_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_grenadiere_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_pzgrenadiere_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_fusilier_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_jager_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_gebirgsjaeger_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_pzgrenadiere_gd_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_mg(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_sniper(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_flamer(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_riflegrenade(ger)"},		
				{priority = 1.0, class = UnitClass.ATInfantry, period = "early mid", unit = "single_at(ger)"},
				{priority = 1.0, class = UnitClass.ATInfantry, period = "late", unit = "single_bazooker(ger)"},	
			--Automatic_weaponry
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "mg34_lafette"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "mg42_lafette"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "20mm_flak30"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "37mm_flak37"},
			--AT_Wreapon
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "37mm_pak36"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "47mm_pakt"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "75mm_leig18"},
			--Howitzers
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "80mm_sgrw34"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "105mm_lefh18"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "mid late", unit = "120mm_sgrw42"},	
			--Wheel_vehicles			
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "p204_f"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "early mid late", unit = "sdkfz251c"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "early mid late", unit = "sdkfz231"},	
				{priority = 2.0, class = UnitClass.Vehicle, period = "early mid late", unit = "sdkfz221"},	
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "panzer1b"},
				{priority = 0.2, class = UnitClass.Tank, period = "late", unit = "panzer1f"},
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer2c"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "panzer2f"},
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer3e"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "panzer35t"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "pz38t_f"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "panzer2l"},
			--Tanks_medium
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer3f"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "early", unit = "panzer4d"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "panzer4f1"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "late", unit = "panzer3n"},	
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "panzer3j"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "panzer3j1"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "panzer3l"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid late", unit = "panzer3m"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "panzer4f2"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "panzer4j"},
			--SPG
				{priority = 2.0, class = UnitClass.ATTank, period = "early", unit = "panzerjager1"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "stug3b"},
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "hetzer"},
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "stug3g"},
				{priority = 2.0, class = UnitClass.ATTank, period = "mid", unit = "marder2"},
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "marder3m"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid late", unit = "stuh42"},			
			--Tanks_heavy
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "panzer5d"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "tiger1h"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "panzer5g"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "late", unit = "tiger1e"}					
				},
			["rus"] = {--Russia
				--Infantry
				{priority = 2.0, class = UnitClass.Infantry, period = "early", unit = "squad_basic(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "early", unit = "squad_heavy(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "squad_partisan(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscripts(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_recon(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifleunit_alt(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifleunit_42(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_marines(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_paras(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_conscripts_late(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_recon_late(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid late", unit = "squad_rifleunit(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_rifleunit_44(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_rifleunit_heavy(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_smg(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_smg_heavy(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_guardsrifle(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_guards_smg_heavy(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_marines_late(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_mg(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_sniper(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_flamer(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_riflegrenade(rus)"},		
				{priority = 1.0, class = UnitClass.ATInfantry, period = "early mid late", unit = "single_at(rus)"},
			--Automatic_weaponry
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "maxim"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "dshk_stan"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "25mm_72k"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "37mm_61k"},
			--AT_Wreapon
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "45mm_m37"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "57mm_zis2"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "75mm_m43"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "early mid late", unit = "76mm_f22"},
			--Howitzers
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "82mm_bm37"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "120mm_pm38"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "early", unit = "ba20"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid late", unit = "ba64"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "early mid late", unit = "ba6"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t26_31"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t26_33"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t26_39"},
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t30"},
				{priority = 1.0, class = UnitClass.Tank, period = "early mid", unit = "t40"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late", unit = "t60"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "t70"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "t70m"},
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "bt2"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "bt5"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "bt7"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t28"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t3476_40"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t3476_41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late ", unit = "t3476_43"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late ", unit = "t3457_43"},
			--Tanks_heavy
				{priority = 2.0, class = UnitClass.HeavyTank, period = "early", unit = "kv1_40"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid", unit = "kv1_41"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid late", unit = "kv1s"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "kv85"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "is1_43"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "early mid", unit = "kv2_40"},
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "zis30"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "su76"},
				{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "su85"},
				{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "su100"}
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
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_moto"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(sov)"},
			--Automatic_weaponry
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-1"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "9p110"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "pt-76"},	
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu57"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu-85"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-55a"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "zsu-57-2"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "su-122-54"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-62a"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "t-10"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "it-1"}
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
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m1919"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m40"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m35_guntruck"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m113_m40"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m125"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m106"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m42"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m132_zippo"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m50"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m56"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48_patton"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m67_zippo"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48a3"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m60a1"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "m728"},				
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "m103"}	
			--Tanks_heavy
			--SPG
			}
		}
	},
	{--purchase 4
		Repeat = 1,
		Units = {
			["ger"] = {--Germany
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "panzer1b"},
				{priority = 0.2, class = UnitClass.Tank, period = "late", unit = "panzer1f"},
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer2c"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "panzer2f"},
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer3e"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "panzer35t"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "pz38t_f"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "panzer2l"},
			--Tanks_medium
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer3f"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "early", unit = "panzer4d"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "panzer4f1"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "late", unit = "panzer3n"},	
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "panzer3j"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "panzer3j1"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "panzer3l"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid late", unit = "panzer3m"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "panzer4f2"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "panzer4j"},
			--SPG
				{priority = 2.0, class = UnitClass.ATTank, period = "early", unit = "panzerjager1"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "stug3b"},
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "hetzer"},
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "stug3g"},
				{priority = 2.0, class = UnitClass.ATTank, period = "mid", unit = "marder2"},
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "marder3m"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid late", unit = "stuh42"},			
			--Tanks_heavy
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "panzer5d"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "tiger1h"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "panzer5g"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "late", unit = "tiger1e"}					
				},
			["rus"] = {--Russia
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t26_31"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t26_33"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t26_39"},
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t30"},
				{priority = 1.0, class = UnitClass.Tank, period = "early mid", unit = "t40"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late", unit = "t60"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "t70"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "t70m"},
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "bt2"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "bt5"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "bt7"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t28"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t3476_40"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t3476_41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late ", unit = "t3476_43"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late ", unit = "t3457_43"},
			--Tanks_heavy
				{priority = 2.0, class = UnitClass.HeavyTank, period = "early", unit = "kv1_40"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid", unit = "kv1_41"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid late", unit = "kv1s"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "kv85"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "is1_43"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "early mid", unit = "kv2_40"},
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "zis30"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "su76"},
				{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "su85"},
				{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "su100"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "late", unit = "su122"}
			--	{priority = 1.0, class = UnitClass.ArtilleryTank, period = "late", unit = "su152"}
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
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_moto"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(sov)"},
			--Automatic_weaponry
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-1"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "9p110"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "pt-76"},	
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu57"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu-85"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-55a"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "zsu-57-2"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "su-122-54"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-62a"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "t-10"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "it-1"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "shilka"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "t-64"}				
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
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m1919"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m40"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m35_guntruck"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m113_m40"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m125"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m106"},				
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m42"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m132_zippo"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m50"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m56"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48_patton"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m67_zippo"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48a3"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m60a1"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "m728"},				
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "m103"}				
			--SPG
			}
		}
	},
	{--purchase 5
		Repeat = 3,
		Units = {
			["ger"] = {--Germany
				--Infantry
				{priority = 2.0, class = UnitClass.Infantry, period = "early", unit = "squad_light(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_strafbatallion(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_recon(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_regular(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_regular_armored(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pionier(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_regular_vet(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_gd_mid(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_lw_fusilier_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_recon_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_grenadiere_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_pzgrenadiere_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_fusilier_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_jager_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_gebirgsjaeger_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_pzgrenadiere_gd_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_mg(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_sniper(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_flamer(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_riflegrenade(ger)"},		
				{priority = 1.0, class = UnitClass.ATInfantry, period = "early mid", unit = "single_at(ger)"},
				{priority = 1.0, class = UnitClass.ATInfantry, period = "late", unit = "single_bazooker(ger)"},
			--Automatic_weaponry
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "mg34_lafette"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "mg42_lafette"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "20mm_flak30"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "37mm_flak37"},
			--AT_Wreapon
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "37mm_pak36"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "47mm_pakt"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "early mid late", unit = "50mm_pak38"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "75mm_leig18"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "mid late", unit = "75mm_pak40"},		
			--Howitzers
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "80mm_sgrw34"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "105mm_lefh18"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "early", unit = "150mm_sig33"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "mid late", unit = "120mm_sgrw42"},				
			--Wheel_vehicles
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "p204_f"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "early mid late", unit = "sdkfz251c"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "early mid late", unit = "sdkfz231"},			
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "panzer1b"},
				{priority = 0.2, class = UnitClass.Tank, period = "late", unit = "panzer1f"},
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer2c"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "panzer2f"},
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer3e"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "panzer35t"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "pz38t_f"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "panzer2l"},
			--Tanks_medium
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer3f"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "early", unit = "panzer4d"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "panzer4f1"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "late", unit = "panzer3n"},	
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "panzer3j"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "panzer3j1"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "panzer3l"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid late", unit = "panzer3m"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "panzer4f2"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "panzer4j"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "panzer3_flamm"},	
			--SPG
				{priority = 2.0, class = UnitClass.ATTank, period = "early", unit = "panzerjager1"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "stug3b"},
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "stug3g"},
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "hetzer"},
				{priority = 2.0, class = UnitClass.ATTank, period = "mid", unit = "marder2"},
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "marder3m"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid late", unit = "stuh42"},		
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "stug3g_late"},
			--Tanks_heavy
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "panzer5d"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "panzer5a"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "tiger1h"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "panzer5g"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "late", unit = "tiger1e"}			
			--SPG
			},
			["rus"] = {--Russia
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, period = "early", unit = "squad_basic(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "early", unit = "squad_heavy(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "squad_partisan(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscripts(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_recon(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifleunit_alt(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifleunit_42(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_marines(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_paras(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_conscripts_late(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_recon_late(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid late", unit = "squad_rifleunit(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_rifleunit_44(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_rifleunit_heavy(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_smg(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_smg_heavy(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_guardsrifle(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_guards_smg_heavy(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_marines_late(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_mg(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_sniper(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_flamer(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_riflegrenade(rus)"},		
				{priority = 1.0, class = UnitClass.ATInfantry, period = "early mid late", unit = "single_at(rus)"},
			--Automatic_weaponry
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "maxim"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "dshk_stan"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "25mm_72k"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "37mm_61k"},
			--AT_Weapons
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "45mm_m37"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "57mm_zis2"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "mid late", unit = "76mm_zis3"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "early mid late", unit = "76mm_f22"},
			--Howitzers
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "82mm_bm37"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "120mm_pm38"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "203mm_b4"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t26_31"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t26_33"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t26_39"},
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t30"},
				{priority = 1.0, class = UnitClass.Tank, period = "early mid", unit = "t40"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late", unit = "t60"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "t70"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "t70m"},
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "bt2"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "bt5"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "bt7"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t28"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t3476_40"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t3476_41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late ", unit = "t3476_43"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late ", unit = "t3457_43"},
			--Tanks_heavy
				{priority = 2.0, class = UnitClass.HeavyTank, period = "early", unit = "kv1_40"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid", unit = "kv1_41"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid late", unit = "kv1s"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "kv85"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "is1_43"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "is2_44"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "early mid", unit = "kv2_40"},
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "zis30"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "su76"},
				{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "su85"},
				{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "su100"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "late", unit = "su122"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "late", unit = "su152"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "su100y"}
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
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_moto"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(sov)"},
			--Automatic_weaponry
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-1"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "9p110"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "pt-76"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu57"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu-85"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-55a"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "zsu-57-2"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "su-122-54"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-62a"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "t-10"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "it-1"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "shilka"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "t-64"}
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
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m1919"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m40"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m35_guntruck"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m113_m40"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m125"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m106"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m42"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m132_zippo"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m50"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m56"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48_patton"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m67_zippo"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48a3"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m60a1"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "m728"},				
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "m103"}
			--SPG
			}
		}
	},
	{--purchase 5
		Repeat = 1,
		Units = {
			["ger"] = {--Germany
				--Infantry	
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "panzer1b"},
				{priority = 0.2, class = UnitClass.Tank, period = "late", unit = "panzer1f"},
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer2c"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "panzer2f"},
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer3e"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "panzer35t"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "pz38t_f"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "panzer2l"},
			--Tanks_medium
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer3f"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "early", unit = "panzer4d"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "panzer4f1"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "late", unit = "panzer3n"},	
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "panzer3j"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "panzer3j1"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "panzer3l"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid late", unit = "panzer3m"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "panzer4f2"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "panzer4j"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "panzer3_flamm"},	
			--SPG
				{priority = 2.0, class = UnitClass.ATTank, period = "early", unit = "panzerjager1"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "stug3b"},
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "stug3g"},
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "hetzer"},
				{priority = 2.0, class = UnitClass.ATTank, period = "mid", unit = "marder2"},
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "marder3m"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid late", unit = "stuh42"},		
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "stug3g_late"},
			--Tanks_heavy
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "panzer5d"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "panzer5a"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "tiger1h"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "panzer5g"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "late", unit = "tiger1e"}			
			--SPG
			},
			["rus"] = {--Russia
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t26_31"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t26_33"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t26_39"},
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t30"},
				{priority = 1.0, class = UnitClass.Tank, period = "early mid", unit = "t40"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late", unit = "t60"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "t70"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "t70m"},
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "bt2"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "bt5"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "bt7"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t28"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t3476_40"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t3476_41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late ", unit = "t3476_43"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late ", unit = "t3457_43"},
			--Tanks_heavy
				{priority = 2.0, class = UnitClass.HeavyTank, period = "early", unit = "kv1_40"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid", unit = "kv1_41"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid late", unit = "kv1s"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "kv85"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "is1_43"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "is2_44"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "early mid", unit = "kv2_40"},
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "zis30"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "su76"},
				{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "su85"},
				{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "su100"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "late", unit = "su122"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "late", unit = "su152"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "su100y"}
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
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_moto"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(sov)"},
			--Automatic_weaponry
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-1"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "9p110"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "pt-76"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu57"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu-85"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-55a"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "zsu-57-2"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "su-122-54"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-62a"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "t-10"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "it-1"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "shilka"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "t-64"}
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
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m1919"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m40"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m35_guntruck"},
			--Tanks_light
				
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m42"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m132_zippo"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m50"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m56"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48_patton"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m67_zippo"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48a3"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m60a1"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "m728"},				
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "m103"}	
			--SPG
			}
		}
	},
	{--purchase 6
		Repeat = 0, --infinite
		Units = {
			["ger"] = {--Germany
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, period = "early", unit = "squad_light(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_strafbatallion(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_recon(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_regular(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_regular_armored(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_pionier(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_regular_vet(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_gd_mid(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_lw_fusilier_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_recon_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_grenadiere_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_pzgrenadiere_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_fusilier_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_jager_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_gebirgsjaeger_late(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_pzgrenadiere_gd_late(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_mg(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_sniper(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_flamer(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_riflegrenade(ger)"},		
				{priority = 1.0, class = UnitClass.ATInfantry, period = "early mid", unit = "single_at(ger)"},
				{priority = 1.0, class = UnitClass.ATInfantry, period = "late", unit = "single_bazooker(ger)"},
			--Automatic_weaponry
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "mg34_lafette"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "mg42_lafette"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "20mm_flak30"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "37mm_flak37"},
			--AT_Wreapon
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "37mm_pak36"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "47mm_pakt"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "early mid late", unit = "50mm_pak38"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "75mm_leig18"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "early", unit = "88mm_flak18"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "mid late", unit = "88mm_flak36"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "mid late", unit = "75mm_pak40"},		
			--Howitzers
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "80mm_sgrw34"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "105mm_lefh18"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "early", unit = "150mm_sig33"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "early mid late", unit = "150mm_sfh18"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "150mm_nebelwerfer41"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "210mm_morser18"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "mid late", unit = "120mm_sgrw42"},				
			--Wheel_vehicles
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "p204_f"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "early mid late", unit = "sdkfz251c"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "early mid late", unit = "sdkfz231"},			
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "panzer1b"},
				{priority = 0.2, class = UnitClass.Tank, period = "late", unit = "panzer1f"},
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer2c"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "panzer2f"},
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer3e"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "panzer35t"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "pz38t_f"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "panzer2l"},
			--Tanks_medium
				{priority = 2.0, class = UnitClass.Tank, period = "early", unit = "panzer3f"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "early", unit = "panzer4d"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "panzer4f1"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "late", unit = "panzer3n"},	
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "panzer3j"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "panzer3j1"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "panzer3l"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid late", unit = "panzer3m"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "panzer4f2"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "panzer4g"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "panzer4h"},
				{priority = 2.0, class = UnitClass.Tank, period = "late", unit = "panzer4j"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "panzer3_flamm"},	
			--SPG
				{priority = 2.0, class = UnitClass.ATTank, period = "early", unit = "panzerjager1"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "stug3b"},
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "stug3g"},
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "hetzer"},
				{priority = 2.0, class = UnitClass.ATTank, period = "mid", unit = "marder2"},
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "marder3m"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid late", unit = "stuh42"},	
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "late", unit = "sturmpanzer4"},
				{priority = 2.0, class = UnitClass.ATTank, period = "late", unit = "stug3g_late"},
			--Tanks_heavy
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "panzer5d"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "panzer5a"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid", unit = "tiger1h"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "late", unit = "panzer5g"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "tiger1e"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "late", unit = "tiger2p"},
				{priority = 0.5, class = UnitClass.HeavyTank, period = "late", unit = "tiger2h"},		
			--SPG
				{priority = 0.5, class = UnitClass.ArtilleryTank, period = "early", unit = "bison"},		
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "sig33b"},			
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "ferdinand"},	
				{priority = 0.5, class = UnitClass.ATTank, period = "mid", unit = "sturmtiger"},	
				{priority = 0.5, class = UnitClass.ATTank, period = "late", unit = "jagdpanther"}
			},
			["rus"] = {--Russia
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, period = "early", unit = "squad_basic(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "early", unit = "squad_heavy(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "squad_partisan(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_conscripts(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_recon(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifleunit_alt(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_rifleunit_42(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid", unit = "squad_marines(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_paras(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_conscripts_late(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_recon_late(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "mid late", unit = "squad_rifleunit(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_rifleunit_44(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_rifleunit_heavy(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_smg(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_smg_heavy(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_guardsrifle(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "late", unit = "squad_guards_smg_heavy(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "late", unit = "squad_marines_late(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_mg(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_sniper(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_flamer(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "early mid late", unit = "single_riflegrenade(rus)"},		
				{priority = 1.0, class = UnitClass.ATInfantry, period = "early mid late", unit = "single_at(rus)"},
			--Automatic_weaponry
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "maxim"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "dshk_stan"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "25mm_72k"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "37mm_61k"},
			--AT_Wreapon
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "45mm_m37"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "57mm_zis2"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "mid late", unit = "76mm_zis3"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "75mm_m43"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "76mm_m1927"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "early mid late", unit = "76mm_f22"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "early mid late", unit = "85mm_52k"},
			--Howitzers
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "82mm_bm37"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early mid late", unit = "120mm_pm38"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "early mid late", unit = "122mm_m30"},
			--	{priority = 2.0, class = UnitClass.ATTank, period = "early mid late", unit = "152mm_ml20"},
			--	{priority = 1.0, class = UnitClass.ATTank, period = "early", unit = "203mm_b4"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "early", unit = "ba20"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid late", unit = "ba64"},
				{priority = 2.0, class = UnitClass.Vehicle, period = "early mid late", unit = "ba6"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t26_31"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t26_33"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t26_39"},
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t30"},
				{priority = 1.0, class = UnitClass.Tank, period = "early mid", unit = "t40"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late", unit = "t60"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "t70"},
				{priority = 1.0, class = UnitClass.Tank, period = "late", unit = "t70m"},
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "bt2"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "bt5"},
				{priority = 2.0, class = UnitClass.Tank, period = "mid", unit = "bt7"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "early", unit = "t28"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t3476_40"},
				{priority = 2.0, class = UnitClass.Tank, period = "early mid", unit = "t3476_41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late ", unit = "t3476_43"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid late ", unit = "t3457_43"},
			--Tanks_heavy
				{priority = 2.0, class = UnitClass.HeavyTank, period = "early", unit = "kv1_40"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid", unit = "kv1_41"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "mid late", unit = "kv1s"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "kv85"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "is1_43"},
				{priority = 2.0, class = UnitClass.HeavyTank, period = "late", unit = "is2_44"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "early mid", unit = "kv2_40"},
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "zis30"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid late", unit = "su76"},
				{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "su85"},
				{priority = 1.0, class = UnitClass.ATTank, period = "late", unit = "su100"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "late", unit = "su122"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "late", unit = "su152"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "su100y"}
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
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "squad_guards_moto"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, period = "mid", unit = "single_at(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_mg(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_sniper(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, period = "mid", unit = "single_flamer(sov)"},
			--Automatic_weaponry
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
				{priority = 2.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-1"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "brdm-2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "9p110"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "pt-76"},	
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu57"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "asu-85"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-54"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-55a"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "zsu-57-2"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "su-122-54"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "t-62a"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "t-10"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "it-1"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "shilka"},
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "t-64"}
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
			--AT_Weapons
			--Howitzers
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m1919"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m2"},
				{priority = 1.0, class = UnitClass.Vehicle, period = "mid", unit = "m151_m40"},
				{priority = 0.5, class = UnitClass.Vehicle, period = "mid", unit = "m35_guntruck"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m113_m40"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m125"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, period = "mid", unit = "m106"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m41"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m42"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m132_zippo"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m50"},
				{priority = 1.0, class = UnitClass.ATTank, period = "mid", unit = "m56"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48_patton"},
				{priority = 0.2, class = UnitClass.Tank, period = "mid", unit = "m67_zippo"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m48a3"},
				{priority = 1.0, class = UnitClass.Tank, period = "mid", unit = "m60a1"},
				{priority = 0.5, class = UnitClass.Tank, period = "mid", unit = "m728"},				
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, period = "mid", unit = "m103"}
			--SPG
			}
		}
	}
}
