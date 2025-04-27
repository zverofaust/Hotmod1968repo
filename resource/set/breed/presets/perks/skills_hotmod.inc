
; Presets for all melee, small arm weapons and avoidance skills

(include "/set/breed/presets/perks/health_hotmod.inc")


;/* - Fortification Building Skills - */

(define "fortification"
	{barricade
		{"fortifications" "foxhole"}
		{"fortifications" "medic_rally"}
		{"fortifications" "auto_medic_place_flag"}

	}
	{"resources" "10%"}
)

(define "deployable_weapons"
	{barricade
		{"fortifications" "deploy_sg43"}
		{"fortifications" "deploy_pk"}	
		{"fortifications" "deploy_dshk"}
		{"fortifications" "deploy_dshk_aa"}			
		{"fortifications" "deploy_bm37"}
		{"fortifications" "deploy_b10"}
		{"fortifications" "deploy_spg9"}
		{"fortifications" "deploy_9m14"}
		{"fortifications" "deploy_9p132"}
		{"fortifications" "deploy_ammobag_sov"}
		
		{"fortifications" "deploy_sg43_pol"}
		{"fortifications" "deploy_pk_pol"}
		{"fortifications" "deploy_dshk_pol"}
		{"fortifications" "deploy_dshk_aa_pol"}		
		{"fortifications" "deploy_bm37_pol"}
		{"fortifications" "deploy_b10_pol"}
		{"fortifications" "deploy_spg9_pol"}
		{"fortifications" "deploy_9m14_pol"}
		{"fortifications" "deploy_ammobag_pol"}
		
		{"fortifications" "deploy_m1919"}
		{"fortifications" "deploy_m60"}	
		{"fortifications" "deploy_m2"}
		{"fortifications" "deploy_m2_aa"}			
		{"fortifications" "deploy_m29"}
		{"fortifications" "deploy_m20"}
		{"fortifications" "deploy_entac"}
		{"fortifications" "deploy_mk18"}
		{"fortifications" "deploy_ammobag_usa"}
		
		{"fortifications" "deploy_mg3"}	
		{"fortifications" "deploy_m2_frg"}	
		{"fortifications" "deploy_krh36_frg"}
		{"fortifications" "deploy_m20_frg"}	
		{"fortifications" "deploy_cobra_frg"}	
		{"fortifications" "deploy_ammobag_frg"}
		
		{"fortifications" "deploy_sg43_prc"}	
		{"fortifications" "deploy_dshk_prc"}
		{"fortifications" "deploy_dshk_aa_prc"}		
		{"fortifications" "deploy_bm37_prc"}
		{"fortifications" "deploy_m20_prc"}
		{"fortifications" "deploy_b10_prc"}
		{"fortifications" "deploy_ammobag_prc"}
	}
	{"resources" "10%"}
)

(define "engineer"
	{fortification}
	{barricade
		{"fortifications" "barricade_sq"}
		{"fortifications" "barricade"}

		{"fortifications" "barbwire"}
		{"fortifications" "hedgehog"}

		{"fortifications" "foxhole"}
		{"fortifications" "foxhole_big"}
                {"fortifications" "mortar_pit"}
		{"fortifications" "tank_cover"}

		{"fortifications" "heavy_mg_mg34"}
		{"fortifications" "heavy_mg_maxim"}
		{"fortifications" "heavy_mg_maxim_m1910_30"}
		{"fortifications" "heavy_mg_m1917_30cal"}
	}
	{"resources" "1000%"}
	{"resources_regeneration" "0%"}
	{mechanic factor 1.0}
)


;/* - Repair Skills - */

(define "skilled_repair"
	{mechanic factor 1.0}
)

(define "basic_repair"
	{mechanic factor 0.5}
)


;/* - Revive Skills - */

(define "medic"
	{"medic" 10.0}
	{"speed" 1.15}
	{"stamina" "180%"}
)

;/* - Tank and Cannon Main Gun Weapon Skills - */

(define "elite_gun"
	{"tank_gun" lvl_6}
)

(define "expert_gun"
	{"tank_gun" lvl_4}
)

(define "skilled_gun"
	{"tank_gun" lvl_3}
)

(define "basic_gun"
	{"tank_gun" lvl_1}
)

;/* - AT Weapon Skills - */

(define "at_rank_1"
	{"rocketlauncher" lvl_1}
)

(define "at_rank_2"
	{"rocketlauncher" lvl_2}
)

(define "at_rank_3"
	{"rocketlauncher" lvl_3}
)

(define "at_rank_4"
	{"rocketlauncher" lvl_4}
)

(define "at_rank_5"
	{"rocketlauncher" lvl_5}
)

;/* - MG Weapon Skills - */

(define "mg_rank_1"
	{"mgun" lvl_1}
)

(define "mg_rank_2"
	{"mgun" lvl_2}
)

(define "mg_rank_3"
	{"mgun" lvl_3}
)

(define "mg_rank_4"
	{"mgun" lvl_4}
)

(define "mg_rank_5"
	{"mgun" lvl_5}
)


;/* - Smallarms Levels - ; All Soldiers *// The basic skill levels of every soldier, to be modified by the skills above and in specialties_hotmod

(define "skill_rank_1"
	("at_rank_1")
	{"pistol" lvl_2}
	{"smg" lvl_2}
	{"mgun" lvl_1}
	{"rifle" lvl_2}
	{"melee" lvl_1}
	{"avoidance" lvl_1}
	("health_rank_1")
	("fortification")
	("deployable_weapons")
	("basic_repair")
	("basic_gun")
)

(define "skill_rank_2"
	("at_rank_2")
	{"pistol" lvl_3}
	{"smg" lvl_3}
	{"mgun" lvl_2}
	{"rifle" lvl_3}
	{"melee" lvl_2}
	{"avoidance" lvl_2}
	("health_rank_2")
	("fortification")
	("deployable_weapons")
	("basic_repair")
	("basic_gun")
)

(define "skill_rank_3"
	("at_rank_3")
	{"pistol" lvl_4}
	{"smg" lvl_4}
	{"mgun" lvl_3}
	{"rifle" lvl_4}
	{"melee" lvl_3}
	{"avoidance" lvl_3}
	("health_rank_3")
	("fortification")
	("deployable_weapons")
	("basic_repair")
	("basic_gun")
)

(define "skill_rank_4"
	("at_rank_4")
	{"pistol" lvl_5}
	{"smg" lvl_5}
	{"mgun" lvl_4}
	{"rifle" lvl_5}
	{"melee" lvl_4}
	{"avoidance" lvl_4}
	("health_rank_4")
	("fortification")
	("deployable_weapons")
	("basic_repair")
	("basic_gun")
)

(define "skill_rank_5"
	("at_rank_5")
	{"pistol" lvl_6}
	{"smg" lvl_6}
	{"mgun" lvl_5}
	{"rifle" lvl_6}
	{"melee" lvl_5}
	{"avoidance" lvl_5}
	("health_rank_4")
	("fortification")
	("deployable_weapons")
	("basic_repair")
	("basic_gun")
)
