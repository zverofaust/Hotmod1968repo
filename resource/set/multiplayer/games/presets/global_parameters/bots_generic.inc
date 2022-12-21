(define "deploy_bots"
	{easy
		{unitset
			{value %period}
		}
		{balancingFactorBonus {cp 0.50} {mpStart 1.00} {mpFinish 0.75} {payback 1.00} {charge 1.0}}
		{chargeFactors
			{value "*=1.0"}
		}
	}
	{normal
		{unitset
			{value %period}
		}
		{balancingFactorBonus {cp 0.60} {mpStart 1.20} {mpFinish 2.00} {payback 1.20} {charge 0.75}}
		{chargeFactors
			{value "*=1.0"}
		}
	}
	{hard
		{unitset
			{value %period}
		}
		{balancingFactorBonus {cp 0.80} {mpStart 1.40} {mpFinish 3.00} {payback 1.40} {charge 0.5}}
		{chargeFactors
			{value "*=1.0"}
		}
	}
	{heroic
		{unitset
			{value %period}
		}
		{balancingFactorBonus {cp 1.00} {mpStart 1.60} {mpFinish 4.00} {payback 1.60} {charge 0.5}}
		{chargeFactors
			{value "*=1.0"}
		}
	}
)