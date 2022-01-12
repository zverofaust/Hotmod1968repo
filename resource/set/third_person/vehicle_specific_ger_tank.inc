		{"vehicle.kubel"
			{clip
				{viewMin		-20}	; camera rotate upward limit (looking down)
				{viewMax		30 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 45}
				{nearoffset -30 0 32}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{offset -20 10 33}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
		}

		{"vehicle.221"
			{clip
				{viewMin		-20}	; camera rotate upward limit (looking down)
				{viewMax		30 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 60}
				{nearoffset -30 0 45}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "turret"}
				{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{offset -10 0 26}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
		}

		{"vehicle.hanomag"
			{clip
				{viewMin		-20}	; camera rotate upward limit (looking down)
				{viewMax		30 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 60}
				{nearoffset -30 0 45}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "mgun_a_rot1"}
				{vignette "/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{offset -15 8 9}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
		}

		{"tank.panhard"
			{clip
				{viewMin		-15}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	400}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -40 0 60}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor1"}
				{offset -4 0 3.5}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_l711"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}

		{"tank.panzer1b" ; Panzer I B
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 50}
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
				{offset 35 -5.0 6}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_2"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.4"}
			}
		}

		{"tank.panzer1f" ; Panzer I F
			{clip
				{viewMin		-15}	; camera rotate upward limit (looking down)
				{viewMax		25 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
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
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.4"}
			}
		}

		{"tank.panzer2c" ; Panzer II
			{clip
				{viewMin		-11}	; camera rotate upward limit (looking down)
				{viewMax		24 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 50}
				{nearoffset -20 0 45 }
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
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_4"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.4"}
			}
		}

		{"tank.panzer2f" ; Panzer II
			{clip
				{viewMin		-11}	; camera rotate upward limit (looking down)
				{viewMax		24 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
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
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_4"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.4"}
			}
		}

		{"tank.panzer2l" ; Panzer II
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 50}
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
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_4"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.4"}
			}
		}

		{"tank.panzer35t" ; Panzer 35t
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 60}
				{nearoffset -25 0 50}
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
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.4"}
			}
		}

		{"tank.panzer38t" ; Panzer 38t
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 55}
				{nearoffset -25 0 50}
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
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.4"}
			}
		}

		{"tank.panther" ; Panther tanks
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		 41}	; camera rotate downward limit (looking up)
				{distanceMin	002}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "fxfire3"}
				{faroffset 0 7 30}
				{nearoffset 5 7 16}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "fxfire3"}
				{offset 55 0 6}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_12a"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom5"}
			}
		}

		{"tank.panzer3e" ; Panzer III 37mm
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
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
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}

		{"tank.panzer3f" ; Panzer III 50mm short barrel
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
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
				{offset 50 -6.5 1.5}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5d"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{no_rim_light}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{with_owner
					{viewoff "detail7"} ; removes shield to prevent clipping
				}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}

		{"tank.panzer3l" ; Panzer III 50mm long barrel
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
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
				{offset 50 -6.5 1.5}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5e"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{with_owner
					{viewoff "shieldt shieldl5 shieldr5"} ; removes shield to prevent clipping
				}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}

		{"tank.panzer3flamm" ; Panzer III 50mm long barrel
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
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
				{offset 50 -6.5 1.5}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_2"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{with_owner
					{viewoff "shieldt shieldl5 shieldr5"} ; removes shield to prevent clipping
				}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}

		{"tank.panzer3n" ; Panzer III 75mm kwk 37
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
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
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{with_owner
					{viewoff "shieldt shieldl5 shieldr5"} ; removes shield to prevent clipping
				}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}
		{"tank.puma" ;
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
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
				{offset 50 -6.5 1.5}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_tzf_4b"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{with_owner
					{viewoff "shieldt shieldl5 shieldr5"} ; removes shield to prevent clipping
				}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}

		{"tank.panzer4f2" ; Panzer IV F2, G
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
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
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}

		{"tank.pz756r" ; Panzer 756r
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
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
				{offset 52 8 14}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_5f"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}

		{"tank.panzer4h" ; Panzer IV H, J
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
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
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{with_owner
					{viewoff "shieldt turret_basket"} ; removes shield to prevent clipping
				}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}

		{"tank.tigerh" ; Tiger
			{clip
				{viewMin 		-12}	; camera rotate upward limit (looking down)
				{viewMax		 41}	; camera rotate downward limit (looking up)
				{distanceMin	002}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "fxfire3"}
				{faroffset 0 10 27}
				{nearoffset 5 10 10.5}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "fxfire3"}
				{offset 55 1 3}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_9b"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom5"}
			}
		}

		{"tank.tiger" ; Tiger
			{clip
				{viewMin 		-12}	; camera rotate upward limit (looking down)
				{viewMax		 41}	; camera rotate downward limit (looking up)
				{distanceMin	002}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "fxfire3"}
				{faroffset 0 10 27}
				{nearoffset 5 10 10.5}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "fxfire3"}
				{offset 55 1 3}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_9b"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom5"}
			}
		}

		{"tank.tiger2p" ; Tiger II early production turret
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		 41}	; camera rotate downward limit (looking up)
				{distanceMin	002}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "fxfire3"}
				{faroffset 0 8.5 30}
				{nearoffset 5 8.5 16}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "fxfire3"}
				{offset 55 0 6}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_9b"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom5"}
			}
		}

		{"tank.tiger2h" ; Tiger II late production turret
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		 41}	; camera rotate downward limit (looking up)
				{distanceMin	002}	; camera min distance from object. value / 20 = meters
				{distanceMax	350}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "fxfire3"}
				{faroffset 0 8.5 30}
				{nearoffset 5 8.5 16}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "fxfire3"}
				{offset 53 0 7}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_tzf_9d"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 30}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom5"}
			}
		}

		{"td.panzerjaeger"
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	400}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 60}
				{nearoffset -30 0 50}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor1"}
				{offset 14 -11 -8}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{with_owner
					{viewoff "turretshield"} ; removes shield to prevent clipping
				}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}

		{"td.marder2" ; Marder II
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	400}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 65}
				{nearoffset -40 0 60}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor1"}
				{offset 0 0 0}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8ii"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}

		{"td.marder3m" ; Marder IIIm
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	400}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 65}
				{nearoffset -40 0 60}
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
				{offset 30 -6 10}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8ii"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 20}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}

		{"td.grille" ; mk103mm
			{clip
				{viewMin		-12}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	400}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 65}
				{nearoffset -40 0 60}
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
				{offset 5 7 21}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_zf1x40"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 10}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}

		{"td.jagdpanther"
			{clip
				{viewMin		-15}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	400}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 75}
				{nearoffset -40 0 65}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor1"}
				{offset 5 0 3}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_wzf1-4"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
			{level ;3
				{camera "zoom10"}
			}
		}

		{"td.ferdinand"
			{clip
				{viewMin		-15}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	400}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 85}
				{nearoffset -40 0 75}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor1"}
				{offset 6 0 3}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_sflz1a"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom5"}
			}
		}

		{"td.hetzer"
			{clip
				{viewMin		-15}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	400}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 65}
				{nearoffset -25 0 50}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor1"}
				{offset 5 0 2.5}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_sflz5a"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom5"}
			}
		}

		{"td.stug3b"
			{clip
				{viewMin		-15}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	400}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 65}
				{nearoffset -25 0 55}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor1"}
				{offset 3 0 3}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_sflz1"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom5"}
			}
		}

		{"td.stug3"
			{clip
				{viewMin		-15}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	400}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 65}
				{nearoffset -25 0 55}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor1"}
				{offset 3 0 3}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_sflz5a"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom5"}
			}
		}

		{"td.stuh42"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	400	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 65}
				{nearoffset -25 0 55}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor1"}
				{offset 3 0 3}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_rblf36"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom5"}
			}
		}

		{"td.sig33b"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	400	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 65}
				{nearoffset -25 0 55}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor1"}
				{offset 3 0 5}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_rblf36"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom5"}
			}
		}

		{"td.bison"
			{clip
				{viewMin		-15}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	400}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 75}
				{nearoffset -25 0 65}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "gun_rot"}
				{offset 10 0 10}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_ger_rblf36"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 10}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom5"}
			}
		}

		{"td.sturmtiger"
			{clip
				{viewMin		-15}	; camera rotate upward limit (looking down)
				{viewMax		20 }	; camera rotate downward limit (looking up)
				{distanceMin	200}	; camera min distance from object. value / 20 = meters
				{distanceMax	400}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 75}
				{nearoffset -25 0 60}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor1"}
				{offset 10 0 3}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_zf3x8"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 15}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom5"}
			}
		}