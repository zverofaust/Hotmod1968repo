; == TEST MODE ==
(define "test_early"
	{common
		{unitset
			{value "early^conquestonly|doctrineonly"}
		}
		{commandPoints "*=%cp"}
		{unitLimits ""}
		{balancingFactorBonus {cp 1.0}}
		{chargeFactors
			{value "*=0"}
		}
		(include "global_parameters/budget.inc" s(%start) f(%finish) d(%doctrine))
	}
	{bots
		(include "global_parameters/bots_generic.inc" period("early"))
	}
)

;------------------------------------------------------------------------------------------------------------
{presets
	{"s:test_early"
		{gameMode "test"}
		{unitMode "early"}
		{specMode "all_normal"}
		{apply "only_roster_early"}
		("test_early"			start(50000) finish(50000) doctrine(1000) cp(1000))
	}
;------------------------------------------------------------------------------------------------------------
}