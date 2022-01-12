		{"default"
			{clip
				{viewMin		-50	}	; camera rotate upward limit (looking down)
				{viewMax		55	}	; camera rotate downward limit (looking up)
				{distanceMin	35	}	; camera min distance from object. value / 20 = meters
				{distanceMax	150	}	; camera max distance from object. value / 20 = meters
			}
			; each level derives parameters from previous one
			{level ;0
				{linkBone	"basis"	}
				{faroffset  0 10 12 }
				{nearoffset	10 10 12	}
				{delta		20		}		; distance delta
				;{camera "human_zoom1"}
				{blur_strength 2}
				{hide_hitmarker 1}
				{forceGrass 1}
				{disable_fow}
				{with_weapon
					{viewoff	"fx_light"}
				}
				{no_grain}
				{no_rim_light}
				{disable_fow 0}
			}
			{level ;1
			    {zoom}
				{linkBone	"head"	}
				{distanceset 		0}
				{distance			40}	; activation distance
				{delta		20		}		; distance delta
				{camera "human_zoom1.25"}
			    {offset		0 12 4.5}
				{blur_strength 10}
				{hide_hitmarker 1}
				{forceGrass 1}
				{disable_fow 0}
				{with_weapon
					{viewoff	"fx_light"}
				}
				{vignette	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
				{blur_mask	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
				{no_grain}
				{no_rim_light}
			}
		}