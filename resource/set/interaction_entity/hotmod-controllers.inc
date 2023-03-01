{"entac_launcher"
	{on spawn
		;{chassis_work 0}
		;{able select 0}
		;{weapon_work "gun" 0}
		;{ik_enable "aim_rot_h" 0}
		;{ik_enable "aim_rot_v" 0}
		{tags add "no_signal"}
		;{call "signal_detection"}
	}
	
	{on contact
		{if effector "signal_entac"
			{chassis_work 1}
			{able select 1}
			{weapon_work "gun" 1}
			{ik_enable "aim_rot_h" 1}
			{ik_enable "aim_rot_v" 1}
			{tags remove "no_signal"}
			{tags add "we_get_signal"}
		}
	}	
	
	{on fire "gun"
		{tear "piece_large_steel" bone "body"
				{impulse up -1 dir -1 forward -1}
				{delay 5 {delete}}
		}
		{delay 5 {delete}}
	}
}

{"entac_controller"
	{on spawn
		{spawn "entac_signal" "basis" {delay 5 {delete}}}
	}
}