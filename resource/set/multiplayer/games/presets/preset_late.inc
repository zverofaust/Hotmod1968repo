; == late WAR STANDARD RESOURCES ==
(define "standard_all"
	{common
		{unitset
			{value "late^conquestonly|doctrineonly"}
		}
		{commandPoints "*=%cp"}
		(include "global_parameters/unitlimits.inc")
		{chargeFactors
			{value "*=1.00"}
		}
		(include "global_parameters/budget.inc" s(%start) f(%finish) d(%doctrine))
	}
	{bots
		(include "global_parameters/bots_generic.inc")
		("deploy_bots" period("late"))
	}
)

; == late WAR CUSTOM RESOURCES ==
(define "custom_all"
	{common
		{unitset
			{value "late^conquestonly|doctrineonly"}
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
		(include "global_parameters/bots_generic.inc")
		("deploy_bots" period("late"))
	}
)

;------------------------------------------------------------------------------------------------------------
{presets
	{"s:late_standard_100"
		{gameMode "standard"}
		{unitMode "late"}
		{specMode "all_normal"}
		{apply "only_roster_late"}
		("standard_all"			start(200) finish(4500) doctrine(100) cp(0:100,900:150,1500:200))
		{ranked}
	}
;------------------------------------------------------------------------------------------------------------	

	{"c:late_custom_80"
		{gameMode "custom"}
		{unitMode "late"}
		{specMode "cp_80"}
		{apply "only_roster_late"}
		("custom_all"			start(200) finish(4000) doctrine(100) cp(0:80,900:130,1500:180))
	}
	{"c:late_custom_100"
		{gameMode "custom"}
		{unitMode "late"}
		{specMode "cp_100"}
		{apply "only_roster_late"}
		("custom_all"			start(200) finish(4500) doctrine(100) cp(0:100,900:150,1500:200))
	}
	{"c:late_custom_120"
		{gameMode "custom"}
		{unitMode "late"}
		{specMode "cp_120"}
		{apply "only_roster_late"}
		("custom_all"			start(200) finish(5000) doctrine(100) cp(0:120,900:170,1500:220))
	}
	{"c:late_custom_140"
		{gameMode "custom"}
		{unitMode "late"}
		{specMode "cp_140"}
		{apply "only_roster_late"}
		("custom_all"			start(200) finish(5500) doctrine(100) cp(0:140,900:190,1500:240))
	}
	{"c:late_custom_160"
		{gameMode "custom"}
		{unitMode "late"}
		{specMode "cp_160"}
		{apply "only_roster_late"}
		("custom_all"			start(200) finish(6000) doctrine(100) cp(0:160,900:210,1500:260))
	}
	{"c:late_custom_180"
		{gameMode "custom"}
		{unitMode "late"}
		{specMode "cp_180"}
		{apply "only_roster_late"}
		("custom_all"			start(200) finish(6500) doctrine(100) cp(0:180,900:230,1500:280))
	}
	{"c:late_custom_200"
		{gameMode "custom"}
		{unitMode "late"}
		{specMode "cp_200"}
		{apply "only_roster_late"}
		("custom_all"			start(200) finish(7000) doctrine(100) cp(0:200,900:250,1500:300))
	}
	{"c:late_custom_250"
		{gameMode "custom"}
		{unitMode "late"}
		{specMode "cp_250"}
		{apply "only_roster_late"}
		("custom_all"			start(200) finish(7500) doctrine(100) cp(0:250,900:300,1500:350))
	}
;------------------------------------------------------------------------------------------------------------
}