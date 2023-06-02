; == TEST MODE ==
(define "test_late"
	{common
		{unitset
			{value "late^conquestonly|doctrineonly"}
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
		(include "global_parameters/bots_generic.inc" period("late"))
	}
)

;------------------------------------------------------------------------------------------------------------
{presets
	{"s:test_late"
		{gameMode "test"}
		{unitMode "late"}
		{specMode "all_normal"}
		{apply "only_roster_late"}
		("test_late"			start(50000) finish(50000) doctrine(1000) cp(1000))
	}
;------------------------------------------------------------------------------------------------------------
}