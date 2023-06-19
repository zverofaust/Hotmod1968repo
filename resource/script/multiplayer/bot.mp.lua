require([[/script/multiplayer/bot.data]])

local Context = {
	Purchase = nil,
	SpawnInfo = nil,
	SpawnWait = {
		CooldownTimer = nil,
		WaitTimer = nil
	},
	SquadTimers = {}
}

local captureFriendlySideFlag = true
local firstPurchase = 2

function GameModeSpawnCooldown()
	local cooldown = firstPurchase > 0 
	and math.random(StartSpawnTime.Min, StartSpawnTime.Max) 
	or math.random(SpawnCooldownTime.Min, SpawnCooldownTime.Max)
	firstPurchase = firstPurchase - 1
	return cooldown
end

gameModeSpawnTimer = 0
function SetSpawnCooldownTimer()
	gameModeSpawnTimer = GameModeSpawnCooldown()
	print("Print: player#".. BotApi.Instance.playerId.. " will wait ".. (gameModeSpawnTimer / 1000) .."s before purchasing another unit")
	Context.SpawnWait.CooldownTimer = BotApi.Events:SetQuantTimer(
		function() 
			Context.SpawnWait.CooldownTimer = nil 
		end, 
		gameModeSpawnTimer)
end

function KillSpawnCooldownTimer()
	if Context.SpawnWait.CooldownTimer then
		BotApi.Events:KillQuantTimer(Context.SpawnWait.CooldownTimer)
		Context.SpawnWait.CooldownTimer = nil
	end
end

function KillSpawnWaitTimer()
	if Context.SpawnWait.WaitTimer then
		BotApi.Events:KillQuantTimer(Context.SpawnWait.WaitTimer)
		Context.SpawnWait.WaitTimer = nil
	end
end

local PIter = {}
PIter.__index = PIter

function PIter:new(data)
	local obj = {
		idx = nil,
		rpt = nil,
		purchases = data
	}
	self.nextIndex(obj)
	return setmetatable(obj, self)
end

function PIter:current()
	if self.idx then
		return self.purchases[self.idx].Units
	end
end

function PIter:nextIndex()
	self.idx = next(self.purchases, self.idx)
	if self.idx then
		self.rpt = self.purchases[self.idx].Repeat
	else
		self.rpt = nil
	end
end

function PIter:moveNext()
	if not self.rpt or self.rpt == 0 then
		return
	end
	
	self.rpt = self.rpt - 1

	if self.rpt == 0 then
		self:nextIndex()
	end
end

function GetRandomItem(items, getRate)
	local item_rates = {}
	
	local total = 0
	for i, item in pairs(items) do
		local rate = getRate(item)
		
		total = total + rate
		table.insert(item_rates, {i = item, r = rate})
	end
	
	-- Prints unitsToSpawn or GetFlagToCapture with priority pre and post 
	local caller = debug.getinfo(2, "n").name  -- checks which function called GetRandomItem
	if printDebug then
		if caller == "GetNextUnitToSpawn" then
			---[[
			print("Print: Possible Units, Priority Default, Modified, TTS for", "Player#",BotApi.Instance.playerId, "Team", BotApi.Instance.team)
			for j, item_rate in pairs(item_rates) do
				local tts2 = BotApi.Commands:TimeToSpawnUnit(item_rate.i.unit)
				print("------ Unit", item_rate.i.unit, item_rate.i.priority, item_rate.r, (tts2 / 1000))
			end
			--]]
		elseif caller == "order" then
			---[[
			print("Print: Flag Move Order, Priority Default, Modified for", "Player#",BotApi.Instance.playerId, "Team", BotApi.Instance.team)
			for j, item_rate in pairs(item_rates) do
				print("------ Flag", item_rate.i.name, item_rate.i.priority, item_rate.r)
			end
			--]]
		else
			print("Print: Caller", caller)
		end
	end

	if caller == "order" then
		if captureFriendlySideFlag then
			captureFriendlySideFlag = false
		end
	end

	local rnd = math.random()
	local bound = 0.0
	for j, item_rate in pairs(item_rates) do
		bound = bound + item_rate.r
		if rnd < bound / total then
			return item_rate.i
		end
	end
end

function IsAlliedFlag(flag)
	return flag.occupant == BotApi.Instance.team
end

function IsOpponentFlag(flag)
	return flag.occupant == BotApi.Instance.enemyTeam
end

function GetFlagOwner(flag)
	if IsAlliedFlag(flag) then 
		return FlagOwnership.Allied
	elseif IsOpponentFlag(flag) then 
		return FlagOwnership.Opponent
	else
		return FlagOwnership.Neutral
	end
end

function GetFlagLocation(flag)
	local team = BotApi.Instance.team
	local gameMode = BotApi.Instance.gameMode
	local flagLocations = {
		["battle_zones"] = {
			f1 = FlagLocation.Center, --A--
			f2 = team == 'a' and FlagLocation.Friendly or FlagLocation.Enemy, --B--
			f3 = team == 'a' and FlagLocation.Enemy or FlagLocation.Friendly, --C--
			f4 = FlagLocation.Center, --D--
			f5 = FlagLocation.Center, --E--
			f6 = FlagLocation.Center, --F-- f9 B+F
			f7 = FlagLocation.Center, --G-- f8 C+G
			f8 = team == 'a' and FlagLocation.Enemy or FlagLocation.Friendly, --H--
			f9 = team == 'a' and FlagLocation.Friendly or FlagLocation.Enemy, --I--

			center1 = FlagLocation.Center,
			center2 = FlagLocation.Center,
			center3 = FlagLocation.Center,
			center4 = FlagLocation.Center,
			center5 = FlagLocation.Center,
			team_a_back1 = team == 'a' and FlagLocation.Friendly or FlagLocation.Enemy,
			team_a_back2 = team == 'a' and FlagLocation.Friendly or FlagLocation.Enemy,
			team_a_back3 = team == 'a' and FlagLocation.Friendly or FlagLocation.Enemy,
			team_b_back1 = team == 'a' and FlagLocation.Enemy or FlagLocation.Friendly,
			team_b_back2 = team == 'a' and FlagLocation.Enemy or FlagLocation.Friendly,
			team_b_back3 = team == 'a' and FlagLocation.Enemy or FlagLocation.Friendly,
			["default"] = 1,
		},
		["ammunition"] = {
			base_flag_a = team == 'a' and FlagLocation.FriendlyBase or FlagLocation.EnemyBase,
			base_flag_b = team == 'a' and FlagLocation.EnemyBase or FlagLocation.FriendlyBase,
			["default"] = FlagLocation.Center,
		},
		["default"] = {
			["default"] = 1,
		},
	}
	local flagLocationsForCurrentGameMode = flagLocations[gameMode] or flagLocations["default"]
	local location = flagLocationsForCurrentGameMode[flag.name] or flagLocationsForCurrentGameMode["default"]
	--if printDebug then print("Testing:", flag.name, location) end
	return location
end

function GetFlagPriority(flag)
	return GetFlagOwner(flag) * GetFlagLocation(flag)
end

function IsCenterFlag(flag)
	return GetFlagLocation(flag) == FlagLocation.Center
end
function IsFriendlyFlag(flag)
	return GetFlagLocation(flag) == FlagLocation.Friendly
end
function IsEnemyFlag(flag)
	return GetFlagLocation(flag) == FlagLocation.Enemy
end
function IsFriendlyBase(flag)
	return GetFlagLocation(flag) == FlagLocation.FriendlyBase
end
function IsEnemyBase(flag)
	return GetFlagLocation(flag) == FlagLocation.EnemyBase
end

function GetFlagPosition(flag)
	if IsCenterFlag(flag) then
		return "center"
	elseif IsFriendlyFlag(flag) then
		return "friendly"
	elseif IsEnemyFlag(flag) then
		return "enemy"
	elseif IsFriendlyBase(flag) then
		return "friendly"
	elseif IsEnemyBase(flag) then
		return "enemy"
	end
	return
end

local centerSide, friendlySide, enemySide, allSides = 0, 0, 0, 0
function GetFlagLocations()
	for i, flag in pairs(BotApi.Scene.Flags) do
		allSides = allSides + 1
		if IsCenterFlag(flag) then
			centerSide = centerSide + 1
		elseif IsFriendlyFlag(flag) then
			friendlySide = friendlySide + 1
		elseif IsEnemyFlag(flag) then
			enemySide = enemySide + 1
		end
	end
	if printDebug then print("centerSide:", centerSide, "friendlySide:", friendlySide, "enemySide:", enemySide) end

	-- Some maps are only middle flags
	if friendlySide == 0 then
		captureFriendlySideFlag = false
  	end

	-- In larger team games, its not necessary for every bot to prioritize sending a squad to the "back flag"
	local player = BotApi.Instance.playerId
	local teamSize = BotApi.Instance.teamSize
	if teamSize >= 2 and friendlySide < 3 then
		if player % 2 == 1 then
			captureFriendlySideFlag = false
		end
	end
end

function GetFlagToCapture(flagPoints, getPriority, getPosition)
	local alliedFlags, opponentFlags, neutralFlags, totalFlags = 0, 0, 0, 0
	local capturableFlags = totalFlags - alliedFlags
	local teamIsLosing

	for i, flag in pairs(BotApi.Scene.Flags) do
		totalFlags = totalFlags + 1
		if IsAlliedFlag(flag) then
			alliedFlags = alliedFlags + 1
		elseif IsOpponentFlag(flag) then
			opponentFlags = opponentFlags + 1
		else
			neutralFlags = neutralFlags + 1
		end
	end

	if opponentFlags > alliedFlags and neutralFlags ~= totalFlags then
		teamIsLosing = true
	else
		teamIsLosing = false
	end

	if printDebug then print("alliedFlags:", alliedFlags, "opponentFlags:", opponentFlags, "neutralFlags:", neutralFlags, "totalFlags:", totalFlags, "capturableFlags:", capturableFlags) end
	if printDebug then print("teamIsLosing:", teamIsLosing) end

	if capturableFlags > alliedFlags then
		searchDestroy = 0.60
	elseif capturableFlags == opponentFlags then
		searchDestroy = 0.40
	else
		searchDestroy = 0.30	-- squad tagged as engaged(but not used in mi script yet) use this value for SeekAndDestroy or do nothing.(vs rndAI(0-1)).
	end
	
	local flags = {}
	
	for i, flag in pairs(flagPoints) do
		table.insert(flags, {name = flag.name, priority = getPriority(flag), owner = flag.occupant, location = getPosition(flag)})
	end

	local gameMode = BotApi.Instance.gameMode
	local opponent = BotApi.Instance.enemyTeam
	local allied = BotApi.Instance.team

	return GetRandomItem(flags, function(f) 
		if captureFriendlySideFlag then
			if f.location == "friendly" and f.owner ~= allied then
				return f.priority
			else
				return 0
			end
		end

		if gameMode == "battle_zones" then
			if f.location == "friendly" and f.owner == opponent then
				return f.priority * 6
			end
			if f.location == "friendly" and f.owner ~= opponent then
				return f.priority * 0.25
			end
			if f.location == "center" and f.owner == allied then
				return f.priority * 0.75
			end
			if f.location == "enemy" and f.owner == allied then
				return f.priority * 4
			end

			if f.location == "enemy" and teamIsLosing and totalFlags > 3 then
				return 0
			elseif f.location == "enemy" and teamIsLosing and totalFlags == 3 then
				return f.priority * 3
			end
			if f.location == "enemy" and not teamIsLosing and f.owner == "enemy" then
				return f.priority * 2
			end
		end

		if gameMode == "ammunition" then
			if f.owner == allied and f.location == "center" then
				return f.priority * 0.75
			end
			if f.owner == allied and f.location == "enemy" then
				return f.priority * 3
			end
			if f.owner == opponent and f.location == "friendly" then
				return f.priority * 99
			end
		end

		return f.priority
	end)
end

function GetNextUnitToSpawn(purchase)
	local units = purchase:current()
	
	if not units then
		return nil
	end
	
	local unit = GetUnitToSpawn(units)
	purchase:moveNext()
	return unit
end

function GetUnitToSpawn(units)
	if not units then
		return nil
	end
	
	local unitsToSpawn = {}
	
	local teamSize = BotApi.Instance.teamSize
	local income = BotApi.Commands:Income(BotApi.Instance.playerId)

	--if printDebug then print("player#".. BotApi.Instance.playerId.. " Unit, TTS, Min TTS") end
	for i, unit in pairs(units) do
		local min_team = unit.min_team  -- not used
		local min_income = unit.min_income -- not used
		local tts = BotApi.Commands:TimeToSpawnUnit(unit.unit)
		local min_tts = UnitSpawnWaitTime + gameModeSpawnTimer
		local available = BotApi.Commands:IsUnitAvailable(unit.unit)
		
		if not min_income then min_income = -1 end
		if not min_team then min_team = 0 end
		
		--if printDebug then print("------ Unit", unit.unit, (tts / 1000), (min_tts / 1000)) end

		if teamSize >= min_team and income >= min_income and tts <= min_tts and available then
			table.insert(unitsToSpawn, unit)
		end
	end

	-- TODO: instead of return nil, find the shortest tts and delay calling function again by that time 
	if #unitsToSpawn == 0 then
		return nil
	end

	searchProps = {
-- Human tags
		"soldier", 
		"crew", 
		"soldier_pzscheck",
		"soldier_pzfaust",
		"soldier_atr",
		"soldier_atr_grenade",
		"soldier_at",
	}
	local sceneUnits = BotApi.Scene:QueryScene(searchProps, 5)

	local unitCounts = {
		BotInfantry = 0,
		BotATInfantry = 0,
	}
	
	local propertyToVariable = {
	-- Humans
		["soldier"] = {"BotInfantry"},
		["soldier_pzscheck"] = {"BotInfantry", "BotATInfantry"},
		["soldier_pzfaust"] = {"BotInfantry", "BotATInfantry"},
		["soldier_atr"] = {"BotInfantry", "BotATInfantry"},
		["soldier_atr_grenade"] = {"BotInfantry", "BotATInfantry"},
		["soldier_at"] = {"BotInfantry", "BotATInfantry"},
	}
	
	local botUnits = sceneUnits[BotApi.Instance.playerId][2]
	
	for i, prop in ipairs(searchProps) do
		local count = botUnits[i]
		local variables = propertyToVariable[prop]
		if variables then
			for _, variable in ipairs(variables) do
				unitCounts[variable] = unitCounts[variable] + count
			end
		end
	end

	return GetRandomItem(unitsToSpawn, function(t)
		
		-- search "type" array for specific element
		local function UnitType (val)
			for index, value in ipairs(t.type) do
				if value == val then
					return true
				end
			end
			return false
		end

		local basePriority = t.priority
		local priorityMultiplier = 1

		if captureFriendlySideFlag then
			if UnitType("Aux") then
				return t.priority
			else
				return 0
			end
		end

		-- Bot buys infantry first
		if unitCounts.BotInfantry < 20 then
			if UnitType("Infantry") then
				priorityMultiplier = priorityMultiplier
			else
				priorityMultiplier = priorityMultiplier * 0.1
			end
		elseif unitCounts.BotInfantry > 30 then
			if UnitType("Infantry") and not UnitType("AT") then
				priorityMultiplier = priorityMultiplier * 0.1
			end
		end

		if unitCounts.BotInfantry < 10 and unitCounts.BotATInfantry <= 2 then
			if UnitType("Infantry") and UnitType("AT") then
				priorityMultiplier = priorityMultiplier * 4
			end
		elseif unitCounts.BotATInfantry >= 5 then
			if UnitType("Infantry") and UnitType("AT") then
				priorityMultiplier = priorityMultiplier * 0.1
			end
		end
	
		-- Global priorities for different class of squads
		if UnitType("Squad") then
			if UnitType("Class1") then
				priorityMultiplier = priorityMultiplier * 3
			elseif UnitType("Class2") then
				priorityMultiplier = priorityMultiplier * 3 * 0.67
			else
				priorityMultiplier = priorityMultiplier * 1.5 * 0.25
			end
		end
	
		-- Global priorities for different class of cannons
		if UnitType("Cannon") then
			if UnitType("Class1") then
				priorityMultiplier = priorityMultiplier * 0.80
			elseif UnitType("Class2") then
				priorityMultiplier = priorityMultiplier * 0.80 * 0.67
			else
				priorityMultiplier = priorityMultiplier * 0.80 * 0.25
			end
		end
	
		-- Global priorities for different class of cannons
		if UnitType("Sortie") then
			if UnitType("Class1") then
				priorityMultiplier = priorityMultiplier * 0.30
			elseif UnitType("Class2") then
				priorityMultiplier = priorityMultiplier * 0.30 * 0.67
			else
				priorityMultiplier = priorityMultiplier * 0.30 * 0.25
			end
		end
		
		-- Global priorities for different class of all other vehicles and infantry teams
		if not UnitType("Cannon") or not UnitType("Squad") then
			if UnitType("Class1") then
				priorityMultiplier = priorityMultiplier * 1
			elseif UnitType("Class2") then
				priorityMultiplier = priorityMultiplier * 0.67
			else
				priorityMultiplier = priorityMultiplier * 0.25
			end
		end

		return basePriority * priorityMultiplier
	end)
end

function UpdateUnitToSpawn(purchase)
	Context.SpawnInfo = GetNextUnitToSpawn(purchase)
end

function OnGameStart()
	print("Print: AI Bot is player#" .. BotApi.Instance.playerId .. ", nation " .. BotApi.Instance.army .. ", on team " .. BotApi.Instance.team .. " which has " .. BotApi.Instance.teamSize .. " player(s)")
	GetFlagLocations()

	math.randomseed(os.time()*BotApi.Instance.hostId)
	math.random() math.random() math.random() math.random()

	purchasesModule = [[/script/multiplayer/]] .. BotApi.Instance.army .. "/" .. BotApi.Instance.unitMode .. "." .. BotApi.Instance.army 
	if module_exists(purchasesModule) then
		require(purchasesModule)
	end

	local purchases = Purchases[BotApi.Instance.unitMode .. "." .. BotApi.Instance.army]
	if not purchases then
		print("Print: !!WARNING!! NoPurchases")
		purchases = {}
	end

	Context.Purchase = PIter:new(purchases)

	UpdateUnitToSpawn(Context.Purchase)
	SetSpawnCooldownTimer()
end

function OnGameStop()
	KillSpawnCooldownTimer()
	KillSpawnWaitTimer()

	for squad, timer in pairs(Context.SquadTimers) do
		if timer then
			BotApi.Events:KillQuantTimer(timer)
		end
	end
end

function TrySpawnUnit()
	if Context.SpawnWait.CooldownTimer then
		return
	end

	if not BotApi.Commands:CanSpawn() then
		return
	end

	if not Context.SpawnInfo then
		UpdateUnitToSpawn(Context.Purchase)
		return
	end

	local unit = Context.SpawnInfo.unit

	---[[ -- ! Moved to GetUnitToSpawn(). Active for debuging
	if not BotApi.Commands:IsUnitAvailable(unit) then
		print("Print: !!WARNING!! player#".. BotApi.Instance.playerId.. " tried to purchase: ".. unit .." which is not available")
		KillSpawnWaitTimer()
		UpdateUnitToSpawn(Context.Purchase)
		return
	end
	--]]

	if spawningUnit then
		KillSpawnWaitTimer()
		SetSpawnCooldownTimer()
		UpdateUnitToSpawn(Context.Purchase)
		spawningUnit = nil
		return
	end

	if BotApi.Commands:Spawn(unit, MaxSquadSize) then
		spawningUnit = true
		return
	end

	---[[ -- TODO: Move to GetUnitToSpawn()
	local tts = BotApi.Commands:TimeToSpawnUnit(unit)
	local min_tts = UnitSpawnWaitTime + gameModeSpawnTimer
	if tts > min_tts then
		print("Print: !!WARNING!! player#".. BotApi.Instance.playerId.. " tried to purchase: ".. unit .." but the TTS (unit timer) is greater than UnitSpawnWaitTime ".. (tts / 1000) .."s verses ".. (min_tts / 1000) .."s")
		KillSpawnWaitTimer()
		UpdateUnitToSpawn(Context.Purchase)
		return
	end
	--]]

	-- TODO: Move to GetUnitToSpawn()
	if not Context.SpawnWait.WaitTimer then
		if printDebug then 
			print("Print: player#".. BotApi.Instance.playerId .." tried to purchase: ".. unit .." Not enough MP, DP, CP, or the unit timer is not unlocked")
			print("Print: player#".. BotApi.Instance.playerId .." will wait a maximum of ".. (UnitSpawnWaitTime / 1000 + 1) .."s for resources or unit timer before it attempts a new unit purchase")
		end
		Context.SpawnWait.WaitTimer = BotApi.Events:SetQuantTimer(
			function()
				Context.SpawnWait.WaitTimer = nil
				UpdateUnitToSpawn(Context.Purchase)
			end, UnitSpawnWaitTime + 1000)
	end
	local spawningUnit = nil
end

function OnGameQuant()
	TrySpawnUnit()

	local waypoints = BotApi.Scene.Waypoints
	if #waypoints == 0 then
		for i, squad in pairs(BotApi.Scene.Squads) do
			if not Context.SquadTimers[squad] then
				SetSquadOrder(CaptureFlag, squad, OrderRotationPeriod.MP)
			end
		end
	end
end

function SeekAndDestroy(squad)
	BotApi.Commands:SeekAndDestroy(squad)
end

function GotoNextWaypoint(squad)
	local waypoints = BotApi.Scene.Waypoints
	BotApi.Commands:CaptureFlag(squad, waypoints[math.random(#waypoints)]) --captureflag is basically gothereandattack
	if printDebug then print("Print: #captureFlag call inside GoToNextWaypoint") end
end

function OnWaypoint(args)
	if printDebug then print("Print: #GotoNextWaypoint call inside OnWaypoint") end
	GotoNextWaypoint(args.squadId)
end

	-- NOTE: Returns true if squad tagged "_lua_mi" or "_lua_alert".
	-- NOTE: "_lua_mi" = reserved for mission script use.
	-- NOTE: "_lua_alert" = squad abruptly runs into enemy force seek&destroy.
function IsSquadInScript(squad)
	if BotApi.Scene:IsSquadTagged(squad, "_lua_mi") then
		if printDebug then print("Print: SQUADinSCRIPT thus no action squad", squad, "Player#",BotApi.Instance.playerId, "Team", BotApi.Instance.team) end
		return true
	elseif BotApi.Scene:IsSquadTagged(squad, "_lua_alert") then
		if printDebug then print("Print: SQUADinALERT thus seek by squad", squad, "Player#",BotApi.Instance.playerId, "Team", BotApi.Instance.team) end
		BotApi.Commands:SeekAndDestroy(squad)
		return true
	end
end

	-- NOTE: Returns true if squad tagged "_lua_ignore" for general ignore.
function IsSquadToIgnore(squad)
	if BotApi.Scene:IsSquadTagged(squad, "_lua_ignore") then
		return true
	end
end

function CaptureFlag(squad)
	local flag = GetFlagToCapture(BotApi.Scene.Flags, GetFlagPriority, GetFlagPosition)

	if not flag then
		if printDebug then print("Print: No Flags so SeekAndDestroy by squad", squad, "Player#",BotApi.Instance.playerIdon, "Team", BotApi.Instance.team) end
		BotApi.Commands:SeekAndDestroy(squad)
		return
	end

	if IsSquadInScript(squad) then
		return
	end

	if IsSquadToIgnore(squad) then
		local rndAI = math.random()
		if searchDestroy > rndAI then
			if printDebug then print("Print: [see_enemy] seek by squad", squad, "Player#",BotApi.Instance.playerId, "Team", BotApi.Instance.team) end
			BotApi.Commands:SeekAndDestroy(squad)
		else
			if printDebug then print("Print: [see_enemy] donothing by squad", squad, "Player#",BotApi.Instance.playerId, "Team", BotApi.Instance.team) end
			return
		end
	else
		if printDebug then print("Print: [notags] ctf by squad", squad, "Player#",BotApi.Instance.playerId, "Team", BotApi.Instance.team, "Flag name: ", flag.name) end
		BotApi.Commands:CaptureFlag(squad, flag.name)
	end
end

function SetSquadOrder(order, squad, delay)
	order(squad)
	local setTimer = function(callback)
		Context.SquadTimers[squad] = BotApi.Events:SetQuantTimer(
			function()
				order(squad)
				Context.SquadTimers[squad] = nil
				if BotApi.Scene:IsSquadExists(squad) then
					callback(callback)
				end
			end,
			delay)
	end
	setTimer(setTimer)
end

function OnGameSpawn(args)
	local waypoints = BotApi.Scene.Waypoints
	if #waypoints == 0 then
		SetSquadOrder(CaptureFlag, args.squadId, OrderRotationPeriod.MP)
	else
		GotoNextWaypoint(args.squadId)
		if printDebug then print("Print: #waypoints != 0") end
	end
end

BotApi.Events:Subscribe(BotApi.Events.GameStart, OnGameStart)
BotApi.Events:Subscribe(BotApi.Events.GameEnd, OnGameStop)
BotApi.Events:Subscribe(BotApi.Events.Quant, OnGameQuant)
BotApi.Events:Subscribe(BotApi.Events.GameSpawn, OnGameSpawn)
BotApi.Events:Subscribe(BotApi.Events.Waypoint, OnWaypoint)