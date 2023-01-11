
	(include "/properties/cannon_mgun.ext")
	(include "/properties/shadow/tank.inc" scale(0.3))
	{extension "mg3_lafette.mdl"}
	{props "mgun" "vision_lev00_can" "cannon_sandbag_standard" "detect_cannon_aa"}

	{boarder
		{anm "gunner"
			{forward {end "pose_mg_lafette_gunner" 10}}
		}
		{anm "commander"
			{forward {end "pose_mg_lafette_commander" 10}}
		}
		{anm "driver1"
			{forward {end "mgun_browning_driver_r"}}
		}
		{anm "driver2"
			{forward {end "mortar_driver_l"}}
		}
	}

	{extender "cannon"
		{animation
		;// "gunner" "commander"
			{move "mgun_browning_driver_r" "mortar_driver_l"}
			;{fire "mg_lafette_gunner_fire" "mg_lafette_commander_fire"}
			{aim "mg_lafette_gunner_aim" "mg_lafette_commander_aim"}
			{reload "mg_lafette_gunner_reload" "mg_lafette_commander_reload"}
		}
	}

	{extender "inventory"
		{weapon "mgun" {mask "mountable"}}
		{box
			{item "ammo mgun_ger belt" 1000}
			{item "sandbag_vehicle" 2}
		}
	}
	
	{Weaponry
		{place "mgun"
			{type "main"}
			{gunner "gunner"}
			{charger "gunner"}
			{LinkBone "mgun"}
			{LinkAnimation "off"}
			("abm_mgun")
			{Rotate}
		}
	}

	{mass 32}
	{Chassis
		("mobility_cannon"
			speed(12) ;----------------------------------Max speed.
			weight(32) ;---------------------------------Weight in Kilograms.
		)
	}

	{bone "basis"
		{speed2 20}
	}
	{bone "gun_rot"
		{limits -10 15}
		{speed2 60}
	}
	{bone "turret"
		{limits -13 13}
		{speed2 60}
	}
