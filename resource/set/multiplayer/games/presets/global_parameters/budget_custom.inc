		{budgets
			{vehicle
				{mode "custom"}
				{resource
					{start		%start}
					{finish		%finish}
					{growTime	2400}		; in seconds
					{growTable	"0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.80 0.82 0.84 0.86 0.88 0.9 0.90 0.9 0.85 0.8 0.75 0.7"}
					{payback
						{cp			"0		20		50		80		100		120"} ; keep only 6 values
						{restore	"1.00	1.00	0.5 	0.25	0.10	0.05"}
					}
					{limitmin	1000}
					{limitmax	50000}
					{speedset	"2000 2500 3000 3500 4000 4500 5000 6000 10000"}
				}
				{buttons "inf1 inf2 empl vehicles tanks strat"}
			}
			{hero
				{resource 
					{start 	%doctrine}
				} 
				{buttons "doctrine strategic"}
				{tag "special"}
			}
		}