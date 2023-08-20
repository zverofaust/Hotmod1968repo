{"gunbagged"
	{on spawn
		{tags add "gunbagged"}
	}
}

{"gunbag"
	{on spawn
		{if not linked "human"
			{tags add "gunbag"}
		}
	}
}
	
	(define "gunbag"
		{"%guntype"
			{on "weapon_undeploy" sync
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
	("gunbag" guntype(m20_rcl)  	 			bagtype(gunbag_m20))
	("gunbag" guntype(entac)   					bagtype(gunbag_entac))
	("gunbag" guntype(mk18_agl)   				bagtype(gunbag_mk18))
	
	;///FRG
	("gunbag" guntype(mg3_lafette)   			bagtype(gunbag_mg3))
	("gunbag" guntype(mg_stand_m2g)   			bagtype(gunbag_m2_frg))
	("gunbag" guntype(81mm_krh36_frg)  			bagtype(gunbag_krh36_frg))
	("gunbag" guntype(m20g_rcl)   				bagtype(gunbag_m20_frg))
	("gunbag" guntype(cobra_atgm)   			bagtype(gunbag_cobra_frg))

	;///PRC
	("gunbag" guntype(sg43_stand_prc) 			bagtype(gunbag_sg43_prc))
	("gunbag" guntype(dshk_aa_prc)   			bagtype(gunbag_dshk_prc))
	("gunbag" guntype(82mm_bm37_prc)  			bagtype(gunbag_bm37_prc))
	("gunbag" guntype(b-10_prc)  				bagtype(gunbag_b10_prc))
	
	;///POL
	("gunbag" guntype(sg43_stand_pol) 			bagtype(gunbag_sg43_pol))
	("gunbag" guntype(mg_stand_pk_pol) 			bagtype(gunbag_pk_pol))
	("gunbag" guntype(dshk_aa_pol)   			bagtype(gunbag_dshk_pol))
	("gunbag" guntype(82mm_bm37_pol)  			bagtype(gunbag_bm37_pol))
	("gunbag" guntype(b-10_pol)  				bagtype(gunbag_b10_pol))
	("gunbag" guntype(spg9_pol)  				bagtype(gunbag_spg9_pol))
	("gunbag" guntype(9m14_pol)  				bagtype(gunbag_9m14_pol))


	;/// AI
	("gunbag" guntype(sg43_stand_sov_ai) 			bagtype(gunbag_sg43))
	("gunbag" guntype(mg_stand_pk_ai)   			bagtype(gunbag_pk))
	("gunbag" guntype(dshk_aa_sov_ai)   			bagtype(gunbag_dshk))
	("gunbag" guntype(82mm_bm37_sov_ai)  			bagtype(gunbag_bm37))
	("gunbag" guntype(b-10_82mm_ai)  				bagtype(gunbag_b10))
	("gunbag" guntype(spg9_ai)  					bagtype(gunbag_spg9))
	("gunbag" guntype(mg3_lafette_ai)   			bagtype(gunbag_mg3))
	("gunbag" guntype(mg_stand_m2g_ai)   			bagtype(gunbag_m2_frg))
	("gunbag" guntype(81mm_krh36_frg_ai)  			bagtype(gunbag_krh36_frg))
	("gunbag" guntype(mg_stand_m1919_ai) 			bagtype(gunbag_m1919))
	("gunbag" guntype(mg_stand_m60_ai)   			bagtype(gunbag_m60))
	("gunbag" guntype(mg_stand_m2_ai)   			bagtype(gunbag_m2))
	("gunbag" guntype(m29_mortar_ai)  	 			bagtype(gunbag_m29))
	("gunbag" guntype(sg43_stand_prc_ai)   			bagtype(gunbag_sg43_prc))
	("gunbag" guntype(dshk_aa_prc_ai)   			bagtype(gunbag_dshk_prc))
	("gunbag" guntype(82mm_bm37_prc_ai)   			bagtype(gunbag_bm37_prc))
	("gunbag" guntype(b-10_prc_ai)   				bagtype(gunbag_b10_prc))
	("gunbag" guntype(sg43_stand_pol_ai) 			bagtype(gunbag_sg43_pol))
	("gunbag" guntype(mg_stand_pk_pol_ai)   		bagtype(gunbag_pk_pol))
	("gunbag" guntype(dshk_aa_pol_ai)   			bagtype(gunbag_dshk_pol))
	("gunbag" guntype(82mm_bm37_pol_ai)  			bagtype(gunbag_bm37_pol))
	("gunbag" guntype(b-10_pol_ai)  				bagtype(gunbag_b10_pol))
	("gunbag" guntype(spg9_pol_ai)  				bagtype(gunbag_spg9_pol))
	
	
{"dozer"
	{on "hull_down"
		{able select 0}
		{ani_play "dozer_down"}
		{delay 2
			{start_sound "vehicle/deploy/trench"}
			{spawn "tank_cover2" "root" x}
			{spawn "building_smoke" "root"}
			{ani_play "dozer_up"}
			{delay 0.2
				{able select 1}
			}
		}
	}
}