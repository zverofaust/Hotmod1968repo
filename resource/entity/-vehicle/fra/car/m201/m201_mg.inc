
	(include "/properties/car.ext")
	(include "/properties/selection/vehicle_elongated.inc" scale(0.8))
	{props "vision_lev01" "explosion_throw_crew" "tractor" "tractor_light"}
	{able "emit_on_attack"}
	{PatherId "willys"}

	("wheel" args "wheelleft1")
	("wheel" args "wheelleft2")
	("wheel" args "wheelright1")
	("wheel" args "wheelright2")
	("glass" args "window1")
	("glass" args "window2")
	("fuel" args "fuel")
	("transmission" args "transmission")

	{volume "body4" {able {holed}}}
	{volume "body5" {able {holed}}}
	{volume "detail4"
		{thickness 1}
	}

	("crew_human"	place(driver)		bone(driver)	door(emit1) animation(driver)		group(crew))
	("crew_human_2_v" place(gunner)		bone(gunner)	door(emit3) door(emit4))
	("crew_human_v" place(commander)	bone(commander)	door(emit2) animation(commander)	group(crew))

	{mass 1113}
	{Chassis
		("car_trace" fx("tracewheel03") step(0.08) wheell("wlf") wheelr("wrf") bonel("FXtraceL1") boner("FXtraceR1"))
		("car_trace" fx("tracewheel03") step(0.08) wheell("wlr") wheelr("wrr") bonel("FXtraceL2") boner("FXtraceR2"))
		("mobility_car"
			speed(96) ;----------------------------------Max speed.
			speedatmaxturn(12) ;-------------------------Max speed at max turn.
			reverse(18) ;--------------------------------Max speed in Reverse.
			weight(1.11) ;-------------------------------Weight in Tonnes.
			power(60) ;----------------------------------Horse Power.
			fuel(57) ;-----------------------------------Fuel capacity in Litres.
			type(fuel) ;---------------------------------Fuel type.
			range(480) ;---------------------------------Range in Kilometers.
		)
	}
