{"flare_helitransport_ammo"	
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{delay 5 {spawn "uh-1d_transport"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"heli_transport"			;
	{on spawn
		{if rand 0.33	
			{ani_play "rdir_8" callback}	
			else rand 0.33			
			{ani_play "rdir_7" callback}	
			else rand 0.33	
			{ani_play "rdir_6" callback}	
			else rand 0.33
			{ani_play "rdir_5" callback}	
			else rand 0.33
			{ani_play "rdir_4" callback}	
			else rand 0.33			
			{ani_play "rdir_3" callback}	
			else rand 0.33	
			{ani_play "rdir_2" callback}	
			else 
			{ani_play "rdir_1" callback}
		}
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
		{with_linked_entity "attach"
			{unlink}
		}
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