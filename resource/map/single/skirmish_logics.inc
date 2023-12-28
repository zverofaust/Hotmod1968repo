(include "/map/nikral's trigger.mi")
			{"parachute"
				{autoreset}
				{condition
					{terms
						{"1.near"
							{units
								{ignore_captured_by_user 0}
								{tag eject}
								{type human}
							}
							{near_to
								{ignore_captured_by_user 0}
								{tag base}
							}
							{distance 100}
						}
					}
				}
				{actions
					{"delay"
						{time 0.05}
					}
					{"linker"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag base}
									}
								}
								{exclude
									{tag
										{tag _flight}
									}
								}
							}
						}
						{entities
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag eject}
									}
								}
								{include
									{prop
										{prop human}
									}
								}
								{exclude
									{state
										{state linked}
									}
								}
							}
						}
					}
					{"delay"
						{time 0.05}
					}
					{"effect"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag base}
									}
								}
								{exclude
									{tag
										{tag _flight}
									}
								}
							}
						}
						{effect start}
					}
					{"delay"
						{time 0.05}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag base}
									}
								}
								{include
									{tag
										{tag _flight}
									}
								}
							}
						}
						{tag_add base_null}
						{tag_remove base}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag eject}
									}
								}
								{include
									{state
										{state linked}
									}
								}
							}
						}
						{tag_add eject_null}
						{tag_remove eject}
					}
					{"delay"
						{time 0.1}
					}
					{"trigger"
						{name "parachute"}
					}
				}
			}
			{"parachute_failsafe"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag eject_null}
										}
									}
									{exclude
										{tag
											{tag can_die}
										}
									}
								}
							}
						}
						{"2.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag base_null}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 3.8}
					}
					{"throw_off"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag eject_null}
									}
								}
								{include
									{prop
										{prop human}
									}
									{state
										{state linked}
									}
								}
							}
						}
						{up 0}
						{forward 1}
						{turn 0}
						{keep_orientation}
					}
					{"delay"
						{time 0.05}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag base_null}
									}
								}
								{exclude
									{tag
										{tag _flight}
									}
								}
							}
						}
						{tag_remove base_null}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag eject_null}
									}
								}
								{exclude
									{state
										{state linked}
									}
								}
							}
						}
						{tag_remove eject_null}
					}
					{"delay"
						{time 0.1}
					}
					{"trigger"
						{name "parachute_failsafe"}
					}
				}
			}
			{"ai:help/players_units"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{state
											{state user_control}
										}
									}
									{exclude
										{tag
											{tag _user}
										}
									}
								}
							}
						}
						{"2.event"
							{id "active_game"}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{zone
										{zone "gamezone"}
									}
								}
								{include
									{relation
										{relation ally}
										{player "0"}
									}
									{state
										{state "operatable user_control"}
									}
								}
								{exclude
									{tag
										{tag _user}
									}
								}
							}
						}
						{tag_add _user}
					}
					{"delay"
						{time 0.5}
					}
					{## "entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag _user}
									}
								}
								{include
									{prop
										{prop human}
									}
									{state
										{state operatable}
									}
									{state
										{state user_control}
									}
								}
								{exclude
									{tag
										{tag hidden}
									}
									{tag
										{tag player}
									}
								}
							}
						}
						{tag_add player}
					}
					{## "entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag _user}
									}
								}
								{include
									{prop
										{prop tank}
									}
									{state
										{state "operatable user_control"}
									}
								}
								{exclude
									{tag
										{tag player_armor}
									}
									{tag
										{tag no_scavenge}
									}
								}
							}
						}
						{tag_add player_armor}
					}
					{## "entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag _user}
									}
								}
								{include
									{prop
										{prop car}
									}
									{state
										{state "operatable user_control"}
									}
								}
								{exclude
									{tag
										{tag player_car}
									}
									{tag
										{tag no_scavenge}
									}
								}
							}
						}
						{tag_add player_car}
					}
					{## "entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag _user}
									}
								}
								{include
									{prop
										{prop vehicle}
									}
									{state
										{state "operatable user_control"}
									}
								}
								{exclude
									{tag
										{tag player_veh}
									}
									{tag
										{tag no_scavenge}
									}
									{tag
										{tag player_armor}
									}
									{tag
										{tag player_car}
									}
								}
							}
						}
						{tag_add player_veh}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai:help/players_units"}
					}
				}
			}
			{"ai:help/enemy_units"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{player
											{player "2"}
										}
										{prop
											{prop human}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{tag
											{tag "ai-p"}
										}
										{state
											{state user_control}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{zone
										{zone "gamezone"}
									}
								}
								{include
									{player
										{player "2"}
									}
									{prop
										{prop human}
									}
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag "ai-p"}
									}
									{state
										{state user_control}
									}
								}
							}
						}
						{tag_add _ai}
					}
					{"delay"
						{time 0.5}
					}
					{"ables"
						{selector
							{ignore_captured_by_user 0}
							{tag _ai}
							{zone "gamezone"}
							{type human}
							{state operatable}
						}
						{remove personage}
					}
					{"delay"
						{time 0.5}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag _ai}
							{type human}
							{state operatable}
						}
						{tag_add "ai-p"}
						{tag_remove _ai}
					}
					{"delay"
						{time 8}
					}
					{"trigger"
						{name "ai:help/enemy_units"}
					}
				}
			}
			{"ai:help/clean"
				{condition
					{expression "(1 & 2) | (1 & 3)"}
					{terms
						{"1.event"
							{id "active_game"}
						}
						{"2.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag enemy}
								{zone "gamezone"}
								{state "not operatable"}
							}
						}
						{"3.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag _scr_mi}
								{zone "gamezone"}
								{state "not operatable"}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag enemy}
							{zone "gamezone"}
							{state "not operatable"}
						}
						{tag_remove enemy}
					}
					{"delay"
						{time 0.3}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag _scr_mi}
							{zone "gamezone"}
							{state "not operatable"}
						}
						{tag_remove _scr_mi}
					}
					{"delay"
						{time 0.3}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag noted_by_ai}
							{zone "gamezone"}
							{state "not operatable"}
						}
						{tag_remove noted_by_ai}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type trigger}
								{name "ai:logic/recrew_portables"}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag _scr_mi}
											}
										}
										{include
											{tag
												{tag ecrew}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag repairing}
											}
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
										}
									}
								}
								{tag_add _clean}
								{tag_remove _scr_mi}
							}
							{"delay"
								{time 0.5}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag _clean}
								}
								{tag_remove ecrew}
							}
							{"delay"
								{time 0.5}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag _clean}
								}
								{tag_remove _clean}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type trigger}
								{name "ai:logic/recrew_tank"}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag _scr_mi}
											}
										}
										{include
											{tag
												{tag tcrew}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag repairing}
											}
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
										}
									}
								}
								{tag_add _clean}
								{tag_remove _scr_mi}
							}
							{"delay"
								{time 0.5}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag _clean}
								}
								{tag_remove tcrew}
							}
							{"delay"
								{time 0.5}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag _clean}
								}
								{tag_remove _clean}
							}
						}
					}
					{"delay"
						{time 28}
					}
					{"trigger"
						{name "ai:help/clean"}
					}
				}
			}
			{"ai:logic/bail_portables"
				{condition
					{terms
						{"1.see_actors"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag enemy_portable}
										}
									}
									{include
										{state
											{state operatable}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
										{state
											{state linked}
										}
										{state
											{state user_control}
										}
									}
								}
							}
							{enemy
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag player}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
							}
							{distance
								{mode near_than}
								{meters 33}
							}
							{tag
								{"tag pair"}
								{"for selector" bail_veh}
								{"for enemy" bail_target}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"emit"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag bail_veh}
									}
								}
								{include
									{player
										{player "2"}
									}
									{state
										{state operatable}
									}
								}
								{exclude
									{state
										{state user_control}
									}
								}
							}
						}
						{drop orders}
						{emit
							{count 1}
						}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag bail_target}
							{state operatable}
						}
						{tag_add noted_by_ai}
						{tag_remove bail_target}
					}
					{"delay"
						{time 7}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag bail_veh}
						}
						{tag_remove bail_veh}
					}
					{"delay"
						{time 1}
					}
					{"trigger"
						{name "ai:logic/bail_portables"}
					}
				}
			}
			{"ai:logic/ai_unhold"
				{condition
					{type 1}
					{terms
						{"1.see_actors"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{player
											{player "2"}
										}
										{prop
											{prop human}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{tag
											{tag repairing}
										}
										{tag
											{tag _scr_mi}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
							}
							{enemy
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag _user}
										}
									}
									{include
										{state
											{state operatable}
										}
										{state
											{state user_control}
										}
									}
									{exclude
										{tag
											{tag air_vehicle}
										}
									}
								}
							}
							{distance
								{mode near_than}
								{meters 50}
							}
							{detection located}
							{tag
								{"tag pair"}
								{"for selector" unhold_iq}
								{"for enemy" enemy_near_iq}
							}
						}
						{"2.see_actors"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag enemy_tank}
										}
										{tag
											{tag enemy_acar}
										}
										{tag
											{tag enemy_veh}
										}
										{tag
											{tag enemy_carrier}
										}
									}
									{include
										{player
											{player "2"}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{tag
											{tag repairing}
										}
										{tag
											{tag _scr_mi}
										}
										{tag
											{tag unarmed_vehicle}
										}
										{state
											{state user_control}
										}
									}
								}
							}
							{enemy
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag _user}
										}
									}
									{include
										{state
											{state operatable}
										}
										{state
											{state user_control}
										}
									}
									{exclude
										{tag
											{tag air_vehicle}
										}
									}
								}
							}
							{distance
								{mode near_than}
								{meters 66}
							}
							{detection located}
							{tag
								{"tag pair"}
								{"for selector" unhold_iq}
								{"for enemy" enemy_near_iq}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag unhold_iq}
							{state operatable}
						}
						{tag_add _scr_mi}
					}
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag unhold_iq}
									{type human}
									{state operatable}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.4}
									}
									{"delay"
										{time 0.1}
									}
									{"actor_state"
										{selector
											{tag unhold_iq}
											{state operatable}
										}
										{drop orders}
										{fire_mode open}
										{move_mode free}
										{weapon_prepare on}
										{movement
											{speed assault}
										}
										{ai
											{advance_ratio "0.1"}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.4}
									}
									{"delay"
										{time 0.1}
									}
									{"actor_state"
										{selector
											{tag unhold_iq}
											{state operatable}
										}
										{drop orders}
										{fire_mode open}
										{move_mode free}
										{weapon_prepare on}
										{movement
											{type crawl}
										}
										{ai
											{advance_ratio "0.05"}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"actor_state"
										{selector
											{tag unhold_iq}
											{state operatable}
										}
										{drop orders}
										{fire_mode open}
										{move_mode free}
										{weapon_prepare on}
										{movement
											{speed sneak}
										}
										{ai
											{advance_ratio "0.1"}
										}
									}
								}
							}
						}
						{"case"
							{condition
								{type entities}
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag unhold_iq}
											}
										}
										{include
											{player
												{player "2"}
											}
											{prop
												{prop vehicle}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{state
												{state user_control}
											}
										}
									}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{tag unhold_iq}
									{type vehicle}
									{state operatable}
								}
								{drop orders}
								{fire_mode open}
								{ai_move
									{mode enable}
								}
								{movement
									{forward off}
									{backward off}
								}
							}
							{"delay"
								{time 1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.5}
									}
									{"delay"
										{time 0.1}
									}
									{"actor_state"
										{selector
											{ignore_captured_by_user 0}
											{tag unhold_iq}
										}
										{fire_mode open}
										{move_mode free}
										{ai_move
											{mode enable}
										}
										{movement
											{speed slow}
											{forward on}
											{backward on}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.5}
									}
									{"delay"
										{time 0.1}
									}
									{"actor_state"
										{selector
											{ignore_captured_by_user 0}
											{tag unhold_iq}
										}
										{fire_mode open}
										{move_mode free}
										{ai_move
											{mode enable}
										}
										{movement
											{speed fast}
											{forward on}
											{backward on}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"actor_state"
										{selector
											{ignore_captured_by_user 0}
											{tag unhold_iq}
										}
										{fire_mode open}
										{move_mode free}
										{weapon_prepare on}
										{ai_move
											{mode enable}
										}
										{movement
											{speed normal}
											{forward on}
											{backward on}
										}
									}
								}
							}
						}
						{"default"}
					}
					{"delay"
						{time 2}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag unhold_iq}
											}
										}
										{include
											{player
												{player "2"}
											}
											{prop
												{prop vehicle}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{state
												{state user_control}
											}
										}
									}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.3}
									}
									{"delay"
										{time 0.1}
									}
									{"action"
										{selector
											{tag unhold_iq}
											{state operatable}
										}
										{action rotate}
										{target
											{ignore_captured_by_user 0}
											{tag enemy_near_iq}
										}
									}
									{"delay"
										{time 1}
									}
									{"action"
										{selector
											{tag unhold_iq}
											{state operatable}
										}
										{action move}
										{target
											{ignore_captured_by_user 0}
											{tag enemy_near_iq}
										}
									}
									{"delay"
										{time 5}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.3}
									}
									{"delay"
										{time 0.1}
									}
									{"action"
										{selector
											{tag unhold_iq}
											{state operatable}
										}
										{action rotate}
										{target
											{ignore_captured_by_user 0}
											{tag enemy_near_iq}
										}
									}
									{"delay"
										{time 1}
									}
									{"action"
										{selector
											{tag unhold_iq}
											{state operatable}
										}
										{action advance}
										{target
											{ignore_captured_by_user 0}
											{tag enemy_near_iq}
										}
									}
									{"delay"
										{time 8}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.3}
									}
									{"delay"
										{time 0.1}
									}
									{"action"
										{selector
											{tag unhold_iq}
											{state operatable}
										}
										{action advance}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{zone
														{zone "gamezone"}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
												{exclude
													{state
														{state inactive}
													}
												}
											}
											{sort
												{type entity}
												{entity
													{ignore_captured_by_user 0}
													{tag enemy_near_iq}
												}
											}
										}
									}
									{"delay"
										{time 6}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"action"
										{selector
											{tag unhold_iq}
											{state operatable}
										}
										{action rotate}
										{target
											{ignore_captured_by_user 0}
											{tag enemy_near_iq}
										}
									}
									{"delay"
										{time 1}
									}
									{"action"
										{selector
											{tag unhold_iq}
											{state operatable}
										}
										{action attack}
										{target
											{ignore_captured_by_user 0}
											{tag enemy_near_iq}
										}
									}
									{"delay"
										{time 8}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.3}
									}
									{"delay"
										{time 0.1}
									}
									{"action"
										{selector
											{tag unhold_iq}
											{state operatable}
										}
										{action move}
										{target
											{ignore_captured_by_user 0}
											{tag enemy_near_iq}
										}
									}
									{"delay"
										{time 4}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.3}
									}
									{"delay"
										{time 0.1}
									}
									{"action"
										{selector
											{tag unhold_iq}
											{state operatable}
										}
										{action advance}
										{target
											{ignore_captured_by_user 0}
											{tag enemy_near_iq}
										}
									}
									{"delay"
										{time 5}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.3}
									}
									{"delay"
										{time 0.1}
									}
									{"action"
										{selector
											{tag unhold_iq}
											{state operatable}
										}
										{action advance}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{zone
														{zone "gamezone"}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
												{exclude
													{state
														{state inactive}
													}
												}
											}
											{sort
												{type entity}
												{entity
													{ignore_captured_by_user 0}
													{tag enemy_near_iq}
												}
											}
										}
									}
									{"delay"
										{time 6}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"action"
										{selector
											{tag unhold_iq}
											{state operatable}
										}
										{action attack}
										{target
											{ignore_captured_by_user 0}
											{tag enemy_near_iq}
										}
									}
									{"delay"
										{time 8}
									}
								}
							}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type see_enemy}
								{selector
									{ignore_captured_by_user 0}
									{tag unhold_iq}
								}
							}
							{"delay"
								{time 0.1}
							}
						}
						{"default"
							{"delay"
								{time 5}
							}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag unhold_iq}
											}
										}
										{include
											{player
												{player "2"}
											}
											{prop
												{prop vehicle}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{state
												{state user_control}
											}
										}
									}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{tag unhold_iq}
									{state operatable}
								}
								{movement
									{forward off}
									{backward off}
								}
							}
							{"delay"
								{time 2}
							}
							{"actor_state"
								{selector
									{ignore_captured_by_user 0}
									{tag unhold_iq}
								}
								{fire_mode open}
								{move_mode free}
								{ai_move
									{mode enable}
								}
								{movement
									{speed slow}
									{forward on}
									{backward on}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.5}
									}
									{"delay"
										{time 0.1}
									}
									{"actor_to_cover"
										{selector
											{tag unhold_iq}
											{state operatable}
										}
										{mode random}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"actor_state"
										{selector
											{tag unhold_iq}
											{state operatable}
										}
										{fire_mode open}
										{move_mode free}
										{ai_move
											{mode enable}
										}
										{ai
											{advance_ratio 1}
										}
									}
								}
							}
						}
					}
					{"delay"
						{time 0.5}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag unhold_iq}
											}
										}
										{include
											{player
												{player "2"}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{state
												{state user_control}
											}
										}
									}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{zone
												{zone "gamezone"}
											}
										}
										{include
											{player
												{player "2"}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag _scr_mi}
											}
											{tag
												{tag repairing}
											}
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
											{state
												{state user_control}
											}
										}
									}
									{amount 4
									}
									{sort
										{type entity}
										{entity
											{ignore_captured_by_user 0}
											{tag unhold_iq}
										}
									}
								}
								{drop orders}
								{move_mode free}
								{ai_move
									{mode enable}
								}
								{ai
									{advance_ratio 1}
								}
							}
						}
						{"default"}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag unhold_iq}
						}
						{tag_add _mi_temp2}
						{tag_remove unhold_iq}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag enemy_near_iq}
							{zone "gamezone"}
							{state operatable}
						}
						{tag_add noted_by_ai}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag enemy_near_iq}
						}
						{tag_remove enemy_near_iq}
					}
					{"delay"
						{time 20}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag _mi_temp2}
						}
						{tag_remove _scr_mi}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag _mi_temp2}
						}
						{tag_remove _mi_temp2}
					}
					{"delay"
						{time 1}
					}
					{"trigger"
						{name "ai:logic/ai_unhold"}
					}
				}
			}
			{"ai:logic/tank_alt_fight"
				{condition
					{type 1}
					{terms
						{"1.see_actors"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag enemy_tank}
										}
									}
									{include
										{player
											{player "2"}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state "operatable moveable"}
										}
									}
									{exclude
										{tag
											{tag static}
										}
										{state
											{state inactive}
										}
										{state
											{state user_control}
										}
									}
								}
							}
							{enemy
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{relation
											{relation ally}
											{player "0"}
										}
										{prop
											{prop human}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
							}
							{distance
								{mode near_than}
								{meters 100}
							}
							{detection visible}
							{tag
								{"tag pair"}
								{"for selector" e_tank_alt}
								{"for enemy" p_tank_target}
							}
						}
						{"2.see_actors"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag enemy_tank}
										}
									}
									{include
										{player
											{player "2"}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state "operatable moveable"}
										}
									}
									{exclude
										{tag
											{tag static}
										}
										{state
											{state inactive}
										}
										{state
											{state user_control}
										}
									}
								}
							}
							{enemy
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{relation
											{relation ally}
											{player "0"}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{tag
											{tag air_vehicle}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{distance
								{mode near_than}
								{meters 200}
							}
							{tag
								{"tag pair"}
								{"for selector" e_tank_alt}
								{"for enemy" p_tank_target}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag p_tank_target}
									{zone "gamezone"}
									{state operatable}
								}
								{count
									{op "=="}
									{value 0}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag e_tank_alt}
								}
								{tag_remove e_tank_alt}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag p_tank_target}
								}
								{tag_remove p_tank_target}
							}
							{"delay"
								{time 15}
							}
							{"trigger"
								{name "ai:logic/tank_alt_fight"}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag e_tank_alt}
											}
										}
										{include
											{player
												{player "2"}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{state
												{state user_control}
											}
										}
									}
								}
								{drop orders}
								{fire_mode open}
								{ai_move
									{mode enable}
								}
								{movement
									{forward off}
									{backward off}
								}
							}
							{"delay"
								{time 0.2}
							}
							{"entity_state"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag enemy}
											}
										}
										{include
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag _scr_mi}
											}
											{tag
												{tag repairing}
											}
											{tag
												{tag e_tank_alt}
											}
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
										}
									}
									{amount 4
									}
									{sort
										{type entity}
										{entity
											{ignore_captured_by_user 0}
											{tag e_tank_alt}
										}
									}
								}
								{tag_add temp2}
							}
							{"delay"
								{time 0.3}
							}
							{"while"
								{condition
									{type near}
									{units
										{source advanced}
										{ignore_captured_by_user 0}
										{group
											{select
												{tag
													{tag temp2}
												}
											}
											{include
												{prop
													{prop human}
												}
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag e_tank_alt}
												}
											}
										}
									}
									{near_to
										{ignore_captured_by_user 0}
										{tag e_tank_alt}
									}
									{distance 90}
								}
								{"delay"
									{time 0.1}
								}
								{"entity_state"
									{selector
										{source advanced}
										{ignore_captured_by_user 0}
										{group
											{select
												{tag
													{tag temp2}
												}
											}
											{include
												{prop
													{prop human}
												}
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag e_tank_alt}
												}
											}
										}
										{sort
											{type entity}
											{entity
												{ignore_captured_by_user 0}
												{tag e_tank_alt}
											}
										}
										{amount 1
										}
									}
									{tag_add e_tank_alt}
									{tag_remove temp2}
								}
								{"delay"
									{time 0.1}
								}
							}
							{"delay"
								{time 0.3}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag e_tank_alt}
									{state operatable}
								}
								{tag_add _scr_mi}
							}
							{"actor_state"
								{selector
									{ignore_captured_by_user 0}
									{tag e_tank_alt}
									{type human}
									{state operatable}
								}
								{drop orders}
								{fire_mode open}
								{move_mode free}
								{ai_move
									{mode enable}
								}
								{ai
									{advance_ratio "0.1"}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{ignore_captured_by_user 0}
									{tag e_tank_alt}
									{type vehicle}
								}
								{drop orders}
								{fire_mode open}
								{move_mode free}
								{ai_move
									{mode enable}
								}
								{movement
									{speed normal}
									{forward on}
									{backward on}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"squad_create"
								{selector
									{ignore_captured_by_user 0}
									{tag e_tank_alt}
									{zone "gamezone"}
									{player "2"}
									{state operatable}
								}
								{name e_tank_squad}
							}
							{"delay"
								{time 0.3}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.4}
									}
									{"delay"
										{time 0.1}
									}
									{"action"
										{selector
											{ignore_captured_by_user 0}
											{tag e_tank_alt}
											{zone "gamezone"}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{drop orders}
										{action rotate}
										{target
											{ignore_captured_by_user 0}
											{tag p_tank_target}
											{zone "gamezone"}
										}
									}
									{"delay"
										{time 5}
									}
									{"actor_state"
										{selector
											{ignore_captured_by_user 0}
											{tag e_tank_alt}
											{zone "gamezone"}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{fire_mode open}
										{ai_move
											{mode enable}
										}
										{movement
											{forward on}
											{backward on}
										}
									}
									{"delay"
										{time 0.25}
									}
									{"action"
										{selector
											{ignore_captured_by_user 0}
											{tag e_tank_alt}
											{zone "gamezone"}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{action attack}
										{target
											{ignore_captured_by_user 0}
											{tag p_tank_target}
											{zone "gamezone"}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.4}
									}
									{"delay"
										{time 0.1}
									}
									{"action"
										{selector
											{ignore_captured_by_user 0}
											{tag e_tank_alt}
											{zone "gamezone"}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{drop orders}
										{action rotate}
										{target
											{ignore_captured_by_user 0}
											{tag p_tank_target}
											{zone "gamezone"}
										}
									}
									{"delay"
										{time 5}
									}
									{"actor_state"
										{selector
											{ignore_captured_by_user 0}
											{tag e_tank_alt}
											{zone "gamezone"}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{fire_mode open}
										{ai_move
											{mode enable}
										}
										{movement
											{forward off}
											{backward on}
										}
									}
									{"delay"
										{time 0.25}
									}
									{"switch"
										{"case"
											{condition
												{type entities}
												{selector
													{ignore_captured_by_user 0}
													{tag e_tank_alt}
													{zone "enemykeyline"}
												}
											}
											{"delay"
												{time 0.1}
											}
											{"action"
												{selector
													{ignore_captured_by_user 0}
													{tag e_tank_alt}
													{zone "gamezone"}
													{player "2"}
													{type vehicle}
													{state operatable}
												}
												{action move}
												{target
													{ignore_captured_by_user 0}
												}
												{waypoint "84"}
											}
										}
										{"default"
											{"delay"
												{time 0.1}
											}
											{"action"
												{selector
													{ignore_captured_by_user 0}
													{tag e_tank_alt}
													{zone "gamezone"}
													{player "2"}
													{type vehicle}
													{state operatable}
												}
												{action move}
												{target
													{ignore_captured_by_user 0}
												}
												{waypoint "86"}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.25}
									}
									{"action"
										{selector
											{ignore_captured_by_user 0}
											{tag e_tank_alt}
											{zone "gamezone"}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{drop orders}
										{action rotate}
										{target
											{ignore_captured_by_user 0}
											{tag p_tank_target}
											{zone "gamezone"}
										}
									}
									{"delay"
										{time 5}
									}
									{"actor_state"
										{selector
											{tag e_tank_alt}
											{zone "gamezone"}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{fire_mode open}
										{weapon_prepare on}
										{ai_move
											{mode enable}
										}
										{movement
											{speed fast}
											{forward on}
											{backward off}
										}
									}
									{"delay"
										{time 0.25}
									}
									{"action"
										{selector
											{ignore_captured_by_user 0}
											{tag e_tank_alt}
											{zone "gamezone"}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{drop orders}
										{action move}
										{target
											{ignore_captured_by_user 0}
											{tag p_tank_target}
											{zone "gamezone"}
										}
									}
									{"delay"
										{time 8}
									}
									{"actor_state"
										{selector
											{ignore_captured_by_user 0}
											{tag e_tank_alt}
											{zone "gamezone"}
											{type vehicle}
										}
										{fire_mode open}
										{move_mode free}
										{weapon_prepare on}
										{ai_move
											{mode enable}
										}
										{movement
											{speed normal}
											{forward on}
											{backward on}
										}
									}
									{"delay"
										{time 1}
									}
									{"action"
										{selector
											{ignore_captured_by_user 0}
											{tag e_tank_alt}
											{zone "gamezone"}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{action attack}
										{target
											{ignore_captured_by_user 0}
											{tag p_tank_target}
											{zone "gamezone"}
										}
									}
								}
							}
							{"delay"
								{time 1}
							}
							{"switch"
								{"case"
									{condition
										{type near}
										{units
											{ignore_captured_by_user 0}
											{tag e_tank_alt}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{near_to
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag flag}
													}
												}
												{exclude
													{state
														{state inactive}
													}
												}
											}
										}
										{distance 80}
									}
									{"delay"
										{time 0.1}
									}
									{"effect"
										{selector
											{ignore_captured_by_user 0}
											{tag e_tank_alt}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{effect smoke_screen}
									}
								}
								{"default"}
							}
							{"delay"
								{time 30}
							}
							{"squad_dismiss"
								{squad e_tank_squad}
							}
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{ignore_captured_by_user 0}
									{tag e_tank_alt}
									{type vehicle}
								}
								{movement
									{speed normal}
									{forward on}
									{backward on}
								}
							}
							{"delay"
								{time 0.5}
							}
							{"entity_state"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag p_tank_target}
											}
										}
										{include
											{relation
												{relation ally}
												{player "0"}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{tag_add noted_by_ai}
							}
							{"delay"
								{time 1}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag e_tank_alt}
								}
								{tag_add _mi_temp5}
								{tag_remove e_tank_alt}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag p_tank_target}
								}
								{tag_remove p_tank_target}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag temp2}
								}
								{tag_remove temp2}
							}
							{"delay"
								{time 30}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag _mi_temp5}
								}
								{tag_remove _scr_mi}
							}
							{"delay"
								{time 1}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag _mi_temp5}
								}
								{tag_remove _mi_temp5}
							}
							{"delay"
								{time 60}
							}
							{"trigger"
								{name "ai:logic/tank_alt_fight"}
							}
						}
					}
				}
			}
			{"ai:logic/recrew_portables"
				{condition
					{type 1}
					{terms
						{"1.see_actors"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag enemy}
										}
									}
									{include
										{state
											{state operatable}
										}
									}
									{exclude
										{tag
											{tag _scr_mi}
										}
										{tag
											{tag repairing}
										}
										{tag
											{tag dont_recrew}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
							}
							{enemy
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag enemy_portable}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag destroyed}
										}
										{tag
											{tag bail_veh}
										}
										{state
											{state inhabited}
										}
										{state
											{state linked}
										}
									}
								}
							}
							{distance
								{mode near_than}
								{meters 48}
							}
							{tag
								{"tag pair"}
								{"for selector" ecrew}
								{"for enemy" ecannon_enter}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type see_actors}
								{selector
									{tag ecrew}
									{zone "gamezone"}
									{state operatable}
								}
								{enemy
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag _user}
											}
										}
										{include
											{state
												{state operatable}
											}
											{state
												{state user_control}
											}
										}
										{exclude
											{tag
												{tag air_vehicle}
											}
										}
									}
								}
								{distance
									{mode near_than}
									{meters 55}
								}
								{detection visible}
							}
							{"delay"
								{time 1}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag ecrew}
								}
								{tag_remove ecrew}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag ecannon_enter}
								}
								{tag_remove ecannon_enter}
							}
							{"delay"
								{time 20}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"entity_state"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag enemy}
											}
										}
										{include
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag ecrew}
											}
											{tag
												{tag repairing}
											}
											{tag
												{tag _scr_mi}
											}
											{tag
												{tag dont_recrew}
											}
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
										}
									}
									{amount 2
									}
									{sort
										{type entity}
										{entity
											{ignore_captured_by_user 0}
											{tag ecrew}
										}
									}
								}
								{tag_add temp1}
							}
							{"delay"
								{time 0.3}
							}
							{"while"
								{condition
									{type near}
									{units
										{source advanced}
										{ignore_captured_by_user 0}
										{group
											{select
												{tag
													{tag temp1}
												}
											}
											{include
												{prop
													{prop human}
												}
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag ecrew}
												}
												{state
													{state inactive}
												}
												{state
													{state linked}
												}
											}
										}
									}
									{near_to
										{ignore_captured_by_user 0}
										{tag ecannon_enter}
									}
									{distance 90}
								}
								{"delay"
									{time 0.1}
								}
								{"entity_state"
									{selector
										{source advanced}
										{ignore_captured_by_user 0}
										{group
											{select
												{tag
													{tag temp1}
												}
											}
											{include
												{prop
													{prop human}
												}
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag ecrew}
												}
												{state
													{state inactive}
												}
												{state
													{state linked}
												}
											}
										}
										{sort
											{type entity}
											{entity
												{ignore_captured_by_user 0}
												{tag ecannon_enter}
											}
										}
										{amount 1
										}
									}
									{tag_add ecrew}
									{tag_remove temp1}
								}
								{"delay"
									{time 0.1}
								}
							}
							{"delay"
								{time 0.3}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag ecrew}
									{state operatable}
								}
								{tag_add _scr_mi}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ecrew}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag repairing}
											}
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
										}
									}
								}
								{drop orders}
								{fire_mode open}
								{move_mode free}
								{movement
									{speed assault}
								}
							}
							{"delay"
								{time 0.3}
							}
							{"action"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ecrew}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag repairing}
											}
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
										}
									}
								}
								{drop orders}
								{action move}
								{target
									{ignore_captured_by_user 0}
									{tag ecannon_enter}
								}
							}
							{"delay"
								{time 5}
							}
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag ecannon_enter}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
												}
												{exclude
													{tag
														{tag destroyed}
													}
													{state
														{state inhabited}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.1}
									}
									{"board"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag ecrew}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
												{exclude
													{tag
														{tag repairing}
													}
													{state
														{state inactive}
													}
													{state
														{state linked}
													}
												}
											}
										}
										{vehicle
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag ecannon_enter}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
												}
												{exclude
													{tag
														{tag destroyed}
													}
												}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"actor_state"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag ecrew}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
												{exclude
													{tag
														{tag repairing}
													}
													{state
														{state inactive}
													}
													{state
														{state linked}
													}
												}
											}
										}
										{drop orders}
										{fire_mode open}
										{move_mode free}
										{ai_move
											{mode enable}
										}
									}
								}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag ecrew}
									{state operatable}
								}
								{tag_add _mi_temp4}
							}
							{"delay"
								{time 20}
							}
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ecrew}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag repairing}
											}
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
										}
									}
								}
								{tag_remove ecrew}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag ecannon_enter}
								}
								{tag_remove ecannon_enter}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag temp1}
								}
								{tag_remove temp1}
							}
							{"delay"
								{time 20}
							}
						}
					}
					{"delay"
						{time 30}
					}
					{"entity_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag _mi_temp4}
									}
								}
								{include
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag repairing}
									}
									{state
										{state inactive}
									}
									{state
										{state linked}
									}
								}
							}
						}
						{tag_remove _scr_mi}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag _mi_temp4}
						}
						{tag_remove _mi_temp4}
					}
					{"delay"
						{time 1}
					}
					{"trigger"
						{name "ai:logic/recrew_portables"}
					}
				}
			}
			{"ai:logic/chance_ai_pursue"
				{condition
					{expression "1 & 2 & !3"}
					{terms
						{"1.near"
							{units
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{player
											{player "2"}
										}
										{prop
											{prop human}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{tag
											{tag repairing}
										}
										{tag
											{tag _scr_mi}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
							}
							{near_to
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag noted_by_ai}
										}
									}
									{include
										{zone
											{zone "gamezone"}
										}
										{relation
											{relation ally}
											{player "0"}
										}
										{state
											{state operatable}
										}
										{state
											{state user_control}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
							}
							{distance 85}
						}
						{"2.cmp_i"
							{var "attack_clear_count$"}
							{op "<<="}
							{value 6}
						}
						{"3.event"
							{id "start_won"}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"entity_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag enemy}
									}
								}
								{include
									{zone
										{zone "gamezone"}
									}
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag repairing}
									}
									{tag
										{tag _scr_mi}
									}
									{tag
										{tag dont_recrew}
									}
									{state
										{state inactive}
									}
									{state
										{state linked}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{ignore_captured_by_user 0}
									{tag noted_by_ai}
									{zone "gamezone"}
								}
							}
							{amount 5
							}
						}
						{tag_add temp4}
					}
					{"delay"
						{time 0.5}
					}
					{"while"
						{condition
							{type near}
							{units
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag temp4}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
							}
							{near_to
								{ignore_captured_by_user 0}
								{tag noted_by_ai}
								{state operatable}
							}
							{distance 60}
						}
						{"delay"
							{time 0.1}
						}
						{"entity_state"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag temp4}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{ignore_captured_by_user 0}
										{tag noted_by_ai}
										{state operatable}
									}
								}
								{amount 1
								}
							}
							{tag_add pursuer}
							{tag_remove temp4}
						}
						{"delay"
							{time 0.1}
						}
					}
					{"delay"
						{time 0.3}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag pursuer}
							{state operatable}
						}
						{tag_add _scr_mi}
					}
					{"delay"
						{time 0.3}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag noted_by_ai}
									}
								}
								{include
									{state
										{state operatable}
									}
								}
								{exclude
									{state
										{state inactive}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{ignore_captured_by_user 0}
									{tag pursuer}
								}
							}
						}
						{tag_add pursue_target}
					}
					{"delay"
						{time 1}
					}
					{"squad_create"
						{selector
							{ignore_captured_by_user 0}
							{tag pursuer}
							{zone "gamezone"}
							{state operatable}
						}
						{name pursuer}
					}
					{"delay"
						{time 0.1}
					}
					{"actor_state"
						{selector
							{ignore_captured_by_user 0}
							{tag pursuer}
							{zone "gamezone"}
							{state operatable}
						}
						{move_mode free}
						{weapon_prepare on}
						{ai_move
							{mode enable}
						}
						{ai
							{advance_ratio "0.2"}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.5}
							}
							{"delay"
								{time 0.1}
							}
							{"action"
								{selector
									{ignore_captured_by_user 0}
									{tag pursuer}
									{zone "gamezone"}
									{state operatable}
								}
								{action advance}
								{target
									{ignore_captured_by_user 0}
									{tag pursue_target}
									{zone "gamezone"}
								}
							}
							{"delay"
								{time 4}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"action"
								{selector
									{ignore_captured_by_user 0}
									{tag pursuer}
									{zone "gamezone"}
									{state operatable}
								}
								{action move}
								{target
									{ignore_captured_by_user 0}
									{tag pursue_target}
									{zone "gamezone"}
								}
							}
							{"delay"
								{time 6}
							}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type see_enemy}
								{selector
									{ignore_captured_by_user 0}
									{tag pursuer}
									{state operatable}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"action"
								{selector
									{ignore_captured_by_user 0}
									{tag pursuer}
									{state operatable}
								}
								{action attack}
								{target
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag pursue_target}
											}
										}
										{include
											{state
												{state "operatable user_control"}
											}
										}
									}
								}
							}
							{"delay"
								{time 8}
							}
						}
						{"default"
							{"delay"
								{time 5}
							}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"actor_state"
						{selector
							{ignore_captured_by_user 0}
							{tag pursuer}
							{state operatable}
						}
						{drop orders}
						{move_mode free}
						{ai
							{advance_ratio "0.5"}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.5}
							}
							{"delay"
								{time 25}
							}
						}
						{"default"
							{"delay"
								{time 45}
							}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"squad_dismiss"
						{squad pursuer}
					}
					{"delay"
						{time 20}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "attack_clear_count$"}
								{op "<<"}
								{value 5}
							}
							{"delay"
								{time 0.1}
							}
							{"action"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag pursuer}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
											{tag
												{tag retreatenemy}
											}
										}
									}
								}
								{action move}
								{target
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag x_0}
											}
										}
										{exclude
											{tag
												{tag hidden}
											}
										}
									}
									{sort
										{type entity}
										{entity
											{ignore_captured_by_user 0}
											{tag pursuer}
											{state operatable}
										}
									}
									{amount 1
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"action"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag pursuer}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
											{tag
												{tag retreatenemy}
											}
										}
									}
								}
								{action move}
								{target
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag cap}
											}
										}
									}
									{sort
										{type entity}
										{entity
											{ignore_captured_by_user 0}
											{tag pursuer}
											{state operatable}
										}
									}
									{amount 1
									}
								}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag pursue_target}
						}
						{tag_remove pursue_target}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag pursuer}
						}
						{tag_add _mi_temp3}
						{tag_remove pursuer}
					}
					{"delay"
						{time 79}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag _mi_temp3}
						}
						{tag_remove _scr_mi}
					}
					{"delay"
						{time 0.5}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag _mi_temp3}
						}
						{tag_remove _mi_temp3}
					}
					{"delay"
						{time 0.5}
					}
					{"trigger"
						{name "ai:logic/chance_ai_pursue"}
					}
				}
			}
			{"ai:logic/recrew_tank"
				{condition
					{terms
						{"1.see_actors"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag enemy}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{tag
											{tag _scr_mi}
										}
										{tag
											{tag repairing}
										}
										{tag
											{tag dont_recrew}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
							}
							{enemy
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag enemy_tank}
										}
										{tag
											{tag enemy_acar}
										}
									}
									{include
										{zone
											{zone "gamezone"}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag destroyed}
										}
										{tag
											{tag body_break}
										}
										{tag
											{tag ammo_cooked}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{distance
								{mode near_than}
								{meters 48}
							}
							{tag
								{"tag pair"}
								{"for selector" tcrew}
								{"for enemy" etank_enter}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type see_actors}
								{selector
									{ignore_captured_by_user 0}
									{tag tcrew}
									{zone "gamezone"}
									{state operatable}
								}
								{enemy
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag _user}
											}
										}
										{include
											{state
												{state operatable}
											}
											{state
												{state user_control}
											}
										}
										{exclude
											{tag
												{tag air_vehicle}
											}
										}
									}
								}
								{distance
									{mode near_than}
									{meters 50}
								}
								{detection visible}
							}
							{"delay"
								{time 1}
							}
							{"entity_state"
								{selector
									{tag tcrew}
								}
								{tag_remove tcrew}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag etank_enter}
								}
								{tag_remove etank_enter}
							}
							{"delay"
								{time 30}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"entity_state"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag enemy}
											}
										}
										{include
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag tcrew}
											}
											{tag
												{tag _scr_mi}
											}
											{tag
												{tag dont_recrew}
											}
											{tag
												{tag repairing}
											}
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
										}
									}
									{sort
										{type entity}
										{entity
											{ignore_captured_by_user 0}
											{tag tcrew}
										}
									}
									{amount 1
									}
								}
								{tag_add temp3}
							}
							{"delay"
								{time 0.3}
							}
							{"while"
								{condition
									{type near}
									{units
										{source advanced}
										{ignore_captured_by_user 0}
										{group
											{select
												{tag
													{tag temp3}
												}
											}
											{include
												{prop
													{prop human}
												}
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag tcrew}
												}
												{state
													{state inactive}
												}
												{state
													{state linked}
												}
											}
										}
									}
									{near_to
										{ignore_captured_by_user 0}
										{tag etank_enter}
									}
									{distance 90}
								}
								{"delay"
									{time 0.1}
								}
								{"entity_state"
									{selector
										{source advanced}
										{ignore_captured_by_user 0}
										{group
											{select
												{tag
													{tag temp3}
												}
											}
											{include
												{prop
													{prop human}
												}
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag tcrew}
												}
												{state
													{state inactive}
												}
												{state
													{state linked}
												}
											}
										}
										{sort
											{type entity}
											{entity
												{ignore_captured_by_user 0}
												{tag etank_enter}
											}
										}
										{amount 1
										}
									}
									{tag_add tcrew}
									{tag_remove temp3}
								}
								{"delay"
									{time 0.1}
								}
							}
							{"delay"
								{time 0.3}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag tcrew}
									{state operatable}
								}
								{tag_add _scr_mi}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag tcrew}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag repairing}
											}
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
										}
									}
								}
								{drop orders}
								{fire_mode open}
								{move_mode free}
								{movement
									{speed assault}
								}
							}
							{"delay"
								{time 0.3}
							}
							{"action"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag tcrew}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag repairing}
											}
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
										}
									}
								}
								{drop orders}
								{action move}
								{target
									{ignore_captured_by_user 0}
									{tag etank_enter}
								}
							}
							{"delay"
								{time 6}
							}
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag etank_enter}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
												}
												{exclude
													{tag
														{tag destroyed}
													}
													{tag
														{tag body_break}
													}
													{tag
														{tag ammo_cooked}
													}
													{state
														{state inhabited}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.1}
									}
									{"board"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag tcrew}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
												{exclude
													{tag
														{tag repairing}
													}
													{state
														{state inactive}
													}
													{state
														{state linked}
													}
												}
											}
										}
										{vehicle
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag etank_enter}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
												}
												{exclude
													{tag
														{tag destroyed}
													}
													{tag
														{tag ammo_cooked}
													}
													{tag
														{tag body_break}
													}
												}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"actor_state"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag tcrew}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
												{exclude
													{tag
														{tag repairing}
													}
													{state
														{state inactive}
													}
													{state
														{state linked}
													}
												}
											}
										}
										{drop orders}
										{fire_mode open}
										{move_mode free}
										{ai_move
											{mode enable}
										}
									}
								}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag tcrew}
									{state operatable}
								}
								{tag_add _mi_temp6}
							}
							{"delay"
								{time 20}
							}
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag tcrew}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag repairing}
											}
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
										}
									}
								}
								{tag_remove tcrew}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag temp3}
								}
								{tag_remove temp3}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag etank_enter}
								}
								{tag_remove etank_enter}
							}
							{"delay"
								{time 30}
							}
						}
					}
					{"delay"
						{time 30}
					}
					{"entity_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag _mi_temp6}
									}
								}
								{include
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag repairing}
									}
									{state
										{state inactive}
									}
									{state
										{state linked}
									}
								}
							}
						}
						{tag_remove _scr_mi}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag _mi_temp6}
						}
						{tag_remove _mi_temp6}
					}
					{"delay"
						{time 1}
					}
					{"trigger"
						{name "ai:logic/recrew_tank"}
					}
				}
			}
			{"ai:logic/traffic/bail"
				{condition
					{terms
						{"1.event"
							{id "start"}
						}
						{"2.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag unarmed_vehicle}
										}
									}
									{include
										{player
											{player "2"}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{state
											{state moveable}
										}
										{state
											{state inactive}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"emit"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag unarmed_vehicle}
									}
								}
								{include
									{player
										{player "2"}
									}
									{prop
										{prop vehicle}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{state
										{state moveable}
									}
									{state
										{state inactive}
									}
								}
							}
							{amount 1
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai:logic/traffic/bail"}
					}
				}
			}
			{"ai:logic/add_emitinf_ables"
				{condition
					{expression "(1 & 2 & 3) | (1 & 4)"}
					{terms
						{"1.event"
							{id "start"}
						}
						{"2.near"
							{units
								{ignore_captured_by_user 0}
								{tag add_emitinf_ables}
								{zone "gamezone"}
								{player "2"}
								{type vehicle}
								{state inhabited}
							}
							{near_to
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag _user}
										}
									}
									{include
										{relation
											{relation ally}
											{player "0"}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
							}
							{distance 150}
						}
						{"3.see_enemy"
							{selector
								{ignore_captured_by_user 0}
								{zone "gamezone"}
								{player "2"}
								{type human}
								{state operatable}
							}
						}
						{"4.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag add_emitinf_ables}
										}
									}
									{include
										{player
											{player "2"}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
										{broken_components
											{masks
												"*"
											}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
										{state
											{state inactive}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag add_emitinf_ables}
									}
								}
								{include
									{player
										{player "2"}
									}
									{prop
										{prop vehicle}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag hidden}
									}
									{state
										{state inactive}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag _user}
											}
										}
										{include
											{relation
												{relation ally}
												{player "0"}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{state
												{state inactive}
											}
										}
									}
								}
							}
							{amount 1
							}
						}
						{tag_add add_emitinf_ables_do}
						{tag_remove add_emitinf_ables}
					}
					{"delay"
						{time 0.1}
					}
					{"ables"
						{selector
							{ignore_captured_by_user 0}
							{tag add_emitinf_ables_do}
							{zone "gamezone"}
							{player "2"}
							{type vehicle}
							{state inhabited}
						}
						{add emit_passangers_on_enemy}
					}
					{"delay"
						{time 0.1}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag add_emitinf_ables_do}
						}
						{tag_remove add_emitinf_ables_do}
					}
					{"delay"
						{time 1}
					}
					{"trigger"
						{name "ai:logic/add_emitinf_ables"}
					}
				}
			}
			{"ai:logic/car_alt_fight"
				{condition
					{type 1}
					{terms
						{"1.see_actors"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag enemy_acar}
										}
									}
									{include
										{player
											{player "2"}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state "operatable moveable"}
										}
									}
									{exclude
										{tag
											{tag static}
										}
										{state
											{state inactive}
										}
										{state
											{state user_control}
										}
									}
								}
							}
							{enemy
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{relation
											{relation ally}
											{player "0"}
										}
										{prop
											{prop human}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
							}
							{distance
								{mode near_than}
								{meters 80}
							}
							{detection visible}
							{tag
								{"tag pair"}
								{"for selector" e_car_alt}
								{"for enemy" p_car_target}
							}
						}
						{"2.see_actors"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag enemy_acar}
										}
									}
									{include
										{player
											{player "2"}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state "operatable moveable"}
										}
									}
									{exclude
										{tag
											{tag static}
										}
										{state
											{state inactive}
										}
										{state
											{state user_control}
										}
									}
								}
							}
							{enemy
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{relation
											{relation ally}
											{player "0"}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{tag
											{tag air_vehicle}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{distance
								{mode near_than}
								{meters 125}
							}
							{tag
								{"tag pair"}
								{"for selector" e_car_alt}
								{"for enemy" p_car_target}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag p_car_target}
									{zone "gamezone"}
									{state operatable}
								}
								{count
									{op "=="}
									{value 0}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag e_car_alt}
								}
								{tag_remove e_car_alt}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag p_car_target}
								}
								{tag_remove p_car_target}
							}
							{"delay"
								{time 15}
							}
							{"trigger"
								{name "ai:logic/car_alt_fight"}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag e_car_alt}
											}
										}
										{include
											{player
												{player "2"}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{state
												{state user_control}
											}
										}
									}
								}
								{drop orders}
								{fire_mode open}
								{ai_move
									{mode enable}
								}
								{movement
									{forward off}
									{backward off}
								}
							}
							{"delay"
								{time 0.2}
							}
							{"entity_state"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag enemy}
											}
										}
										{include
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag _scr_mi}
											}
											{tag
												{tag repairing}
											}
											{tag
												{tag e_car_alt}
											}
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
										}
									}
									{amount 2
									}
									{sort
										{type entity}
										{entity
											{ignore_captured_by_user 0}
											{tag e_car_alt}
										}
									}
								}
								{tag_add temp5}
							}
							{"delay"
								{time 0.3}
							}
							{"while"
								{condition
									{type near}
									{units
										{source advanced}
										{ignore_captured_by_user 0}
										{group
											{select
												{tag
													{tag temp5}
												}
											}
											{include
												{prop
													{prop human}
												}
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag e_car_alt}
												}
											}
										}
									}
									{near_to
										{ignore_captured_by_user 0}
										{tag e_car_alt}
									}
									{distance 60}
								}
								{"delay"
									{time 0.1}
								}
								{"entity_state"
									{selector
										{source advanced}
										{ignore_captured_by_user 0}
										{group
											{select
												{tag
													{tag temp5}
												}
											}
											{include
												{prop
													{prop human}
												}
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag e_car_alt}
												}
											}
										}
										{sort
											{type entity}
											{entity
												{ignore_captured_by_user 0}
												{tag e_car_alt}
											}
										}
										{amount 1
										}
									}
									{tag_add e_car_alt}
									{tag_remove temp5}
								}
								{"delay"
									{time 0.1}
								}
							}
							{"delay"
								{time 0.3}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag e_car_alt}
									{state operatable}
								}
								{tag_add _scr_mi}
							}
							{"actor_state"
								{selector
									{ignore_captured_by_user 0}
									{tag e_car_alt}
									{type human}
									{state operatable}
								}
								{drop orders}
								{fire_mode open}
								{move_mode free}
								{ai_move
									{mode enable}
								}
								{ai
									{advance_ratio "0.1"}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{ignore_captured_by_user 0}
									{tag e_car_alt}
									{type vehicle}
								}
								{drop orders}
								{fire_mode open}
								{move_mode free}
								{ai_move
									{mode enable}
								}
								{movement
									{speed normal}
									{forward on}
									{backward on}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"squad_create"
								{selector
									{ignore_captured_by_user 0}
									{tag e_car_alt}
									{zone "gamezone"}
									{player "2"}
									{state operatable}
								}
								{name e_car_squad}
							}
							{"delay"
								{time 0.3}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.4}
									}
									{"delay"
										{time 0.1}
									}
									{"action"
										{selector
											{ignore_captured_by_user 0}
											{tag e_car_alt}
											{zone "gamezone"}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{drop orders}
										{action rotate}
										{target
											{ignore_captured_by_user 0}
											{tag p_car_target}
											{zone "gamezone"}
										}
									}
									{"delay"
										{time 5}
									}
									{"actor_state"
										{selector
											{ignore_captured_by_user 0}
											{tag e_car_alt}
											{zone "gamezone"}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{fire_mode open}
										{ai_move
											{mode enable}
										}
										{movement
											{forward on}
											{backward on}
										}
									}
									{"delay"
										{time 0.25}
									}
									{"action"
										{selector
											{ignore_captured_by_user 0}
											{tag e_car_alt}
											{zone "gamezone"}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{action attack}
										{target
											{ignore_captured_by_user 0}
											{tag p_car_target}
											{zone "gamezone"}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.4}
									}
									{"delay"
										{time 0.1}
									}
									{"action"
										{selector
											{ignore_captured_by_user 0}
											{tag e_car_alt}
											{zone "gamezone"}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{drop orders}
										{action rotate}
										{target
											{ignore_captured_by_user 0}
											{tag p_car_target}
											{zone "gamezone"}
										}
									}
									{"delay"
										{time 5}
									}
									{"actor_state"
										{selector
											{ignore_captured_by_user 0}
											{tag e_car_alt}
											{zone "gamezone"}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{fire_mode open}
										{ai_move
											{mode enable}
										}
										{movement
											{forward off}
											{backward on}
										}
									}
									{"delay"
										{time 0.25}
									}
									{"switch"
										{"case"
											{condition
												{type entities}
												{selector
													{ignore_captured_by_user 0}
													{tag e_car_alt}
													{zone "enemykeyline"}
												}
											}
											{"delay"
												{time 0.1}
											}
											{"action"
												{selector
													{ignore_captured_by_user 0}
													{tag e_car_alt}
													{zone "gamezone"}
													{player "2"}
													{type vehicle}
													{state operatable}
												}
												{action move}
												{target
													{ignore_captured_by_user 0}
												}
												{waypoint "84"}
											}
										}
										{"default"
											{"delay"
												{time 0.1}
											}
											{"action"
												{selector
													{ignore_captured_by_user 0}
													{tag e_car_alt}
													{zone "gamezone"}
													{player "2"}
													{type vehicle}
													{state operatable}
												}
												{action move}
												{target
													{ignore_captured_by_user 0}
												}
												{waypoint "86"}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.25}
									}
									{"action"
										{selector
											{ignore_captured_by_user 0}
											{tag e_car_alt}
											{zone "gamezone"}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{drop orders}
										{action rotate}
										{target
											{ignore_captured_by_user 0}
											{tag p_car_target}
											{zone "gamezone"}
										}
									}
									{"delay"
										{time 5}
									}
									{"actor_state"
										{selector
											{tag e_car_alt}
											{zone "gamezone"}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{fire_mode open}
										{weapon_prepare on}
										{ai_move
											{mode enable}
										}
										{movement
											{speed fast}
											{forward on}
											{backward off}
										}
									}
									{"delay"
										{time 0.25}
									}
									{"action"
										{selector
											{ignore_captured_by_user 0}
											{tag e_car_alt}
											{zone "gamezone"}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{drop orders}
										{action move}
										{target
											{ignore_captured_by_user 0}
											{tag p_car_target}
											{zone "gamezone"}
										}
									}
									{"delay"
										{time 8}
									}
									{"actor_state"
										{selector
											{ignore_captured_by_user 0}
											{tag e_car_alt}
											{zone "gamezone"}
											{type vehicle}
										}
										{fire_mode open}
										{move_mode free}
										{weapon_prepare on}
										{ai_move
											{mode enable}
										}
										{movement
											{speed normal}
											{forward on}
											{backward on}
										}
									}
									{"delay"
										{time 1}
									}
									{"action"
										{selector
											{ignore_captured_by_user 0}
											{tag e_car_alt}
											{zone "gamezone"}
											{player "2"}
											{type vehicle}
											{state operatable}
										}
										{action attack}
										{target
											{ignore_captured_by_user 0}
											{tag p_car_target}
											{zone "gamezone"}
										}
									}
								}
							}
							{"delay"
								{time 30}
							}
							{"squad_dismiss"
								{squad e_car_squad}
							}
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{ignore_captured_by_user 0}
									{tag e_car_alt}
									{type vehicle}
								}
								{movement
									{speed normal}
									{forward on}
									{backward on}
								}
							}
							{"delay"
								{time 0.5}
							}
							{"entity_state"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag p_car_target}
											}
										}
										{include
											{relation
												{relation ally}
												{player "0"}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{tag_add noted_by_ai}
							}
							{"delay"
								{time 1}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag e_car_alt}
								}
								{tag_add _mi_temp7}
								{tag_remove e_car_alt}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag p_car_target}
								}
								{tag_remove p_car_target}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag temp5}
								}
								{tag_remove temp5}
							}
							{"delay"
								{time 30}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag _mi_temp7}
								}
								{tag_remove _scr_mi}
							}
							{"delay"
								{time 1}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag _mi_temp7}
								}
								{tag_remove _mi_temp7}
							}
							{"delay"
								{time 100}
							}
							{"trigger"
								{name "ai:logic/car_alt_fight"}
							}
						}
					}
				}
			}