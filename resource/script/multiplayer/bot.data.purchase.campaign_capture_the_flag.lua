Purchases["campaign_capture_the_flag"] = {
	{
		Repeat = 0, --infinite
		Units = {
			["ger"] = {--Germany
			--Infantry Singles
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at(ger)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "single_riflegrenade(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_sniper(ger)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "single_ap_miner(ger)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "single_at_miner(ger)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "single_engineer(ger)"},

			--Infantry Squads
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_osttruppen_con(ger)"},
				{priority = 0.75, class = UnitClass.Infantry, unit = "squad_strafbatallion_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_luftwaffe_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_blau_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_brandenburger_con(ger)"},

				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_sicherung_con(ger)"},
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_regular_motor_con"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_regular_armor_con"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular_vet_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_gd_motor_con"},

				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_pionier_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_pz_pio_con"},

				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_recon_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_recon_motor_con"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_recon_armor_con"},

				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_jaeger_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_gebirgsjaeger_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_fallschirmjaeger_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_fallschirmjaeger_motor_con"},

			--Cannons
			--HMGs
				{priority = 1.5, class = UnitClass.Vehicle, unit = "mg34_lafette"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "mg42_lafette"},
			--Anti_Aircraft
				{priority = 1.0, class = UnitClass.AATank, unit = "20mm_flak30"},
				{priority = 0.5, class = UnitClass.AATank, unit = "37mm_flak37"},
				{priority = 1.0, class = UnitClass.AATank, unit = "88mm_flak18"},
				{priority = 1.0, class = UnitClass.AATank, unit = "88mm_flak36"},
			--Anti_Tank
				{priority = 1.5, class = UnitClass.ATTank, unit = "37mm_pak36"},
				{priority = 0.5, class = UnitClass.ATTank, unit = "47mm_pakt"},
				{priority = 1.5, class = UnitClass.ATTank, unit = "50mm_pak38"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "75mm_pak40"},
			--Mortars
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "80mm_sgrw34"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "120mm_sgrw42"},
			--Infantry_Support
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "75mm_leig18"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "150mm_sig33"},
			--Artillery
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "105mm_lefh18"},
			--	{priority = 2.0, class = UnitClass.ArtilleryTank, unit = "150mm_sfh18"},
			--	{priority = 0.1, class = UnitClass.ArtilleryTank, unit = "210mm_morser18"},
			--Rocket_Artillery
			--	{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "150mm_nebelwerfer41"},
			--	{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "300mm_nebelwerfer42"},

			--Wheel_vehicles
				{priority = 0.5, class = UnitClass.Vehicle, unit = "kubelwagen_mg"},
				{priority = 2.0, class = UnitClass.AATank, unit = "blitz3_6_flak30"},
				{priority = 0.1, class = UnitClass.Vehicle, unit = "p204_f"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz231"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz221"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "sdkfz234_2"},

			--Half_tracks
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sdkfz251c"},
				{priority = 0.1, class = UnitClass.ATTank, unit = "sdkfz10_pak38"},
				{priority = 0.1, class = UnitClass.ATTank, unit = "sdkfz8_flak18"},

			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer1b"},
				{priority = 0.1, class = UnitClass.Tank, unit = "panzer1f"},
				{priority = 2.0, class = UnitClass.Tank, unit = "panzer2c"},
				{priority = 2.0, class = UnitClass.Tank, unit = "panzer2f"},
				{priority = 1.5, class = UnitClass.Tank, unit = "pz35t"},
				{priority = 2.5, class = UnitClass.Tank, unit = "pz38t_a"},
				{priority = 2.5, class = UnitClass.Tank, unit = "pz38t_f"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz38t_g"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer2l"},

			--Tanks_medium
				{priority = 2.5, class = UnitClass.Tank, unit = "panzer3e"},
				{priority = 2.5, class = UnitClass.Tank, unit = "panzer3f"},
				{priority = 3.5, class = UnitClass.Tank, unit = "panzer3j"},
				{priority = 2.5, class = UnitClass.Tank, unit = "panzer3j1"},
				{priority = 2.5, class = UnitClass.Tank, unit = "panzer3l"},
				{priority = 2.5, class = UnitClass.Tank, unit = "panzer3m"},
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer3n"},
				{priority = 0.5, class = UnitClass.Tank, unit = "panzer3_flamm"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer4d"},
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer4f1"},
				{priority = 3.0, class = UnitClass.Tank, unit = "panzer4f2"},
				{priority = 3.0, class = UnitClass.Tank, unit = "panzer4g"},
				{priority = 3.5, class = UnitClass.Tank, unit = "panzer4h"},
				{priority = 3.0, class = UnitClass.Tank, unit = "panzer4j"},

			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "panzer5d"},
				{priority = 2.5, class = UnitClass.HeavyTank, unit = "panzer5a"},
				{priority = 2.5, class = UnitClass.HeavyTank, unit = "panzer5g"},
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "tiger1h"},
				{priority = 1.5, class = UnitClass.HeavyTank, unit = "tiger1e"},
			--	{priority = 0.1, class = UnitClass.HeavyTank, unit = "tiger1hunt"},
			--	{priority = 0.1, class = UnitClass.HeavyTank, unit = "tiger2p"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "tiger2h"},

			--SPG
				{priority = 1.0, class = UnitClass.ATTank, unit = "panzerjager1"},
				{priority = 0.1, class = UnitClass.ArtilleryTank, unit = "bison"},
				{priority = 2.5, class = UnitClass.ATTank, unit = "hetzer"},
				{priority = 2.0, class = UnitClass.ATTank, unit = "marder2"},
				{priority = 2.5, class = UnitClass.ATTank, unit = "marder3m"},
				{priority = 0.1, class = UnitClass.Tank, unit = "grille_m"},
				{priority = 1.5, class = UnitClass.ATTank, unit = "stug3b"},
				{priority = 1.5, class = UnitClass.ATTank, unit = "stug3f"},
				{priority = 3.0, class = UnitClass.ATTank, unit = "stug3g"},
				{priority = 0.5, class = UnitClass.ATTank, unit = "stug3g_late"},
				{priority = 0.1, class = UnitClass.ArtilleryTank, unit = "sig33b"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, unit = "stuh42"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "sturmpanzer4"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "jagdpanther"},
				{priority = 0.1, class = UnitClass.ATTank, unit = "ferdinand"},
				{priority = 0.1, class = UnitClass.ATTank, unit = "sturmtiger"}
			},
			["rus"] = {--Russia
			--Infantry Singles
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "single_at(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_riflegrenade(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "single_sniper(rus)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "single_ap_miner(rus)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "single_at_miner(rus)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "single_engineer(rus)"},

			--Infantry Squads
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_partisan_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_penal_con(rus)"},

				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_border(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_conscripts_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_recon_con(rus)"},
				{priority = 2.5, class = UnitClass.Infantry, unit = "squad_rifleunit_alt_con(rus)"},
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifleunit_con(rus)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "squad_at_rifle_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_smg_con(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_rifle_motorised_con"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_mountainrifles_con(rus)"},

				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_guardsrifle_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_guards_smg_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_guardsrifle_motorised_con"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_assaultsappers_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_assaultsappers_flame_con(rus)"},

				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_paras(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_spetsnaz(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_marines_con(rus)"},

			--Cannons
			--HMGs
				{priority = 1.5, class = UnitClass.Vehicle, unit = "maxim"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sg43_stand"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "dshk_stan"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "dshk_aa"},
			--Anti_Aircraft
				{priority = 0.5, class = UnitClass.AATank, unit = "25mm_72k"},
				{priority = 1.5, class = UnitClass.AATank, unit = "37mm_61k"},
				{priority = 1.5, class = UnitClass.AATank, unit = "85mm_52k"},
			--Anti_Tank
				{priority = 1.5, class = UnitClass.ATTank, unit = "45mm_m37"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "45mm_m42"},
				{priority = 0.1, class = UnitClass.ATTank, unit = "57mm_zis2"},
				{priority = 0.5, class = UnitClass.ATTank, unit = "100mm_bs3"},
			--Mortars
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "82mm_bm37"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "120mm_pm38"},
			--Infantry_Support
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "76mm_m1902"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "76mm_m1927"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "76mm_m43"},
			--	{priority = 2.0, class = UnitClass.ATTank, unit = "76mm_f22"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, unit = "76mm_zis3"},
			--Artillery
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "122mm_m30"},
			--	{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "122mm_a19"},
			--	{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "152mm_ml20"},
			--	{priority = 0.1, class = UnitClass.ArtilleryTank, unit = "203mm_b4"},
			--Rocket_Artillery
			--	{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "bm13_studebaker"},
			--	{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "bm31_12"},

			--Wheel_vehicles
				{priority = 1.5, class = UnitClass.Vehicle, unit = "gaz67b"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "gaz_aaa_72k"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "ba20"},
				{priority = 2.0, class = UnitClass.Vehicle, unit = "ba6"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "ba64"},
				{priority = 0.75, class = UnitClass.Vehicle, unit = "universal_carrier_rus"},
				{priority = 0.75, class = UnitClass.Vehicle, unit = "mmg_carrier_rus"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m3a1e1_scout_mgun"},

			--Tanks_light
				{priority = 0.5, class = UnitClass.Tank, unit = "t26_31"},
				{priority = 0.1, class = UnitClass.Tank, unit = "kht26"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t26_33"},
				{priority = 2.0, class = UnitClass.Tank, unit = "t26_39"},
				{priority = 0.1, class = UnitClass.Tank, unit = "t27"},
				{priority = 2.0, class = UnitClass.Tank, unit = "t37a"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t30"},
				{priority = 0.5, class = UnitClass.Tank, unit = "t40"},
				{priority = 3.0, class = UnitClass.Tank, unit = "t60"},
				{priority = 3.0, class = UnitClass.Tank, unit = "t70"},
				{priority = 3.0, class = UnitClass.Tank, unit = "t70m"},
				{priority = 0.5, class = UnitClass.Tank, unit = "bt2_da2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "bt2"},
				{priority = 2.5, class = UnitClass.Tank, unit = "bt5"},
				{priority = 3.0, class = UnitClass.Tank, unit = "bt7"},
				{priority = 0.1, class = UnitClass.Tank, unit = "valentine2"},
				{priority = 1.5, class = UnitClass.Tank, unit = "valentine7"},
				{priority = 1.0, class = UnitClass.Tank, unit = "valentine9"},

			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "t28"},
				{priority = 2.0, class = UnitClass.Tank, unit = "t3476_40"},
				{priority = 2.5, class = UnitClass.Tank, unit = "t3476_41"},
				{priority = 0.1, class = UnitClass.Tank, unit = "t3457_41"},
				{priority = 3.5, class = UnitClass.Tank, unit = "t3476_42"},
				{priority = 3.5, class = UnitClass.Tank, unit = "t3476_43"},
				{priority = 0.1, class = UnitClass.Tank, unit = "t3457_43"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t3476_43_flame"},
				{priority = 2.5, class = UnitClass.Tank, unit = "t3485_44"},

			--Tanks_heavy
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "churchill3"},
				{priority = 1.5, class = UnitClass.HeavyTank, unit = "kv1_40"},
				{priority = 1.5, class = UnitClass.HeavyTank, unit = "kv2_40"},
				{priority = 2.0, class = UnitClass.HeavyTank, unit = "kv1_41"},
				{priority = 2.0, class = UnitClass.HeavyTank, unit = "kv1s"},
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "kv85"},
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "is1_43"},
				{priority = 1.5, class = UnitClass.HeavyTank, unit = "is2_43"},
				{priority = 2.0, class = UnitClass.HeavyTank, unit = "is2_44"},

			--SPG
				{priority = 0.1, class = UnitClass.ATTank, unit = "zis30"},
				{priority = 3.0, class = UnitClass.ArtilleryTank, unit = "su76"},
				{priority = 1.5, class = UnitClass.ATTank, unit = "su85"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "su100"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "su122"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "su152"},
				{priority = 2.0, class = UnitClass.ATTank, unit = "isu122s"},
				{priority = 2.0, class = UnitClass.ATTank, unit = "isu152"}
			},
			["sov"] = {--Soviet Union
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_interior_con(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_border_con(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_border_moto_con(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_conscript_con(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_conscript_ak_con(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_conscript_moto_con(sov)"},
				
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_maneuv_con(sov)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "squad_fireteam_con(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_rifle_con(sov)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_rifle_full_con(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_rifle_moto_con(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_rifle_moto2_con(sov)"},
				
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_vdv_recon_con(sov)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "squad_vdv_antitank_con(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_vdv_con(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_vdv_asu57_con(sov)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "squad_vdv_asu85_con(sov)"},
				
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_guards_con(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_guards_moto_con(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_guards_moto2_con(sov)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "squad_guards_mech_con(sov)"},
				
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_banner_con(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_banner_moto_con(sov)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "squad_banner_mech_con(sov)"},
				
				{priority = 0.5, class = UnitClass.Infantry, unit = "squad_spz_recon_con(sov)"},
				{priority = 0.5, class = UnitClass.ATInfantry, unit = "squad_spz_sabo_con(sov)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "squad_spz_con(sov)"},
				
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at(sov)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at2(sov)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at3(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mg(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_marksman(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_sniper(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_sapperap(sov)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_sapperat(sov)"},
			--Cannons
			--HMGs
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sg43_stand_sov"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "dshk_aa_sov"},
			--Anti_Aircraft
				{priority = 1.0, class = UnitClass.Vehicle, unit = "zu-2"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "zpu-4"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "zu-23-2"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "37mm_61k_sov"},
			--Anti_Tank
				{priority = 1.0, class = UnitClass.ATTank, unit = "76mm_zis3_sov"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "b-10_82mm"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "spg9"},
				{priority = 0.5, class = UnitClass.ATTank, unit = "t-12"},
				{priority = 0.5, class = UnitClass.ATTank, unit = "9m14"},
			--Mortars
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "82mm_bm37_sov"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "120mm_pm38_sov"},
			--Infantry_Support
				
			--Artillery
				{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "d30a"},
			--	{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "152mm_ml20_sov"},
			--	{priority = 0.1, class = UnitClass.ArtilleryTank, unit = "203mm_b4_sov"},
			--Rocket_Artillery
			
			--Wheel_vehicles
				{priority = 2.0, class = UnitClass.Vehicle, unit = "brdm-1"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "brdm-2"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "9p110"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "9p122"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "pt-76"},	
				{priority = 1.0, class = UnitClass.ATTank, unit = "asu57"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "asu-85"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "t-44"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t-54"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t-55a"},
				{priority = 1.0, class = UnitClass.Tank, unit = "zsu-57-2"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "su-122-54"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "it-1"},
				{priority = 0.5, class = UnitClass.Tank, unit = "shilka"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t-62a"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "t-64"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "t-10"},
			--SPG
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "2s3"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "bm-21_grad"}
			},
			["usa"] = {--United States
			--Infantry
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at(usa)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at2(usa)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_lat2(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mg(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_marksman(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_sniper(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(usa)"},
				
				
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_reservist_con(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_reservist_m14_con(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_fireteamAP_con(usa)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "squad_fireteamAT_con(usa)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_rifle_con(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_rifle_full_con(usa)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "squad_rifle_m16_con(usa)"},
				{priority = 0.3, class = UnitClass.Infantry, unit = "squad_weapon_con(usa)"},
				{priority = 0.15, class = UnitClass.Infantry, unit = "squad_weapon_m16_con(usa)"},
				
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_rifle_moto2_con(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_weapon_moto2_con(usa)"},
				
				{priority = 0.6, class = UnitClass.Infantry, unit = "squad_rifle_m16_moto_con(usa)"},
				{priority = 0.3, class = UnitClass.Infantry, unit = "squad_weapon_m16_moto_con(usa)"},
				
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_acav_moto_con(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_acav_assault_moto_con(usa)"},
				
				{priority = 0.5, class = UnitClass.Infantry, unit = "squad_usmc_fireteam_con(usa)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "squad_usmc_con(usa)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "squad_usmc_mg_con(usa)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "squad_usmc_flame_con(usa)"},
				
				{priority = 0.3, class = UnitClass.Infantry, unit = "squad_lrrp_con(usa)"},
				{priority = 0.3, class = UnitClass.Infantry, unit = "squad_ranger_demo_con(usa)"},
				{priority = 0.2, class = UnitClass.Infantry, unit = "squad_ranger_con(usa)"},
				
				{priority = 0.3, class = UnitClass.Infantry, unit = "squad_ops_con(usa)"},
				{priority = 0.2, class = UnitClass.Infantry, unit = "squad_specops_con(usa)"},
			--Cannons
			--HMGs
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m2_m1919a4"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m63_browning"},
			--Anti_Aircraft
				{priority = 0.5, class = UnitClass.Vehicle, unit = "m45_maxson"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "40_mm_m1"},
			--Anti_Tank
				{priority = 1.0, class = UnitClass.ATTank, unit = "m40"},
				{priority = 0.5, class = UnitClass.ATTank, unit = "entac"},
			--Mortars
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "m29_mortar"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "m30_mortar"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "m98_howtar"},
			--Infantry_Support
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "m116_packhow"},
			--Artillery
				{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "m101a1"},
			--	{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "m114"},
			--	{priority = 0.1, class = UnitClass.ArtilleryTank, unit = "m115"},
			--Rocket_Artillery
			
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m151_m1919"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "m151_m2"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "m151_m40"},
				{priority = 0.5, class = UnitClass.ATTank, unit = "m35_guntruck"},
			--APCs/BTRs
				{priority = 1.0, class = UnitClass.ATTank, unit = "m113_m40"},
				{priority = 0.2, class = UnitClass.ArtilleryTank, unit = "m125"},
				{priority = 0.2, class = UnitClass.ArtilleryTank, unit = "m106"},
				{priority = 0.3, class = UnitClass.Tank, unit = "m132_zippo"},
				{priority = 0.5, class = UnitClass.Tank, unit = "m163"},
				{priority = 0.75, class = UnitClass.Tank, unit = "m114a1"},
				{priority = 0.5, class = UnitClass.Tank, unit = "m114a2"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "m24_chaffee"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m41"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m42"},
				{priority = 0.75, class = UnitClass.Tank, unit = "m56"},
				{priority = 0.5, class = UnitClass.Tank, unit = "m50"},
				{priority = 0.75, class = UnitClass.Tank, unit = "m551"},
				{priority = 0.5, class = UnitClass.Tank, unit = "m551_acav"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a3e8"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m48_patton"},
				{priority = 0.5, class = UnitClass.Tank, unit = "m67_zippo"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m48a3"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m60a1"},
				{priority = 0.5, class = UnitClass.Tank, unit = "m728"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "m26_pershing"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "m103"},
			--SPG
				{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "m108"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "m109"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "m110"}
			}
		}
	}
}
--Conversion Chart
--0.9 = 3.5
--1.0 = 3
--1.1 = 2.5
--1.2 = 2
--1.3 = 1.5
--1.4 = 1
--1.5 = 0.5
--1.6 = 0.1
