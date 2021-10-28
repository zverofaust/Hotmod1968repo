{selector
	{type "helicopter"}
	
	{group
		{ignore {class airborne}}

		{sort {weapon "shell atgm"} {attacking}}
		{sort {weapon "zenite"} {attacking}}
		{sort {weapon "shell fg"} {attacking}}

		{sort {weapon "shell atgm"} {threating}}
		{sort {weapon "zenite"} {threating}}
		{sort {weapon "shell fg"} {threating}}

		{sort {weapon "rocketlauncher ap"} {attacking}}
		{sort {weapon "shell heat"} {attacking}}
		{sort {weapon "shell ap"} {attacking}}

		{sort {weapon "rocketlauncher ap"} {threating}}
		{sort {weapon "shell heat"} {threating}}
		{sort {weapon "shell ap"} {threating}}

		{sort {weapon "shell atgm"}}
		{sort {weapon "zenite"}}
		{sort {weapon "shell fg"}}
		{sort {weapon "rocketlauncher ap"}}
		{sort {weapon "shell heat"}}
		{sort {weapon "shell ap"}}

		{sort distance}
	}
}
