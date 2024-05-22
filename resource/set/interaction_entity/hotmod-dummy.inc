;////----added for Hotmod
{"fx_piece_flame 100"			;// causes flamer thrower fuel to burn up after delay (disables far shooting)
	{on "delete_time" overload
		{delay 2
			{call "end"}
		}
	}
	{on "fire_radius" overload
		{fire radius 0.9 time 1.8 heating 0.75 follow}
	}
}

{"fx_piece_flame 160"			;// causes flamer thrower fuel to burn up after delay (disables far shooting)
	{on "delete_time" overload
		{delay 3.6
			{call "end"}
		}
	}
	{on "fire_radius" overload
		{fire radius 0.9 time 1.8 heating 0.75 follow}
	}
}

;//////////////////////armor comp /////////////////////////
{"hm68_cumulative_assistor"
	{on spawn {delay 0.7 {delete}}}
	{on ground_hit	{delete}}
	{on contact	{delete}}
}

{"cumulative_assistor_1gen"

	{on overlap begin
		{with_effector {call "armor_comp_on_1gen"}}
		{tags add "cumulative_assistor_spawn"}
	}
}



(define "cw_assist_spawner"
	{on spawn
		{spawn "%0" "sp_point1" x}
		{spawn "%0" "sp_point2" x}
		{spawn "%0" "sp_point3" x}
		{spawn "%0" "sp_point4" x}
		{spawn "%0" "sp_point5" x}
		{spawn "%0" "sp_point6" x}
		{spawn "%0" "sp_point7" x}
		{spawn "%0" "sp_point8" x}
		{spawn "%0" "sp_point9" x}
		{spawn "%0" "sp_point10" x}
		{spawn "%0" "sp_point11" x}
		{spawn "%0" "sp_point12" x}
		{spawn "%0" "sp_point13" x}
		{spawn "%0" "sp_point14" x}
		{spawn "%0" "sp_point15" x}
		{spawn "%0" "sp_point16" x}
		{spawn "%0" "sp_point17" x}
		{spawn "%0" "sp_point18" x}
		{spawn "%0" "sp_point19" x}
		{spawn "%0" "sp_point20" x}
		{spawn "%0" "sp_point21" x}
		{spawn "%0" "sp_point22" x}
		{spawn "%0" "sp_point23" x}
		{spawn "%0" "sp_point24" x}
		{spawn "%0" "sp_point25" x}
		{spawn "%0" "sp_point26" x}
		{spawn "%0" "sp_point27" x}
		{spawn "%0" "sp_point28" x}
		{spawn "%0" "sp_point29" x}
		{spawn "%0" "sp_point30" x}
		{spawn "%0" "sp_point31" x}
		{spawn "%0" "sp_point32" x}
		{spawn "%0" "sp_point33" x}
		{spawn "%0" "sp_point34" x}
		{spawn "%0" "sp_point35" x}
		{spawn "%0" "sp_point36" x}
		{spawn "%0" "sp_point37" x}
		{spawn "%0" "sp_point38" x}
		{spawn "%0" "sp_point39" x}
		{spawn "%0" "sp_point40" x}
		{spawn "%0" "sp_point41" x}
		{spawn "%0" "sp_point42" x}
		{spawn "%0" "sp_point43" x}
		{spawn "%0" "sp_point44" x}
		{spawn "%0" "sp_point45" x}
		{spawn "%0" "sp_point46" x}
		{spawn "%0" "sp_point47" x}
		{spawn "%0" "sp_point48" x}
		{spawn "%0" "sp_point49" x}
		{spawn "%0" "sp_point50" x}
		{spawn "%0" "sp_point51" x}
		{spawn "%0" "sp_point52" x}
		{spawn "%0" "sp_point53" x}
		{spawn "%0" "sp_point54" x}
		{spawn "%0" "sp_point55" x}
		{spawn "%0" "sp_point56" x}
		{spawn "%0" "sp_point57" x}
		{spawn "%0" "sp_point58" x}
		{spawn "%0" "sp_point59" x}
		{spawn "%0" "sp_point60" x}
		{spawn "%0" "sp_point61" x}
		{spawn "%0" "sp_point62" x}
		{spawn "%0" "sp_point63" x}
		{spawn "%0" "sp_point64" x}
		{spawn "%0" "sp_point65" x}
		{spawn "%0" "sp_point66" x}
		{spawn "%0" "sp_point67" x}
		{spawn "%0" "sp_point68" x}
		{spawn "%0" "sp_point69" x}
		{spawn "%0" "sp_point70" x}
		{spawn "%0" "sp_point71" x}
		{spawn "%0" "sp_point72" x}
		{spawn "%0" "sp_point73" x}
		{spawn "%0" "sp_point74" x}
		{spawn "%0" "sp_point75" x}
		{spawn "%0" "sp_point76" x}
		{spawn "%0" "sp_point77" x}
		{spawn "%0" "sp_point78" x}
		{spawn "%0" "sp_point79" x}
		{spawn "%0" "sp_point80" x}
		{spawn "%0" "sp_point81" x}
		{spawn "%0" "sp_point82" x}
		{spawn "%0" "sp_point83" x}
		{spawn "%0" "sp_point84" x}
		{spawn "%0" "sp_point85" x}
		{spawn "%0" "sp_point86" x}
		{spawn "%0" "sp_point87" x}
		{spawn "%0" "sp_point88" x}
		{spawn "%0" "sp_point89" x}
		{spawn "%0" "sp_point90" x}
		{spawn "%0" "sp_point91" x}
		{spawn "%0" "sp_point92" x}
		{spawn "%0" "sp_point93" x}
		{spawn "%0" "sp_point94" x}
		{spawn "%0" "sp_point95" x}
		{spawn "%0" "sp_point96" x}
		{spawn "%0" "sp_point97" x}
		{spawn "%0" "sp_point98" x}
		{spawn "%0" "sp_point99" x}
		{spawn "%0" "sp_point100" x}
		{spawn "%0" "sp_point101" x}
		{spawn "%0" "sp_point102" x}
		{spawn "%0" "sp_point103" x}
		{spawn "%0" "sp_point104" x}
		{spawn "%0" "sp_point105" x}
		{spawn "%0" "sp_point106" x}
		{spawn "%0" "sp_point107" x}
		{spawn "%0" "sp_point108" x}
		{spawn "%0" "sp_point109" x}
		{spawn "%0" "sp_point110" x}
		{spawn "%0" "sp_point111" x}
		{spawn "%0" "sp_point112" x}
		{spawn "%0" "sp_point113" x}
		{spawn "%0" "sp_point114" x}
		{spawn "%0" "sp_point115" x}
		{spawn "%0" "sp_point116" x}
		{spawn "%0" "sp_point117" x}
		{spawn "%0" "sp_point118" x}
		{spawn "%0" "sp_point119" x}
		{spawn "%0" "sp_point120" x}
		{delay 0.1 {delete}}

	}
)

{"armor_comp_assistor" ("cw_assist_spawner" args hm68_cumshell_assistor)}
;{"cw_cumshassist_spawner_1gen" ("cw_assist_spawner" args cw_cumshell_assistor_1gen)}

{"detector"
	{on spawn
	      {delay 0.2
		{delete}
	     }
	}
	{on bullet_hit overload
	       {impulse up 0.01 com}
	       {gravity 0.01}
	       {volumes "body" disable all}

	      {if stuff "heat_shell"
		 	{spawn "armor_comp_assistor" "missile_point" x}
	       else stuff "rocketlauncher"
	       	 	{spawn "armor_comp_assistor" "missile_point" x}
	       else stuff "cumulative_charge"
	      	 	{spawn "armor_comp_assistor" "missile_point" x}
	       else stuff "hesh"
	       		 {spawn "armor_comp_assistor" "missile_point" x}
	     }

	}
}

{"detector_big"
	{on spawn
	      {delay 0.2
		{delete}
	     }
	}
	{on bullet_hit overload
	       {impulse up 0.01 com}
	       {gravity 0.01}
	       {volumes "body" disable all}

	      {if stuff "heat_shell"
		 	{spawn "armor_comp_assistor" "missile_point" x}
	       else stuff "rocketlauncher"
	       	 	{spawn "armor_comp_assistor" "missile_point" x}
	       else stuff "cumulative_charge"
	      	 	{spawn "armor_comp_assistor" "missile_point" x}
	       else stuff "hesh"
	       		 {spawn "armor_comp_assistor" "missile_point" x}
	     }

	}
}


{"detector_extra_big"
	{on spawn
	      {delay 0.2
		{delete}
	     }
	}
	{on bullet_hit overload
	       {impulse up 0.01 com}
	       {gravity 0.01}
	       {volumes "body" disable all}

	      {if stuff "heat_shell"
		 	{spawn "armor_comp_assistor" "missile_point" x}
	       else stuff "rocketlauncher"
	       	 	{spawn "armor_comp_assistor" "missile_point" x}
	       else stuff "cumulative_charge"
	      	 	{spawn "armor_comp_assistor" "missile_point" x}
	       else stuff "hesh"
	       		 {spawn "armor_comp_assistor" "missile_point" x}
	     }

	}
}


;/////////////////////armor comp /////////////////////////