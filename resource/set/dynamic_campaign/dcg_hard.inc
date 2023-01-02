{Hard
	{GlobalMaxCP 500}
	{StageCP 50 60 70 80 90}
	{SpecialCP 50}					;// airstrikes special tab
	{EmplacementCP 50}				;// buildable with engineer
	{Bots
		{StartMP	0.05 min 100 attackerMultiplier 1.00}
		{FinishMP	1.5 attackerMultiplier 2}
		{CP
			{Base "0:0,300:60,450:65,600:70"} ;// seconds : CP
			{RoundMultiplier "0:0.6 2:0.8 4:0.9 6:1.0 8:1.1 12:1.2 14:1.3"} ;// games played : multiplier for CP
			{AttackMultiplier 100}
		}
		{DefenseLevel
			{level_1
				{DefenseBudgetPlayer	3.0}	;// budget it multiplied by number of flags
				{DefenseBudgetAI		3.0}	;// places defender units with bot StartMP * this factor (StartMP without attackermultiplier) for player side
				{unlock games 0 progress 0.0}	;// number of games to unlock this level, or progress in percent (campaign progress bar)
			}
			{level_2							;// once level is reached previous level values are ignored only currently level is used
				{DefenseBudgetPlayer	3.5}
				{DefenseBudgetAI		4.0}
				{unlock games 2 progress 0.4}
			}
			{level_3
				{DefenseBudgetPlayer	4.0}
				{DefenseBudgetAI		4.5}
				{unlock games 8 progress 0.6}
			}
		}
	}
	{PaybackFactor 0.4}		;// MP paid back when loosing solider, squad or vehicle
	{SellFactor 0.6}
	{ScavengedVehicleSellFactor 0.6}		;// captured enemy vehicle 
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
					{Airfield	200}
					{Ammodepot	200}
					{Bonus		1200}
					{Factory	400}
					{Research	400}
				}
			}
			{SP ;// Special Points (airstrikes)
				{StartVal 5}
				{WinGain "1:5 5:10 10:15"}
				{LoseGain "1:0"}
				{MapRewards
					{Airfield	25}
				}
			}
			{AP ;// Ammo points
				{StartVal 1000}
				{WinGain "5:600 10:1000 15:1500"}
				{LoseGain "1:200"}
				{MapRewards
					{Ammodepot	1000}
					{Factory	500}
				}
			}
			{RP ;// Research points
				{StartVal 10}
				{WinGain 3}
				{LoseGain 1}
				{MapRewards
					{Bonus		0}
					{Research	4}
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
				{ResearchStages "0:1 1:1 2:2 3:3 4:4 5:5 6:6 7:7 8:8 9:9 10:10 11:11 12:12 13:3 14:4 15:15 16:16 17:17 18:18 19:19 20:20 21:21 22:22 23:23 24:24 25:25 26:26 27:27 28:28 29:29 30:30 31:31 32:32 33:33 34:34 35:35 36:36 37:37 38:38 39:39 40:40"} ;// number of games played : research tree level bots can have
			}
			{MapSelection "0:1"}	;// number of games played : map selection value from map .info file
			{MapBorder "0:1"}
		}
		{Normal
			{FlagCount "2:5 2:5 2:5 2:5 2:5 2:5 2:5 2:5 2:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 4:5"}
			{Bots
				{ResearchStages "0:1 1:1 2:2 3:3 4:4 5:5 6:6 7:7 8:8 9:9 10:10 11:11 12:12 13:3 14:4 15:15 16:16 17:17 18:18 19:19 20:20 21:21 22:22 23:23 24:24 25:25 26:26 27:27 28:28 29:29 30:30 31:31 32:32 33:33 34:34 35:35 36:36 37:37 38:38 39:39 40:40"}
			}
			{MapSelection "0:1"}
			{MapBorder "0:1"}
		}
		{Long
			{FlagCount "2:5 2:5 2:5 2:5 2:5 2:5 2:5 2:5 2:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 4:5"}
			{Bots
				{ResearchStages "0:1 1:1 2:2 3:3 4:4 5:5 6:6 7:7 8:8 9:9 10:10 11:11 12:12 13:3 14:4 15:15 16:16 17:17 18:18 19:19 20:20 21:21 22:22 23:23 24:24 25:25 26:26 27:27 28:28 29:29 30:30 31:31 32:32 33:33 34:34 35:35 36:36 37:37 38:38 39:39 40:40"}
			}
			{MapSelection "0:1"}
			{MapBorder "0:1"}
		}
		{VeryLong
			{FlagCount "2:5 2:5 2:5 2:5 2:5 2:5 2:5 2:5 2:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 4:5"}
			{Bots
				{ResearchStages "0:1 1:1 2:2 3:3 4:4 5:5 6:6 7:7 8:8 9:9 10:10 11:11 12:12 13:3 14:4 15:15 16:16 17:17 18:18 19:19 20:20 21:21 22:22 23:23 24:24 25:25 26:26 27:27 28:28 29:29 30:30 31:31 32:32 33:33 34:34 35:35 36:36 37:37 38:38 39:39 40:40"}
			}
			{MapSelection "0:1"}
			{MapBorder "0:1"}
		}
		{Unlimited
			{FlagCount "2:5 2:5 2:5 2:5 2:5 2:5 2:5 2:5 2:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 3:5 4:5"}
			{Bots
				{ResearchStages "0:1 1:1 2:2 3:3 4:4 5:5 6:6 7:7 8:8 9:9 10:10 11:11 12:12 13:3 14:4 15:15 16:16 17:17 18:18 19:19 20:20 21:21 22:22 23:23 24:24 25:25 26:26 27:27 28:28 29:29 30:30 31:31 32:32 33:33 34:34 35:35 36:36 37:37 38:38 39:39 40:40"}
			}
			{MapSelection "0:1"}
			{MapBorder "0:1"}
		}
	}
}