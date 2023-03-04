(define "radio_signal"
	{"receiver_%signal"
		{on spawn
			{add_view "icon_signal_on" "on_view" "root" not_manual not_scenario}
			{add_view "icon_signal_off" "off_view" "root" not_manual not_scenario}
			{tags add "no_signal"}
			{chassis_work 0}
			{able select 0}
			{weapon_work "gun" 0}
			{delay 0.5
				{view start "off_view"}
			}
		}
		{on contact sync
			{if effector "signal_%signal"
				{tags remove "no_signal"}
				{tags add "we_get_signal"}
				{view start "on_view"}
				{view stop "off_view"}
				{chassis_work 1}
				{able select 1}
				{weapon_work "gun" 1}
				{delay 1
					{tags add "no_signal"}
					{tags remove "we_get_signal"}
					{view start "off_view"}
					{view stop "on_view"}
					{chassis_work 0}
					{able select 0}
					{weapon_work "gun" 0}
				}
			}
		}	
		{on "show_signal_on" overload
			{view start "on_view"}
			{view stop "off_view"}
		}
		
		{on "show_signal_off" overload
			{view start "off_view"}
			{view stop "on_view"}
		}
	}

	{"transmitter_%signal"
		{on spawn
			{call "signal"}
		}	
		{on "signal"
			{if crew_in_place "gunner"
				{spawn "signal_%signal" 
					{delay 1 {delete}}
				}
			}
			{delay 1
				{call "signal"}
			}
		}
	}	
)

("radio_signal" signal(entac))
("radio_signal" signal(9m14))
("radio_signal" signal(cobra))
("radio_signal" signal(vigilant))

{"entac_launcher"
	{on fire "gun"
		{tear "piece_large_steel" bone "body"
				{impulse up -1 dir -1 forward -1}
				{delay 5 {delete}}
		}
		{delay 5 {delete}}
	}
}