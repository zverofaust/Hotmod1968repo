{selector
	{type "cannon_bullet"}

	{group
		{select {class car_bullet}}
		{sort {attacking}}
		{sort distance}
	}
	{group
		{select {class airborne}}
		{select {class helicopter}}
		{sort {attacking}}
		{sort distance}
	}
	{group
		{sort {class howitzer}}
		{sort {class cannon_small}}
		{sort {class cannon_big}}
		{sort distance}
	}
	{group
		{sort {class cannon_bullet}}
		{sort {class cannon_zenite}}
		{sort distance}
	}
	{group
		{sort {weapon "rocketlauncher"} {attacking}}
		{sort {weapon "rocketlauncher"} {threating}}
		{sort distance}
	}

	{group
		{sort {weapon "at_rifle"} {attacking}}
		{sort {weapon "at_rifle"} {threating}}
		{sort distance}
	}
	{group
		{select {class car}}
		{sort distance}
	}
	{group
		{sort {class human} {weapon}}
		{sort {class human}}
		{sort distance}
	}
}
