; == TEST MODE ==
(define "test_era1960"
	{common
		{unitset
			{value "era1960^conquestonly|doctrineonly"}
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
		(include "global_parameters/bots_generic.inc" period("era1960"))
	}
)

;------------------------------------------------------------------------------------------------------------
{presets
	{"s:test_mid"
		{gameMode "test"}
		{unitMode "era1960"}
		{specMode "all_normal"}
		{apply "only_roster_era1960"}
		("test_era1960"				start(50000) finish(50000) doctrine(1000) cp(1000))
	}
;------------------------------------------------------------------------------------------------------------
}