		{"vehicle.universal_carrier"
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

		{"vehicle.mmg_carrier"
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
				{linkBone "mgun_1_rot1"}
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


		{"tank.valentinemk2" ; 
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 60}
				{nearoffset -45 0 45}
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
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no30"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.9"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "enclosed_vehicle"}
			}
		}
		
		{"tank.valentinemk9" ; 
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 60}
				{nearoffset -45 0 45}
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
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no39mk2s"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.9"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "enclosed_vehicle"}
			}
		}
		
		{"tank.churchill3" ; 
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
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_eng_no39mk4"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.9"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "enclosed_vehicle"}
			}
			{level ;2
				{camera "zoom3"}
			}
		}