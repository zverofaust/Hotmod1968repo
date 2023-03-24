-- Prints more information in game.log for debugging purposes
printDebug = true

MaxSquadSize = 0

-- Time delay for units to get a new move order after spawn move order. Loops.
OrderRotationPeriod = {
    DCG = 2.5 * 60000, -- 2:30 min (ms)
    MP = 2.5 * 60000 -- 2:30 min (ms)
}

-- Time from start of match AI will wait before attempting to buy a unit.
StartSpawnTime = {
-- Conquest
    -- Bot is defender
    DefenseMin = 5 * 1000, 
    DefenseMax = 7 * 1000,
    -- Bot is attacker
    AttackMin = 6 * 60 * 1000, 
    AttackMax = 8 * 60 * 1000,
-- MP
    Min = 0.5 * 1000, -- 0.5 sec (ms)
    Max = 1 * 1000 -- 1 sec (ms)
}

-- Time from last purchase AI will wait before attempting to buy a new unit.
SpawnCooldownTime = {
-- Conquest
    -- Time between each wave
    DCGWaveOffMin = 4 * 30 * 1000, 
    DCGWaveOffMax = 5 * 30 * 1000,
   -- Time between each spawn
    DCGMin = 2 * 1000, 
    DCGMax = 7 * 1000,
-- MP
    Min = 10 * 1000, -- 10 sec (ms)
    Max = 11 * 1000 -- 11 sec (ms)
}

-- Number of possible units than can be in a wave attack in conquest
WaveUnit = {
    Min = 7,
    Max = 10,
}

-- Sets time limit AI will wait for a unit it has chosen to buy if the unit is not yet available
-- Ex. AI does not have enough resources yet to buy the unit or unit is on a purchase timer
-- If at the end it still does not have enough resources it'll attempt to buy a new unit.
UnitSpawnWaitTime = 1.5 * 60000 -- 1:30min (ms)

-- Is flag captured by bot's team, enemy team, or neutral
FlagOwnership = {
    Allied = 1,
    Opponent = 2,
    Neutral = 3
}

-- Is the flag located on the bot's team side of the map, enemies side of the map, or on the center line
FlagLocation = {
    Enemy = 1,
    Friendly = 3,
    Center = 6,
    EnemyBase = 1,
    FriendlyBase = 5,
}

-- Hardcoded to specific props. Radius in Meters
FlagCaptureArea = {
-- applying any props to cannons class vehicles does not seem to work

-- These props do Not work
    Helicopter = 3, -- props helicopter (reserved)
    Artillery = 175, -- props detect_artillery (not work)
    Mortar = 100, -- props mortar (reserved)
    ATgun = 50, -- props detect_atgun (not work)
    Captor = 100, -- props captor (transport trucks)
    Vehicle = 18, -- props vehicle
    Infantry = 25 -- ~= to any of the props above
}
Purchases = {}