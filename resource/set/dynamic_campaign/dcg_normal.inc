{Normal
	{GlobalMaxCP 500}
	{StageCP 50 60 70 80 90}
	{SpecialCP 50}					;// airstrikes special tab
	{EmplacementCP 50}				;// buildable with engineer
	{Bots
		{StartMP	0.05 min 100 attackerMultiplier 1.00}
		{FinishMP	1.25 attackerMultiplier 2}
		{CP
			{Base "0:0,300:55,450:60,600:65"} ;// seconds : CP
			{RoundMultiplier "0:0.6 2:0.8 4:0.9 6:1.0 8:1.1 12:1.2 14:1.3"} ;// games played : multiplier for CP
			{AttackMultiplier 100}
		}
		{DefenseLevel
			{level_1
				{DefenseBudgetPlayer	3.5}	;// budget it multiplied by number of flags
				{DefenseBudgetAI		3.5}	;// places defender units with bot StartMP * this factor (StartMP without attackermultiplier) for player side
				{unlock games 0 progress 0.0}	;// number of games to unlock this level, or progress in percent (campaign progress bar)
			}
			{level_2							;// once level is reached previous level values are ignored only currently level is used
				{DefenseBudgetPlayer	4.0}
				{DefenseBudgetAI		4.0}
				{unlock games 4 progress 0.4}
			}
			{level_3
				{DefenseBudgetPlayer	4.5}
				{DefenseBudgetAI		4.5}
				{unlock games 12 progress 0.75}
			}
		}
	}
	{PaybackFactor 0.6}		;// MP paid back when loosing soldier, squad or vehicle
	{SellFactor 0.7}
	{ScavengedVehicleSellFactor 0.7}		;// captured enemy vehicle 
	{RiskFactor
		{Low
			{BotResources 1.0}
			{BotVeterancy 0}
			{Rewards 1.0}
		}
		{Standard
			{BotResources 1.0}
			{BotVeterancy 1}
			{Rewards 1.25}
		}
		{High
			{BotResources 1.0}
			{BotVeterancy 2}
			{Rewards 1.5}
		}
	}
	{Resources
		{Standard
			{MP ;// Manpower (generic money)
				{StartVal 1000}
				{WinGain "1:100 4:125 6:150 8:175 10:200 12:300 14:400"} ;// games played : MP gain 
				{LoseGain "1:100"}
				{MapRewards	;//Bonus resources on various game types (a game can only be one randomly chosen type). Types: Airfield, Ammodepot, Bonus, Factory, Research.
					{Airfield	250}
					{Ammodepot	250}
					{Bonus		1500}
					{Factory	500}
					{Research	500}
				}
			}
			{SP ;// Special Points (airstrikes)
				{StartVal 10}
				{WinGain "1:5 5:10 10:15"}
				{LoseGain "1:5"}
				{MapRewards
					{Airfield	30}
				}
			}
			{AP ;// Ammo points
				{StartVal 1000}
				{WinGain "5:600 10:1000 15:1500"}
				{LoseGain "1:200"}
				{MapRewards
					{Ammodepot	1500}
					{Factory	800}
				}
			}
			{RP ;// Research points
				{StartVal 10}
				{WinGain 4}
				{LoseGain 1}
				{MapRewards
					{Bonus		2}
					{Research	8}
				}
			}
			{Budget
				{Start "0:100 4:110 8:120 12:130 16:140 20:150"} ;// games played : starting CP of each match 
				{PointsPerSecond 0.25} ;// CP income
				{Limit 500} ;// Max CP 
			}
		}
	}
	{Duration
		{Short
			{FlagCount "2:5 2:5 2:5 2:5 2:5 2:5 2:5 2:5 2:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 4:5"} ;// each entry is 1 game played. # of flags enabled : # of flags total on map
			{Bots
				{ResearchStages "0:1 1:1 2:2 3:2 4:3 5:3 6:4 7:4 8:5 9:5 10:6 11:6 12:7 13:7 14:8 15:8 16:9 17:9 18:10 19:10 20:11 21:11 22:12 23:12 24:13"} ;// number of games played : research tree level bots can have
			}
			{MapSelection "0:1"}	;// number of games played : map selection value from map .info file
			{MapBorder "0:1"}
		}
		{Normal
			{FlagCount "2:5 2:5 2:5 2:5 2:5 2:5 2:5 2:5 2:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 4:5"}
			{Bots
				{ResearchStages "0:1 1:1 2:2 3:2 4:3 5:3 6:4 7:4 8:5 9:5 10:6 11:6 12:7 13:7 14:8 15:8 16:9 17:9 18:10 19:10 20:11 21:11 22:12 23:12 24:13"}
			}
			{MapSelection "0:1"}
			{MapBorder "0:1"}
		}
		{Long
			{FlagCount "2:5 2:5 2:5 2:5 2:5 2:5 2:5 2:5 2:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 4:5"}
			{Bots
				{ResearchStages "0:1 1:1 2:2 3:2 4:3 5:3 6:4 7:4 8:5 9:5 10:6 11:6 12:7 13:7 14:8 15:8 16:9 17:9 18:10 19:10 20:11 21:11 22:12 23:12 24:13"}
			}
			{MapSelection "0:1"}
			{MapBorder "0:1"}
		}
		{VeryLong
			{FlagCount "2:5 2:5 2:5 2:5 2:5 2:5 2:5 2:5 2:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 4:5"}
			{Bots
				{ResearchStages "0:1 1:1 2:2 3:2 4:3 5:3 6:4 7:4 8:5 9:5 10:6 11:6 12:7 13:7 14:8 15:8 16:9 17:9 18:10 19:10 20:11 21:11 22:12 23:12 24:13"}
			}
			{MapSelection "0:1"}
			{MapBorder "0:1"}
		}
		{Unlimited
			{FlagCount "2:5 2:5 2:5 2:5 2:5 2:5 2:5 2:5 2:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 4:5"}
			{Bots
				{ResearchStages "0:1 1:1 2:2 3:2 4:3 5:3 6:4 7:4 8:5 9:5 10:6 11:6 12:7 13:7 14:8 15:8 16:9 17:9 18:10 19:10 20:11 21:11 22:12 23:12 24:13"}
			}
			{MapSelection "0:1"}
			{MapBorder "0:1"}
		}
	}
}