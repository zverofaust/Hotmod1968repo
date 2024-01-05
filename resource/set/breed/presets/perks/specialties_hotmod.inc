
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
	{"health" "175%"}
)


(define "specialforces"			;// US Special Forces
	{"stealth"}
	{"speed" 1.2}
	{"stamina" "300%"}
	{"stamina_regeneration" "200%"}
	{"health" "150%"}
	("recon_vision")			
)

(define "seals"			;// US Navy SEALs
	{"stealth"}
	{"stamina" "300%"}
	{"stamina_regeneration" "200%"}
	{"health" "200%"}
	{"health_regeneration" "150%"}
	{"aimedshot"}			
)

(define "ranger"			;// US Army Rangers
	{"stamina" "400%"}
	{"stamina_regeneration" "125%"}
	{"speed" 1.2}
	{"telescope"}
	{"vision" human_elite}
	{"health" "175%"}
)

(define "sniper"		;// Snipers
	{"stealth"}
	{"stamina" "300%"}
	{"speed" 1.20}
)

(define "airborne"		;// US 82nd Airborne, Polish Powietrznodesantowa
	{"speed" 1.15}
	{"health" "200%"}
	{"stamina" "250%"}
)

(define "cavalry"	;// US Cavalry (Armored & Airmobile)
	{"speed" 1.1}
	{"health" "150%"}
	{"stamina" "300%"}
)

(define "jager"	;// West German Jagertruppen
	{"speed" 1.1}
	{"health" "150%"}
	{"stamina" "300%"}
	{"health_regeneration" "125%"}
	{"stamina_regeneration" "125%"}
)

(define "pzgren"	;// West German Panzergrenadiers
	{"health" "250%"}
)

(define "paratrooper"	;// Soviet VDV
	{"speed" 1.1}
	{"health" "150%"}
	{"stamina" "300%"}
)

(define "guards"		;// Soviet Guards
	{"health" "250%"}
)

(define "redbanner"		;// Soviet Red Banner Guards
	{"health" "300%"}
	{"health_regeneration" "150%"}
	{"stamina" "200%"}
	{"stamina_regeneration" "125%"}
)

(define "marines"	;// Marines, VMF, Desantowa
	{"health" "300%"}
	{"health_regeneration" "125%"}
	{"stamina_regeneration" "125%"}
)

(define "basic"			;// Reservists & Conscripts with only basic training
	{"speed" 0.9}
	{"health" "100%"}
	{"stamina" "90%"}
)

(define "border"			;// KGB Border Troops, relatively skilled but poorly equipped
	{"stealth"}
	{"speed" 1.1}
	{"stamina" "150%"}
	{"telescope"}
	{"vision" human_elite}
)

(define "recon"		;// recon soldiers
	{"stealth"}
	{"speed" 1.1}
	{"health" "160%"}
	{"stamina" "175%"}
	{"stamina_regeneration" "110%"}
	("recon_vision")
)

(define "militia"	;// Irregular Militia, armed citizenry, etc
	{"stealth"}
	{"speed" 1.15}
)

(define "guncrew"				;// Gun crew Tier 1
	("skilled_gun")
)

(define "guncrew_2"				;// Gun crew Tier 2 - USMC, VDV etc
	("expert_gun")
)

(define "guncrew_3"				;// Gun crew Tier 3 - Rangers, Spetsnaz, Specops, etc
	("elite_gun")
)

(define "crewman"				;// Vehicle crew Tier 1
	("skilled_repair")
	("skilled_gun")
)

(define "crewman_2"			;// Vehicle crew Tier 2 - USMC, VDV etc
	("skilled_repair")
	("expert_gun")
)

(define "crewman_3"			;// Vehicle crew Tier 3 - Rangers, Spetsnaz, Specops, etc
	("skilled_repair")
	("elite_gun")
)

(define "tankman"				;// Tank crew vanilla
	("skilled_repair")
	("skilled_gun")
)

(define "vehicleman"			;// Vehicle crew vanilla
	("skilled_repair")
	("skilled_gun")
)

(define "rozpoznawczy"		;// Polish 'Batalion Dywersyjno-Rozpoznawczy' Reconaissance and Diversion Battalion
	{"stealth"}
	{"speed" 1.2}
	{"health" "175%"}
	{"stamina" "175%"}
	{"stamina_regeneration" "125%"}
	("recon_vision")
)

(define "szturmowy"		;// Polish 'Samodzielny Batalion Szturmowy' Independent Assault Battalion
	{"health" "300%"}
	{"health_regeneration" "125%"}
	{"stamina" "150%"}
	{"stamina_regeneration" "125%"}
)

;/*=========== Unique Presets End ===========*/