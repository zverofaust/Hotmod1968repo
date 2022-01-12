		{"default"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis" }
				{faroffset 0 0 60 }
				{nearoffset 0 0 65 }
				{camera "zoom1" }
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
			}
			{level ;1
				{zoom}
				{vision_modes_active }
				{vignette "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance 50 }
				{distanceSet 0 }
				{delta 0}
				{offset 80 -3 45}
				{camera "zoom2"}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
		}
		
		{"vehicle.mg"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
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
				{offset -15 8 9}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
		}

		{"tank.medium"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 60}
				{nearoffset 0 0 70}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{vignette "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance 50}
				{distanceSet 0}
				{delta 0}
				{offset 80 -5 50}
				{camera "zoom2"}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera "zoom4"}
			}
		}

		{"tank.long"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 60}
				{nearoffset 0 0 70}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{vignette "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance 50}
				{distanceSet 0}
				{delta 0}
				{offset 95 -6 50}
				{camera "zoom2"}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera "zoom4"}
			}
		}

		{"td.common"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 60}
				{nearoffset 0 0 65}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{vignette "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance 50}
				{distanceSet 0}
				{delta 0}
				{offset 80 0 40}
				{camera "zoom2"}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera "zoom4"}
			}
			{level ;3
				{camera "zoom8"}
			}
		}

		{"tdbig.common"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 90}
				{nearoffset 20 0 75}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{vignette "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance 50}
				{distanceSet 0}
				{delta 0}
				{offset 120 -10 60}
				{camera "zoom2"}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera "zoom4"}
			}
			{level ;3
				{camera "zoom8"}
			}
		}

		{"atgun.common"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 80}
				{nearoffset -40 0 40}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance 50}
				{distanceSet 0}
				{delta 0}
				{offset 48 -7 28}
				{camera "zoom2"}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera "zoom4"}
			}
			{level ;3
				{camera "zoom8"}
			}
		}

		{"atgun.common.tall"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		50	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 90}
				{nearoffset -40 -17 55}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_artillery_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{distance 50}
				{distanceSet 0}
				{delta 0}
				{offset 65 -12 40}
				{camera "zoom2"}
				{ManualAccuracyZoom}
				{blur_strength 3}
				{disable_fow 0}
			}
			{level ;2
				{camera "zoom4"}
			}
			{level ;3
				{camera "zoom8"}
			}
		}

		{"aircraft.common"
			{clip
				{viewMin		-180}	; camera rotate upward limit (looking down)
				{viewMax		180	}	; camera rotate downward limit (looking up)
				{viewNear		0	}
				{viewFar		0	}	; desired view angle when zooming out (not correction)
				{viewcorrection	0	}	; percentage (from distanceMax) after which correction sets in. 80 in this case.
				{distanceMin	300	}	; camera min distance from object. value / 20 = meters
				{distanceMax	800	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "body"}
				{faroffset 0 0 60}		; camera position offect at distanceMax
				{nearoffset 0 0 50}		; camera position offect at distanceMin
				;{hide_crosshair 1}		; hides curser / crosshair
				{hide_hitmarker 1}		; hides hit indicators 
				{blur_strength 2}		; blur strength modifier
				{disable_fow}			; not disabled fog of war
				{no_grain}				; no film grain (graphics setting)
				{no_rim_light}			; no rim light (graphics setting)
			}
		}

		{"low_mg.common"
			{clip
				{viewMin		-40	}	; camera rotate upward limit (looking down)
				{viewMax		90	}	; camera rotate downward limit (looking up)
				{distanceMin	55	}	; camera min distance from object. value / 20 = meters
				{distanceMax	150	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 9 27}
				{nearoffset 0 25 20}
			;	{delta 20}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
			}
		}

		{"medium_mg.common"
			{clip
				{viewMin		-40	}	; camera rotate upward limit (looking down)
				{viewMax		90	}	; camera rotate downward limit (looking up)
				{distanceMin	55	}	; camera min distance from object. value / 20 = meters
				{distanceMax	150	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 20 40}
				{nearoffset 0 25 30}
			;	{delta 20}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
			}
		}

		{"low_cannon.common"
			{clip
				{viewMin		-40	}	; camera rotate upward limit (looking down)
				{viewMax		70	}	; camera rotate downward limit (looking up)
				{distanceMin	1	}	; camera min distance from object. value / 20 = meters
				{distanceMax	100	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 20 60}
				{nearoffset 0 25 45}
				{delta 20}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
			}
		}

		{"mortar.common"
			{clip
				{viewMin		-55	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{viewFar		-30	}	; desired view angle when zooming out (not correction)
				{viewcorrection	0.2	}	; percentage (from distanceMax) after which correction sets in. 80 in this case.
				{distanceMin	100	}	; camera min distance from object. value / 20 = meters
				{distanceMax	250	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset -40 0 150}
				{nearoffset -40 0 55}
				{delta 20}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{vignette "/texture/common/environment/lens_effects/zoom_vignette_artillery_01"}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_artillery_bp"}
				{distance 50}
				{distanceset 1}
				{delta 0}
				{linkBone "gun"}
				{offset 75 0 300}
				{gunnerviewoff 1}
				{camera "zoom1"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
			}
			{level ;2
				{camera "zoom2"}
				{offset 75 0 400}
			}
			{level ;3
				{camera "zoom2"}
				{offset 75 0 500}
			}
			{level ;4
				{camera "zoom2"}
				{offset 75 0 600}
			}
			{level ;5
				{camera "zoom2"}
				{offset 75 0 700}
			}
			{level ;6
				{camera "zoom2"}
				{offset 75 0 800}
			}
			{level ;7
				{camera "zoom2"}
				{offset 75 0 900}
			}
		}

		{"fieldgun.common"
			{clip
				{viewMin		-40	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	1	}	; camera min distance from object. value / 20 = meters
				{distanceMax	300	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -40 0 30}
				(mod "hardcore"
					{hide_crosshair 1}
					{hide_hitmarker 1}
				)
				{blur_strength 2}
				{disable_fow 0}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{vignette "/texture/common/environment/lens_effects/zoom_vignette_artillery_01"}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_artillery_bp"}
				{distance 50}
				{distanceset 1}
				{delta 0}
				{linkBone "gun"}
				{offset 75 0 50}
				{gunnerviewoff 1}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom2"}
				{offset 100 0 100}
			}
			{level ;3
				{camera "zoom2"}
				{offset 150 0 150}
			}
			{level ;4
				{camera "zoom2"}
				{offset 200 0 200}
			}
			{level ;5
				{camera "zoom2"}
				{offset 250 0 250}
			}
			{level ;6
				{camera "zoom2"}
				{offset 300 0 300}
			}
			{level ;5
				{camera "zoom2"}
				{offset 350 0 350}
			}
		}


		{"spg.common"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	1	}	; camera min distance from object. value / 20 = meters
				{distanceMax	300	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 85}
				{nearoffset -20 0 50}
				(mod "hardcore"
					{hide_crosshair 1}
					{hide_hitmarker 1}
				)
				{blur_strength 2}
				{disable_fow 0}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{vignette "/texture/common/environment/lens_effects/zoom_vignette_artillery_01"}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_artillery_bp"}
				{distance 50}
				{distanceset 1}
				{delta 0}
				{linkBone "gun"}
				{offset 75 0 50}
				{gunnerviewoff 1}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom2"}
				{offset 100 0 100}
			}
			{level ;3
				{camera "zoom2"}
				{offset 150 0 150}
			}
			{level ;4
				{camera "zoom2"}
				{offset 200 0 200}
			}
			{level ;5
				{camera "zoom2"}
				{offset 250 0 250}
			}
			{level ;6
				{camera "zoom2"}
				{offset 300 0 300}
			}
			{level ;5
				{camera "zoom2"}
				{offset 350 0 350}
			}
		}

		{"spgtall.common"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	1	}	; camera min distance from object. value / 20 = meters
				{distanceMax	300	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 85}
				{nearoffset -20 0 65}
				(mod "hardcore"
					{hide_crosshair 1}
					{hide_hitmarker 1}
				)
				{blur_strength 2}
				{disable_fow 0}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{vignette "/texture/common/environment/lens_effects/zoom_vignette_artillery_01"}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_artillery_bp"}
				{distance 50}
				{distanceset 1}
				{delta 0}
				{linkBone "gun"}
				{offset 75 0 50}
				{gunnerviewoff 1}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom2"}
				{offset 100 0 100}
			}
			{level ;3
				{camera "zoom2"}
				{offset 150 0 150}
			}
			{level ;4
				{camera "zoom2"}
				{offset 200 0 200}
			}
			{level ;5
				{camera "zoom2"}
				{offset 250 0 250}
			}
			{level ;6
				{camera "zoom2"}
				{offset 300 0 300}
			}
			{level ;5
				{camera "zoom2"}
				{offset 350 0 350}
			}
		}

		{"artillery.common"
			{clip
				{viewMin		-40	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	1	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 85}
				{nearoffset -50 0 30}
				(mod "hardcore"
					{hide_crosshair 1}
					{hide_hitmarker 1}
				)
				{blur_strength 2}
				{disable_fow 0}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{vignette "/texture/common/environment/lens_effects/zoom_vignette_artillery_01"}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_artillery_bp"}
				{distance 50}
				{distanceset 1}
				{delta 0}
				{linkBone "gun"}
				{offset 75 0 300}
				{gunnerviewoff 1}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
				{offset 100 0 500}
			}
			{level ;3
				{camera "zoom4"}
				{offset 200 0 600}
			}
			{level ;4
				{camera "zoom4"}
				{offset 300 0 700}
			}
			{level ;5
				{camera "zoom4"}
				{offset 400 0 800}
			}
			{level ;6
				{camera "zoom4"}
				{offset 500 0 900}
			}
			{level ;7
				{camera "zoom4"}
				{offset 600 0 1000}
			}
		}

		{"generic.unarmed"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 60}
				{nearoffset 0 0 65}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
		}

		{"small.unarmed"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 50}
				{nearoffset 0 0 35}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
		}