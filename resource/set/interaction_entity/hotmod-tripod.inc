	(define "gunbag"
		{"%guntype"
			{on "tripod_undeploy"
				{if work "body"
					{if operatable
						{crew_emit}
						{delay 0.5
							{spawn "%bagtype" "root" x dir_velocity}
							{spawn "building_smoke" "basis"}
							{link_sound "gunhit" "weapon/drop/gun_drop"}
							{play_sound "gunhit"}
							{delete}
						}
					}
				}
			}
		}
	)

	;///SOV
	("gunbag" guntype(sg43_stand_sov) 			bagtype(gunbag_sg43))
	("gunbag" guntype(mg_stand_pk)   			bagtype(gunbag_pk))
	("gunbag" guntype(dshk_aa_sov)   			bagtype(gunbag_dshk))
	("gunbag" guntype(82mm_bm37_sov)  			bagtype(gunbag_bm37))
	("gunbag" guntype(b-10_82mm)  				bagtype(gunbag_b10))
	("gunbag" guntype(spg9)  					bagtype(gunbag_spg9))
	("gunbag" guntype(9m14)   					bagtype(gunbag_9m14))
	
	;///USA
	("gunbag" guntype(mg_stand_m1919) 			bagtype(gunbag_m1919))
	("gunbag" guntype(mg_stand_m60)   			bagtype(gunbag_m60))
	("gunbag" guntype(mg_stand_m2)   			bagtype(gunbag_m2))
	("gunbag" guntype(m29_mortar)  	 			bagtype(gunbag_m29))
	("gunbag" guntype(entac)   					bagtype(gunbag_entac))
	
	;///FRG
	("gunbag" guntype(mg3_lafette)   			bagtype(gunbag_mg3))
	("gunbag" guntype(mg_stand_m2g)   			bagtype(gunbag_m2_frg))
	("gunbag" guntype(m29g_mortar)  			bagtype(gunbag_m29_frg))

	;///PRC
	("gunbag" guntype(sg43_stand_prc) 			bagtype(gunbag_sg43_prc))
	("gunbag" guntype(dshk_aa_prc)   			bagtype(gunbag_dshk_prc))
	("gunbag" guntype(82mm_bm37_prc)  			bagtype(gunbag_bm37_prc))
	("gunbag" guntype(b-10_prc)  				bagtype(gunbag_b10_prc))
	



