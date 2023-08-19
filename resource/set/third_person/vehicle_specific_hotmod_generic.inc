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
		
		{"atgun.mclosatgm"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	300	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 50}
				{nearoffset 0 0 40}
				{camera "zoom1"}
				{hide_crosshair 1}
				{hide_hitmarker}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor"}
				{offset 50 0 0}
				{vignette "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01"}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_vehicle_01_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				;{distance 0}
				{distanceSet 50}
				{delta 0}
				{camera "zoom1"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{hide_crosshair 1}
				{hide_hitmarker}				
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{offset 1500 0 0}
				{distanceSet 1500}
				;{distance 2500}
				{camera "zoom3"}
			}
		}
		{"atgun.saclosatgm"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	300	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 50}
				{nearoffset 0 0 40}
				{camera "zoom1"}
				{hide_crosshair 1}
				{hide_hitmarker}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor"}
				{offset 50 0 0}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_blank"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				;{distance 0}
				{distanceSet 50}
				{delta 0}
				{camera "zoom1"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{hide_crosshair 1}
				{hide_hitmarker}				
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{offset 1500 0 0}
				{distanceSet 1500}
				;{distance 2500}
				{camera "zoom3"}
			}
			{level ;5
				{camera "zoom6"}
			}
			{level ;6
				{camera "zoom12"}
			}
		}	
		{"gun.aagun"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	300	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 50}
				{nearoffset -20 0 40}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
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
		{"gun.atgun"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	300	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 50}
				{nearoffset -20 0 40}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor"}
				{hide_crosshair 1}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_blank"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 18}
				{distanceSet 0}
				{delta 0}
				{offset 0 0 2}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{with_owner
					{viewoff "shield2"} ; removes shield to prevent clipping
				}
				{soundEffect "opentop_vehicle"}
			}
		}
		{"gun.fieldgun"          ; half artillery, half atgun
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	300	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 50}
				{nearoffset -20 0 40}
				{camera "zoom1"}
				{hide_hitmarker 1}
				{blur_strength 2}
				{disable_fow 0}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{linkBone "visor"}
				{hide_crosshair 1}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_blank"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 18}
				{distanceSet 0}
				{delta 0}
				{offset 15 0 2}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{zoom}
				{vision_modes_active}
				{vignette "/texture/common/environment/lens_effects/zoom_vignette_artillery_01"}
				{blur_mask "/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_01"}
				{refraction_mask "/texture/common/environment/lens_effects/zoom_vignette_artillery_bp"}
				{distance 18}
				{distanceset 1}
				{delta 0}
				{linkBone "visor"}
				{offset -300 0 300}
				{gunnerviewoff 1}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 1}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;3
				{camera "zoom3.5"}
				{offset 0 0 800}
			}
			{level ;4
				{camera "zoom4"}
				{offset 500 0 1200}
				{distanceset 500}
			}
		}
		{"tank.spaag"
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
				{disable_fow 1}
				{no_grain}
			}
			{level ;1
				{zoom}
				{vision_modes_active}
				{hide_crosshair 1}
				{linkBone "visor1"}
				{offset 25 0 2}
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_hmg"}
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
		{"artillery.supershort"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	1	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 85}
				{nearoffset -50 0 50}
				;{hide_crosshair 1}
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
				{linkBone "visor"}
				{offset -200 0 200}
				{gunnerviewoff 1}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 1}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;3
				{camera "zoom2"}
				{offset 0 0 300}
			}
			{level ;4
				{camera "zoom3.5"}
				{offset 300 0 600}
				{distanceset 300}
			}
		}
		{"artillery.short"
			{clip
				{viewMin		-20	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	1	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 85}
				{nearoffset -65 0 65}
				;{hide_crosshair 1}
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
				{linkBone "visor"}
				{offset -300 0 300}
				{gunnerviewoff 1}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 1}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;3
				{camera "zoom3.5"}
				{offset 0 0 800}
			}
			{level ;4
				{camera "zoom4"}
				{offset 500 0 1200}
				{distanceset 500}
			}
		}
		{"artillery.medium"
			{clip
				{viewMin		-25	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	1	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 85}
				{nearoffset -65 0 65}
				;{hide_crosshair 1}
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
				{linkBone "visor"}
				{offset -300 0 300}
				{gunnerviewoff 1}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 1}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;3
				{camera "zoom3.5"}
				{offset 0 0 800}
			}
			{level ;4
				{camera "zoom4"}
				{offset 500 0 1200}
				{distanceset 500}
			}
			{level ;5
				{camera "zoom5"}
				{offset 800 0 1600}
				{distanceset 800}
			}
		}
		{"artillery.long"
			{clip
				{viewMin		-30	}	; camera rotate upward limit (looking down)
				{viewMax		30	}	; camera rotate downward limit (looking up)
				{distanceMin	1	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 85}
				{nearoffset -65 0 65}
				;{hide_crosshair 1}
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
				{linkBone "visor"}
				{offset -100 0 400}
				{gunnerviewoff 1}
				{camera "zoom2.5"}
				{ManualAccuracyZoom}
				{blur_strength 10}
				{disable_fow 1}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;3
				{camera "zoom3.0"}
				{offset 0 0 600}
			}
			{level ;3
				{camera "zoom3.5"}
				{offset 200 0 800}
				{distanceset 200}
			}
			{level ;4
				{camera "zoom4"}
				{offset 400 0 1200}
				{distanceset 400}
			}
			{level ;4
				{camera "zoom4.5"}
				{offset 600 0 1400}
				{distanceset 500}
			}
			{level ;5
				{camera "zoom5"}
				{offset 800 0 1600}
				{distanceset 800}
			}
			{level ;6
				{camera "zoom6"}
				{offset 1200 0 2000}
				{distanceset 1200}
			}
		}