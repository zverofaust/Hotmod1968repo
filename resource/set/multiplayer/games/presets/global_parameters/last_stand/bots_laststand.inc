
;// ================ Team A "Defender" ==================

{easy_a
	("team_a")
	{balancingFactorBonus
		{cp 0.9}
		{mpStart 0.8}
		{mpFinish 1.0}
		{payback 0.8}
		{chargeDelay 1.0}	;// adjusts the inital delay only
		{charge 1.0}		;// adjusts the interval only
	}
}
{normal_a
	("team_a")
	{balancingFactorBonus
		{cp 1.0}
		{mpStart 1.0}
		{mpFinish 1.0}
		{payback 1.0}
		{chargeDelay 1.0}	;// adjusts the inital delay only
		{charge 1.0}		;// adjusts the interval only
	}
}
{hard_a
	("team_a")
	{balancingFactorBonus
		{cp 1.2}
		{mpStart 1.1}
		{mpFinish 1.1}
		{payback 1.2}
		{chargeDelay 1.0}	;// adjusts the inital delay only
		{charge 0.8}		;// adjusts the interval only
	}
}
{heroic_a
	("team_a")
	{balancingFactorBonus
		{cp 1.4}
		{mpStart 1.2}
		{mpFinish 1.2}
		{payback 1.4}
		{chargeDelay 1.0}	;// adjusts the inital delay only
		{charge 0.6}		;// adjusts the interval only
	}
}



;// ================ Team B "Attacker" ==================

{easy_b
	("team_b")
	{balancingFactorBonus
		{cp 0.7}
		{mpStart 1.0}
		{mpFinish 0.8}
		{payback 0.8}
		{chargeDelay 1.0}	;// adjusts the inital delay only
		{charge 1.0}		;// adjusts the interval only
	}
}
{normal_b
	("team_b")
	{balancingFactorBonus
		{cp 0.9}
		{mpStart 1.0}
		{mpFinish 1.0}
		{payback 1.0}
		{chargeDelay 1.0}	;// adjusts the inital delay only
		{charge 1.0}		;// adjusts the interval only
	}
}
{hard_b
	("team_b")
	{balancingFactorBonus
		{cp 1.1}
		{mpStart 1.0}
		{mpFinish 1.0}
		{payback 1.1}
		{chargeDelay 1.0}	;// adjusts the inital delay only
		{charge 0.1}		;// adjusts the interval only
	}
}
{heroic_b
	("team_b")
	{balancingFactorBonus
		{cp 1.2}
		{mpStart 1.0}
		{mpFinish 1.0}
		{payback 1.25}
		{chargeDelay 1.0}	;// adjusts the inital delay only
		{charge 0}			;// adjusts the interval only
	}
}