; == era1960 WAR STANDARD RESOURCES ==
(define "standard_all"
	{common
		{unitset
			{value "era1960^conquestonly|doctrineonly"}
		}
		{commandPoints "*=%cp"}
		(include "global_parameters/unitlimits.inc")
		{chargeFactors
			{value "*=1.00"}
		}
		(include "global_parameters/budget.inc" s(%start) f(%finish) d(%doctrine))
	}
	{bots
		(include "global_parameters/bots_generic.inc" period("era1960"))
	}
)

; == era1960 WAR CUSTOM RESOURCES ==
(define "custom_all"
	{common
		{unitset
			{value "era1960^conquestonly|doctrineonly"}
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
		(include "global_parameters/bots_generic.inc" period("era1960"))
	}
)

;------------------------------------------------------------------------------------------------------------
{presets
	{"s:era1960_standard_100"
		{gameMode "standard"}
		{unitMode "era1960"}
		{specMode "all_normal"}
		{apply "only_roster_era1960"}
		("standard_all"			start(200) finish(3300) doctrine(100) cp(0:100,900:150,1500:200))
		{ranked}
	}
;------------------------------------------------------------------------------------------------------------

	{"c:era1960_custom_80"
		{gameMode "custom"}
		{unitMode "era1960"}
		{specMode "cp_80"}
		{apply "only_roster_era1960"}
		("custom_all"			start(200) finish(2800) doctrine(100) cp(0:80,900:130,1500:180))
	}
	{"c:era1960_custom_100"
		{gameMode "custom"}
		{unitMode "era1960"}
		{specMode "cp_100"}
		{apply "only_roster_era1960"}
		("custom_all"			start(200) finish(3300) doctrine(100) cp(0:100,900:150,1500:200))
	}
	{"c:era1960_custom_120"
		{gameMode "custom"}
		{unitMode "era1960"}
		{specMode "cp_120"}
		{apply "only_roster_era1960"}
		("custom_all"			start(200) finish(3800) doctrine(100) cp(0:120,900:170,1500:220))
	}
	{"c:era1960_custom_140"
		{gameMode "custom"}
		{unitMode "era1960"}
		{specMode "cp_140"}
		{apply "only_roster_era1960"}
		("custom_all"			start(200) finish(4300) doctrine(100) cp(0:140,900:190,1500:240))
	}
	{"c:era1960_custom_160"
		{gameMode "custom"}
		{unitMode "era1960"}
		{specMode "cp_160"}
		{apply "only_roster_era1960"}
		("custom_all"			start(200) finish(4800) doctrine(100) cp(0:160,900:210,1500:260))
	}
	{"c:era1960_custom_180"
		{gameMode "custom"}
		{unitMode "era1960"}
		{specMode "cp_180"}
		{apply "only_roster_era1960"}
		("custom_all"			start(200) finish(5300) doctrine(100) cp(0:180,900:230,1500:280))
	}
	{"c:era1960_custom_200"
		{gameMode "custom"}
		{unitMode "era1960"}
		{specMode "cp_200"}
		{apply "only_roster_era1960"}
		("custom_all"			start(200) finish(5800) doctrine(100) cp(0:200,900:250,1500:300))
	}
	{"c:era1960_custom_250"
		{gameMode "custom"}
		{unitMode "era1960"}
		{specMode "cp_250"}
		{apply "only_roster_era1960"}
		("custom_all"			start(200) finish(6300) doctrine(100) cp(0:250,900:300,1500:350))
	}
;------------------------------------------------------------------------------------------------------------
}