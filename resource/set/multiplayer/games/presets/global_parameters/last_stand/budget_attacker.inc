{budgets
	{vehicle
		{mode "standard"}
		{resource
			{start		%s}
			{finish		%f}
			{growTime	3000}		; in seconds
			{growTable	"0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.82 0.84 0.86 0.88 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
			{payback
				{cp			"0		80		95		110		125		200	"} ; source code only supports 6 values
				{restore	"1.00	0.8		0.6		0.4		0.25	0.10"}
			}
		}
		{buttons "inf1 inf2 empl vehicles tanks strat"}
	}
	{hero
		{resource
			{start %d}
		}
		{buttons "doctrine strategic"}
		{tag "special"}
	}
}