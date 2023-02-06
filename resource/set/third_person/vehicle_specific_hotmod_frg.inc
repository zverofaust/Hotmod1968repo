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
		
		
		{"tank.leopard"
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
				{camera "zoom10"}
				{offset 2 0 2}
			}
		}
		{"tank.spz"
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
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_blank"} ;//1PN22M1
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
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom8"}
			}
		}
		{"tank.rakjpz"
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
				{disable_fow 1}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom1.5"}
				{offset 5 0 2}
			}
			{level ;3
				{camera "zoom3"}
				{offset 5 0 2}
			}
			{level ;4
				{camera "zoom6"}
				{offset 5 0 2}
			}
			{level ;5
				{camera "zoom12"}
				{offset 5 0 2}
			}
		}
	