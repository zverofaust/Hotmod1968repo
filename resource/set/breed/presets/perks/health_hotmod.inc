
; Presets for health and stamina levels

(include "/set/breed/presets/perks/vision.inc")


;/*=========== Standard Presets Begin ===========*/

(define "health_rank_1"		;// concripts or replacement soldiers
	{"health" "125%"}
	{"health_regeneration" "5%"}
	{"stamina" "75%"}
	{"stamina_regeneration" "75%"}
	{"personage" 0}
	("standard_vision")
)

(define "health_rank_2"		;// standard soldier, most infantry use this level
	{"health" "200%"}
	{"health_regeneration" "5%"}
	{"stamina" "125%"}
	{"stamina_regeneration" "100%"}
	{"personage" 0}
	("standard_vision")
)

(define "health_rank_3"		;// elite soldier with better training
	{"health" "300%"}
	{"health_regeneration" "10%"}
	{"stamina" "200%"}
	{"stamina_regeneration" "150%"}
	{"personage" 0}
	("standard_vision")
)

(define "health_rank_4"		;// super elite units
	{"health" "350%"}
	{"health_regeneration" "10%"}
	{"stamina" "250%"}
	{"stamina_regeneration" "200%"}
	{"personage" 0}
	("elite_vision")
)



;/*=========== Standard Presets End ===========*/