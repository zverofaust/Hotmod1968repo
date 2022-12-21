; == mid WAR STANDARD RESOURCES ==
(define "standard_all"
	{common
		{unitset
			{value "mid^conquestonly|doctrineonly"}
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
		("deploy_bots" period("mid"))
	}
)

; == mid WAR CUSTOM RESOURCES ==
(define "custom_all"
	{common
		{unitset
			{value "mid^conquestonly|doctrineonly"}
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
		("deploy_bots" period("mid"))
	}
)

;------------------------------------------------------------------------------------------------------------
{presets
	{"s:mid_standard_100"
		{gameMode "standard"}
		{unitMode "mid"}
		{specMode "all_normal"}
		{apply "only_roster_mid"}
		("standard_all"			start(200) finish(3000) doctrine(100) cp(0:100,900:150,1500:200))
		{ranked}
	}
;------------------------------------------------------------------------------------------------------------	

	{"c:mid_custom_80"
		{gameMode "custom"}
		{unitMode "mid"}
		{specMode "cp_80"}
		{apply "only_roster_mid"}
		("custom_all"			start(200) finish(2500) doctrine(100) cp(0:80,900:130,1500:180))
	}
	{"c:mid_custom_100"
		{gameMode "custom"}
		{unitMode "mid"}
		{specMode "cp_100"}
		{apply "only_roster_mid"}
		("custom_all"			start(200) finish(3000) doctrine(100) cp(0:100,900:150,1500:200))
	}
	{"c:mid_custom_120"
		{gameMode "custom"}
		{unitMode "mid"}
		{specMode "cp_120"}
		{apply "only_roster_mid"}
		("custom_all"			start(200) finish(3500) doctrine(100) cp(0:120,900:170,1500:220))
	}
	{"c:mid_custom_140"
		{gameMode "custom"}
		{unitMode "mid"}
		{specMode "cp_140"}
		{apply "only_roster_mid"}
		("custom_all"			start(200) finish(4000) doctrine(100) cp(0:140,900:190,1500:240))
	}
	{"c:mid_custom_160"
		{gameMode "custom"}
		{unitMode "mid"}
		{specMode "cp_160"}
		{apply "only_roster_mid"}
		("custom_all"			start(200) finish(4500) doctrine(100) cp(0:160,900:210,1500:260))
	}
	{"c:mid_custom_180"
		{gameMode "custom"}
		{unitMode "mid"}
		{specMode "cp_180"}
		{apply "only_roster_mid"}
		("custom_all"			start(200) finish(5000) doctrine(100) cp(0:180,900:230,1500:280))
	}
	{"c:mid_custom_200"
		{gameMode "custom"}
		{unitMode "mid"}
		{specMode "cp_200"}
		{apply "only_roster_mid"}
		("custom_all"			start(200) finish(5500) doctrine(100) cp(0:200,900:250,1500:300))
	}
	{"c:mid_custom_250"
		{gameMode "custom"}
		{unitMode "mid"}
		{specMode "cp_250"}
		{apply "only_roster_mid"}
		("custom_all"			start(200) finish(6000) doctrine(100) cp(0:250,900:300,1500:350))
	}
;------------------------------------------------------------------------------------------------------------
}