{selector
	{type "car_bullet"}

	{group
		{select {class airborne}}
		{sort distance}
	}
	
	{group
		{sort {weapon "rocketlauncher ap"} {attacking}}
		{sort {weapon "rocketlauncher ap"} {threating}}
		{sort distance}
	}
	{group
		{select {class car_cannon}}
		{sort {weapon}}
		{sort {attacking}}
		{sort distance}
	}
	
	{group
		{sort {weapon "at_rifle ap"} {attacking}}
		{sort {weapon "at_rifle ap"} {threating}}
		{sort distance}
	}
	{group
		{select {class car_bullet}}
		{sort {weapon}}
		{sort {attacking}}
		{sort distance}
	}
	{group
		{select {class car}}
		{sort {weapon}}
		{sort {attacking}}
		{sort distance}
	}
	
	{group
		{sort {class howitzer}}
		{sort {class cannon_zenite}}
		{sort {class cannon_small}}
		{sort {class cannon_bullet}}
		{sort distance}
	}
	
	{group
		{sort {class human} {weapon}}
		{sort {class human}}
		{sort distance}
	}
}