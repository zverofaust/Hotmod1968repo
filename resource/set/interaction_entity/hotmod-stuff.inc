;/*=========== Hotmod Specifics Begin  ===========*/
{"pk_mounted"
	{on spawn
		{ani_play "bipod_open" 1}
	}
}

{"stuff weapon pk"
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}

{"stuff weapon m60"
	("magazine" cut(1) show(1.95) override(overload) impulse({impulse up 0.3 forward 0.9 0.1 cy 1.5 0.25}))
}


;/////// Muzzles

{"muzzle_kpvt" ;// muzzle_kpvt
	{on spawn
		{add_view "flash_gun_hmg_m2hb"		"flashbarrel1"		"foresight1"}
		{link_sound "bkg_auto" "weapon/shot/bkg/auto/"}
	}
	{on fire "gun"
		{view start "flashbarrel1"}
		{play_sound "bkg_hmg"}
		{delay 0.2
			{view pause "flashbarrel1"}
		}
	}
}
;///////