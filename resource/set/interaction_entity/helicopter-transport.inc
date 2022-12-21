{"heli_transport"			;
	{on spawn
		{delay 1
			{ani_play "flyin" callback}
			{bone hide "propeller"}
			{bone hide "propeller1"}
			{bone show "engine_work"}
		}
		{ani_play "work" loop}
	}
	;// Initial flyin over, approach LZ
	{on animation_end "flyin"
		{ani_play "approach" callback}		
	}
	;// End approach, drop cargo
	{on animation_end "approach"
		{ani_play "dropoff" callback}	
		{delay 0.2
			{bone hide "crate"}
			{bone hide "line1"}
			{spawn "inf_crate_sov" "attach" x dir_velocity
				{impulse up -1 dir -5 forward 0}
			}
		}
	}
	;// Unload finished, fly away
	{on animation_end "dropoff"
		{ani_play "flyout" callback}	
	}
	;// Delete entity after bugging out
	{on animation_end "flyout"
		{delete}	
	}
}