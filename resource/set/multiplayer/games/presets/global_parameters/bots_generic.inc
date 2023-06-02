{easy
	{unitset
		{value %period}
	}
	{balancingFactorBonus
		{cp 1.00}
		{mpStart 1.10}
		{mpFinish 1.00}
		{payback 2.00}
		{chargeDelay 1.0}	;// adjusts the inital delay only
		{charge 1.0}		;// adjusts the interval only
	}
	{unitScore 0.9}
}
{normal
	{unitset
		{value %period}
	}
	{balancingFactorBonus
		{cp 1.00}
		{mpStart 1.10}
		{mpFinish 1.00}
		{payback 3.00}
		{chargeDelay 1.0}	;// adjusts the inital delay only
		{charge 1.0}		;// adjusts the interval only
	}
	{unitScore 0.8}
}
{hard
	{unitset
		{value %period}
	}
	{balancingFactorBonus
		{cp 1.00}
		{mpStart 1.10}
		{mpFinish 1.25}
		{payback 4.00}
		{chargeDelay 1.0}	;// adjusts the inital delay only
		{charge 1.0}		;// adjusts the interval only
	}
	{unitScore 0.7}
}
{heroic
	{unitset
		{value %period}
	}
	{balancingFactorBonus
		{cp 1.10}
		{mpStart 1.10}
		{mpFinish 1.50}
		{payback 4.00}
		{chargeDelay 1.0}	;// adjusts the inital delay only
		{charge 1.0}		;// adjusts the interval only
	}
	{unitScore 0.6}
}
