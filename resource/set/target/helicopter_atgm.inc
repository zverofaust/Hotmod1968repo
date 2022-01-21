{selector
	{type "helicopter_atgm"}
	
	{group
		{ignore {class airborne}}
		{sort {class tank_heavy}}
		{sort {class tank_medium}}
		{sort {class tank_light}}
		{sort {attacking}}
		{sort {threating}}
		{sort distance}
;		{sort {weapon "heat"}}
;		{sort {weapon "apcr"}}
;		{sort {weapon "apds"}}
;		{sort {weapon "aphebc"}}
;		{sort {weapon "aphe"}}
;		{sort {weapon "apche"}}
;		{sort {weapon "apcbche"}}
;		{sort {weapon "apcbc"}}
;		{sort {weapon "apbc"}}
;		{sort {weapon "apc"}}
;		{sort {weapon "ap"}}
;		{sort {weapon "he"}}
	}
	{group
		{select {class armoredcar}}
		{sort {attacking}}
		{sort distance}
	}
	
	{group
		{sort {class howitzer}}
		{sort {class cannon_big}}
		{sort distance}
	}
	
	{group
		{sort {weapon "rocketlauncher ap"} {attacking}}
		{sort {weapon "rocketlauncher ap"} {threating}}
		{sort distance}
	}
	
	{group
		{select {class car_cannon} {weapon}}
		{sort {attacking}}
		{sort {threating}}
		{sort distance}
	}
	
	{group
		{sort {class cannon_small}}
		{sort {class cannon_zenite}}
		{sort distance}
	}
	{group
		{sort {class tank_bullet}}
		{sort {attacking}}
		{sort {threating}}
		{sort distance}
	}
	
	{group
		{sort {weapon "rocketlauncher ap"} {attacking}}
		{sort {weapon "rocketlauncher ap"} {threating}}
		{sort distance}
	}
	
	{group
		{sort {weapon "at_rifle ap"} {attacking}}
		{sort {weapon "at_rifle ap"} {threating}}
		{sort distance}
	}
	
	{group
		{select {class car_bullet} {weapon}}
		{sort {attacking}}
		{sort distance}
	}
	
	{group
		{sort {class cannon_bullet}}
		{sort {class human} {weapon}}
		{sort {class human}}
		{sort distance}
	}
	
	{group
		{select {class car}}
		{sort distance}
	}
	
    {group
        {sort {attacking}}
        {sort distance}
    }
}
