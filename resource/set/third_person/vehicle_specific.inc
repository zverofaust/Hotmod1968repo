
		{"tank.panzer1b" ; Panzer I B
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset  0 0 50}
				{nearoffset -25 0 40}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}

				{linkBone "turret"}
				{offset 35 -5.0 60}

				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_2"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}

				;{hide_crosshair}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom2.4"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
			}
		}

		{"tank.panzer1f" ; Panzer I F
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		25	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 50}
				{nearoffset -25 0 48}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}

				{linkBone "turret"}
				{offset 40 0 7}

				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_4"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}

				;{hide_crosshair}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom2.4"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
			}
		}

		{"tank.panzer2c" ; Panzer II
			{clip
				{viewMin		-11	}	; camera rotate upward limit (looking down)
				{viewMax		24	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 50}
				{nearoffset -20 0 45}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}

				{linkBone "turret"}
				{offset 39 0 6.0}

				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_8"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}

				;{hide_crosshair}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom2.4"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
			}
		}

		{"tank.panzer2f" ; Panzer II
			{clip
				{viewMin		-11	}	; camera rotate upward limit (looking down)
				{viewMax		24	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 50}
				{nearoffset -20 0 48}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}

				{linkBone "turret"}
				{offset 43 0 6.5}

				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_8"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}

				;{hide_crosshair}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom2.4"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
			}
		}

		{"tank.panzer2l" ; Panzer II
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset  0 0 50}
				{nearoffset -20 0 50}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}

				{linkBone "turret"}
				{offset 42 6.0 4.5}

				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_8"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}

				;{hide_crosshair}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom2.4"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
			}
		}

		{"tank.panzer35t" ; Panzer 35t
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset  0 0 60}
				{nearoffset -25 0 50 }
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}

				{linkBone "turret"}
				{offset 38 -5.0 4.5}

				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_38t"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}

				;{hide_crosshair}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom2.4"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
			}
		}

		{"tank.panzer38t" ; Panzer 38t
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 55}
				{nearoffset -25 0 50 }
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}

				{linkBone "turret"}
				{offset 40 -6.5 -2}

				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_38t"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}

				;{hide_crosshair}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom2.4"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
			}
		}

		{"tank.panther" ; Panther tanks
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 80}
				{nearoffset 0 0 70}
				{camera "zoom1"	}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}

				{linkBone "turret"}
				{offset 60 -8 9}

				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_12a"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}

				;{hide_crosshair}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom2.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
			}
			{level ;2
				{camera "zoom5"}
			}
		}


		{"tank.panzer3e" ; Panzer III 37mm
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 60}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}

				{linkBone "turret"}
				{offset 46 -5.5 1}

				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5a"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}

				;{hide_crosshair}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom2.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
			}
		;	{level ;2
		;		{camera "zoom_14d"}
		;	}
		}
	
		{"tank.panzer3f" ; Panzer III 50mm short barrel
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 60 }
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}

				{linkBone "turret"}
				{offset 50 -6.5 1.5}

				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5d"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{no_rim_light}
				;{hide_crosshair}
				{distance 30}
				{distanceSet 0}
				{delta 0}

				{camera "zoom2.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
			}
		;	{level ;2
		;		{camera "zoom_14d"}
		;	}
		}

		{"tank.panzer3l" ; Panzer III 50mm long barrel
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset  0 0 70}
				{nearoffset -45 0 60}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}

				{linkBone "turret"}
				{offset 50 -6.5 1.5}

				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5e"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}

				;{hide_crosshair}
				{distance 30}
				{distanceSet 0}
				{delta 0}

				{camera "zoom2.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}

				{with_owner
					{viewoff "shieldt shieldl5 shieldr5"} ; removes shield to prevent clipping
				}
			}
		;	{level ;2
		;		{camera "zoom_14d"}
		;	}
		}
		
		
		{"tank.panzer3n" ; Panzer III 75mm kwk 37
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 60}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}

				{linkBone "turret"}
				{offset 52 -8 1.5}

				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5b"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}

				;{hide_crosshair}
				{distance 30}
				{distanceSet 0}
				{delta 0}

				{camera "zoom2.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{with_owner
					{viewoff "shieldt shieldl5 shieldr5"} ; removes shield to prevent clipping
				}
			}
		;	{level ;2
		;		{camera "zoom_14d"}
		;	}
		}

		{"tank.panzer4f2" ; Panzer IV F2, G
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 60}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}

				{linkBone "turret"}
				{offset 52 -8 1.5}

				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5f"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}

				;{hide_crosshair}
				{distance 30}
				{distanceSet 0}
				{delta 0}

				{camera "zoom2.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
			}
		;	{level ;2
		;		{camera "zoom_14d"}
		;	}
		}

		{"tank.panzer4h" ; Panzer IV H, J
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 60}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}

				{linkBone "turret"}
				{offset 52 -8 1.5}

				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5f1"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}

				;{hide_crosshair}
				{distance 30}
				{distanceSet 0}
				{delta 0}

				{camera "zoom2.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{with_owner
					{viewoff "shieldt  turret_basket"} ; removes shield to prevent clipping
				}
			}
		;	{level ;2
		;		{camera "zoom_14d"}
		;	}
		}


		{"tank.tiger" ; Tiger
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	380	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 80}
				{nearoffset -60 0 65}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}

				{linkBone "turret"}
				{offset 55 -9 4}

				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_9b"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				
				;{hide_crosshair}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom2.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
			}
			{level ;2
				{camera "zoom5"}
			}
		}
		{"tank.tiger2p" ; Tiger II early production turret
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	400	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 80}
				{nearoffset -50 0 70}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}

				{linkBone "turret"}
				{offset 65 -9 7}

				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_9b"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}

				;{hide_crosshair}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom2.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
			}
			{level ;2
				{camera "zoom5"}
			}
		}

		{"tank.tiger2h" ; Tiger II late production turret
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	400	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 80}
				{nearoffset -50 0 70}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}

				{linkBone "turret"}
				{offset 65 -9 0}

				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_9d"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}

				;{hide_crosshair}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom2.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
			}
			{level ;2
				{camera "zoom5"}
			}
		}