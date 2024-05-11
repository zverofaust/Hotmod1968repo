; == era1960 STANDARD RESOURCES ==
(define "standard_all"
	{teams
		{a ;// PLAYER DEFENDER TEAM
			{unitset
			    {value "era1960^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_a"}
			(include "global_parameters/unitlimits.inc")
			{chargeFactors
				{value "*=1.00"}
			}
			{balancingFactorBonus	;// only affects players on team A (not bots)
				{chargeDelay 1}		;// adjusts the inital delay only
				{charge 1.0}		;// adjusts the interval only
			}
			(include "global_parameters/last_stand/budget_defender.inc" s(%start_a) f(%finish_a) d(%doctrine))
		}
		{b ;// AI ATTACKER TEAM
			{unitset
				{value "era1960^conquestonly|doctrineonly"}
			}
			{commandPoints "*=%cp_b"}
			(include "global_parameters/unitlimits.inc")
			{chargeFactors
				{value "*=1.00"}
			}
			(include "global_parameters/last_stand/budget_attacker.inc" s(%start_b) f(%finish_b) d(%doctrine))
		}
	}

	{bots
		(include "global_parameters/last_stand/bots_standard.inc" period("era1960") start_a(%start_a) finish_a(%finish_a) start_b(%start_b) finish_b(%finish_b) doctrine(%doctrine) cp_a(%cp_a) cp_b(%cp_b))
	}
)

;------------------------------------------------------------------------------------------------------------
{presets
	{"s:era1960_standard_100"
		{gameMode "standard"}
		{unitMode "era1960"}
		{specMode "all_normal"}
		{apply "only_roster_era1960"}
		("standard_all"			start_a(500) finish_a(1800) start_b(350) finish_b(4500) doctrine(200) cp_a(0:60,900:80,1500:100) cp_b(0:120,900:160,1500:220))
		{ranked}
	}
;------------------------------------------------------------------------------------------------------------

; // custom games here

;------------------------------------------------------------------------------------------------------------
}