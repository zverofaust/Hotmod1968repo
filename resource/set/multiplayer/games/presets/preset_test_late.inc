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
		{budgets
			{vehicle
				{mode "standard"}
				{resource
					{start		%start}
					{finish		%finish}
					{growTime	2400}		; in seconds
					{growTable	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
					{payback
						{cp			"0		20		50		80		100		120"} ; keep only 6 values
						{restore	"2.00	1.50	0.5 	0.25	0.10	0.05"}
					}
				}
				{buttons "inf1 inf2 empl vehicles tanks"}
			}
			{hero
				{resource 
					{start 		1000}
				} 
				{buttons "doctrine strat"}
				{tag "special"}
			}
		}
	}
	{bots
		(include "bots_generic.inc")
		("deploy_bots" period("late"))
	}
)

;------------------------------------------------------------------------------------------------------------
{presets
	{"s:test_late"
		{gameMode "test"}
		{unitMode "late"}
		{specMode "all_normal"}
		{apply "only_roster_late"}
		("test_late"			start(50000) finish(50000) cp(1000))
	}
;------------------------------------------------------------------------------------------------------------
}