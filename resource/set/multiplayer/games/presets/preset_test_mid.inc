; == TEST MODE ==
(define "test_mid"
	{common
		{unitset
			{value "mid^conquestonly|doctrineonly"}
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
		(include "global_parameters/bots_generic.inc" period("mid"))
	}
)

;------------------------------------------------------------------------------------------------------------
{presets
	{"s:test_mid"
		{gameMode "test"}
		{unitMode "mid"}
		{specMode "all_normal"}
		{apply "only_roster_mid"}
		("test_mid"				start(50000) finish(50000) doctrine(1000) cp(1000))
	}
;------------------------------------------------------------------------------------------------------------
}