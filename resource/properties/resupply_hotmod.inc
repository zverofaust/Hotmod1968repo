(include "resupply_vanilla.inc")

(define "items_light_sov"

;// pistol
	{item "tt33"					"ammo" 16 {value 1}}
	{item "revolver_clip"			"ammo" 14 {value 1}}

;// smg
	{item "ppd_drum"				"ammo" 71 {value 4}}
	{item "pps_stick"				"ammo" 35 {value 2}}
	{item "ppsh_drum"				"ammo" 71 {value 4}}
	{item "ppsh_stick"				"ammo" 35 {value 2}}

;// mg
	{item "hmgun_rus"				"ammo" 50 {value 2}}
	{item "mgun_rus" "dp"			"ammo" 47 {value 2}}
	{item "mgun_rus" "dt"			"ammo" 63 {value 2}}
	{item "mgun_rus" "belt"			"ammo" 50 {value 2}}

;// rifle
	{item "atrifle_rus"				"ammo" 5  {value 5}}
	{item "rifle_rus" "clip"		"ammo" 10 {value 2}}
	{item "rifle_rus" "svt"			"ammo" 10 {value 2}}
	{item "shotgun"					"ammo" 10 {value 2}}

	;// AT
	{item "dyakonov"				"ammo" 1  {value 5}}
	{item "vpgs41"					"ammo" 1  {value 5}}
	{item "bazooka"					"ammo" 1  {value 10}}

;// Grenade
	{item "grenade" "f1" 					1  {value 5}}
	{item "grenade" "rgd33" 				1  {value 5}}

	{item "grenade" "rpg40"					1  {value 10}}
	{item "grenade" "rpg43"					1  {value 10}}
	{item "grenade" "molotov_cocktail"		1  {value 10}}

	{item "grenade" "rdg1_smoke" 			1  {value 5}}

;// Hotmod -added

;// Pistol

;// MG
	{item "rpd_drum"				"ammo" 75 {value 2}}
	{item "rpk_drum"				"ammo" 75 {value 2}}
	{item "rpk_mag"					"ammo" 40 {value 2}}
	{item "pk_box"					"ammo" 100 {value 2}}
	{item "hmgun_rus_kpvt"			"ammo" 50 {value 2}}
	{item "mgun_rus"				"ammo" 50 {value 2}}

;// Rifle
	{item "ak47" 					"ammo" 30 {value 2}}
	{item "ak47" "ak"				"ammo" 30 {value 2}}
	{item "ak47" "akm"				"ammo" 30 {value 2}}
	{item "ak47" "drum"				"ammo" 75 {value 2}}
	{item "ak47" "rpk"				"ammo" 40 {value 2}}
	{item "ak47" "type56"			"ammo" 30 {value 2}}
	{item "akm"						"ammo" 30 {value 2}}
	{item "sks"						"ammo" 10 {value 2}}
	{item "sks"	"type56"			"ammo" 10 {value 2}}
	{item "svd"						"ammo" 10 {value 2}}

;// AT
	{item "rpg7"					"ammo" 1  {value 10}}
	{item "rpg2"					"ammo" 1  {value 10}}
	{item "rpg2" "type50"			"ammo" 1  {value 10}}

;// Grenade

	{item "grenade" "rgd5" 					1  {value 5}}
	{item "grenade" "rdgm_smoke" 			1  {value 5}}

;// Light weaponry -- For all man-portable (emplacement) heavy weapons
	{item "mortarrus_82" "he"		"ammo" 1  {value 5}}
	{item "mortarrus_82" "sm"		"ammo" 1  {value 5}}
	{item "mortarrus_120" "he"		"ammo" 1  {value 10}}
	{item "mortarrus_120" "sm"		"ammo" 1  {value 10}}
	{item "mortarrus_120" "ic"		"ammo" 1  {value 10}}
	{item "bullet73_2a28"  "heat"	"ammo" 1  {value 12}}
	{item "bullet73_2a28"  "he"		"ammo" 1  {value 8}}
	{item "9m14"			"atgm"		"ammo" 1 {value 15}}
	{item "gunbag_sov_9m14"				1 {value 10}}
)

(define "items_light_usa"

;// pistol
	{item "m1911"					"ammo" 8 {value 1}}

;// smg
	{item "m3"						"ammo" 30 {value 2}}

;// mg
	{item "hmgun_usa"				"ammo" 50 {value 5}}
	{item "mgun_usa" "belt"			"ammo" 50 {value 2}}
	{item "m60_box" 				"ammo" 100 {value 2}}

;// rifle
	{item "m1_garand"				"ammo" 8 {value 1}}
	{item "m1903"					"ammo" 5 {value 1}}
	{item "m14"						"ammo" 20 {value 1}}
	{item "m2_carbine"				"ammo" 15 {value 1}}
	{item "m16"						"ammo" 20 {value 1}}

;// AT
	{item "bazooka"					"ammo" 1  {value 10}}
	{item "m67"						"ammo" 1  {value 10}}
	{item "gustav"					"ammo" 1  {value 10}}
	{item "m20"						"ammo" 1  {value 10}}

;// Light weaponry -- For all man-portable (emplacement) heavy weapons
	{item "mortarusa_81" 	"he"	"ammo" 1  {value 5}}
	{item "mortarusa_81" 	"sm"	"ammo" 1  {value 5}}
	{item "mortarusa_107" 	"he"	"ammo" 1  {value 7}}
	{item "mortarusa_107"	"sm"	"ammo" 1  {value 7}}
	{item "bullet75_m20" 	"heat"	"ammo" 1  {value 10}}
	{item "bullet75_m20"  	"he"	"ammo" 1  {value 5}}
	{item "bullet106_m40" 	"heat"	"ammo" 1  {value 15}}
	{item "bullet106_m40"  	"he"	"ammo" 1  {value 10}}
	{item "mgm32a"			"atgm"	"ammo" 1  {value 15}}
	{item "gunbag_usa_entac"				1 {value 10}}

;// Grenade
	{item "40mm_grenade" "he"		 "ammo" 1  {value 5}}
	{item "m31_grenade" "heat"	 	 "ammo" 1  {value 5}}
	{item "grenade" "m67" 					1  {value 5}}
	{item "grenade" "anm8_smoke" 			1  {value 5}}

)

(define "items_light_prc"
	;// Rifle
	{item "mosin"					"ammo" 10 {value 2}}
)

(define "items_light_frg"
	;// Rifle
	{item "fal"						"ammo" 20 {value 2}}
	{item "g3"						"ammo" 20 {value 2}}
	{item "mp2"						"ammo" 20 {value 2}}
	{item "walther_mp"				"ammo" 20 {value 2}}

	{item "cobra" 			"atgm"	"ammo" 1  {value 15}}
	{item "mortarfrg_120" "he"		"ammo" 1  {value 9}}
	{item "mortarfrg_120" "sm"		"ammo" 1  {value 9}}
	
	{item "gunbag_frg_cobra"				1 {value 10}}
)

(define "items_light_generic"
;// flame
	{item "flame_thrower"			"ammo" 10 {value 10}}

;// pistol
	{item "pistol"					"ammo" 20 {value 1}}

;// other
	{item "bandage_ger"						1 {value 1}}
	{item "bandage_rus"						1 {value 1}}
	{item "bandage_usa"						1 {value 1}}
)

(define "items_medic"
;// other
	{item "bandage_ger"						1 {value 1}}
	{item "bandage_rus"						1 {value 1}}
	{item "bandage_usa"						1 {value 1}}
	{item "tent_kit"						1 {value 10}}
)

(define "items_heavy_sov"
	;// Vanilla items, minus artillery
	{item "bullet_20_auto"		"aphe"		"ammo" 20 {value 5}}

	{item "bulletrus_20_auto"	"ap"		"ammo" 20 {value 5}}
	{item "bulletrus_20_auto"	"apcr"		"ammo" 20 {value 10}}
	{item "bulletrus_20_auto"	"he"		"ammo" 20 {value 5}}

	{item "bulletrus_25_auto"	"apbc"		"ammo" 20 {value 5}}
	{item "bulletrus_25_auto"	"he"		"ammo" 20 {value 5}}

	{item "bulletrus_37_auto"	"ap"		"ammo" 10 {value 5}}
	{item "bulletrus_37_auto"	"he"		"ammo" 10 {value 5}}

	{item "bulletrus_45"		"aphebc"	"ammo" 2 {value 5}}
	{item "bulletrus_45"		"apcr"		"ammo" 1 {value 10}}
	{item "bulletrus_45"		"he"		"ammo" 2 {value 5}}

	{item "bulletrus_57"		"aphe"		"ammo" 1 {value 5}}
	{item "bulletrus_57"		"aphebc"	"ammo" 1 {value 5}}
	{item "bulletrus_57"		"apcr"		"ammo" 1 {value 10}}
	{item "bulletrus_57"		"he"		"ammo" 1 {value 5}}

	{item "bulletrus_76"		"aphebc"	"ammo" 1 {value 5}}
	{item "bulletrus_76"		"aphebc2"	"ammo" 1 {value 5}}
	{item "bulletrus_76"		"apcr"		"ammo" 1 {value 10}}
	{item "bulletrus_76"		"heat"		"ammo" 1 {value 10}}
	{item "bulletrus_76"		"he"		"ammo" 1 {value 5}}

	{item "bulletrus_85"		"aphe"		"ammo" 1 {value 5}}
	{item "bulletrus_85"		"aphebc"	"ammo" 1 {value 5}}
	{item "bulletrus_85"		"apcr"		"ammo" 1 {value 10}}
	{item "bulletrus_85"		"he"		"ammo" 1 {value 5}}

	{item "bulletrus_100"		"aphe"		"ammo" 1 {value 5}}
	{item "bulletrus_100"		"aphebc"	"ammo" 1 {value 5}}
	{item "bulletrus_100"		"aphebc"	"ammo" 1 {value 5}}
	{item "bulletrus_100"		"he"		"ammo" 1 {value 5}}

	{item "bulletrus_122_l48"	"aphe"		"ammo" 1 {value 5}}
	{item "bulletrus_122_l48"	"aphebc"	"ammo" 1 {value 5}}
	{item "bulletrus_122_l48"	"he"		"ammo" 1 {value 5}}

	{item "bulletrus_125"		"ic"		"ammo" 1 {value 5}}

	{item "bulletrus_130"		"aphe"		"ammo" 1 {value 10}}
	{item "bulletrus_130"		"he"		"ammo" 1 {value 10}}


	;// Hotmod-added stuff

	{item "bullet23_zu23"		"aphe"		"ammo" 50 {value 5}}
	{item "bullet23_zu23"		"he"		"ammo" 50 {value 5}}

	{item "bullet57_s60"		"aphe"		"ammo" 4 {value 5}}
	{item "bullet57_s60"		"he"		"ammo" 4 {value 5}}

	{item "bullet73_2a28"		"heat"		"ammo" 1 {value 12}}
	{item "bullet73_2a28"		"he"		"ammo" 1 {value 8}}

	{item "bullet76_d56"		"apcr"		"ammo" 1 {value 8}}
	{item "bullet76_d56"		"heat"		"ammo" 1 {value 12}}
	{item "bullet76_d56"		"he"		"ammo" 1 {value 5}}

	{item "bullet82_b10"		"heat"		"ammo" 1 {value 8}}
	{item "bullet82_b10"		"he"		"ammo" 1 {value 5}}

	{item "bulletrus_85"		"heat"		"ammo" 1 {value 10}}

	{item "bullet85_d48"		"aphe"		"ammo" 1 {value 6}}
	{item "bullet85_d48"		"aphebc"	"ammo" 1 {value 8}}
	{item "bullet85_d48"		"he"		"ammo" 1 {value 6}}
	{item "bullet85_d48"		"heat"		"ammo" 1 {value 10}}

	{item "bullet100_d10"		"aphe"		"ammo" 1 {value 6}}
	{item "bullet100_d10"		"apcr"		"ammo" 1 {value 10}}
	{item "bullet100_d10"		"apcbc"		"ammo" 1 {value 8}}
	{item "bullet100_d10"		"aphebc"	"ammo" 1 {value 10}}
	{item "bullet100_d10"		"he"		"ammo" 1 {value 5}}
	{item "bullet100_d10"		"heat"		"ammo" 1 {value 12}}
	{item "bullet100_d10"		"apds"		"ammo" 1 {value 10}}

	{item "bullet115_2a20"		"apfsds"	"ammo" 1 {value 15}}
	{item "bullet115_2a20"		"he"		"ammo" 1 {value 10}}
	{item "bullet115_2a20"		"heat"		"ammo" 1 {value 15}}

	{item "bullet122_d49"		"he"		"ammo" 1 {value 8}}
	{item "bullet122_d49"		"aphe"		"ammo" 1 {value 8}}
	{item "bullet122_d49"		"aphebc"	"ammo" 1 {value 10}}
	{item "bullet122_d49"		"apds"		"ammo" 1 {value 15}}
	{item "bullet122_d49"		"heat"		"ammo" 1 {value 20}}

	{item "bullet122_m62"		"he"		"ammo" 1 {value 8}}
	{item "bullet122_m62"		"aphe"		"ammo" 1 {value 8}}
	{item "bullet122_m62"		"apcbc"		"ammo" 1 {value 8}}
	{item "bullet122_m62"		"apds"		"ammo" 1 {value 15}}
	{item "bullet122_m62"		"heat"		"ammo" 1 {value 20}}

	{item "bulletrus_122_l48"	"apcbc"		"ammo" 1 {value 10}}
	{item "bulletrus_122_l48"	"apds"		"ammo" 1 {value 12}}
	{item "bulletrus_122_l48"	"heat"		"ammo" 1 {value 12}}

	{item "bullet125_2a46"		"apfsds"	"ammo" 1 {value 15}}
	{item "bullet125_2a46"		"he"		"ammo" 1 {value 10}}
	{item "bullet125_2a46"		"heat"		"ammo" 1 {value 20}}

	;// ATGMs
	{item "3m6"					"atgm"		"ammo" 1 {value 15}}
	{item "3m11"				"atgm"		"ammo" 1 {value 15}}
	{item "9m14"				"atgm"		"ammo" 1 {value 15}}
	{item "3m7"					"atgm"		"ammo" 1 {value 18}}
	{item "9m111"				"atgm"		"ammo" 1 {value 25}}
	{item "gunbag_sov_9m14"							1 {value 10}}

	;// Aircraft Stuff

	{item "57mm_s-5"						"ammo" 10 {value 10}}
)

(define "items_artillery_sov"
	;// Vanilla Artillery
	{item "bulletrus_122_l22"	"he"		"ammo" 1 {value 8}}
	{item "bulletrus_122_l22"	"heat"		"ammo" 1 {value 14}}

	{item "bulletrus_152"		"aphe"		"ammo" 1 {value 12}}
	{item "bulletrus_152"		"aphebc"	"ammo" 1 {value 12}}
	{item "bulletrus_152"		"he"		"ammo" 1 {value 10}}

	{item "bulletrus_152_l24"	"he"		"ammo" 1 {value 10}}

	{item "bulletrus_203"		"he"		"ammo" 1 {value 50}}

	{item "82mm_rs82"						"ammo" 1 {value 15}}
	{item "132mm_bm13"						"ammo" 1 {value 20}}
	{item "300mm_bm30"						"ammo" 1 {value 30}}

	;// Hotmod Stuff

	{item "rocket122_9m22u"					"ammo" 1 {value 10}}
	{item "rocket140_bm14"					"ammo" 1 {value 10}}
	{item "bullet122_2a18"		"he"		"ammo" 1 {value 10}}
	{item "bullet122_2a18"		"heat"		"ammo" 1 {value 20}}
)

(define "items_heavy_usa"

	{item "bullet20_hs820"		"he"		"ammo" 50 {value 5}}
	{item "bullet20_hs820"		"ap"		"ammo" 50 {value 5}}

	{item "bullet20_m168"		"he"		"ammo" 50 {value 5}}
	{item "bullet20_m168"		"aphe"		"ammo" 50 {value 5}}

	{item "bullet40_bofors"		"he"		"ammo" 4 {value 5}}
	{item "bullet40_bofors"		"ap"		"ammo" 4 {value 5}}

	{item "bullet75_m2"			"he"		"ammo" 1 {value 5}}
	{item "bullet75_m2"			"heat"		"ammo" 1 {value 8}}

	{item "bullet75_m6"			"ap"		"ammo" 1 {value 4}}
	{item "bullet75_m6"			"apcbche"	"ammo" 1 {value 5}}
	{item "bullet75_m6"			"he"		"ammo" 1 {value 4}}

	{item "bullet75_m20" 		"heat"		"ammo" 1  {value 10}} ;// M20 recoilless rifle
	{item "bullet75_m20"  		"he"		"ammo" 1  {value 5}}

	{item "bullet76_m1a2"		"apcr"		"ammo" 1 {value 5}}
	{item "bullet76_m1a2"		"ap"		"ammo" 1 {value 5}}
	{item "bullet76_m1a2"		"he"		"ammo" 1 {value 5}}
	{item "bullet76_m1a2"		"sm"		"ammo" 1 {value 5}}

	{item "bullet76_m32"		"apcr"		"ammo" 1 {value 5}}
	{item "bullet76_m32"		"ap"		"ammo" 1 {value 5}}
	{item "bullet76_m32"		"he"		"ammo" 1 {value 5}}
	{item "bullet76_m32"		"sm"		"ammo" 1 {value 5}}

	{item "bullet90_m41"		"apbc"		"ammo" 1 {value 5}}
	{item "bullet90_m41"		"apcbche"	"ammo" 1 {value 5}}
	{item "bullet90_m41"		"apcr"		"ammo" 1 {value 5}}
	{item "bullet90_m41"		"heat"		"ammo" 1 {value 5}}
	{item "bullet90_m41"		"he"		"ammo" 1 {value 5}}
	{item "bullet90_m41"		"sm"		"ammo" 1 {value 5}}

	{item "bullet105_m68"		"heat"		"ammo" 1 {value 10}}
	{item "bullet105_m68"		"hesh"		"ammo" 1 {value 10}}
	{item "bullet105_m68"		"apds"		"ammo" 1 {value 10}}

	{item "bullet106_m40"		"he"		"ammo" 1 {value 10}}
	{item "bullet106_m40"		"heat"		"ammo" 1 {value 15}}

	{item "bullet120_m58"		"he"		"ammo" 1 {value 8}}
	{item "bullet120_m58"		"apbc"		"ammo" 1 {value 12}}
	{item "bullet120_m58"		"heat"		"ammo" 1 {value 16}}

	{item "bullet152_m81"		"he"		"ammo" 1 {value 10}}
	{item "bullet152_m81"		"atgm"		"ammo" 1 {value 18}}
	{item "bullet152_m81"		"heat"		"ammo" 1 {value 18}}

	{item "bullet165_l9"		"hesh"		"ammo" 1 {value 20}}

	;// ATGMs
	{item "mgm32a"				"atgm"		"ammo" 1 {value 15}}
	{item "agm22"				"atgm"		"ammo" 1 {value 15}}
	{item "mim23"				"sam"		"ammo" 1 {value 20}}
	{item "gunbag_usa_entac"						1 {value 10}}

	;// Aircraft Stuff

	{item "70mm_ffar"						"ammo" 7 {value 7}}

)

(define "items_artillery_usa"
	{item "bullet105_m1"		"he"		"ammo" 1 {value 5}}
	{item "bullet105_m1"		"heat"		"ammo" 1 {value 5}}
	{item "bullet105_m1"		"sm"		"ammo" 1 {value 5}}

	{item "bullet155_m1"		"he"		"ammo" 1 {value 10}}

	{item "bullet203_m1"		"he"		"ammo" 1 {value 20}}

	{item "rocket318_mgr3"					"ammo" 1 {value 100}}
	{item "x279mm_m388"						"ammo" 1 {value 500}}
)

(define "items_heavy_prc"
)

(define "items_artillery_prc"

	{item "rocket107_type63"				"ammo" 1 {value 15}}

)

(define "items_heavy_eng"
	{item "bulleteng_40"		"ap"		"ammo" 2 {value 5}}
	{item "bulleteng_40"		"apcbc"		"ammo" 2 {value 5}}

	{item "bulleteng_57"		"ap"		"ammo" 1 {value 5}}
	{item "bulleteng_57"		"apc"		"ammo" 1 {value 5}}
	{item "bulleteng_57"		"apcbc"		"ammo" 1 {value 5}}
	{item "bulleteng_57"		"he"		"ammo" 1 {value 5}}
)

(define "items_engineer"
;// fortification tools
	{item "shovel_ger"							1 {value 5}}
	{item "shovel_rus"							1 {value 5}}
	{item "pickaxe"								1 {value 10}}
	{item "tent_kit"							1 {value 5}}

;// general tools
	{item "mine_detector"						1 {value 20}}
	{item "repair_kit"							1 {value 20}}

;// speical ammo
	{item "flame_thrower"				"ammo"  10 {value 10}}
)

(define "items_explosives"
;// explosives
	{item "geballteladung_3kg"					1 {value 15}}
	{item "satchel_charge_rus"					1 {value 15}}

;// mines
	{item "s" "mine" 							 1 {value 5}}
	{item "tmi_35" "mine" 						 1 {value 10}}
	{item "tmi_43" "mine" 						 1 {value 10}}

	{item "pmd" "mine" 							 1 {value 5}}
	{item "tmd_b" "mine" 						 1 {value 10}}
	{item "tmd_44" "mine" 						 1 {value 10}}
)

(define "items_gunbags_launchers"
;// USA
	{item "gunbag_usa_entac"						1 {value 10}}
;// SOV
	{item "gunbag_sov_9m14"							1 {value 10}}
:// FRG
	{item "gunbag_frg_cobra"						1 {value 10}}
)

(define "items_gunbags"
;// USA
	{item "gunbag_usa_entac"						1 {value 20}}
	{item "gunbag_usa_m2"							1 {value 20}}
	{item "gunbag_usa_m29"							1 {value 15}}
	{item "gunbag_usa_m60"							1 {value 10}}
	{item "gunbag_usa_m1919"						1 {value 6}}
	{item "gunbag_usa_m20"							1 {value 10}}
	{item "ammobag_usa"								1 {value 20}}
;// SOV
	{item "gunbag_sov_9m14"							1 {value 20}}
	{item "gunbag_sov_b10"							1 {value 10}}
	{item "gunbag_sov_bm37"							1 {value 15}}
	{item "gunbag_sov_dshk"							1 {value 20}}
	{item "gunbag_sov_pk"							1 {value 15}}
	{item "gunbag_sov_sg43"							1 {value 6}}
	{item "gunbag_sov_spg9"							1 {value 15}}
	{item "ammobag_sov"								1 {value 20}}
;// FRG
	{item "gunbag_frg_m2"							1 {value 20}}
	{item "gunbag_frg_krh36"						1 {value 15}}
	{item "gunbag_frg_mg3"							1 {value 10}}
	{item "gunbag_frg_cobra"						1 {value 10}}
	{item "ammobag_frg"								1 {value 20}}
;// PRC
	{item "gunbag_prc_b10"							1 {value 10}}
	{item "gunbag_prc_bm37"							1 {value 15}}
	{item "gunbag_prc_dshk"							1 {value 20}}
	{item "gunbag_prc_sg43"							1 {value 6}}
	{item "ammobag_prc"								1 {value 20}}
)

;/*=================== Item Defines End ===================*/


;/*=================== Supply Defines Begin ===================*/


(define "supply_medic"
	{extender "supply_zone"
		{resupply
			("items_medic")
		}
		{radius 			8}		;// resupply radius in meter
		{resupplyPeriod 	1}		;// resupply period in seconds
		{regenerationPeriod 2}		;// regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				50}		;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.25}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "supply_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_generic")
			("items_gunbags_launchers")
			("items_light_sov")
			("items_light_usa")
			("items_light_prc")
			("items_light_frg")
			("items_light_ger")
			("items_light_rus")
			("items_light_fin")
			("items_heavy_sov")
			("items_heavy_usa")
			("items_heavy_eng")
			("items_heavy_prc")
			("items_heavy_ger")
			("items_heavy_rus")
			("items_heavy_fin")
			("items_artillery_sov")
			("items_artillery_usa")
			("items_artillery_prc")
		}
		{mechanicResources {amount 10}{value 10}}
		{radius 			8}		;// resupply radius in meter
		{resupplyPeriod 	2}		;// resupply period in seconds
		{regenerationPeriod 5}		;// regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				200}	;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.25}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "ammobag_ammo" ;//for deployed ammobags
	{extender "supply_zone"
		{resupply
			("items_light_generic")
			("items_light_sov")
			("items_light_usa")
			("items_light_prc")
			("items_light_frg")
			("items_light_ger")
			("items_light_rus")
			("items_light_fin")
		}
		{radius 			5}		;// resupply radius in meter
		{resupplyPeriod 	2}		;// resupply period in seconds
		{regenerationPeriod 0}		;// regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				500}	;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.25}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "apc_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_generic")
			("items_gunbags_launchers")
			("items_light_sov")
			("items_light_usa")
			("items_light_prc")
			("items_light_frg")
			("items_light_ger")
			("items_light_rus")
			("items_light_fin")
		}
		{radius 			8}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 5}		;// regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				100}	;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.25}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "flag_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_generic")
			("items_gunbags_launchers")
			("items_light_sov")
			("items_light_usa")
			("items_light_prc")
			("items_light_frg")
			("items_light_ger")
			("items_light_rus")
			("items_light_fin")
			("items_heavy_sov")
			("items_heavy_usa")
			("items_heavy_eng")
			("items_heavy_prc")
			("items_heavy_ger")
			("items_heavy_rus")
			("items_heavy_fin")
		}
		{radius 			24}		;// resupply radius in meter
		{resupplyPeriod 	5}		;// resupply period in seconds
		{regenerationPeriod 5}		;// regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				400}	;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.25}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "flag_ammo_heavy"
	{extender "supply_zone"
		{resupply
			("items_light_generic")
			("items_gunbags_launchers")
			("items_gunbags")
			("items_light_sov")
			("items_light_usa")
			("items_light_prc")
			("items_light_frg")
			("items_light_ger")
			("items_light_rus")
			("items_light_fin")
			("items_heavy_sov")
			("items_heavy_usa")
			("items_heavy_eng")
			("items_heavy_prc")
			("items_heavy_ger")
			("items_heavy_rus")
			("items_heavy_fin")
			("items_artillery_sov")
			("items_artillery_usa")
			("items_artillery_prc")
		}
		{radius 			24}		;// resupply radius in meter
		{resupplyPeriod 	10}		;// resupply period in seconds
		{regenerationPeriod 5}		;// regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				750}	;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.25}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "truck_ammo_small"
	{extender "supply_zone"
		{resupply
			("items_light_generic")
			("items_gunbags_launchers")
			("items_gunbags")
			("items_light_sov")
			("items_light_usa")
			("items_light_prc")
			("items_light_frg")
			("items_light_ger")
			("items_light_rus")
			("items_light_fin")
			("items_heavy_sov")
			("items_heavy_usa")
			("items_heavy_eng")
			("items_heavy_prc")
			("items_heavy_ger")
			("items_heavy_rus")
			("items_heavy_fin")
			("items_artillery_sov")
			("items_artillery_usa")
			("items_artillery_prc")
		}
		{mechanicResources {amount 10}{value 10}}
		{radius 			12}		;// resupply radius in meter
		{resupplyPeriod 	2}		;// resupply period in seconds
		{regenerationPeriod 3}		;// regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				400}	;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.25}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "truck_ammo"
	{extender "supply_zone"
		{resupply
			("items_light_generic")
			("items_gunbags_launchers")
			("items_gunbags")
			("items_light_sov")
			("items_light_usa")
			("items_light_prc")
			("items_light_frg")
			("items_light_ger")
			("items_light_rus")
			("items_light_fin")
			("items_heavy_sov")
			("items_heavy_usa")
			("items_heavy_eng")
			("items_heavy_prc")
			("items_heavy_ger")
			("items_heavy_rus")
			("items_heavy_fin")
			("items_artillery_sov")
			("items_artillery_usa")
			("items_artillery_prc")
		}
		{radius 			18}			;// resupply radius in meter
		{resupplyPeriod 	2}			;// resupply period in seconds
		{regenerationPeriod 2}			;// regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				750}		;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.25}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "truck_ammo_heavy"
	{extender "supply_zone"
		{resupply
			("items_light_generic")
			("items_gunbags_launchers")
			("items_gunbags")
			("items_light_sov")
			("items_light_usa")
			("items_light_prc")
			("items_light_frg")
			("items_light_ger")
			("items_light_rus")
			("items_light_fin")
			("items_heavy_sov")
			("items_heavy_usa")
			("items_heavy_eng")
			("items_heavy_prc")
			("items_heavy_ger")
			("items_heavy_rus")
			("items_heavy_fin")
			("items_artillery_sov")
			("items_artillery_usa")
			("items_artillery_prc")
		}
		{radius 			24}			;// resupply radius in meter
		{resupplyPeriod 	2}			;// resupply period in seconds
		{regenerationPeriod 2}			;// regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				1250}		;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.25}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "truck_ammo_artillery"
	{extender "supply_zone"
		{resupply
			("items_heavy_sov")
			("items_heavy_usa")
			("items_heavy_eng")
			("items_heavy_prc")
			("items_heavy_ger")
			("items_heavy_rus")
			("items_heavy_fin")
			("items_artillery_sov")
			("items_artillery_usa")
			("items_artillery_prc")
		}
		{radius 			24}			;// resupply radius in meter
		{resupplyPeriod 	2}			;// resupply period in seconds
		{regenerationPeriod 2}			;// regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				2000}		;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.25}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "supply_fuel"					;// Fuel truck. Only re-supplies fuel
	{extender "supply_zone"
		{fuel 	{amount 1}	{value 1}}
		{radius 			12}			;// resupply radius in meter
		{resupplyPeriod 	1}			;// resupply period in seconds
		{regenerationPeriod 0}			;// regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				%liters}	;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.25}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "supply_engineer_light"
	{extender "supply_zone"
		{resupply
			("items_engineer")
			("items_explosives")
		}
		{mechanicResources {amount 10}{value 10}}
		{radius 			12}			;// resupply radius in meter
		{resupplyPeriod 	2}			;// resupply period in seconds
		{regenerationPeriod 0}			;// regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				250}		;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.25}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "supply_engineer"
	{extender "supply_zone"
		{resupply
			("items_engineer")
			("items_explosives")
		}
		{mechanicResources {amount 10}{value 10}}
		{radius 			12}			;// resupply radius in meter
		{resupplyPeriod 	2}			;// resupply period in seconds
		{regenerationPeriod 0}			;// regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
		{limit 				1000}		;// max number of resupplies (0 = unlimited)
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.25}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
