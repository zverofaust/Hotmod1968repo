		{"vehicle.gaz67b"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 50}
				{nearoffset -30 0 38}
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
				{offset -20 10 38}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
		}

		{"tank.t2633"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 60}
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
				{offset 14 0 12	}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_hmg"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 10}
				{distanceSet 0}
				{delta 0}
				{no_rim_light}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.4"}
			}
		}

		{"tank.t3476early" ;
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
				{linkBone "visor1"}
				{offset 2 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tod6"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}

		{"tank.t3476" ; 
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
				{linkBone "visor1"}
				{offset 2 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pt4-7"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}

		{"tank.t3457" ; 
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
				{linkBone "visor1"}
				{offset 2 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pt-4-14"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}

		{"tank.t3485" 
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -50 0 65}
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
				{offset 5 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tsh16"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}

		{"tank.kv1" 
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 75}
				{nearoffset -45 0 65}
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
				{offset 2 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pt4-7"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}

		{"tank.kv2" 
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 85}
				{nearoffset -45 0 75}
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
				{offset 8 0 1}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tod9"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 10}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}

		{"tank.kv85" ; 
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 75}
				{nearoffset -45 0 65}
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
				{offset 2 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pt-4-15"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}
		
		{"tank.is2" ; 
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 80}
				{nearoffset -45 0 65}
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
				{offset 15 0 1}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tsh17"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}

		{"tank.t28" ; 
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 80}
				{nearoffset -45 0 65}
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
				{offset 2 0 1}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pt"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}

		{"tank.bt2" ; 
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 65}
				{nearoffset -35 0 55}
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
				{offset 4 0 15}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tfmp1"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}

		{"tank.t26" ; 
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 65}
				{nearoffset -35 0 55}
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
				{offset 5 0 1}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pt-1"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}

		{"tank.t60" ; 
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 65}
				{nearoffset -30 0 45}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "camera"}
				{offset 0.5 -5 2.5}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tfmp1"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}

		{"tank.t40" ; 
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 65}
				{nearoffset -30 0 45}
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
				{offset 3 2 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_hmg"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "enclosed_vehicle"}
			}
		}

		{"td.zis30" ; 
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 60}
				{nearoffset -45 0 50}
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
				{offset 0 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pp2"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{with_owner
					{viewoff "shield"} ; removes shield to prevent clipping
				}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"}
			}
		}

		{"td.su76" ; 
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 62}
				{nearoffset -40 0 50}
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
				{offset 2 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_op2"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom_14d"}
			}
		}

		{"td.su85"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 55}
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
				{offset 8 0 3}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tsh15"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}

		{"td.su100"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 55}
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
				{offset 5 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tsh19"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}

		{"td.su122"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 55}
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
				{offset 5 0 1}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pg1"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}

		{"td.su152"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 75}
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
				{linkBone "visor1"}
				{offset 5 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_st10"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}
		
		{"td.isu122"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 75}
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
				{linkBone "visor1"}
				{offset 5 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_tsh17"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}

		{"td.su100y"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 90}
				{nearoffset -30 0 75}
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
				{offset 5 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pg1"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}
		
		{"artillery.katyusha"
			{clip
				{viewMin		-40	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	1	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 80}
				{nearoffset -65 0 65}
				{hide_crosshair 1}
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
				{linkBone "turret"}
				{offset -400 0 200}
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
				{offset -300 0 300}
			}
			{level ;3
				{camera "zoom2.5"}
				{offset -200 0 400}
			}
			{level ;4
				{camera "zoom3"}
				{offset -100 0 500}
			}
			{level ;5
				{camera "zoom3.5"}
				{offset 0 0 600}
			}
			{level ;6
				{camera "zoom4"}
				{offset 100 0 700}
			}
			{level ;7
				{camera "zoom4.5"}
				{offset 200 0 800}
			}
			{level ;8
				{camera "zoom5"}
				{offset 300 0 900}
			}
			{level ;9
				{camera "zoom6"}
				{offset 400 0 1000}
			}
		}