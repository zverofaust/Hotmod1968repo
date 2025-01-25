; == era1960 WAR STANDARD RESOURCES ==

(include "global_parameters/frontlines/timers_frontlines.inc")

(define "standard_all"
	{teams
		{a ;// ATTACKER TEAM
			{unitset
				{value "era1960^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_a"}
			(include "global_parameters/frontlines/unitlimits_attacker.inc")
			{chargeFactors
				("timers_attacker")
			}
			(include "global_parameters/frontlines/budget_attacker.inc" s(%start_a) f(%finish_a) d(%doctrine_a) r(%reinforcement_a))
		}
		{b ;// DEFENDER TEAM
			{unitset
				{value "era1960|frontlines^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_b"}
			(include "global_parameters/frontlines/unitlimits_defender.inc")
			{chargeFactors
				("timers_defender")
			}
			(include "global_parameters/frontlines/budget_defender.inc" s(%start_b) f(%finish_b) d(%doctrine_b))
		}
	}

	{bots
		(include "global_parameters/frontlines/bots_standard.inc" period("era1960") start_a(%start_a) finish_a(%finish_a) reinforcement_a(%reinforcement_a) start_b(%start_b) finish_b(%finish_b) doctrine_a(%doctrine_a) doctrine_b(%doctrine_b) cp_a(%cp_a) cp_b(%cp_b))
	}
)


; == era1960 WAR CUSTOM RESOURCES ==
(define "custom_all"
	{common

	}
	{teams
		{a ;// ATTACKER TEAM
			{unitset
				{value "era1960^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_a"}
			(include "global_parameters/frontlines/unitlimits_attacker.inc")
			{chargeFactors
				("timers_attacker")
			}
			(include "global_parameters/frontlines/budget_attacker_custom.inc" s(%start_a) f(%finish_a) d(%doctrine_a) r(%reinforcement_a))
		}
		{b ;// DEFENDER TEAM
			{unitset
				{value "era1960|frontlines^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_b"}
			(include "global_parameters/frontlines/unitlimits_defender.inc")
			{chargeFactors
				("timers_defender")
			}
			(include "global_parameters/frontlines/budget_defender_custom.inc" s(%start_b) f(%finish_b) d(%doctrine_b))
		}
	}

	{bots
		(include "global_parameters/frontlines/bots_custom.inc" period("era1960") start_a(%start_a) finish_a(%finish_a) reinforcement_a(%reinforcement_a) start_b(%start_b) finish_b(%finish_b) doctrine_a(%doctrine_a) doctrine_b(%doctrine_b) cp_a(%cp_a) cp_b(%cp_b))
	}
)


; == era1960 WAR TEST ==
(define "test_era1960"
	{teams
		{a ;// ATTACKER TEAM
			{unitset
				{value "era1960^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_a"}
			{unitLimits ""}
			{chargeFactors
				{value "*=0"}
			}
			(include "global_parameters/frontlines/budget_attacker.inc" s(%start_a) f(%finish_a) d(%doctrine_a) r(%reinforcement_a))
		}
		{b ;// DEFENDER TEAM
			{unitset
				{value "era1960|frontlines^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_b"}
			{unitLimits ""}
			{chargeFactors
				{value "*=0"}
			}
			(include "global_parameters/frontlines/budget_defender.inc" s(%start_b) f(%finish_b) d(%doctrine_b))
		}
	}

	{bots
		(include "global_parameters/frontlines/bots_standard.inc" period("era1960") start_a(%start_a) finish_a(%finish_a) reinforcement_a(%reinforcement_a) start_b(%start_b) finish_b(%finish_b) doctrine_a(%doctrine_a) doctrine_b(%doctrine_b) cp_a(%cp_a) cp_b(%cp_b))
	}
)

;------------------------------------------------------------------------------------------------------------
{presets
	{"s:era1960_standard_80"
		{gameMode "standard"}
		{unitMode "era1960"}
		{specMode "all_normal"}
		{apply "only_roster_era1960"}
		("standard_all"			start_a(8500) finish_a(8500) reinforcement_a(470) start_b(6800) finish_b(6800) doctrine_a(300) doctrine_b(200) cp_a(0:175,900:200,1500:225) cp_b(0:110,900:140,1500:170))
		{ranked}
	}
;------------------------------------------------------------------------------------------------------------

; // custom games here

;	{"c:era1960_custom_60"
;		{gameMode "custom"}
;		{unitMode "era1960"}
;		{specMode "cp_60"}
;		{apply "only_roster_era1960"}
;		("custom_all"			start_a(8500) finish_a(8500) reinforcement_a(470) start_b(6800) finish_b(6800) doctrine_a(300) doctrine_b(200) cp_a(0:175,900:200,1500:225) cp_b(0:110,900:140,1500:170))
;	}


;------------------------------------------------------------------------------------------------------------

	{"s:test_era1960"
		{gameMode "test"}
		{unitMode "era1960"}
		{specMode "all_normal"}
		{apply "only_roster_era1960"}
		("test_era1960"			start_a(50000) finish_a(50000) reinforcement_a(0) start_b(50000) finish_b(50000) doctrine_a(2000) doctrine_b(2000) cp_a(1000) cp_b(1000))
	}
}
