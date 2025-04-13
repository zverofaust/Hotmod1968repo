;/*=========== Hotmod Specifics Begin  ===========*/
{"pk_mounted"
	{on spawn
		{ani_play "bipod_open" 1}
	}
}
;/**=========== MACHINE GUNS BEGIN ===========**/

{"stuff weapon a-12_7"				;// props added to Browning M1919A4 .30 Cal
	{on spawn
		{link_sound        "action_recoil"    "weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound        "mid"        "weapon/shot/smallarms/s4/d2/RUS/DShK38/"}
		{link_sound        "far"        "weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
}

{"stuff weapon nsvt"				;// props added to Browning M1919A4 .30 Cal
	{on spawn
		{link_sound        "action_recoil"    "weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound        "mid"        "weapon/shot/smallarms/s4/d2/RUS/DShK38/"}
		{link_sound        "far"        "weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
}

{"stuff weapon kpv"				;// props added to Browning M1919A4 .30 Cal
	{on spawn
		{link_sound        "action_recoil"    "weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound        "mid"        "weapon/shot/smallarms/s4/d2/RUS/DShK38/"}
		{link_sound        "far"        "weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
}

{"stuff weapon kpvt"				;// props added to Browning M1919A4 .30 Cal
	{on spawn
		{link_sound        "action_recoil"    "weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound        "mid"        "weapon/shot/smallarms/s4/d2/RUS/DShK38/"}
		{link_sound        "far"        "weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
}


{"stuff weapon kpv_x2"				;// props added to Browning M1919A4 .30 Cal
	{on spawn
		{link_sound        "action_recoil"    "weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound        "mid"        "weapon/shot/smallarms/s4/d2/RUS/DShK38/"}
		{link_sound        "far"        "weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
}

{"stuff weapon kpv_x4"				;// props added to Browning M1919A4 .30 Cal
	{on spawn
		{link_sound        "action_recoil"    "weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound        "mid"        "weapon/shot/smallarms/s4/d2/RUS/DShK38/"}
		{link_sound        "far"        "weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
}

{"stuff weapon dshk"				;// props added to Browning M1919A4 .30 Cal
	{on spawn
		{link_sound        "action_recoil"    "weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound        "mid"        "weapon/shot/smallarms/s4/d2/RUS/DShK38/"}
		{link_sound        "far"        "weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon m2hb"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound		"action_recoil"		"weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound		"mid"		"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound		"far"		"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}


{"stuff weapon browning_m2"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound		"action_recoil"	"weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound		"mid"		"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound		"far"		"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon browning_m2_nomag"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound		"action_recoil"		"weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound		"mid"		"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound		"far"		"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon browning_m2d"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound		"action_recoil"		"weapon/action/recoil/closed_bolt_HMG/"}
		{link_sound		"mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/"}
		{link_sound		"far"			"weapon/shot/smallarms/s4/d3/RUS/DShK38/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon browning_m2x2"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound		"action_recoil" 	"weapon/shot/smallarms/s4/recoil/USA/M2HB/"}
		{link_sound		"head_loop_close" 	"weapon/shot/smallarms/s4/d1/USA/M2HB/Gun_Mounts/M33_DualMount_Head_Loop/"}
		{link_sound		"tail_close" 	"weapon/shot/smallarms/s4/d1/USA/M2HB/Gun_Mounts/Tail/"}
		{link_sound		"head_loop_mid"	"weapon/shot/smallarms/s4/d2/USA/M2HB/Gun_Mounts/M33_DualMount_Head_Loop/"}
		{link_sound		"tail_mid"		"weapon/shot/smallarms/s4/d2/USA/M2HB/Gun_Mounts/Tail/"}
		{link_sound		"head_loop_far"	"weapon/shot/smallarms/s4/d3/USA/M2HB/Gun_Mounts/M33_DualMount_Head_Loop/"}
		{link_sound		"tail_far"		"weapon/shot/smallarms/s4/d3/USA/M2HB/Gun_Mounts/Tail/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon browning_m2x4"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound		"action_recoil" 	"weapon/shot/smallarms/s4/recoil/USA/M2HB/"}
		{link_sound		"head_loop_close" 	"weapon/shot/smallarms/s4/d1/USA/M2HB/Gun_Mounts/M45_QuadMount_Head_Loop/"}
		{link_sound		"tail_close" 		"weapon/shot/smallarms/s4/d1/USA/M2HB/Gun_Mounts/Tail/"}
		{link_sound		"head_loop_mid"		"weapon/shot/smallarms/s4/d2/USA/M2HB/Gun_Mounts/M45_QuadMount_Head_Loop/"}
		{link_sound		"tail_mid"			"weapon/shot/smallarms/s4/d2/USA/M2HB/Gun_Mounts/Tail/"}
		{link_sound		"head_loop_far"		"weapon/shot/smallarms/s4/d3/USA/M2HB/Gun_Mounts/M45_QuadMount_Head_Loop/"}
		{link_sound		"tail_far"			"weapon/shot/smallarms/s4/d3/USA/M2HB/Gun_Mounts/Tail/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}


{"stuff weapon sg43"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound		"mid"		"weapon/shot/smallarms/s3/d2/RUS/SG43/"}
	    {link_sound		"far"		"weapon/shot/smallarms/s3/d3/RUS/SG43/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}


{"stuff weapon sgmb"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound		"mid"		"weapon/shot/smallarms/s3/d2/RUS/SG43/"}
	    {link_sound		"far"		"weapon/shot/smallarms/s3/d3/RUS/SG43/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}


{"stuff weapon sgmt"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound		"mid"		"weapon/shot/smallarms/s3/d2/RUS/SG43/"}
	    {link_sound		"far"		"weapon/shot/smallarms/s3/d3/RUS/SG43/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon pk"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound		"mid"		"weapon/shot/smallarms/s3/d2/RUS/SG43/"}
	    {link_sound		"far"		"weapon/shot/smallarms/s3/d3/RUS/SG43/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon pks"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound		"mid"		"weapon/shot/smallarms/s3/d2/RUS/SG43/"}
	    {link_sound		"far"		"weapon/shot/smallarms/s3/d3/RUS/SG43/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon pkmt"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound		"mid"		"weapon/shot/smallarms/s3/d2/RUS/SG43/"}
	    {link_sound		"far"		"weapon/shot/smallarms/s3/d3/RUS/SG43/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}


{"stuff weapon pkt"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound		"mid"		"weapon/shot/smallarms/s3/d2/RUS/SG43/"}
	    {link_sound		"far"		"weapon/shot/smallarms/s3/d3/RUS/SG43/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon dt"							;// props added to DT 
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/reciprocating/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/DP27/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/DP27/"}
	}
	("magazine" cut(0.75) show(2.5) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon rpd"							;// props added to DT 
	{on spawn
		{link_sound "action_recoil"		"weapon/action/recoil/open_bolt_MG/reciprocating/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/DP27/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/DP27/"}
	}
	("magazine" cut(0.75) show(2.5) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}


{"stuff weapon rpd_type56"							;// props added to DT 
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/reciprocating/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/DP27/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/DP27/"}
	}
	("magazine" cut(0.75) show(2.5) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon rpd_pol"							;// props added to DT 
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/reciprocating/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/DP27/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/DP27/"}
	}
	("magazine" cut(0.75) show(2.5) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon dp_pol"							;// props added to DT 
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/reciprocating/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/DP27/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/DP27/"}
	}
	("magazine" cut(0.75) show(2.5) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}
{"stuff weapon dp_type52"							;// props added to DT 
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/reciprocating/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/DP27/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/DP27/"}
	}
	("magazine" cut(0.75) show(2.5) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}
{"stuff weapon rp46_belt"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound		"mid"		"weapon/shot/smallarms/s3/d2/RUS/SG43/"}
	    {link_sound		"far"		"weapon/shot/smallarms/s3/d3/RUS/SG43/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon rp46_type58"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound		"mid"		"weapon/shot/smallarms/s3/d2/RUS/SG43/"}
	    {link_sound		"far"		"weapon/shot/smallarms/s3/d3/RUS/SG43/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon m60"					;// props added to MG 42 w/ Gurttrommel 34
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound "mid"			"weapon/shot/smallarms/s3/d2/USA/M1919A4/"}
		{link_sound "far"			"weapon/shot/smallarms/s3/d3/USA/M1919A4/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}


{"stuff weapon m60b"					;// props added to MG 42 w/ Gurttrommel 34
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound "mid"			"weapon/shot/smallarms/s3/d2/USA/M1919A4/"}
		{link_sound "far"			"weapon/shot/smallarms/s3/d3/USA/M1919A4/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}


{"stuff weapon m60d"					;// props added to MG 42 w/ Gurttrommel 34
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound "mid"			"weapon/shot/smallarms/s3/d2/USA/M1919A4/"}
		{link_sound "far"			"weapon/shot/smallarms/s3/d3/USA/M1919A4/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon mg1_belt"					;// props added to MG 42
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/GER/MG42/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/MG42/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/MG42/"}
	}
}

{"stuff weapon mg1_drum"					;// props added to MG 42 w/ Gurttrommel 34
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/GER/MG42/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/MG42/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/MG42/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}


{"stuff weapon mg1_tank"					;// props added to MG 42 w/ Gurttrommel 34
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/GER/MG42/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/MG42/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/MG42/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon mg1_x4"					;// props added to MG 42 w/ Gurttrommel 34
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/GER/MG42/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/MG42/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/MG42/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}


{"stuff weapon mg3_drum"					;// props added to MG 42 w/ Gurttrommel 34
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/GER/MG42/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/MG42/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/MG42/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon mg3_tank"					;// props added to MG 42 w/ Gurttrommel 34
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/GER/MG42/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/MG42/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/MG42/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon rpk"					;// props added to MG 42 w/ Gurttrommel 34
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/StG44/"}
		{link_sound "mid"		"weapon/shot/smallarms/s2/d2/GER/StG44/"}
		{link_sound "far"		"weapon/shot/smallarms/s2/d3/GER/StG44/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon rpk_v2"					;// props added to MG 42 w/ Gurttrommel 34
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/StG44/"}
		{link_sound "mid"		"weapon/shot/smallarms/s2/d2/GER/StG44/"}
		{link_sound "far"		"weapon/shot/smallarms/s2/d3/GER/StG44/"}
	}
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon bar_lmg"							;// props added to M1918A2 BAR 
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/USA/M1918A2_BAR/"}
		{link_sound "mid"			"weapon/shot/smallarms/s3/d2/USA/M1918A2_BAR/"}
		{link_sound "far"			"weapon/shot/smallarms/s3/d3/USA/M1918A2_BAR/"}
	}
	("magazine" cut(1.05) show(2.95) override(overload) impulse({impulse up -0.01}))
}


{"stuff weapon browning_m19a4"				;// props added to Browning M1919A4 .30 Cal
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound "mid"			"weapon/shot/smallarms/s3/d2/USA/M1919A4/"}
		{link_sound "far"			"weapon/shot/smallarms/s3/d3/USA/M1919A4/"}
	}
}

{"stuff weapon m1919a6"				;// props added to Browning M1919A4 .30 Cal
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound "mid"			"weapon/shot/smallarms/s3/d2/USA/M1919A4/"}
		{link_sound "far"			"weapon/shot/smallarms/s3/d3/USA/M1919A4/"}
	}
}

{"stuff weapon browning_m19a4_x2"				;// props added to Browning M1919A4 .30 Cal
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_MG/"}
		{link_sound "mid"			"weapon/shot/smallarms/s3/d2/USA/M1919A4/"}
		{link_sound "far"			"weapon/shot/smallarms/s3/d3/USA/M1919A4/"}
	}
}

;/**=========== MACHINE GUNS END ===========**/
;/**=========== ASSAULT RIFLES BEGIN ===========**/

{"stuff weapon ak47"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/StG44/"}
		{link_sound "mid"		"weapon/shot/smallarms/s2/d2/GER/StG44/"}
		{link_sound "far"		"weapon/shot/smallarms/s2/d3/GER/StG44/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon ak47_type56"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/StG44/"}
		{link_sound "mid"		"weapon/shot/smallarms/s2/d2/GER/StG44/"}
		{link_sound "far"		"weapon/shot/smallarms/s2/d3/GER/StG44/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon ak47_pol"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/StG44/"}
		{link_sound "mid"		"weapon/shot/smallarms/s2/d2/GER/StG44/"}
		{link_sound "far"		"weapon/shot/smallarms/s2/d3/GER/StG44/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon ak47_akm"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/StG44/"}
		{link_sound "mid"		"weapon/shot/smallarms/s2/d2/GER/StG44/"}
		{link_sound "far"		"weapon/shot/smallarms/s2/d3/GER/StG44/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon akms"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/StG44/"}
		{link_sound "mid"		"weapon/shot/smallarms/s2/d2/GER/StG44/"}
		{link_sound "far"		"weapon/shot/smallarms/s2/d3/GER/StG44/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon akms_pol"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/StG44/"}
		{link_sound "mid"		"weapon/shot/smallarms/s2/d2/GER/StG44/"}
		{link_sound "far"		"weapon/shot/smallarms/s2/d3/GER/StG44/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon akms_s"				;// props added to all  Mosin-Nagant 1891/30 B
	{on spawn
		{link_sound "action_recoil"	 "weapon/action/recoil/closed_bolt/StG44/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/Shared/Surpressed_Rifle/"}
	}
}

{"stuff weapon akms_s_pol"				;// props added to all  Mosin-Nagant 1891/30 B
	{on spawn
		{link_sound "action_recoil"	 "weapon/action/recoil/closed_bolt/StG44/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/Shared/Surpressed_Rifle/"}
	}
}

{"stuff weapon type63_rifle"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/StG44/"}
		{link_sound "mid"		"weapon/shot/smallarms/s2/d2/GER/StG44/"}
		{link_sound "far"		"weapon/shot/smallarms/s2/d3/GER/StG44/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon m16"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/StG44/"}
		{link_sound "mid"		"weapon/shot/smallarms/s2/d2/GER/StG44/"}
		{link_sound "far"		"weapon/shot/smallarms/s2/d3/GER/StG44/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}


{"stuff weapon xm177"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/StG44/"}
		{link_sound "mid"		"weapon/shot/smallarms/s2/d2/GER/StG44/"}
		{link_sound "far"		"weapon/shot/smallarms/s2/d3/GER/StG44/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon xm177e2"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/StG44/"}
		{link_sound "mid"		"weapon/shot/smallarms/s2/d2/GER/StG44/"}
		{link_sound "far"		"weapon/shot/smallarms/s2/d3/GER/StG44/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon m16"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/StG44/"}
		{link_sound "mid"		"weapon/shot/smallarms/s2/d2/GER/StG44/"}
		{link_sound "far"		"weapon/shot/smallarms/s2/d3/GER/StG44/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon g1"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/FG42/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/FG42/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon g3"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/FG42/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/FG42/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon g3_og"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/FG42/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/FG42/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon fal"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/FG42/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/FG42/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon l1a1"						;// props added to StG 44 and MKb 42(H)
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/FG42/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/FG42/"}
	}
	("magazine" cut(1.20) show(1.95) override(overload) impulse({impulse up -0.01}))
}
;/**=========== ASSAULT RIFLES END ===========**/
;/**=========== BATTLE RIFLES BEGIN ===========**/

{"stuff weapon m1_garand"						;// props added to M1 Garand
	{on spawn
		{add_view "shell_rifle_M1_Garand"	"shell"		"FXshell"}
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/USA/M1_Garand/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/USA/M1_Garand/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/USA/M1_Garand/"}
		{link_sound "eject_clip"	"weapon/reload/M1_Garand/clip_eject/"}
	}
	("magazine" cut(0.1) show(2.9) override(overload) impulse({impulse up 2}))
}

{"stuff weapon m2_carbine"					;// props added to M1 and M1A1 Carbines
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s2/recoil/USA/M1_Carbine/"}
		{link_sound "mid"			"weapon/shot/smallarms/s2/d2/USA/M1_Carbine/"}
		{link_sound "far"			"weapon/shot/smallarms/s2/d3/USA/M1_Carbine/"}
	}
	("magazine" cut(1.05) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon m14"					;// props added to M1 and M1A1 Carbines
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s2/recoil/USA/M1_Carbine/"}
		{link_sound "mid"			"weapon/shot/smallarms/s2/d2/USA/M1_Carbine/"}
		{link_sound "far"			"weapon/shot/smallarms/s2/d3/USA/M1_Carbine/"}
	}
	("magazine" cut(1.05) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon m14a1"					;// props added to M1 and M1A1 Carbines
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s2/recoil/USA/M1_Carbine/"}
		{link_sound "mid"			"weapon/shot/smallarms/s2/d2/USA/M1_Carbine/"}
		{link_sound "far"			"weapon/shot/smallarms/s2/d3/USA/M1_Carbine/"}
	}
	("magazine" cut(1.05) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon m14_v2"					;// props added to M1 and M1A1 Carbines
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s2/recoil/USA/M1_Carbine/"}
		{link_sound "mid"			"weapon/shot/smallarms/s2/d2/USA/M1_Carbine/"}
		{link_sound "far"			"weapon/shot/smallarms/s2/d3/USA/M1_Carbine/"}
	}
	("magazine" cut(1.05) show(1.95) override(overload) impulse({impulse up -0.01}))
}
{"stuff weapon sks"							;// props added to AVT 40, SVT 38, SVT 40, and SKT 40
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s2/d2/GER/StG44/"}
		{link_sound "far"		"weapon/shot/smallarms/s2/d3/GER/StG44/"}
	}
	("magazine" cut(1.75) show(2.1) override(overload) impulse({impulse up -0.01}))
}
{"stuff weapon sks_type56"							;// props added to AVT 40, SVT 38, SVT 40, and SKT 40
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s2/d2/GER/StG44/"}
		{link_sound "far"		"weapon/shot/smallarms/s2/d3/GER/StG44/"}
	}
	("magazine" cut(1.75) show(2.1) override(overload) impulse({impulse up -0.01}))
}
{"stuff weapon svt40"							;// props added to AVT 40, SVT 38, SVT 40, and SKT 40
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/SVT40/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/SVT40/"}
	}
	("magazine" cut(1.75) show(2.1) override(overload) impulse({impulse up -0.01}))
}
{"stuff weapon mosin_scope"						;// props added to all  Mosin-Nagant 1891/30 variants and Mosin Carbine
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/M9130/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/M9130/"}
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/M9130/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/M9130/"}
	}
}

{"stuff weapon mosin_pol"						;// props added to all  Mosin-Nagant 1891/30 variants and Mosin Carbine
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/M9130/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/M9130/"}
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/M9130/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/M9130/"}
	}
}

{"stuff weapon mosin_type53"						;// props added to all  Mosin-Nagant 1891/30 variants and Mosin Carbine
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/M9130/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/M9130/"}
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/M9130/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/M9130/"}
	}
}


;/**=========== BATTLE RIFLES END ===========**/
;/**=========== SMGS BEGIN ===========**/

{"stuff weapon m3"					;// props added to M3 Grease Gun
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s1/recoil/USA/M3_GreaseGun/"}
		{link_sound "mid"			"weapon/shot/smallarms/s1/d2/USA/M3_GreaseGun/"}
		{link_sound "far"			"weapon/shot/smallarms/s1/d3/USA/M3_GreaseGun/"}
	}
	("magazine" cut(0.75) show(1.6) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon m3_v2"					;// props added to M3 Grease Gun
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s1/recoil/USA/M3_GreaseGun/"}
		{link_sound "mid"			"weapon/shot/smallarms/s1/d2/USA/M3_GreaseGun/"}
		{link_sound "far"			"weapon/shot/smallarms/s1/d3/USA/M3_GreaseGun/"}
	}
	("magazine" cut(0.75) show(1.6) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon mp2a1"						;// props added to MP 38, MP 40 variants and MP 41
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_smg/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/GER/MP40/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/GER/MP40/"}
	}
	("magazine" cut(0.75) show(1.6) override(overload) impulse({impulse up -0.01}))
}


{"stuff weapon zastavam49"						;// props added to MP 38, MP 40 variants and MP 41
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_smg/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/GER/MP40/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/GER/MP40/"}
	}
	("magazine" cut(0.75) show(1.6) override(overload) impulse({impulse up -0.01}))
}


{"stuff weapon walther_mpl"						;// props added to MP 38, MP 40 variants and MP 41
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_smg/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/GER/MP40/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/GER/MP40/"}
	}
	("magazine" cut(0.75) show(1.6) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon ppsh41_type50"					;// props added to PPSh 41 w/ Drum Magazine
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_SMG/Type2/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/RUS/PPSh41/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/RUS/PPSh41/"}

	}
	("magazine" cut(1.20) show(2.15) override(overload) impulse({impulse up -0.01}))
}


{"stuff weapon pps_pol"						;// props added to PPS 43
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/open_bolt_SMG/Type2/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/RUS/PPS43/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/RUS/PPS43/"}
	}
	("magazine" cut(0.75) show(1.6) override(overload) impulse({impulse up -0.01}))
}

;/**=========== SMGS END ===========**/
;/**=========== SNIPER RIFLES BEGIN ===========**/

{"stuff weapon m40_sniper"							;// props added to all  K 98k variants
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/K98k/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/K98k/"}
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/GER/K98k/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/K98k/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/K98k/"}
	}
}

{"stuff weapon m40a1"							;// props added to all  K 98k variants
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/K98k/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/K98k/"}
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/GER/K98k/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/K98k/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/K98k/"}
	}
}


{"stuff weapon xm21"					;// props added to M1 and M1A1 Carbines
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s2/recoil/USA/M1_Carbine/"}
		{link_sound "mid"			"weapon/shot/smallarms/s2/d2/USA/M1_Carbine/"}
		{link_sound "far"			"weapon/shot/smallarms/s2/d3/USA/M1_Carbine/"}
	}
	("magazine" cut(1.05) show(1.95) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon m1c_garand"						;// props added to M1 Garand
	{on spawn
		{add_view "shell_rifle_M1_Garand"	"shell"		"FXshell"}
		{link_sound "action_recoil"	"weapon/shot/smallarms/s3/recoil/USA/M1_Garand/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/USA/M1_Garand/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/USA/M1_Garand/"}
		{link_sound "eject_clip"	"weapon/reload/M1_Garand/clip_eject/"}
	}
	("magazine" cut(0.1) show(2.9) override(overload) impulse({impulse up 2}))
}

{"stuff weapon g3a3zf"							;// props added to all G/K 43 variants
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/GER/G43/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/GER/G43/"}
	}
}

{"stuff weapon mosin_scope"						;// props added to all  Mosin-Nagant 1891/30 variants and Mosin Carbine
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/M9130/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/M9130/"}
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/M9130/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/M9130/"}
	}
}

{"stuff weapon mosin_scope_pol"						;// props added to all  Mosin-Nagant 1891/30 variants and Mosin Carbine
	{on spawn
		{link_sound "open_bolt"		"weapon/reload/open_bolt/M9130/"}
		{link_sound "close_bolt"	"weapon/reload/close_bolt/M9130/"}
		{link_sound "action_recoil"	"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/M9130/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/M9130/"}
	}
}

{"stuff weapon svd"							;// props added to AVT 40, SVT 38, SVT 40, and SKT 40
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/SVT40/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/SVT40/"}
	}
	("magazine" cut(1.75) show(2.1) override(overload) impulse({impulse up -0.01}))
}

{"stuff weapon svd_pol"							;// props added to AVT 40, SVT 38, SVT 40, and SKT 40
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/closed_bolt/"}
		{link_sound "mid"		"weapon/shot/smallarms/s3/d2/RUS/SVT40/"}
		{link_sound "far"		"weapon/shot/smallarms/s3/d3/RUS/SVT40/"}
	}
	("magazine" cut(1.75) show(2.1) override(overload) impulse({impulse up -0.01}))
}

;/**=========== SNIPER RIFLES END ===========**/
;/**=========== PISTOLS BEGIN ===========**/

{"stuff weapon m1911a1"						;// props added to M1911A1
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s1/recoil/USA/M1911A1/"}
		{link_sound "mid"			"weapon/shot/smallarms/s1/d2/USA/M1911A1/"}
		{link_sound "far"			"weapon/shot/smallarms/s1/d3/USA/M1911A1/"}
	}
}

{"stuff weapon makarov"							;// props added to P 38
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/pistol/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/GER/P38/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/GER/P38/"}
	}
}

{"stuff weapon stechkin"						;// props added to PPD 40
	{on spawn
		{link_sound "action_recoil"	"weapon/action/recoil/pistol/"}
		{link_sound "mid"		"weapon/shot/smallarms/s1/d2/GER/P38/"}
		{link_sound "far"		"weapon/shot/smallarms/s1/d3/GER/P38/"}	; Placeholder
	}
	("magazine" cut(1.20) show(2.15) override(overload) impulse({impulse up -0.01}))
}

;/**=========== PISTOLS END ===========**/
;/**=========== ROCKET LAUNCHERS BEGIN ===========**/
{"stuff weapon m20_superzook"
	{on spawn
		{link_sound "mid"			"weapon/shot/reactive/d2/Shared/Rocket_Launcher/"}
		{link_sound "far"			"weapon/shot/reactive/d3/Shared/Rocket_Launcher/"}
	}
}
{"stuff weapon m67_maw"
	{on spawn
		{link_sound "mid"			"weapon/shot/reactive/d2/Shared/Rocket_Launcher/"}
		{link_sound "far"			"weapon/shot/reactive/d3/Shared/Rocket_Launcher/"}
	}
}
{"stuff weapon m72_law"
	{on spawn
		{link_sound "mid"			"weapon/shot/reactive/d2/Shared/Rocket_Launcher/"}
		{link_sound "far"			"weapon/shot/reactive/d3/Shared/Rocket_Launcher/"}
	}
}
{"stuff weapon rpg2"
	{on spawn
		{link_sound "mid"			"weapon/shot/reactive/d2/Shared/Rocket_Launcher/"}
		{link_sound "far"			"weapon/shot/reactive/d3/Shared/Rocket_Launcher/"}
	}
}

{"stuff weapon rpg7"
	{on spawn
		{link_sound "mid"			"weapon/shot/reactive/d2/Shared/Rocket_Launcher/"}
		{link_sound "far"			"weapon/shot/reactive/d3/Shared/Rocket_Launcher/"}
	}
}

{"stuff weapon m2gustaf"
	{on spawn
		{link_sound "mid"			"weapon/shot/reactive/d2/Shared/Rocket_Launcher/"}
		{link_sound "far"			"weapon/shot/reactive/d3/Shared/Rocket_Launcher/"}
	}
}

{"stuff weapon pzf44"
	{on spawn
		{link_sound "mid"			"weapon/shot/reactive/d2/Shared/Rocket_Launcher/"}
		{link_sound "far"			"weapon/shot/reactive/d3/Shared/Rocket_Launcher/"}
	}
}

{"stuff weapon strela-2"
	{on spawn
		{link_sound "mid"			"weapon/shot/reactive/d2/Shared/Rocket_Launcher/"}
		{link_sound "far"			"weapon/shot/reactive/d3/Shared/Rocket_Launcher/"}
	}
}

{"stuff weapon fim-43_redeye.weapon"
	{on spawn
		{link_sound "mid"			"weapon/shot/reactive/d2/Shared/Rocket_Launcher/"}
		{link_sound "far"			"weapon/shot/reactive/d3/Shared/Rocket_Launcher/"}
	}
}
;/**=========== ROCKET LAUNCHERS END ===========**/
;/**=========== GRENADE LAUNCHERS BEGIN ===========**/

{"stuff weapon chinalake"	;// props added to M1 Carbine w/ M8 Grenade Launcher
	{on spawn
		{link_sound "mid"			"weapon/shot/smallarms/s2/d2/USA/M1_Carbine/M8_Grenade_launcher/"}
		{link_sound "far"			"weapon/shot/smallarms/s2/d3/USA/M1_Carbine/M8_Grenade_launcher/"}
	}
}


{"stuff weapon m79"	;// props added to M1 Carbine w/ M8 Grenade Launcher
	{on spawn
		{link_sound "mid"			"weapon/shot/smallarms/s2/d2/USA/M1_Carbine/M8_Grenade_launcher/"}
		{link_sound "far"			"weapon/shot/smallarms/s2/d3/USA/M1_Carbine/M8_Grenade_launcher/"}
	}
}

{"stuff weapon handflammpatrone_dm34"	;// props added to M1 Carbine w/ M8 Grenade Launcher
	{on spawn
		{link_sound "mid"			"weapon/shot/smallarms/s2/d2/USA/M1_Carbine/M8_Grenade_launcher/"}
		{link_sound "far"			"weapon/shot/smallarms/s2/d3/USA/M1_Carbine/M8_Grenade_launcher/"}
	}
}

{"stuff weapon m7a3_grenade_launcher"	;// props added to M1 Carbine w/ M8 Grenade Launcher
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s2/recoil/USA/M1_Carbine/"}
		{link_sound "mid"			"weapon/shot/smallarms/s2/d2/USA/M1_Carbine/M8_Grenade_launcher/"}
		{link_sound "far"			"weapon/shot/smallarms/s2/d3/USA/M1_Carbine/M8_Grenade_launcher/"}
	}
}

{"stuff weapon xm148"	;// props added to M1 Carbine w/ M8 Grenade Launcher
	{on spawn
		{link_sound "action_recoil"	"weapon/shot/smallarms/s2/recoil/USA/M1_Carbine/"}
		{link_sound "mid"			"weapon/shot/smallarms/s2/d2/USA/M1_Carbine/M8_Grenade_launcher/"}
		{link_sound "far"			"weapon/shot/smallarms/s2/d3/USA/M1_Carbine/M8_Grenade_launcher/"}
	}
}
;/**=========== ROCKET LAUNCHERS END ===========**/
;/*=========== SHARED WEAPONS BEGIN ===========*/
{"stuff weapon shotgun"						;// props added to
	{on spawn
		{link_sound "action_recoil"		"weapon/action/recoil/bolt_action/"}
		{link_sound "mid"			"weapon/shot/smallarms/s2/d2/Shared/Shotgun/"}
		{link_sound "far"			"weapon/shot/smallarms/s2/d3/Shared/Shotgun/"}
	}
}



;/***=========== SHARED WEAPONS END ===========***/
;/////// Muzzles

{"muzzle_kpvt" ;// muzzle_kpvt
	{on spawn
		{add_view "flash_gun_hmg_m2hb"		"flashbarrel1"		"foresight1"}
		{link_sound "bkg_auto" "weapon/shot/bkg/auto/"}
	}
	{on fire "gun"
		{view start "flashbarrel1"}
		{play_sound "action_recoil_HMG"}
       {play_sound "HMG_Mid"}
      {play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel1"}
		}
	}
}

{"muzzle_kpvt_aa" ;// muzzle_kpvt
	{on spawn
		{add_view "flash_gun_hmg_m2hb"		"flashbarrel3"			"foresight14"}
		{add_view "flash_gun_hmg_m2hb"		"flashbarrel3a"			"foresight14"}
		{add_view "flash_gun_hmg_m2hb"		"flashbarrel3b"			"foresight14"}
		{add_view "flash_gun_hmg_m2hb"		"flashbarrel3c"			"foresight14"}
		;{link_sound "bkg_auto" "weapon/shot/bkg/auto/"}
	}
	{on fire "mgun"
		{view start "flashbarrel3b"}
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3b"}
		}
	}
}

{"muzzle_kpvt_aa2" ;// muzzle_kpvt
	{on spawn
		{add_view "flash_gun_hmg_m2hb"		"flashbarrel3"			"foresight14"}
		{add_view "flash_gun_hmg_m2hb"		"flashbarrel3a"			"foresight14"}
		{add_view "flash_gun_hmg_m2hb"		"flashbarrel3b"			"foresight14"}
		{add_view "flash_gun_hmg_m2hb"		"flashbarrel3c"			"foresight14"}
		;{link_sound "bkg_auto" "weapon/shot/bkg/auto/"}
	}
	{on fire "mgun2"
		{view start "flashbarrel3a"}
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3a"}
		}
	}
}

{"muzzle_kpvt_aa_coax" ;// muzzle_kpvt
	{on spawn
		{add_view "flash_gun_hmg_m2hb"		"flashbarrel3"			"foresight14"}
		{add_view "flash_gun_hmg_m2hb"		"flashbarrel3a"			"foresight14"}
		{add_view "flash_gun_hmg_m2hb"		"flashbarrel3b"			"foresight14"}
		{add_view "flash_gun_hmg_m2hb"		"flashbarrel3c"			"foresight14"}
		;{link_sound "bkg_auto" "weapon/shot/bkg/auto/"}
	}
	{on fire "mgun"
		{view start "flashbarrel3a"}
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3a"}
		}
	}
	{on fire "mgun2"
		{view start "flashbarrel3b"}
		{play_sound "action_recoil_HMG"}
		{play_sound "HMG_Mid"}
		{play_sound "HMG_Far"}
		{delay 0.2
			{view pause "flashbarrel3b"}
		}
	}
}
("flash_fx" tag(grenadelauncher)		flash(flash_shotgun)	foresight(4))

;///////