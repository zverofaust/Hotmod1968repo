;SDL

;//////////////////////////////////////////////////////////////////////////////
(define "crew_inside"
	{boarder
		{anm "gunner"
			{forward	{end "seat_driver_car"}}
		}
		{anm "commander"
			{forward	{end "seat_driver_car"}}
		}
		{anm "passenger"
			{forward	{end "seat_driver_car"}}
		}
	}
)
(define "crew_human"
	{placer
		{place "%place"
			{group "%place"} {linkbone "%bone"} {turnoff {sensor} {shadow}} {openForCrush}
		}
	}
	{boarder
		{door "emit"}
		{door "emit1"}
		{door "emit2"}
		{door "emit3"}
		{door "emit4"}
		{link "emit" "%place" {anm "%animation"} {forward putoff} {reverse puton}}
		{link "emit1" "%place" {anm "%animation"} {forward putoff} {reverse puton}}
		{link "emit2" "%place" {anm "%animation"} {forward putoff} {reverse puton}}
		{link "emit3" "%place" {anm "%animation"} {forward putoff} {reverse puton}}
		{link "emit4" "%place" {anm "%animation"} {forward putoff} {reverse puton}}
	}
)

(define "crew_2_human"
	("crew_inside")
	("crew_human" place(gunner)		bone(gunner)	door(emit1) animation(gunner))
	("crew_human" place(commander)	bone(commander)	door(emit2) animation(commander))
	{placer
		{place "gunner" {group "crew"}}
		{place "commander" {group "crew"}}
	}
)
(define "crew_gunner"
	("crew_inside")
	("crew_human" place(gunner)		bone(gunner)	door(emit) animation(gunner))
)

(define "stand_human"
	{placer
		{place "%place" {group "%place"} {linkbone "%bone"} {turnoff {sensor}} {openForCrush}} 
	}
	{boarder
		{door "emit"}
		{door "emit1"}
		{door "emit2"}
		{door "emit3"}
		{door "emit4"}
		{link "emit"	"%place" {anm "%animation"} {forward putoff}}
		{link "emit1"	"%place" {anm "%animation"} {forward putoff}}
		{link "emit2"	"%place" {anm "%animation"} {forward putoff}}
		{link "emit3"	"%place" {anm "%animation"} {forward putoff}}
		{link "emit4"	"%place" {anm "%animation"} {forward putoff}}
	}
)

(define "crew_stan_gunner"
	{boarder
		{anm "gunner"
			{forward	{end "pose_mgun_stan"}}
		}
	}
	("stand_human" place(gunner)	bone(gunner)	animation(gunner))
)
{placer
	{place "gunner" {visor "main"}}
}

(define "crew_gun"
	("crew_2_human")
	("crew_human" place(driver1) bone(driver1) door(emit1) animation(driver1))
	("crew_human" place(driver2) bone(driver2) door(emit2) animation(driver2))
	{placer
		{place "driver1" {visor "commander"}}
		{place "driver2" {visor "commander"}}
	}
	{boarder
		{link "driver1" "gunner"}
		{link "driver2" "commander"}
	}
)

(define "crew_wheeled_gun"
	("crew_gun")
	("crew_human" place(seat1)   bone(seat1)   door(emit1) animation(seat1))
	("crew_human" place(seat2)   bone(seat2)   door(emit2) animation(seat2))
	{placer
		{place "seat1" {visor "commander"}}
		{place "seat2" {visor "commander"}}
	}
	{boarder
		{link "seat1" "driver1"}
		{link "seat2" "driver2"}
	}
)
