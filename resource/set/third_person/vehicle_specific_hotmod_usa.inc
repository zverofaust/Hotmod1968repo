		;;; Woo boy
		;
		; FROM camera.reg:
		; {fov} //Field of View; this is what actually zooms (lower FOV = more zoom). Can use here without referencing zoom# with string: {camera "{fov #}"}
		; {znear/zfar} //Seem to do nothing whatsoever.
		;
		; {viewMin/viewMax} //Camera depression/elevation, applies to all zoom levels;
		; {distanceMin/distanceMax} //Distances camera can be from linkbone object?
		;
		; {offset z x y} //Literally moves the LENS of the camera forward/backwards - left/right - up/down in relation to distance?!, but does NOT change point of rotation!
		; {nearoffset} //and {faroffset} No idea!
		;
		; {camera ""} //selects camera presets from camera.reg
		; {hide_hitmarker} //Not sure what hitmarker is
		; {hide_crosshair} //Game-generated crosshair
		; {blur_strength} //May have to do with blur at edges of screen in scoped mode
		; {disable_fow} //Binary -- Disables the brightness/darkness "fog" showing view cones
		; {no_grain} //Probably removes grain ziler
		;
		; {zoom} //ID's this as an actual scoped zoom view as opposed to "externa" view
		; {vision_modes_active} //Does the same in different ways and probably activates application of lens effects and blurs and such
		; {scope_vignette} //Points to .dds image file of the scope view
		; {distance} //??? Actual Camera origin (rotation) distance from linkbone?!?!?
		; {distanceSet} //???
		; {ManualAccuracyZoom} //???
		; {no_rim_light} //not sure what rim lights are but this disables it
		; {soundEffect} //Sound filter?
		
		
		
		{"vehicle.m151mg"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 50}
				{nearoffset 0 0 50}
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
				{offset -15 10 44}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
		}
		
		{"vehicle.m151m40"
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
				{hide_crosshair 1}
				{linkBone "visor1"}
				{offset 40 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_blank"}
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
				{offset 40 0 2}
			}
		}
		
		{"vehicle.m113"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 66}
				{nearoffset 0 0 66}
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
				{offset -15 10 54}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 0}
				{no_grain}
				{no_rim_light}
			}
		}
		
		{"vehicle.m114"
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
				{hide_crosshair 1}
				{linkBone "visor1"}
				{offset 5 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_blank"}
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
				{camera "zoom2.5"}
				{offset 2 0 2}
			}
			{level ;2
				{camera "zoom4"}
				{offset 2 0 2}
			}
		}	
		
		{"vehicle.zippo"
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
				{disable_fow 1}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{hide_crosshair 1}
				{linkBone "visor1"}
				{offset 0 0 0}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_blank"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 1}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
		}
		
		{"vehicle.m163"
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
				{disable_fow 1}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{hide_crosshair 1}
				{linkBone "visor1"}
				{offset 0 0 0}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_blank"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 1}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
		}
		
		{"tank.chaffee"
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
				{hide_crosshair 1}
				{linkBone "visor1"}
				{offset 5 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_blank"}
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
				{camera "zoom2.5"}
				{offset 2 0 2}
			}
			{level ;2
				{camera "zoom4"}
				{offset 2 0 2}
			}
		}
		
		{"tank.sherman"
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
				{hide_crosshair 1}
				{linkBone "visor1"}
				{offset 5 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_blank"}
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
				{camera "zoom2.5"}
				{offset 2 0 2}
			}
			{level ;2
				{camera "zoom4"}
				{offset 2 0 2}
			}
		}
		
		{"tank.patton"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
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
				{hide_crosshair 1}
				{linkBone "visor1"}
				{offset 5 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_blank"}
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
				{camera "zoom2.5"}
				{offset 2 0 2}
			}
			{level ;2
				{camera "zoom10"}
				{offset 2 0 2}
			}
		}
		
		{"tank.m60"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
				{nearoffset -45 0 70}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{hide_crosshair 1}
				{linkBone "visor1"}
				{offset 20 0 -5}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_blank"}
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
				{camera "zoom2.5"}
				{offset 20 0 -5}
			}
			{level ;2
				{camera "zoom10"}
				{offset 20 0 -5}
			}
		}
		
		{"tank.starship"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 70}
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
				{hide_crosshair 1}
				{linkBone "visor1"}
				{offset 5 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_blank"}
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
				{camera "zoom2.5"}
				{offset 2 0 2}
			}
			{level ;2
				{camera "zoom10"}
				{offset 2 0 2}
			}
		}
		
		{"tank.sheridan"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 60}
				{nearoffset -45 -15 65}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{hide_crosshair 1}
				{linkBone "visor1"}
				{offset 0 0 0}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_blank"}
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
				{camera "zoom2.5"}
				{offset 0 0 0}
			}
			{level ;2
				{camera "zoom10"}
				{offset 0 0 0}
			}
		}
		
		{"aircraft.hueyatgm"
			{clip
				{viewMin		-12	}	; camera rotate upward limit (looking down)
				{viewMax		20	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 15 70}
				{nearoffset -45 35 55}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{hide_crosshair 1}
				{linkBone "visor"}
				{offset 5 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_blank"}
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
				{camera "zoom2.5"}
				{offset 2 0 2}
			}
			{level ;2
				{camera "zoom4"}
				{offset 2 0 2}
			}
		}	
		
		{"aircraft.huey"
			{clip
				{viewMin		-65}	; camera rotate upward limit (looking down)
				{viewMax		45	}	; camera rotate downward limit (looking up)
				{viewNear		0	}
				{viewFar		-45	}	; desired view angle when zooming out (not correction)
				{viewcorrection	0	}	; percentage (from distanceMax) after which correction sets in. 80 in this case.
				{distanceMin	300	}	; camera min distance from object. value / 20 = meters
				{distanceMax	800	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "body"}
				{faroffset 0 0 80}		; camera position offect at distanceMax
				{nearoffset 0 0 70}		; camera position offect at distanceMin
				{hide_crosshair 1}		; hides curser / crosshair
				{hide_hitmarker 1}		; hides hit indicators 
				{blur_strength 2}		; blur strength modifier
				{disable_fow}			; not disabled fog of war
				{no_grain}				; no film grain (graphics setting)
				{no_rim_light}			; no rim light (graphics setting)
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "body"}
				{offset 100 10 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_blank"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 1}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
		}
		
		{"aircraft.cobra"
			{clip
				{viewMin		-65}	; camera rotate upward limit (looking down)
				{viewMax		45	}	; camera rotate downward limit (looking up)
				{viewNear		0	}
				{viewFar		-45	}	; desired view angle when zooming out (not correction)
				{viewcorrection	0	}	; percentage (from distanceMax) after which correction sets in. 80 in this case.
				{distanceMin	300	}	; camera min distance from object. value / 20 = meters
				{distanceMax	800	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "body"}
				{faroffset 0 0 80}		; camera position offect at distanceMax
				{nearoffset 0 0 70}		; camera position offect at distanceMin
				{hide_crosshair 1}		; hides curser / crosshair
				{hide_hitmarker 1}		; hides hit indicators 
				{blur_strength 2}		; blur strength modifier
				{disable_fow}			; not disabled fog of war
				{no_grain}				; no film grain (graphics setting)
				{no_rim_light}			; no rim light (graphics setting)
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor"}
				{offset 0 0 5}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_blank"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 1}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
		}
	