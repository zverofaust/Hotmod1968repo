(define "team_a"
	{unitset
		{value %period}
	}
	{commandPoints "*=%cp_a"}
	(include "../../global_parameters/unitlimits.inc")
	(include "budget_attacker.inc" s(%start_a) f(%finish_a) d(%doctrine_a) r(%reinforcement_a))
)

(define "team_b"
	{unitset
		{value %period}
	}
	{commandPoints "*=%cp_b"}
	(include "../../global_parameters/unitlimits.inc")
	(include "budget_defender.inc" s(%start_b) f(%finish_b) d(%doctrine_b))
)

(include "bots_frontlines.inc")