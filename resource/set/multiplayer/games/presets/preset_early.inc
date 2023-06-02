; == EARLY WAR STANDARD RESOURCES ==
(define "standard_all"
	{common
		{unitset
			{value "early^conquestonly|doctrineonly"}
		}
		{commandPoints "*=%cp"}
		(include "global_parameters/unitlimits.inc")
		{chargeFactors
			{value "*=1.00"}
		}
		(include "global_parameters/budget.inc" s(%start) f(%finish) d(%doctrine))
	}
	{bots
		(include "global_parameters/bots_generic.inc" period("early"))
	}
)

; == EARLY WAR CUSTOM RESOURCES ==
(define "custom_all"
	{common
		{unitset
			{value "early^conquestonly|doctrineonly"}
		}
		{commandPoints "*=%cp"}
		(include "global_parameters/unitlimits.inc")
		{chargeFactors
			{value "*=1.00"}
			{customize "0;0.25;0.5;1;2"}
		}
		(include "global_parameters/budget_custom.inc" s(%start) f(%finish) d(%doctrine))
	}
	{bots
		(include "global_parameters/bots_generic.inc" period("early"))
	}
)

;------------------------------------------------------------------------------------------------------------
{presets
	{"s:early_standard_100"
		{gameMode "standard"}
		{unitMode "early"}
		{specMode "all_normal"}
		{apply "only_roster_early"}
		("standard_all"			start(200) finish(2650) doctrine(100) cp(0:100,900:150,1500:200))
		{ranked}
	}
;------------------------------------------------------------------------------------------------------------	

	{"c:early_custom_80"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_80"}
		{apply "only_roster_early"}
		("custom_all"			start(200) finish(2150) doctrine(100) cp(0:80,900:130,1500:180))
	}
	{"c:early_custom_100"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_100"}
		{apply "only_roster_early"}
		("custom_all"			start(200) finish(2650) doctrine(100) cp(0:100,900:150,1500:200))
	}
	{"c:early_custom_120"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_120"}
		{apply "only_roster_early"}
		("custom_all"			start(200) finish(3150) doctrine(100) cp(0:120,900:170,1500:220))
	}
	{"c:early_custom_140"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_140"}
		{apply "only_roster_early"}
		("custom_all"			start(200) finish(3650) doctrine(100) cp(0:140,900:190,1500:240))
	}
	{"c:early_custom_160"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_160"}
		{apply "only_roster_early"}
		("custom_all"			start(200) finish(4150) doctrine(100) cp(0:160,900:210,1500:260))
	}
	{"c:early_custom_180"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_180"}
		{apply "only_roster_early"}
		("custom_all"			start(200) finish(4650) doctrine(100) cp(0:180,900:230,1500:280))
	}
	{"c:early_custom_200"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_200"}
		{apply "only_roster_early"}
		("custom_all"			start(200) finish(5150) doctrine(100) cp(0:200,900:250,1500:300))
	}
	{"c:early_custom_250"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_250"}
		{apply "only_roster_early"}
		("custom_all"			start(200) finish(5650) doctrine(100) cp(0:250,900:300,1500:350))
	}
;------------------------------------------------------------------------------------------------------------
}