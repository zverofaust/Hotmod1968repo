;created by Nikral晓杉同学

{"human"
	{on "medic_switch"
		{if tagged "medic"
			{tags add "medic_ignored"}
			{tags remove "medic"}
			{drop_orders}
			{damage_report "medic_mode" "<s(10)b>Auto-medic disabled."}
		else tagged "medic_ignored"
			{tags add "medic"}
			{tags remove "medic_ignored"}
			{damage_report "medic_mode" "<s(10)b+c(00FF00)>Auto-medic activated."}
		}
	}
}