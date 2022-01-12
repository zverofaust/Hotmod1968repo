		{"truck.gaz72k"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	300	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "turret"}
				{faroffset 0 10 45}
				{nearoffset -20 10 35}
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
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_hmg"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 18}
				{distanceSet 0}
				{delta 0}
				{offset 10 12 7}
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
			{level ;2
				{camera "zoom3"}
			}
		}

		{"atgun.72k"
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
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_hmg"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 18}
				{distanceSet 0}
				{delta 0}
				{offset 0 23 2}
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

		{"atgun.61k"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	300	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 5 53}
				{nearoffset -15 5 35}
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
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_hmg"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{offset 0 25 1}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{with_owner
					{viewoff "shield"} ; removes shield to prevent clipping
				}
				{soundEffect "opentop_vehicle"}
			}
		}

		{"atgun.52k"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 8 65}
				{nearoffset -40 8 40}
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
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_hmg"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 10}
				{distanceSet 0}
				{delta 0}
				{offset 18 10 -2}
				{camera "zoom2"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}

		{"atgun.m37"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 50}
				{nearoffset -35 0 30}
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
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pp9-3"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{offset 0 -4 9}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{with_owner
					{viewoff "shield"} ; removes shield to prevent clipping
				}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom2.5"} ; in reality it did not have zoom3
			}
		}

		{"atgun.f22"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 55}
				{nearoffset -35 0 41}
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
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pg1"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{offset 0 -6 7}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{with_owner
					{viewoff "shield"} ; removes shield to prevent clipping
				}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom3"} ; in reality it did not have zoom3
			}
		}

		{"atgun.m1902"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 50}
				{nearoffset -30 0 40}
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
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pg1"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{offset 15 -5 7}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom2.5" }
			}
		}

		{"atgun.zis2"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 35}
				{nearoffset -50 0 35}
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
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_pp2"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{offset 10 -8 9}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
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

		{"atgun.zis3"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50	}	; camera rotate downward limit (looking up)
				{distanceMin	200	}	; camera min distance from object. value / 20 = meters
				{distanceMax	350	}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 35}
				{nearoffset -50 0 35}
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
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_op2"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{offset 10 -8 9}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
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

		{"atgun.bs3"
			{clip
				{viewMin		-15	}	; camera rotate upward limit (looking down)
				{viewMax		50		}	; camera rotate downward limit (looking up)
				{distanceMin	200		}	; camera min distance from object. value / 20 = meters
				{distanceMax	350		}	; camera max distance from object. value / 20 = meters
			}
			{level ;0
				{linkBone "basis"}
				{faroffset 0 0 55}
				{nearoffset -50 0 45}
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
				{scope_vignette "/texture/common/environment/lens_effects/vehicle_telescope_rus_op2-5"}
				{blur_mask "/texture/common/environment/lens_effects/vehicle_telescope_mask"}
				{refraction_mask "/texture/common/environment/lens_effects/vehicle_telescope_base_bp"}
				{lens_dirt_mask "/texture/common/environment/lens_effects/dirty_lens_scope_02"}
				{distance 5}
				{distanceSet 0}
				{delta 0}
				{offset 8 0 2}
				{camera "zoom1.5"}
				{ManualAccuracyZoom}
				{blur_strength 5}
				{disable_fow 0}
				{no_rim_light}
				{with_owner
					{viewoff "shield"} ; removes shield to prevent clipping
				}
				{soundEffect "opentop_vehicle"}
			}
			{level ;2
				{camera "zoom4"}
			}
		}