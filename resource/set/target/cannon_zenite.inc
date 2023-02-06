{selector
	{type "cannon_zenite"}
	
	{group
		{select {class airborne}}
		{select {class helicopter}}
		{sort {attacking}}
		{sort distance}
	}
	{group
		{select {class armoredcar}}
		{select {class armoredcar_l}}
		{sort {attacking}}
		{sort distance}
	}
	{group
		{select {class tank_light}}
		{sort {attacking}}
		{sort {threating}}
		{sort distance}
	}
	{group
		{sort {class howitzer}}
		{sort {class cannon_zenite}}
		{sort {class cannon_big}}
		{sort {class cannon_small}}
		{sort distance}
	}
	{group
		{sort {class tank_medium}}
		{sort {class tank_heavy}}
		{sort {class tank_bullet}}
		{sort {threating}}
		{sort {attacking}}
		{sort distance}
	}
	{group
		{select {class car_bullet}}
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
		{sort {attacking}}
		{sort distance}
	}
	{group
		{sort {attacking}}
		{sort distance}
	}
}
