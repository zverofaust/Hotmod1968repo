Purchases["mid.prc"] = {
	{Repeat = 0,  --infinite
		Units = {
			---[====[
			-- Infantry
				
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_at(prc)"},
				{priority = 1.0, type = {"Infantry", "Team", "AT", "Class2",}, unit = "single_lat(prc)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class3",}, unit = "single_mg(prc)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_flamer(prc)"},
				{priority = 1.0, type = {"Infantry", "Team", "Class2",}, unit = "single_scout(prc)"},
				--{priority = 1.0, type = {"Infantry", "Team", "Class1",}, unit = "single_sniper(prc)"},
				
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_militia(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_militia_ambush(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class3",}, unit = "squad_conscript(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2", "AT",}, unit = "squad_conscript_antitank(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_rifle(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_autorifle(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class2",}, unit = "squad_guards(prc)"},
				{priority = 1.0, type = {"Infantry", "Squad", "Class1",}, unit = "squad_guards_assault(prc)"},


				
		}
	}
}
