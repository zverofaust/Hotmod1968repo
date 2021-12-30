
; Presets for health and stamina levels

(include "/set/breed/presets/perks/skills_hotmod.inc")


;/*=========== Unique Presets Begin ===========*/

(define "spetsnaz"			;// Soviet Spetsnaz
	{"stealth"}
	{"speed" 1.15}
	{"stamina" "400%"}
	{"telescope"}
	{"vision" human_elite}
	{"aimedshot"}			;// Silenced Nagant Pistol
)


(define "specialforces"			;// US Special Forces
	{"stealth"}
	{"speed" 1.2}
	{"stamina" "300%"}
	{"health" "250%"}
	{"aimedshot"}			;// Silenced Nagant Pistol
)

(define "ranger"			;// US Special Forces
	{"stamina" "400%"}
	{"telescope"}
	{"vision" human_elite}
)

(define "sniper"		;// Snipers
	{"stealth"}
	{"stamina" "300%"}
	{"speed" 1.20}
)

(define "paratrooper"		;// Soviet Paratroopers
	{"speed" 1.15}
	{"health" "300%"}
	{"stamina" "250%"}
)

(define "aircav"	;// US Airmobile Cavalry
	{"speed" 1.15}
	{"health" "250%"}
	{"stamina" "300%"}
)

(define "acav"		;// US Armored Cavalry
	{"health" "300%"}
	{"stamina" "150%"}
	{"stamina_regeneration" "125%"}
)

(define "guards"		;// Soviet Guards
	{"health" "300%"}
	{"stamina" "150%"}
	{"stamina_regeneration" "125%"}
)

(define "redbanner"		;// Soviet Red Banner Guards
	{"health" "400%"}
	{"health_regeneration" "125%"}
	{"stamina" "200%"}
	{"stamina_regeneration" "125%"}
)

(define "marines"	;// Marines
	{"health" "350%"}
	{"stamina" "220%"}
	{"stamina_regeneration" "175%"}
)

(define "basic"			;// Reservists & Conscripts with only basic training
	{"speed" 0.9}
	{"health" "90%"}
	{"stamina" "90%"}
)

(define "border"			;// KGB Border Troops, relatively elite but poorly equipped
	{"stealth"}
	{"speed" 1.1}
	{"stamina" "150%"}
	{"telescope"}
	{"vision" human_elite}
)

(define "recon"		;// recon soldiers
	{"health" "160%"}
	{"stamina" "175%"}
	{"stamina_regeneration" "110%"}
	("recon_vision")
)

(define "tank_commander"	;// Tank Commander
	("loader_skill_smg_rank_2")
	("skilled_repair")
	{"health" "150%"}
	("expert_gun")
)

(define "tankman"			;// Tank Crew
	("loader_skill_smg_rank_2")
	("skilled_repair")
	{"health" "150%"}
	("skilled_gun")
)

;/*=========== Unique Presets End ===========*/