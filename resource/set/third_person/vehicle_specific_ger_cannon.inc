		{"truck.flak30"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	300		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"turret"}
				{faroffset 		0 10 45}
				{nearoffset		-20 10 25}
				{camera			"zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				
				{linkBone		"visor"}
				
				{scope_vignette		"/texture/common/environment/lens_effects/vehicle_telescope_ger_20mm"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask		"/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				
				;{hide_crosshair}
				{distance		18	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		10 -4 4}
				{camera			"zoom1.5"	}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				
				{soundEffect	"opentop_vehicle"}
			}
			{level ;2
				{camera			"zoom3"	}
			}
		}
		
		{"atgun.flak30"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	300		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"}
				{faroffset 		0 -10 45}
				{nearoffset		-20 -10 25}
				{camera			"zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				
				{linkBone		"visor"}
				
				{scope_vignette		"/texture/common/environment/lens_effects/vehicle_telescope_ger_20mm"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask		"/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				
				;{hide_crosshair}
				{distance		18	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		10 -4 4}
				{camera			"zoom1.5"	}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				
				{soundEffect	"opentop_vehicle"}
			}
			{level ;2
				{camera			"zoom3"	}
			}
		}

		{"atgun.flak37"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	300		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"}
				{faroffset 		0 5 53}
				{nearoffset		-15 5 35}
				{camera			"zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				
				{linkBone		"visor"}
				
				{scope_vignette		"/texture/common/environment/lens_effects/vehicle_telescope_ger_37mm"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask		"/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				
				;{hide_crosshair}			
				{distance		5	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		-2 0 2}
				{camera			"zoom1.5"	}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				
				{soundEffect	"opentop_vehicle"}
			}
			{level ;2
				{camera			"zoom3"	}
			}
		}
		
		{"atgun.flak18"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"}
				{faroffset 		0 0 65}
				{nearoffset		-40 0 55}
				{camera			"zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				
				{linkBone		"gun_rot"}
				
				{scope_vignette		"/texture/common/environment/lens_effects/vehicle_telescope_zf20"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask		"/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				
				;{hide_crosshair}			
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		65 -1.35 13}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				
				{soundEffect	"opentop_vehicle"}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		
		{"atgun.flak18.mounted"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"}
				{faroffset 		0 0 80}
				{nearoffset		-45 0 75}
				{camera			"zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				
				{linkBone		"gun_rot"}
				
				{scope_vignette		"/texture/common/environment/lens_effects/vehicle_telescope_zf20"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask		"/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				
				;{hide_crosshair}			
				{distance		50	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		65 -1.35 13}
				{camera			"zoom2"	}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				
				{soundEffect	"opentop_vehicle"}
			}
			{level ;2
				{camera			"zoom4"	}
			}
		}
		
		{"atgun.pak36"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"}
				{faroffset 		0 0 50}
				{nearoffset		-35 0 30}
				{camera			"zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				
				{linkBone		"gun_rot"}
				
				{scope_vignette		"/texture/common/environment/lens_effects/vehicle_telescope_ger_zf1x11"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask		"/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				
				;{hide_crosshair}			
				{distance		5	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		0 -4 9}
				{camera			"zoom1.5"	}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{with_owner
                     {viewoff 	"shield"} ; removes shield to prevent clipping
		    	}	
				{soundEffect	"opentop_vehicle"}
			}
			{level ;2
				{camera			"zoom3"	} ; in reality it did not have zoom3
			}
		}

		{"atgun.pakt"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"}
				{faroffset 		0 0 50}
				{nearoffset		-35 0 30}
				{camera			"zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				
				{linkBone		"gun_rot"}
				
				{scope_vignette		"/texture/common/environment/lens_effects/vehicle_telescope_ger_zf1x11"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask		"/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				
				;{hide_crosshair}			
				{distance		5	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		0 -6 7}
				{camera			"zoom1.5"	}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{with_owner
                     {viewoff 	"shield"} ; removes shield to prevent clipping
		    	}	
				{soundEffect	"opentop_vehicle"}
			}
			{level ;2
				{camera			"zoom3"	} ; in reality it did not have zoom3
			}
		}
		
		{"atgun.pak38"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"}
				{faroffset 		0 0 50}
				{nearoffset		-28 0 30}
				{camera			"zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				
				{linkBone		"gun_rot"}
				
				{scope_vignette		"/texture/common/environment/lens_effects/vehicle_telescope_zf3x8"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask		"/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				
				;{hide_crosshair}			
				{distance		5	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		12 -4 4}
				{camera			"zoom1.5"	}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				
				{soundEffect	"opentop_vehicle"}
			}
			{level ;2
				{camera			"zoom3"	}
			}
		}
		
		{"atgun.pak38.mounted"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"}
				{faroffset 		0 0 60}
				{nearoffset		-35 0 50}
				{camera			"zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				
				{linkBone		"gun_rot"}
				
				{scope_vignette		"/texture/common/environment/lens_effects/vehicle_telescope_zf3x8"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask		"/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				
				;{hide_crosshair}			
				{distance		5	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		15 -4 6}
				{camera			"zoom1.5"	}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				
				{soundEffect	"opentop_vehicle"}
			}
			{level ;2
				{camera			"zoom3"	}
			}
		}
		
		{"atgun.pak40"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone		"basis"}
				{faroffset 		0 0 55}
				{nearoffset		-30 0 35}
				{camera			"zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				
				{linkBone		"gun_rot"}
				
				{scope_vignette		"/texture/common/environment/lens_effects/vehicle_telescope_zf3x8ii"}
				;{bump_spec_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask		"/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				
				;{hide_crosshair}			
				{distance		5	}
				{distanceSet	0	}
				{delta 			0	}
				{offset		10 -8 2}
				{camera			"zoom1.5"	}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				
				{soundEffect	"opentop_vehicle"}
			}
			{level ;2
				{camera			"zoom3"	}
			}
		}