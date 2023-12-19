{"gunbagged"
	{on spawn
		{delay 0.1
			{tags add "gunbagged"}
		}
	}
}

{"gunbag"
	{on spawn
		{delay 0.1
			{if not linked "human"
				{tags add "gunbag"}
			}
		}
	}
}

	(define "gunbagtype"
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
	("gunbagtype" guntype(sg43_stand_sov) 			bagtype(gunbag_sg43))
	("gunbagtype" guntype(mg_stand_pk)   			bagtype(gunbag_pk))
	("gunbagtype" guntype(dshk_aa_sov)   			bagtype(gunbag_dshk))
	("gunbagtype" guntype(82mm_bm37_sov)  			bagtype(gunbag_bm37))
	("gunbagtype" guntype(b-10_82mm)  				bagtype(gunbag_b10))
	("gunbagtype" guntype(spg9)  					bagtype(gunbag_spg9))
	("gunbagtype" guntype(9m14)   					bagtype(gunbag_9m14))

	;///USA
	("gunbagtype" guntype(mg_stand_m1919) 			bagtype(gunbag_m1919))
	("gunbagtype" guntype(mg_stand_m60)   			bagtype(gunbag_m60))
	("gunbagtype" guntype(mg_stand_m2)   			bagtype(gunbag_m2))
	("gunbagtype" guntype(m29_mortar)  	 			bagtype(gunbag_m29))
	("gunbagtype" guntype(m20_rcl)  	 			bagtype(gunbag_m20))
	("gunbagtype" guntype(entac)   					bagtype(gunbag_entac))
	("gunbagtype" guntype(mk18_agl)   				bagtype(gunbag_mk18))

	;///FRG
	("gunbagtype" guntype(mg3_lafette)   			bagtype(gunbag_mg3))
	("gunbagtype" guntype(mg_stand_m2g)   			bagtype(gunbag_m2_frg))
	("gunbagtype" guntype(81mm_krh36_frg)  			bagtype(gunbag_krh36_frg))
	("gunbagtype" guntype(m20g_rcl)   				bagtype(gunbag_m20_frg))
	("gunbagtype" guntype(cobra_atgm)   			bagtype(gunbag_cobra_frg))

	;///PRC
	("gunbagtype" guntype(sg43_stand_prc) 			bagtype(gunbag_sg43_prc))
	("gunbagtype" guntype(dshk_aa_prc)   			bagtype(gunbag_dshk_prc))
	("gunbagtype" guntype(82mm_bm37_prc)  			bagtype(gunbag_bm37_prc))
	("gunbagtype" guntype(b-10_prc)  				bagtype(gunbag_b10_prc))

	;///POL
	("gunbagtype" guntype(sg43_stand_pol) 			bagtype(gunbag_sg43_pol))
	("gunbagtype" guntype(mg_stand_pk_pol) 			bagtype(gunbag_pk_pol))
	("gunbagtype" guntype(dshk_aa_pol)   			bagtype(gunbag_dshk_pol))
	("gunbagtype" guntype(82mm_bm37_pol)  			bagtype(gunbag_bm37_pol))
	("gunbagtype" guntype(b-10_pol)  				bagtype(gunbag_b10_pol))
	("gunbagtype" guntype(spg9_pol)  				bagtype(gunbag_spg9_pol))
	("gunbagtype" guntype(9m14_pol)  				bagtype(gunbag_9m14_pol))


	;/// AI
	;("gunbagtype" guntype(sg43_stand_sov_ai) 			bagtype(gunbag_sg43))
	;("gunbagtype" guntype(mg_stand_pk_ai)   			bagtype(gunbag_pk))
	;("gunbagtype" guntype(dshk_aa_sov_ai)   			bagtype(gunbag_dshk))
	;("gunbagtype" guntype(82mm_bm37_sov_ai)  			bagtype(gunbag_bm37))
	;("gunbagtype" guntype(b-10_82mm_ai)  				bagtype(gunbag_b10))
	;("gunbagtype" guntype(spg9_ai)  					bagtype(gunbag_spg9))
	;("gunbagtype" guntype(mg3_lafette_ai)   			bagtype(gunbag_mg3))
	;("gunbagtype" guntype(mg_stand_m2g_ai)   			bagtype(gunbag_m2_frg))
	;("gunbagtype" guntype(81mm_krh36_frg_ai)  			bagtype(gunbag_krh36_frg))
	;("gunbagtype" guntype(mg_stand_m1919_ai) 			bagtype(gunbag_m1919))
	;("gunbagtype" guntype(mg_stand_m60_ai)   			bagtype(gunbag_m60))
	;("gunbagtype" guntype(mg_stand_m2_ai)   			bagtype(gunbag_m2))
	;("gunbagtype" guntype(m29_mortar_ai)  	 			bagtype(gunbag_m29))
	;("gunbagtype" guntype(sg43_stand_prc_ai)   		bagtype(gunbag_sg43_prc))
	;("gunbagtype" guntype(dshk_aa_prc_ai)   			bagtype(gunbag_dshk_prc))
	;("gunbagtype" guntype(82mm_bm37_prc_ai)   			bagtype(gunbag_bm37_prc))
	;("gunbagtype" guntype(b-10_prc_ai)   				bagtype(gunbag_b10_prc))
	;("gunbagtype" guntype(sg43_stand_pol_ai) 			bagtype(gunbag_sg43_pol))
	;("gunbagtype" guntype(mg_stand_pk_pol_ai)   		bagtype(gunbag_pk_pol))
	;("gunbagtype" guntype(dshk_aa_pol_ai)   			bagtype(gunbag_dshk_pol))
	;("gunbagtype" guntype(82mm_bm37_pol_ai)  			bagtype(gunbag_bm37_pol))
	;("gunbagtype" guntype(b-10_pol_ai)  				bagtype(gunbag_b10_pol))
	;("gunbagtype" guntype(spg9_pol_ai)  				bagtype(gunbag_spg9_pol))


{"dozer"
	{on "hull_down"
		{able select 0}
		{ani_play "dozer_down"}
		{delay 15
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