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

local botDefender
function IsAttackerOrDefender()
	botDefender = BotApi.Instance.teamSize > 1
end

function SetVarsInMissionScript()

	local spawnSide = string.sub(BotApi.Instance.spawnPointName,1,1)

	if BotApi.Instance.teamSize > 1 then
		BotApi.Scene:SetVar("user_is_defender", 0)
	else
		BotApi.Scene:SetVar("user_is_defender", 1)
	end

  if BotApi.Instance.army == "sov" then
		BotApi.Scene:SetVar("bot_army", 1)
  elseif BotApi.Instance.army == "csa" then
		BotApi.Scene:SetVar("bot_army", 2)
  elseif BotApi.Instance.army == "prc" then
		BotApi.Scene:SetVar("bot_army", 3)
   elseif BotApi.Instance.army == "frg" then
		BotApi.Scene:SetVar("bot_army", 4)
   elseif BotApi.Instance.army == "pol" then
        BotApi.Scene:SetVar("bot_army", 5)
  end

  if spawnSide == "a" then
		BotApi.Scene:SetVar("bots_spawnside", 1)
  elseif spawnSide == "b" then
		BotApi.Scene:SetVar("bots_spawnside", 2)
	else
		BotApi.Scene:SetVar("bots_spawnside", 0)
	end

	BotApi.Scene:SetVar("enemyid", BotApi.Instance.playerId)

	BotApi.Scene:SetVar("id_1st_enemy", BotApi.Instance.CampaignFirstEnemyId)
	BotApi.Scene:SetVar("id_defenderbot", BotApi.Instance.CampaignDefenderBotId)
	BotApi.Scene:SetVar("id_1st_player", BotApi.Instance.CampaignFirstPlayerId)
	if printDebug then print("SpawnSide", spawnSide) end

end

local waveSpawnPossible
local waveSpawnActive = true
local waveUnitCount = 0
local waveNumber = 0
local waveUnitTotal = math.random(WaveUnit.Min, WaveUnit.Max)
if printDebug then print("Print: waveUnitTotal", waveUnitTotal) end
function WaveAttack()
	if not botDefender then
		waveSpawnPossible = true
	end

	if waveSpawnPossible then
		if waveUnitCount >= waveUnitTotal then
			waveUnitTotal = math.random(WaveUnit.Min, WaveUnit.Max)
			if printDebug then print("Print: waveUnitTotal", waveUnitTotal) end
			waveSpawnActive = false
			waveUnitCount = 0
			waveNumber = waveNumber + 1
			if printDebug then print("Print: waveNumber", waveNumber) end
		else
			waveSpawnActive = true
		end
	end
end

function WaveUnitCounter()
	if waveSpawnPossible then
		waveUnitCount = waveUnitCount + 1
		if printDebug then print("Print: waveUnitCount =", waveUnitCount) end
	end
end

local firstPurchase = true
function GameModeSpawnCooldown()
	WaveAttack()
	local spawnTime
	if botDefender and firstPurchase then
		spawnTime = {Min = StartSpawnTime.DefenseMin, Max = StartSpawnTime.DefenseMax}
	elseif firstPurchase then
		spawnTime = {Min = StartSpawnTime.AttackMin, Max = StartSpawnTime.AttackMax}
	elseif not waveSpawnActive then
		spawnTime = {Min = SpawnCooldownTime.DCGWaveOffMin, Max = SpawnCooldownTime.DCGWaveOffMax}
	else
		spawnTime = {Min = SpawnCooldownTime.DCGMin, Max = SpawnCooldownTime.DCGMax}
	end
	local cooldown = math.random(spawnTime.Min, spawnTime.Max)
	firstPurchase = false
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
	
	---[=[ Prints unitsToSpawn or GetFlagToCapture with priority pre and post 
	if printDebug then
		local caller = debug.getinfo(2, "n").name  -- checks which function called GetRandomItem
		if caller == "GetNextUnitToSpawn" then
			---[[
			print("Print: Player#", BotApi.Instance.playerId, "Possible Units, Priority Default, Modified, TTS for", "Player#", BotApi.Instance.playerId, "Team", BotApi.Instance.team)
			for j, item_rate in pairs(item_rates) do
				print("------ Unit", item_rate.i.unit, item_rate.i.priority, item_rate.r)
			end
			--]]
		elseif caller == "order" then
			---[[
			print("Print: Flag Move Order, Priority Default, Modified for", "Player#", BotApi.Instance.playerId, "Team", BotApi.Instance.team)
			for j, item_rate in pairs(item_rates) do
				print("------ Flag", item_rate.i.name, item_rate.i.priority, item_rate.r)
			end
			--]]
		else
			print("Print: Caller", caller)
		end
	end
	--]=]
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

function table.shuffle(tbl)
	local rand = math.random
	for i = #tbl, 2, -1 do
	  local j = rand(i)
	  tbl[i], tbl[j] = tbl[j], tbl[i]
	end
	return tbl
end
  
-- Function to shuffle the flags table
function ShuffleFlags(flags)
	if waveNumber <= 1 then
		table.sort(flags, function(a, b) return a.name < b.name end)
	else
		table.shuffle(flags)
	end
end

function GetFlagToCapture(flagPoints, getPriority, flags)
	local alliedFlags, opponentFlags, neutralFlags, totalFlags = 0, 0, 0, 0
	local capturableFlags = totalFlags - alliedFlags

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

	if printDebug then print("alliedFlags:", alliedFlags, "opponentFlags:", opponentFlags, "neutralFlags:", neutralFlags, "totalFlags:", totalFlags, "capturableFlags:", capturableFlags) end

	if capturableFlags > alliedFlags then
		searchDestroy = 0.60
	elseif capturableFlags == opponentFlags then
		searchDestroy = 0.40
	else
		searchDestroy = 0.30	-- squad tagged as engaged(but not used in mi script yet) use this value for SeekAndDestroy or do nothing.(vs rndAI(0-1)).
	end
	
	if waveNumber <= 1 then
        ShuffleFlags(flags)
    end

	--[[
	local flags = {}
	for i, flag in pairs(flagPoints) do
		table.insert(flags, {name = flag.name, priority = getPriority(flag), owner = flag.occupant})
	end
	--]]

	local enemy = BotApi.Instance.enemyTeam
	local allied = BotApi.Instance.team
	local firstEnemyFlagEncountered = false

	return GetRandomItem(flags, function(f)

		-- Bot is the Attacker
		if not botDefender then
			-- bot prioritize one flag (1st in flags table that is enemy)
			if f.owner == enemy and not firstEnemyFlagEncountered then
				firstEnemyFlagEncountered = true
				return f.priority
			elseif f.owner == enemy then
				return f.priority * 0
			elseif f.owner == allied then
				return f.priority * 0
			end
		end

		-- Bot is the Defender
		if botDefender then
			if f.owner == enemy then
				return f.priority * 2
			elseif f.owner == allied then
				return f.priority * 0.5
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

	if printDebug then print("Player#".. BotApi.Instance.playerId.. " Units") end
	for i, unit in pairs(units) do
		local min_team = unit.min_team  -- not used
		local min_income = unit.min_income -- not used
		local available = BotApi.Commands:IsUnitAvailable(unit.unit)
		
		if not min_income then min_income = -1 end
		if not min_team then min_team = 0 end
		
		--if printDebug then print("------ Unit", unit.unit) end

		if teamSize >= min_team and income >= min_income and available then
			table.insert(unitsToSpawn, unit)
		end
	end

	-- TODO: instead of return nil, find the shortest tts and delay calling function again by that time 
	if #unitsToSpawn == 0 then
		return nil
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

		if UnitType("Squad") then
			return t.priority * 1.75
		end

		if UnitType("Cannon") then
			return t.priority * 0.80
		end

		return t.priority
	end)
end

function UpdateUnitToSpawn(purchase)
	Context.SpawnInfo = GetNextUnitToSpawn(purchase)
end

function OnGameStart()
	print("Print: AI Bot is player#" .. BotApi.Instance.playerId .. ", nation " .. BotApi.Instance.army .. ", on team " .. BotApi.Instance.team .. " which has " .. BotApi.Instance.teamSize .. " player(s)")

	IsAttackerOrDefender()

	math.randomseed(os.time()*BotApi.Instance.hostId)
	math.random() math.random() math.random() math.random()

	purchasesModule = [[/script/multiplayer/]] .. BotApi.Instance.army .. "/conquest." .. BotApi.Instance.army 
	if module_exists(purchasesModule) then
		require(purchasesModule)
	end

	local purchases = Purchases["conquest." .. BotApi.Instance.army]
	if not purchases then
		print("Print: !!WARNING!! NoPurchases")
		purchases = {}
	end

	Context.Purchase = PIter:new(purchases)

	UpdateUnitToSpawn(Context.Purchase)
	SetSpawnCooldownTimer()
	SetVarsInMissionScript()
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
		WaveUnitCounter()
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
			print("Print: player#".. BotApi.Instance.playerId .." will wait ".. (UnitSpawnWaitTime / 1000 + 1) .."s for resources or unit timer before it attempts a new unit purchase")
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
				SetSquadOrder(CaptureFlag, squad, OrderRotationPeriod.DCG)
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
	local flags = {}
    for i, flag in pairs(BotApi.Scene.Flags) do
        table.insert(flags, {id = i, name = flag.name, priority = GetFlagPriority(flag), owner = flag.occupant})
    end
	
	local flag = GetFlagToCapture(BotApi.Scene.Flags, GetFlagPriority, flags)

	if not flag then
		if printDebug then print("Print: No Flags so SeekAndDestroy by squad ", squad, "Player#", BotApi.Instance.playerId) end
		BotApi.Commands:SeekAndDestroy(squad)
		return
	end

	if IsSquadInScript(squad) then
		return
	end

	if IsSquadToIgnore(squad) then
		local rndAI = math.random()
		if searchDestroy > rndAI then
			if printDebug then print("Print: [see_enemy] seek by squad ", squad, "Player#", BotApi.Instance.playerId) end
			BotApi.Commands:SeekAndDestroy(squad)
		else
			if printDebug then print("Print: [see_enemy] donothing by squad ", squad, "Player#", BotApi.Instance.playerId) end
			return
		end
	else
		if printDebug then print("Print: [notags] ctf by squad", squad, "Player#", BotApi.Instance.playerId, "Flag name: ", flag.name) end
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
		SetSquadOrder(CaptureFlag, args.squadId, OrderRotationPeriod.DCG)
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