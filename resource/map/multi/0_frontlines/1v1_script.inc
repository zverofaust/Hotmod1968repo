(include "/map/nikral's trigger.mi")
(include "/map/hotmod_triggers.mi")
			{"start"
				{condition
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "gamestart"}
						{mode set}
						{delay 0}
					}
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "ambient"}
						{mode set}
						{delay 0}
					}
				}
			}
			{"drumsound"
				{condition
					{terms
						{"1.event"
							{id "gamestart"}
						}
						{"2.cmp_i"
							{var "game:frontlinesphase@"}
							{op ">"}
							{value 0}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"sound"
						{name "gui/matchmaking"}
					}
					{"delay"
						{time 0.1}
					}
					{"delete"
						{selector
							{ignore_captured_by_user 0}
							{tag frontline_divider}
						}
					}
				}
			}
			{"notifications"
				{condition
					{terms
						{"1.event"
							{id "gamestart"}
						}
					}
				}
				{actions
					{"delay"
						{time 300}
					}
					{"sound"
						{name "gui/level_up"}
					}
					{"delay"
						{time 600}
					}
					{"sound"
						{name "gui/level_up"}
					}
					{"delay"
						{time 600}
					}
					{"sound"
						{name "gui/level_up"}
					}
				}
			}
			{"parachute"
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
					{"trigger"
						{name "parachute"}
					}
				}
			}
			{"players_units"
				{condition
					{expression "(1 & 3) | (2 & 3)"}
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "global"}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state user_control}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{tag
											{tag hidden}
										}
										{state
											{state dead}
										}
									}
								}
							}
						}
						{"2.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "global"}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
										{state
											{state "inhabited user_control"}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
									}
								}
							}
						}
						{"3.cmp_i"
							{var "ai_on$"}
							{op "=="}
							{value 1}
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
										{zone "global"}
									}
								}
								{include
									{prop
										{prop human}
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
									{state
										{state dead}
									}
								}
							}
						}
						{tag_add player}
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
									{zone
										{zone "global"}
									}
								}
								{include
									{prop
										{prop tank}
									}
									{state
										{state "inhabited user_control"}
									}
								}
								{exclude
									{tag
										{tag player_armor}
									}
								}
							}
						}
						{tag_add player_armor}
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
									{zone
										{zone "global"}
									}
								}
								{include
									{prop
										{prop car}
									}
									{state
										{state "inhabited user_control"}
									}
								}
								{exclude
									{tag
										{tag player_car}
									}
								}
							}
						}
						{tag_add player_car}
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
									{zone
										{zone "global"}
									}
								}
								{include
									{prop
										{prop vehicle}
									}
									{state
										{state "inhabited user_control"}
									}
								}
								{exclude
									{tag
										{tag player_veh}
									}
									{tag
										{tag player_armor}
									}
									{tag
										{tag player_car}
									}
									{tag
										{tag engine_count_1}
									}
									{tag
										{tag engine_count_2}
									}
								}
							}
						}
						{tag_add player_veh}
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
									{zone
										{zone "global"}
									}
								}
								{include
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
						{time 10}
					}
					{"trigger"
						{name "players_units"}
					}
				}
			}
			{"ai/ai_untow"
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
											{tag bot_tow}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
										{state
											{state operatable}
										}
										{state
											{state linked}
										}
										{team
											{team a}
										}
									}
									{exclude
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
											{zone "global"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{team
											{team b}
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
								{meters 200}
							}
							{tag
								{"tag pair"}
								{"for selector" tow_act}
							}
						}
						{"2.see_actors"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag bot_tow}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
										{state
											{state operatable}
										}
										{state
											{state linked}
										}
										{team
											{team b}
										}
									}
									{exclude
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
											{zone "global"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{team
											{team a}
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
								{meters 180}
							}
							{tag
								{"tag pair"}
								{"for selector" tow_act}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"linker"
						{selector
							{type vehicle}
						}
						{action unlink}
						{entities
							{ignore_captured_by_user 0}
							{tag tow_act}
						}
					}
					{"delay"
						{time 0.2}
					}
					{"entity_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag bot_car}
									}
									{tag
										{tag bot_tank}
									}
								}
								{include
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag bot_towing}
									}
									{state
										{state user_control}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{ignore_captured_by_user 0}
									{tag tow_act}
								}
							}
							{amount 1
							}
						}
						{tag_add bot_towing}
					}
					{"delay"
						{time 0.2}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag bot_towing}
							{state operatable}
						}
						{tag_add _lua_mi}
					}
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type near}
								{units
									{ignore_captured_by_user 0}
									{tag bot_towing}
								}
								{near_to
									{ignore_captured_by_user 0}
									{tag tow_act}
								}
								{distance 22}
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
														{tag bot_towing}
													}
												}
												{include
													{prop
														{prop car}
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
														{state user_control}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.1}
									}
									{"emit"
										{selector
											{ignore_captured_by_user 0}
											{tag bot_towing}
											{type vehicle}
											{state inhabited}
										}
										{drop orders}
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
														{tag bot_towing}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
													{state
														{state "operatable moveable"}
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
										{action move}
										{target
											{ignore_captured_by_user 0}
											{tag flag}
											{zone "global"}
										}
									}
									{"delay"
										{time 5}
									}
									{"if"
										{condition
											{type entities}
											{selector
												{source advanced}
												{ignore_captured_by_user 0}
												{group
													{select
														{tag
															{tag bot_towing}
														}
													}
													{include
														{prop
															{prop car}
														}
														{state
															{state inhabited}
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
										{"emit"
											{selector
												{tag bot_towing}
												{type vehicle}
												{state operatable}
											}
											{drop orders}
										}
									}
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
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag bot_tow}
									}
								}
								{include
									{tag
										{tag tow_act}
									}
								}
							}
						}
						{tag_remove bot_tow}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag tow_act}
						}
						{tag_remove tow_act}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag bot_towing}
						}
						{tag_remove _lua_mi}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag bot_towing}
						}
						{tag_remove bot_towing}
					}
					{"delay"
						{time 8}
					}
					{"trigger"
						{name "ai/ai_untow"}
					}
				}
			}
			{"ai/ai_unhold"
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
											{tag _bot}
										}
									}
									{include
										{state
											{state operatable}
										}
										{team
											{team a}
										}
									}
									{exclude
										{tag
											{tag repairing}
										}
										{tag
											{tag _lua_mi}
										}
										{tag
											{tag _lua_alert}
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
							}
							{enemy
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "global"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{team
											{team b}
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
								{meters 58}
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
											{tag _bot}
										}
									}
									{include
										{state
											{state operatable}
										}
										{team
											{team b}
										}
									}
									{exclude
										{tag
											{tag repairing}
										}
										{tag
											{tag _lua_mi}
										}
										{tag
											{tag _lua_alert}
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
							}
							{enemy
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "global"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{team
											{team a}
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
								{meters 60}
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
						{tag_add _lua_mi}
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
											{tag
												{tag bot}
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
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag bot_veh}
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
											{tag unhold_iq}
											{state operatable}
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
											{tag unhold_iq}
											{state operatable}
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
											{tag unhold_iq}
											{state operatable}
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
												{tag unhold_iq}
											}
										}
										{include
											{tag
												{tag bot_veh}
											}
											{state
												{state operatable}
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
								{cannon fire}
							}
							{"delay"
								{time 1}
							}
							{"entity_state"
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
											{tag
												{tag bot_veh}
											}
										}
									}
								}
								{tag_add _mi_temp2}
								{tag_remove unhold_iq}
							}
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
									{ignore_captured_by_user 0}
									{tag unhold_iq}
									{type vehicle}
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
										{value 0.3}
									}
									{"delay"
										{time 0.1}
									}
									{"action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
											}
										}
										{action rotate}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag enemy_near_iq}
													}
												}
												{include
													{team
														{team b}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.5}
									}
									{"action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
											}
										}
										{action rotate}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag enemy_near_iq}
													}
												}
												{include
													{team
														{team a}
													}
												}
											}
										}
									}
									{"delay"
										{time 1}
									}
									{"action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team a}
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
														{tag enemy_near_iq}
													}
												}
												{include
													{team
														{team b}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.5}
									}
									{## "action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team b}
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
														{tag enemy_near_iq}
													}
												}
												{include
													{team
														{team a}
													}
												}
											}
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
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
											}
										}
										{action rotate}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag enemy_near_iq}
													}
												}
												{include
													{team
														{team b}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.5}
									}
									{"action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
											}
										}
										{action rotate}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag enemy_near_iq}
													}
												}
												{include
													{team
														{team a}
													}
												}
											}
										}
									}
									{"delay"
										{time 1}
									}
									{"action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
											}
										}
										{action advance}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag enemy_near_iq}
													}
												}
												{include
													{team
														{team b}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.5}
									}
									{## "action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
											}
										}
										{action advance}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag enemy_near_iq}
													}
												}
												{include
													{team
														{team a}
													}
												}
											}
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
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
											}
										}
										{action advance}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{zone
														{zone "global"}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team b}
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
										{time 0.5}
									}
									{## "action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
											}
										}
										{action advance}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{zone
														{zone "global"}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team a}
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
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
											}
										}
										{action rotate}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag enemy_near_iq}
													}
												}
												{include
													{team
														{team b}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.5}
									}
									{"action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
											}
										}
										{action rotate}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag enemy_near_iq}
													}
												}
												{include
													{team
														{team a}
													}
												}
											}
										}
									}
									{"delay"
										{time 1}
									}
									{"action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
											}
										}
										{action attack}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag enemy_near_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.5}
									}
									{## "action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
											}
										}
										{action attack}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag enemy_near_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
											}
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
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team a}
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
														{tag enemy_near_iq}
													}
												}
												{include
													{team
														{team b}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.5}
									}
									{## "action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team b}
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
														{tag enemy_near_iq}
													}
												}
												{include
													{team
														{team a}
													}
												}
											}
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
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
											}
										}
										{action advance}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag enemy_near_iq}
													}
												}
												{include
													{team
														{team b}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.5}
									}
									{## "action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
											}
										}
										{action advance}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag enemy_near_iq}
													}
												}
												{include
													{team
														{team a}
													}
												}
											}
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
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
											}
										}
										{action advance}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{zone
														{zone "global"}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team b}
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
										{time 0.5}
									}
									{## "action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
											}
										}
										{action advance}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{zone
														{zone "global"}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team a}
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
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
											}
										}
										{action attack}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag enemy_near_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.5}
									}
									{## "action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
											}
										}
										{action attack}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag enemy_near_iq}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
											}
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
									{ignore_captured_by_user 0}
									{tag unhold_iq}
									{type vehicle}
									{state operatable}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag unhold_iq}
											}
										}
										{include
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
									{tag unhold_iq}
									{state operatable}
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
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
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
														{state user_control}
													}
												}
											}
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
											{source advanced}
											{group
												{select
													{tag
														{tag unhold_iq}
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
														{state user_control}
													}
												}
											}
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
											{team
												{team a}
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
											{tag
												{tag bot}
											}
										}
										{include
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
											{team
												{team a}
											}
										}
										{exclude
											{tag
												{tag _lua_mi}
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
									{amount 4
									}
									{sort
										{type entity}
										{entity
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{team
														{team a}
													}
												}
											}
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
												{tag bot}
											}
										}
										{include
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
											}
										}
										{exclude
											{tag
												{tag _lua_mi}
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
									{amount 2
									}
									{sort
										{type entity}
										{entity
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag unhold_iq}
													}
												}
												{include
													{team
														{team b}
													}
												}
											}
										}
									}
								}
								{drop orders}
								{move_mode free}
								{ai_move
									{mode enable}
								}
								{ai
									{advance_ratio 2}
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
							{tag unhold_iq}
						}
						{tag_add _mi_temp2}
						{tag_remove unhold_iq}
					}
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "players:composition@"}
								{op "=="}
								{value 8}
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
												{tag enemy_near_iq}
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
									}
								}
								{tag_add noted_by_ai}
							}
						}
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
						{tag_remove _lua_mi}
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
						{name "ai/ai_unhold"}
					}
				}
			}
			{"ai/tank_alt_fight"
				{condition
					{type 1}
					{terms
						{"1.see_actors"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag bot_tank}
										}
										{tag
											{tag bot_car}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
										{state
											{state "moveable inhabited"}
										}
										{team
											{team a}
										}
									}
									{exclude
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
											{zone "global"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{team
											{team b}
										}
									}
									{exclude
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{distance
								{mode near_than}
								{meters 180}
							}
							{tag
								{"tag pair"}
								{"for selector" e_tank_alt_a}
								{"for enemy" p_tank_target}
							}
						}
						{"2.see_actors"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag bot_tank}
										}
										{tag
											{tag bot_car}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
										{state
											{state "moveable inhabited"}
										}
										{team
											{team b}
										}
									}
									{exclude
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
											{zone "global"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{team
											{team a}
										}
									}
									{exclude
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{distance
								{mode near_than}
								{meters 170}
							}
							{tag
								{"tag pair"}
								{"for selector" e_tank_alt_b}
								{"for enemy" p_tank_target}
							}
						}
					}
				}
				{actions
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
										{tag e_tank_alt_a}
									}
									{tag
										{tag e_tank_alt_b}
									}
								}
								{include
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
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "ai_on$"}
								{op "<<"}
								{value 1}
							}
							{"delay"
								{time 0.1}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag e_tank_alt_a}
								}
								{tag_remove e_tank_alt_a}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag e_tank_alt_b}
								}
								{tag_remove e_tank_alt_b}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag p_tank_target}
								}
								{tag_remove p_tank_target}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{ignore_captured_by_user 0}
											{tag e_tank_alt_a}
											{zone "global"}
										}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag e_tank_alt_a}
										}
										{tag_add e_tank_alt}
										{tag_remove e_tank_alt_a}
									}
									{"delay"
										{time 0.4}
									}
									{"entity_state"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag bot}
													}
												}
												{include
													{prop
														{prop human}
													}
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
												{exclude
													{tag
														{tag _lua_mi}
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
											{amount 5
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
										{time 0.1}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag e_tank_alt_b}
										}
										{tag_add e_tank_alt}
										{tag_remove e_tank_alt_b}
									}
									{"delay"
										{time 0.4}
									}
									{"entity_state"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag bot}
													}
												}
												{include
													{prop
														{prop human}
													}
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
												{exclude
													{tag
														{tag _lua_mi}
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
											{amount 5
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
										{time 0.1}
									}
								}
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
									{distance 100}
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
								{tag_add _lua_mi}
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
									{state operatable}
								}
								{drop orders}
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
							{"delay"
								{time 0.1}
							}
							{"squad_create"
								{selector
									{ignore_captured_by_user 0}
									{tag e_tank_alt}
									{zone "global"}
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
										{value 0.5}
									}
									{"delay"
										{time 0.1}
									}
									{"action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag e_tank_alt}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
											}
										}
										{drop orders}
										{action rotate}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag p_tank_target}
													}
												}
												{include
													{team
														{team b}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.5}
									}
									{"action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag e_tank_alt}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
											}
										}
										{drop orders}
										{action rotate}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag p_tank_target}
													}
												}
												{include
													{team
														{team a}
													}
												}
											}
										}
									}
									{"delay"
										{time 5}
									}
									{"actor_state"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag e_tank_alt}
													}
												}
												{include
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
											{source advanced}
											{group
												{select
													{tag
														{tag e_tank_alt}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
											}
										}
										{action attack}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag p_tank_target}
													}
												}
												{include
													{team
														{team b}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.5}
									}
									{## "action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag e_tank_alt}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
											}
										}
										{action attack}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag p_tank_target}
													}
												}
												{include
													{team
														{team a}
													}
												}
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
											{source advanced}
											{group
												{select
													{tag
														{tag e_tank_alt}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
											}
										}
										{drop orders}
										{action rotate}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag p_tank_target}
													}
												}
												{include
													{team
														{team b}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.5}
									}
									{"action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag e_tank_alt}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
											}
										}
										{drop orders}
										{action rotate}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag p_tank_target}
													}
												}
												{include
													{team
														{team a}
													}
												}
											}
										}
									}
									{"delay"
										{time 5}
									}
									{"actor_state"
										{selector
											{tag e_tank_alt}
											{zone "global"}
											{type vehicle}
											{state inhabited}
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
											{source advanced}
											{group
												{select
													{tag
														{tag e_tank_alt}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
											}
										}
										{drop orders}
										{action move}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag p_tank_target}
													}
												}
												{include
													{team
														{team b}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.5}
									}
									{## "action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag e_tank_alt}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
											}
										}
										{drop orders}
										{action move}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag p_tank_target}
													}
												}
												{include
													{team
														{team a}
													}
												}
											}
										}
									}
									{"delay"
										{time 8}
									}
									{"actor_state"
										{selector
											{tag e_tank_alt}
											{zone "global"}
											{type vehicle}
											{state inhabited}
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
											{source advanced}
											{group
												{select
													{tag
														{tag e_tank_alt}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
											}
										}
										{action attack}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag p_tank_target}
													}
												}
												{include
													{team
														{team b}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.5}
									}
									{## "action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag e_tank_alt}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
											}
										}
										{action attack}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag p_tank_target}
													}
												}
												{include
													{team
														{team a}
													}
												}
											}
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
											{tag e_tank_alt}
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
										{distance 100}
									}
									{"delay"
										{time 0.1}
									}
									{"effect"
										{selector
											{tag e_tank_alt}
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
									{zone "global"}
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
							{"switch"
								{"case"
									{condition
										{type cmp_i}
										{var "players:composition@"}
										{op "=="}
										{value 8}
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
														{tag p_tank_target}
													}
												}
												{include
													{state
														{state "operatable user_control"}
													}
												}
											}
										}
										{tag_add noted_by_ai}
									}
								}
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
								{tag_remove _lua_mi}
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
								{time 0.1}
							}
							{"trigger"
								{name "ai/tank_alt_fight"}
							}
						}
					}
				}
			}
			{"ai/bail_portables"
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
											{tag bot_veh}
										}
									}
									{include
										{state
											{state operatable}
										}
										{team
											{team a}
										}
									}
									{exclude
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
										{zone
											{zone "global"}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state operatable}
										}
										{team
											{team b}
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
								{meters 36}
							}
							{tag
								{"tag pair"}
								{"for selector" bail_veh}
								{"for enemy" bail_target}
							}
						}
						{"2.see_actors"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag bot_veh}
										}
									}
									{include
										{state
											{state operatable}
										}
										{team
											{team b}
										}
									}
									{exclude
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
										{zone
											{zone "global"}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state operatable}
										}
										{team
											{team a}
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
						{time 1}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag bail_veh}
						}
						{tag_remove bail_veh}
					}
					{"delay"
						{time 5}
					}
					{"trigger"
						{name "ai/bail_portables"}
					}
				}
			}
			{"ai/recrew_portables"
				{condition
					{type 1}
					{terms
						{"1.see_actors"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag bot}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state operatable}
										}
										{team
											{team a}
										}
									}
									{exclude
										{tag
											{tag _lua_mi}
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
							}
							{enemy
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag bot_veh}
										}
										{tag
											{tag player_veh}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
										{team
											{team a}
										}
									}
									{exclude
										{tag
											{tag destroyed}
										}
										{tag
											{tag "_no-recrew"}
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
								{meters 47}
							}
							{tag
								{"tag pair"}
								{"for selector" ecrew_a}
								{"for enemy" ecannon_enter}
							}
						}
						{"2.see_actors"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag bot}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state operatable}
										}
										{team
											{team b}
										}
									}
									{exclude
										{tag
											{tag _lua_mi}
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
							}
							{enemy
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag bot_veh}
										}
										{tag
											{tag player_veh}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
										{team
											{team b}
										}
									}
									{exclude
										{tag
											{tag destroyed}
										}
										{tag
											{tag "_no-recrew"}
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
								{meters 50}
							}
							{tag
								{"tag pair"}
								{"for selector" ecrew_b}
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
									{tag ecrew_a}
									{zone "global"}
									{type human}
									{state "not dead"}
								}
								{enemy
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{zone
												{zone "global"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{team
												{team b}
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
									{meters 45}
								}
								{detection visible}
							}
							{"delay"
								{time 5}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag ecrew_a}
								}
								{tag_remove ecrew_a}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag ecrew_b}
								}
								{tag_remove ecrew_b}
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
						{"case"
							{condition
								{type see_actors}
								{selector
									{tag ecrew_b}
									{zone "global"}
									{type human}
									{state "not dead"}
								}
								{enemy
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{zone
												{zone "global"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{team
												{team a}
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
									{meters 45}
								}
								{detection visible}
							}
							{"delay"
								{time 5}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag ecrew_a}
								}
								{tag_remove ecrew_a}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag ecrew_b}
								}
								{tag_remove ecrew_b}
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
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{ignore_captured_by_user 0}
											{tag ecrew_a}
											{zone "global"}
										}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag ecrew_a}
										}
										{tag_add ecrew}
										{tag_remove ecrew_a}
									}
									{"delay"
										{time 0.4}
									}
									{"entity_state"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag bot}
													}
												}
												{include
													{prop
														{prop human}
													}
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
												{exclude
													{tag
														{tag _lua_mi}
													}
													{tag
														{tag repairing}
													}
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
											{amount 2
											}
											{sort
												{type entity}
												{entity
													{tag ecrew}
												}
											}
										}
										{tag_add temp1}
									}
									{"delay"
										{time 0.1}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag ecrew_b}
										}
										{tag_add ecrew}
										{tag_remove ecrew_b}
									}
									{"delay"
										{time 0.4}
									}
									{"entity_state"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag bot}
													}
												}
												{include
													{prop
														{prop human}
													}
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
												{exclude
													{tag
														{tag _lua_mi}
													}
													{tag
														{tag repairing}
													}
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
											{amount 2
											}
											{sort
												{type entity}
												{entity
													{tag ecrew}
												}
											}
										}
										{tag_add temp1}
									}
									{"delay"
										{time 0.1}
									}
								}
							}
							{"delay"
								{time 0.2}
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
									{distance 110}
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
								{tag_add _lua_mi}
							}
							{"actor_state"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
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
											{ignore_captured_by_user 0}
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
									{ignore_captured_by_user 0}
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
							{ignore_captured_by_user 0}
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
						{tag_remove _lua_mi}
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
						{name "ai/recrew_portables"}
					}
				}
			}
			{"ai/ai_flag_smoke"
				{condition
					{type 1}
					{terms
						{"1.see_actors"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag smk_}
										}
									}
									{include
										{state
											{state operatable}
										}
										{team
											{team a}
										}
									}
									{exclude
										{tag
											{tag _lua_mi}
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
										{team
											{team b}
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
								{meters 95}
							}
							{tag
								{"tag pair"}
								{"for selector" ai_smoke}
								{"for enemy" smk_target}
							}
						}
						{"2.see_actors"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag smk_}
										}
									}
									{include
										{state
											{state operatable}
										}
										{team
											{team b}
										}
									}
									{exclude
										{tag
											{tag _lua_mi}
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
										{team
											{team a}
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
								{meters 90}
							}
							{tag
								{"tag pair"}
								{"for selector" ai_smoke}
								{"for enemy" smk_target}
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
								{type near}
								{units
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag smk_target}
											}
										}
										{include
											{state
												{state operatable}
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
								{distance 150}
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
														{tag ai_smoke}
													}
												}
												{include
													{with_item
														{type amount}
														{item "nbk39" "grenade"}
														{min 1}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag smk_}
													}
												}
												{include
													{prop
														{prop human}
													}
													{state
														{state operatable}
													}
													{with_item
														{type amount}
														{item "nbk39" "grenade"}
														{min 1}
													}
												}
												{exclude
													{tag
														{tag _lua_mi}
													}
													{tag
														{tag repairing}
													}
													{tag
														{tag ai_smoke}
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
													{tag ai_smoke}
												}
											}
											{amount 2
											}
										}
										{tag_add ai_smoke}
									}
									{"delay"
										{time 0.3}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag ai_smoke}
											{state operatable}
										}
										{tag_add _mi_temp1}
									}
									{"delay"
										{time 0.2}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag _mi_temp1}
										}
										{tag_add _lua_mi}
									}
									{"delay"
										{time 0.1}
									}
									{"inventory"
										{selector
											{tag ai_smoke}
											{type human}
											{state "not dead"}
										}
										{action take}
										{item "nbk39" "grenade"}
									}
									{"delay"
										{time 0.5}
									}
									{"action"
										{selector
											{tag ai_smoke}
											{type human}
											{state "not dead"}
										}
										{drop "orders sensor senseless"}
										{action attack_ground}
										{target
											{ignore_captured_by_user 0}
											{tag null}
										}
									}
									{"delay"
										{time 4}
									}
									{"action"
										{selector
											{tag ai_smoke}
											{type human}
											{state "not dead"}
										}
										{drop orders}
										{action advance}
										{target
											{ignore_captured_by_user 0}
											{tag smk_target}
										}
									}
									{"delay"
										{time 1}
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
														{tag ai_smoke}
													}
												}
												{include
													{with_item
														{type amount}
														{item "rdg1_smoke" "grenade"}
														{min 1}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag smk_}
													}
												}
												{include
													{prop
														{prop human}
													}
													{state
														{state operatable}
													}
													{with_item
														{type amount}
														{item "rdg1_smoke" "grenade"}
														{min 1}
													}
												}
												{exclude
													{tag
														{tag _lua_mi}
													}
													{tag
														{tag repairing}
													}
													{tag
														{tag ai_smoke}
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
													{tag ai_smoke}
												}
											}
											{amount 2
											}
										}
										{tag_add ai_smoke}
									}
									{"delay"
										{time 0.3}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag ai_smoke}
											{state operatable}
										}
										{tag_add _mi_temp1}
									}
									{"delay"
										{time 0.2}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag _mi_temp1}
										}
										{tag_add _lua_mi}
									}
									{"delay"
										{time 0.1}
									}
									{"inventory"
										{selector
											{tag ai_smoke}
											{type human}
											{state "not dead"}
										}
										{action take}
										{item "rdg1_smoke" "grenade"}
									}
									{"delay"
										{time 0.5}
									}
									{"action"
										{selector
											{ignore_captured_by_user 0}
											{tag ai_smoke}
											{type human}
											{state "not dead"}
										}
										{drop "orders sensor senseless"}
										{action attack_ground}
										{target
											{ignore_captured_by_user 0}
											{tag null}
										}
									}
									{"delay"
										{time 4}
									}
									{"action"
										{selector
											{tag ai_smoke}
											{type human}
											{state "not dead"}
										}
										{drop orders}
										{action advance}
										{target
											{ignore_captured_by_user 0}
											{tag smk_target}
										}
									}
									{"delay"
										{time 1}
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
														{tag ai_smoke}
													}
												}
												{include
													{with_item
														{type amount}
														{item "m24_smoke" "grenade"}
														{min 1}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag smk_}
													}
												}
												{include
													{prop
														{prop human}
													}
													{state
														{state operatable}
													}
													{with_item
														{type amount}
														{item "m24_smoke" "grenade"}
														{min 1}
													}
												}
												{exclude
													{tag
														{tag _lua_mi}
													}
													{tag
														{tag repairing}
													}
													{tag
														{tag ai_smoke}
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
													{tag ai_smoke}
												}
											}
											{amount 2
											}
										}
										{tag_add ai_smoke}
									}
									{"delay"
										{time 0.3}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag ai_smoke}
											{state operatable}
										}
										{tag_add _mi_temp1}
									}
									{"delay"
										{time 0.2}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag _mi_temp1}
										}
										{tag_add _lua_mi}
									}
									{"delay"
										{time 0.1}
									}
									{"inventory"
										{selector
											{tag ai_smoke}
											{type human}
											{state "not dead"}
										}
										{action take}
										{item "m24_smoke" "grenade"}
									}
									{"delay"
										{time 0.5}
									}
									{"action"
										{selector
											{ignore_captured_by_user 0}
											{tag ai_smoke}
											{type human}
											{state "not dead"}
										}
										{drop "orders sensor senseless"}
										{action attack_ground}
										{target
											{ignore_captured_by_user 0}
											{tag null}
										}
									}
									{"delay"
										{time 4}
									}
									{"action"
										{selector
											{tag ai_smoke}
											{type human}
											{state "not dead"}
										}
										{drop orders}
										{action advance}
										{target
											{ignore_captured_by_user 0}
											{tag smk_target}
										}
									}
									{"delay"
										{time 1}
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
														{tag ai_smoke}
													}
												}
												{include
													{with_item
														{type amount}
														{item "m43_smoke" "grenade"}
														{min 1}
													}
												}
											}
										}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag smk_}
													}
												}
												{include
													{prop
														{prop human}
													}
													{state
														{state operatable}
													}
													{with_item
														{type amount}
														{item "m43_smoke" "grenade"}
														{min 1}
													}
												}
												{exclude
													{tag
														{tag _lua_mi}
													}
													{tag
														{tag repairing}
													}
													{tag
														{tag ai_smoke}
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
													{tag ai_smoke}
												}
											}
											{amount 2
											}
										}
										{tag_add ai_smoke}
									}
									{"delay"
										{time 0.3}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag ai_smoke}
											{state operatable}
										}
										{tag_add _mi_temp1}
									}
									{"delay"
										{time 0.2}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag _mi_temp1}
										}
										{tag_add _lua_mi}
									}
									{"delay"
										{time 0.1}
									}
									{"inventory"
										{selector
											{tag ai_smoke}
											{type human}
											{state "not dead"}
										}
										{action take}
										{item "m43_smoke" "grenade"}
									}
									{"delay"
										{time 0.5}
									}
									{"action"
										{selector
											{ignore_captured_by_user 0}
											{tag ai_smoke}
											{type human}
											{state "not dead"}
										}
										{drop "orders sensor senseless"}
										{action attack_ground}
										{target
											{ignore_captured_by_user 0}
											{tag null}
										}
									}
									{"delay"
										{time 4}
									}
									{"action"
										{selector
											{tag ai_smoke}
											{type human}
											{state "not dead"}
										}
										{drop orders}
										{action advance}
										{target
											{ignore_captured_by_user 0}
											{tag smk_target}
										}
									}
									{"delay"
										{time 1}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag ai_smoke}
										}
										{tag_remove ai_smoke}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag smk_target}
										}
										{tag_remove smk_target}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag smk_target}
								}
								{tag_remove smk_target}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag ai_smoke}
								}
								{tag_remove ai_smoke}
							}
						}
					}
					{"delay"
						{time 2}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag ai_smoke}
									{state operatable}
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
											{tag ai_smoke}
											{state operatable}
										}
									}
									{"delay"
										{time 1}
									}
									{"actor_state"
										{selector
											{ignore_captured_by_user 0}
											{tag ai_smoke}
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
										{time 1}
									}
									{"actor_to_cover"
										{selector
											{ignore_captured_by_user 0}
											{tag ai_smoke}
											{state operatable}
										}
									}
								}
								{"default"
									{"delay"
										{time 8}
									}
									{"actor_state"
										{selector
											{ignore_captured_by_user 0}
											{tag ai_smoke}
											{state operatable}
										}
										{drop orders}
										{fire_mode open}
										{move_mode free}
										{ai_move
											{mode enable}
										}
										{ai
											{advance_ratio "0.5"}
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
									{tag smk_target}
								}
								{tag_remove smk_target}
							}
							{"delay"
								{time 50}
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
							{tag ai_smoke}
						}
						{tag_remove ai_smoke}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag _mi_temp1}
						}
						{tag_remove _lua_mi}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag _mi_temp1}
						}
						{tag_remove _mi_temp1}
					}
					{"delay"
						{time 80}
					}
					{"trigger"
						{name "ai/ai_flag_smoke"}
					}
				}
			}
			{"bots_units"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "global"}
										}
									}
									{include
										{state
											{state operatable}
										}
									}
									{exclude
										{tag
											{tag _bot}
										}
										{tag
											{tag hidden}
										}
										{state
											{state user_control}
										}
									}
								}
							}
						}
						{"2.cmp_i"
							{var "ai_on$"}
							{op ">"}
							{value 0}
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
										{zone "global"}
									}
								}
								{include
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag _bot}
									}
									{tag
										{tag _ai}
									}
									{tag
										{tag hidden}
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
						{time 0.4}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag _ai}
									}
								}
								{include
									{prop
										{prop tank}
									}
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag bot_tank}
									}
									{state
										{state user_control}
									}
								}
							}
						}
						{tag_add bot_tank}
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
										{tag _ai}
									}
								}
								{include
									{prop
										{prop car}
									}
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag bot_car}
									}
									{state
										{state user_control}
									}
								}
							}
						}
						{tag_add bot_car}
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
										{tag _ai}
									}
								}
								{include
									{prop
										{prop vehicle}
									}
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag bot_tank}
									}
									{tag
										{tag bot_car}
									}
									{tag
										{tag bot_veh}
									}
									{tag
										{tag engine_count_1}
									}
									{tag
										{tag engine_count_2}
									}
									{state
										{state user_control}
									}
								}
							}
						}
						{tag_add _bot_veh}
					}
					{"delay"
						{time 0.5}
					}
					{"ables"
						{selector
							{ignore_captured_by_user 0}
							{tag _ai}
							{zone "global"}
							{type human}
							{state operatable}
						}
						{remove personage}
					}
					{"delay"
						{time 0.5}
					}
					{"ables"
						{selector
							{ignore_captured_by_user 0}
							{tag _bot_veh}
							{zone "global"}
							{type vehicle}
							{state operatable}
						}
						{add emit_on_attack}
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
										{tag _ai}
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
										{tag _bot}
									}
								}
							}
						}
						{tag_add bot}
					}
					{"delay"
						{time 0.5}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag _bot_veh}
						}
						{tag_add bot_veh}
						{tag_remove _bot_veh}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag bot_veh}
									}
								}
								{include
									{state
										{state operatable}
									}
									{state
										{state linked}
									}
								}
								{exclude
									{tag
										{tag bot_tow}
									}
									{state
										{state user_control}
									}
								}
							}
						}
						{tag_add bot_tow}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag _ai}
									}
								}
								{include
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag _bot}
									}
									{state
										{state user_control}
									}
								}
							}
						}
						{tag_add _bot}
						{tag_remove _ai}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag smk_}
									{zone "global"}
									{state operatable}
								}
								{count
									{op "<<"}
									{value 55}
								}
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
												{tag bot}
											}
										}
										{include
											{with_item
												{type amount}
												{item "nbk39" "grenade"}
												{min 1}
											}
										}
										{exclude
											{tag
												{tag smk_}
											}
											{state
												{state dead}
											}
										}
									}
									{group
										{select
											{tag
												{tag bot}
											}
										}
										{include
											{with_item
												{type amount}
												{item "rdg1_smoke" "grenade"}
												{min 1}
											}
										}
										{exclude
											{tag
												{tag smk_}
											}
											{state
												{state dead}
											}
										}
									}
									{group
										{select
											{tag
												{tag bot}
											}
										}
										{include
											{with_item
												{type amount}
												{item "m24_smoke" "grenade"}
												{min 1}
											}
										}
										{exclude
											{tag
												{tag smk_}
											}
											{state
												{state dead}
											}
										}
									}
									{group
										{select
											{tag
												{tag bot}
											}
										}
										{include
											{with_item
												{type amount}
												{item "m43_smoke"}
												{min 1}
											}
										}
										{exclude
											{tag
												{tag smk_}
											}
											{state
												{state dead}
											}
										}
									}
								}
								{tag_add smk_}
							}
						}
						{"default"}
					}
					{"delay"
						{time 5}
					}
					{"trigger"
						{name "bots_units"}
					}
				}
			}
			{"ai/user_a_detect"
				{condition
					{terms
						{"1.cmp_i"
							{var "ai_on$"}
							{op ">"}
							{value 0}
						}
						{"2.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag player}
										}
									}
									{include
										{team
											{team a}
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
					{"set_i"
						{var "user_var$"}
						{op "+"}
						{value 1}
					}
				}
			}
			{"ai/user_b_detect"
				{condition
					{terms
						{"1.cmp_i"
							{var "ai_on$"}
							{op ">"}
							{value 0}
						}
						{"2.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag player}
										}
									}
									{include
										{team
											{team b}
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
					{"set_i"
						{var "user_var$"}
						{op "+"}
						{value 2}
					}
				}
			}
			{"ai/init"
				{condition
				}
				{actions
					{"delay"
						{time 1}
					}
					{"set_i"
						{var "mine_bot1$"}
						{op "="}
						{value 0}
					}
					{"set_i"
						{var "mine_bot2$"}
						{op "="}
						{value 0}
					}
					{"set_i"
						{var "mine_bot3$"}
						{op "="}
						{value 0}
					}
					{"set_i"
						{var "mine_bot4$"}
						{op "="}
						{value 0}
					}
					{"delay"
						{time 0.1}
					}
					{"set_i"
						{var "error$"}
						{op "="}
						{value 0}
					}
					{"set_i"
						{var "mp$"}
						{op "="}
						{value 0}
					}
					{"set_i"
						{var "user_var$"}
						{op "="}
						{value 0}
					}
					{"set_i"
						{var "ignore_same_user$"}
						{op "="}
						{value 0}
					}
					{"delay"
						{time 3.9}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "players:composition@"}
								{op "=="}
								{value 2}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "ai_on$"}
								{op "="}
								{value 1}
							}
							{"set_i"
								{var "mp$"}
								{op "="}
								{value 2}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "players:composition@"}
								{op "=="}
								{value 3}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "ai_on$"}
								{op "="}
								{value 1}
							}
							{"set_i"
								{var "mp$"}
								{op "="}
								{value 3}
							}
							{"set_i"
								{var "ignore_same_user$"}
								{op "="}
								{value 1}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "players:composition@"}
								{op "=="}
								{value 5}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "ai_on$"}
								{op "="}
								{value 2}
							}
							{"set_i"
								{var "mp$"}
								{op "="}
								{value 5}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "players:composition@"}
								{op "=="}
								{value 6}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "ai_on$"}
								{op "="}
								{value 1}
							}
							{"set_i"
								{var "mp$"}
								{op "="}
								{value 6}
							}
							{"set_i"
								{var "ignore_same_user$"}
								{op "="}
								{value 1}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "players:composition@"}
								{op "=="}
								{value 8}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "ai_on$"}
								{op "="}
								{value 1}
							}
							{"set_i"
								{var "mp$"}
								{op "="}
								{value 8}
							}
							{"set_i"
								{var "ignore_same_user$"}
								{op "="}
								{value 1}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
						}
					}
				}
			}
			{"ai/chance_ai_pursue"
				{condition
					{type 1}
					{terms
						{"1.near"
							{units
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag bot}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state operatable}
										}
										{team
											{team a}
										}
									}
									{exclude
										{tag
											{tag repairing}
										}
										{tag
											{tag _lua_mi}
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
											{zone "global"}
										}
										{state
											{state operatable}
										}
										{team
											{team b}
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
						{"2.near"
							{units
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag bot}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state operatable}
										}
										{team
											{team b}
										}
									}
									{exclude
										{tag
											{tag repairing}
										}
										{tag
											{tag _lua_mi}
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
											{zone "global"}
										}
										{state
											{state operatable}
										}
										{team
											{team a}
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
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type near}
								{units
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag bot}
											}
										}
										{include
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
											{team
												{team a}
											}
										}
										{exclude
											{tag
												{tag repairing}
											}
											{tag
												{tag _lua_mi}
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
												{zone "global"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
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
							{"entity_state"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag bot}
											}
										}
										{include
											{zone
												{zone "global"}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
											{team
												{team a}
											}
										}
										{exclude
											{tag
												{tag repairing}
											}
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _lua_ignore}
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
													{team
														{team b}
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
												{team
													{team b}
												}
											}
											{exclude
												{state
													{state inactive}
												}
											}
										}
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
														{team
															{team b}
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
								{tag_add _lua_mi}
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
											{team
												{team b}
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
								{tag_remove noted_by_ai}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "global"}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
											}
										}
										{exclude
											{tag
												{tag repairing}
											}
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _lua_ignore}
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
													{team
														{team a}
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
												{team
													{team a}
												}
											}
											{exclude
												{state
													{state inactive}
												}
											}
										}
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
														{team
															{team a}
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
								{tag_add _lua_mi}
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
											{team
												{team a}
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
								{tag_remove noted_by_ai}
							}
						}
					}
					{"delay"
						{time 0.5}
					}
					{"squad_create"
						{selector
							{ignore_captured_by_user 0}
							{tag pursuer}
							{zone "global"}
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
							{zone "global"}
							{state operatable}
						}
						{drop orders}
						{move_mode free}
						{weapon_prepare on}
						{ai_move
							{mode enable}
						}
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
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag pursue_target}
									{type vehicle}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"action"
								{selector
									{ignore_captured_by_user 0}
									{tag pursuer}
									{zone "global"}
									{state operatable}
								}
								{action attack}
								{target
									{ignore_captured_by_user 0}
									{tag pursue_target}
									{zone "global"}
								}
							}
							{"delay"
								{time 4}
							}
							{"action"
								{selector
									{ignore_captured_by_user 0}
									{tag pursuer}
									{zone "global"}
									{state operatable}
								}
								{action attack}
								{target
									{ignore_captured_by_user 0}
									{tag pursue_target}
									{zone "global"}
								}
							}
							{"delay"
								{time 4}
							}
						}
						{"default"
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
											{zone "global"}
											{state operatable}
										}
										{action advance}
										{target
											{ignore_captured_by_user 0}
											{tag pursue_target}
											{zone "global"}
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
											{zone "global"}
											{state operatable}
										}
										{action move}
										{target
											{ignore_captured_by_user 0}
											{tag pursue_target}
											{zone "global"}
										}
									}
									{"delay"
										{time 6}
									}
								}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"actor_state"
						{selector
							{ignore_captured_by_user 0}
							{tag pursuer}
							{zone "global"}
							{state operatable}
						}
						{drop orders}
						{fire_mode open}
						{move_mode free}
						{ai
							{advance_ratio 1}
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
						{time 0.1}
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
						{time 80}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag _mi_temp3}
						}
						{tag_remove _lua_mi}
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
						{name "ai/chance_ai_pursue"}
					}
				}
			}
			{"lua/clean"
				{condition
					{type 1}
					{terms
						{"1.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag _lua_alert}
								{zone "global"}
								{state "not operatable"}
							}
						}
						{"2.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag _lua_ignore}
								{zone "global"}
								{state "not operatable"}
							}
						}
						{"3.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag smk_}
								{zone "global"}
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
							{tag _bot}
							{zone "global"}
							{state "not operatable"}
						}
						{tag_remove _bot}
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
										{tag _lua_ignore}
									}
								}
								{exclude
									{tag
										{tag _bot}
									}
								}
							}
						}
						{tag_remove _lua_ignore}
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
										{tag _lua_alert}
									}
								}
								{exclude
									{tag
										{tag _bot}
									}
								}
							}
						}
						{tag_remove _lua_alert}
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
										{tag _lua_ignore}
									}
								}
								{exclude
									{zone
										{zone "global"}
									}
								}
							}
						}
						{tag_remove _lua_ignore}
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
										{tag _lua_alert}
									}
								}
								{exclude
									{zone
										{zone "global"}
									}
								}
							}
						}
						{tag_remove _lua_alert}
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
										{tag smk_}
									}
								}
								{exclude
									{tag
										{tag _bot}
									}
								}
							}
						}
						{tag_remove smk_}
					}
					{"delay"
						{time 0.5}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag noted_by_ai}
							{zone "global"}
							{state "not operatable"}
						}
						{tag_remove noted_by_ai}
					}
					{"delay"
						{time 0.5}
					}
					{"switch"
						{"case"
							{condition
								{type trigger}
								{name "ai/recrew_portables"}
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
												{tag _lua_mi}
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
								{tag_remove _lua_mi}
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
								{name "ai/recrew_tank"}
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
												{tag _lua_mi}
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
								{tag_remove _lua_mi}
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
						{time 25}
					}
					{"trigger"
						{name "lua/clean"}
					}
				}
			}
			{"lua/ignore"
				{condition
					{terms
						{"1.cmp_i"
							{var "ai_on$"}
							{op ">"}
							{value 0}
						}
						{"2.near"
							{units
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag _bot}
										}
									}
									{include
										{state
											{state operatable}
										}
										{team
											{team b}
										}
									}
									{exclude
										{tag
											{tag _lua_mi}
										}
										{tag
											{tag _lua_ignore}
										}
										{tag
											{tag _lua_alert}
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
							{distance 18}
						}
						{"3.cmp_i"
							{var "game:frontlinesphase@"}
							{op ">"}
							{value 0}
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
										{tag _bot}
									}
								}
								{include
									{state
										{state operatable}
									}
									{team
										{team b}
									}
								}
								{exclude
									{tag
										{tag _lua_mi}
									}
									{tag
										{tag _lua_ignore}
									}
									{tag
										{tag _lua_alert}
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
							{amount 1
							}
							{sort
								{type entity}
								{entity
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
							}
						}
						{tag_add _local1}
					}
					{"delay"
						{time 0.5}
					}
					{"switch"
						{"case"
							{condition
								{type near}
								{units
									{ignore_captured_by_user 0}
									{tag _local1}
								}
								{near_to
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag _user}
											}
											{tag
												{tag _bot}
											}
										}
										{include
											{state
												{state operatable}
											}
											{team
												{team a}
											}
										}
									}
								}
								{distance 150}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type near}
										{units
											{ignore_captured_by_user 0}
											{tag _local1}
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
										{distance 19}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag _local1}
											{state operatable}
										}
										{tag_add _lua_ignore}
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
													{tag
														{tag _local1}
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
														{tag _lua_mi}
													}
												}
											}
										}
										{drop orders}
										{fire_mode open}
										{move_mode zone}
										{ai_move
											{mode enable}
										}
										{movement
											{speed assault}
										}
										{ai
											{advance_ratio 2}
											{retreat_ratio 5}
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
													{tag
														{tag _local1}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
													{state
														{state operatable}
													}
												}
												{exclude
													{tag
														{tag _lua_mi}
													}
													{state
														{state user_control}
													}
												}
											}
										}
										{drop orders}
										{fire_mode open}
										{move_mode zone}
										{move_radius 60}
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
										{time 0.4}
									}
									{"if"
										{condition
											{type entities}
											{selector
												{tag _local1}
												{type vehicle}
												{state operatable}
											}
										}
										{"delay"
											{time 0.1}
										}
										{"action"
											{selector
												{tag _local1}
												{type vehicle}
												{state operatable}
											}
											{action rotate}
											{target
												{source advanced}
												{ignore_captured_by_user 0}
												{group
													{select
														{zone
															{zone "global"}
														}
													}
													{include
														{state
															{state operatable}
														}
														{team
															{team a}
														}
													}
												}
												{sort
													{type entity}
													{entity
														{ignore_captured_by_user 0}
														{tag _local1}
													}
												}
											}
										}
									}
								}
								{"default"}
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
							{tag _local1}
						}
						{tag_remove _local1}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "lua/ignore"}
					}
				}
			}
			{"lua/b_at_flag"
				{condition
					{terms
						{"1.cmp_i"
							{var "ai_on$"}
							{op ">"}
							{value 0}
						}
						{"2.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag _local1}
										}
									}
									{include
										{zone
											{zone "global"}
										}
										{tag
											{tag _lua_ignore}
										}
									}
								}
							}
						}
						{"3.cmp_i"
							{var "game:frontlinesphase@"}
							{op ">"}
							{value 0}
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
										{tag _local1}
									}
								}
								{include
									{zone
										{zone "global"}
									}
									{tag
										{tag _lua_ignore}
									}
								}
								{exclude
									{state
										{state user_control}
									}
								}
							}
						}
						{tag_add _local3}
					}
					{"delay"
						{time 0.4}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag _local3}
									{zone "f11_1"}
								}
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
												{tag _bot}
											}
										}
										{include
											{zone
												{zone "f11_1"}
											}
										}
										{exclude
											{tag
												{tag repairing}
											}
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _local3}
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
								}
								{tag_add _local2}
							}
							{"delay"
								{time 0.2}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag _local2}
									{state operatable}
								}
								{tag_add _lua_mi}
							}
						}
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag _local3}
									{zone "f11_2"}
								}
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
												{tag _bot}
											}
										}
										{include
											{zone
												{zone "f11_2"}
											}
										}
										{exclude
											{tag
												{tag repairing}
											}
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _local3}
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
								}
								{tag_add _local2}
							}
							{"delay"
								{time 0.2}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag _local2}
									{state operatable}
								}
								{tag_add _lua_mi}
							}
						}
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag _local3}
									{zone "f11_3"}
								}
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
												{tag _bot}
											}
										}
										{include
											{zone
												{zone "f11_3"}
											}
										}
										{exclude
											{tag
												{tag repairing}
											}
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _local3}
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
								}
								{tag_add _local2}
							}
							{"delay"
								{time 0.2}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag _local2}
									{state operatable}
								}
								{tag_add _lua_mi}
							}
						}
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag _local3}
									{zone "f11"}
								}
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
												{tag _bot}
											}
										}
										{include
											{zone
												{zone "f11"}
											}
										}
										{exclude
											{tag
												{tag repairing}
											}
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _local3}
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
								}
								{tag_add _local2}
							}
							{"delay"
								{time 0.2}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag _local2}
									{state operatable}
								}
								{tag_add _lua_mi}
							}
						}
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag _local3}
									{zone "f21_1"}
								}
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
												{tag _bot}
											}
										}
										{include
											{zone
												{zone "f21_1"}
											}
										}
										{exclude
											{tag
												{tag repairing}
											}
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _local3}
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
								}
								{tag_add _local2}
							}
							{"delay"
								{time 0.2}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag _local2}
									{state operatable}
								}
								{tag_add _lua_mi}
							}
						}
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag _local3}
									{zone "f21_2"}
								}
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
												{tag _bot}
											}
										}
										{include
											{zone
												{zone "f21_2"}
											}
										}
										{exclude
											{tag
												{tag repairing}
											}
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _local3}
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
								}
								{tag_add _local2}
							}
							{"delay"
								{time 0.2}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag _local2}
									{state operatable}
								}
								{tag_add _lua_mi}
							}
						}
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag _local3}
									{zone "f21_3"}
								}
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
												{tag _bot}
											}
										}
										{include
											{zone
												{zone "f21_3"}
											}
										}
										{exclude
											{tag
												{tag repairing}
											}
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _local3}
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
								}
								{tag_add _local2}
							}
							{"delay"
								{time 0.2}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag _local2}
									{state operatable}
								}
								{tag_add _lua_mi}
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
												{tag _bot}
											}
										}
										{include
											{zone
												{zone "f21"}
											}
										}
										{exclude
											{tag
												{tag repairing}
											}
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _local3}
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
								}
								{tag_add _local2}
							}
							{"delay"
								{time 0.2}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag _local2}
									{state operatable}
								}
								{tag_add _lua_mi}
							}
						}
					}
					{"delay"
						{time 0.5}
					}
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag _local2}
										}
									}
									{include
										{zone
											{zone "lane1"}
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
						{"entity_state"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag _local2}
										}
									}
									{include
										{zone
											{zone "lane1"}
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
								{amount 1
								}
							}
							{tag_add "+local2"}
							{tag_remove _local2}
						}
						{"delay"
							{time 0.2}
						}
						{"actor_state"
							{selector
								{ignore_captured_by_user 0}
								{tag "+local2"}
								{type vehicle}
								{state operatable}
							}
							{drop orders}
							{fire_mode open}
							{move_mode free}
							{ai_move
								{mode disable}
								{enable_on injure}
							}
							{movement
								{speed normal}
							}
							{cannon move}
						}
						{"delay"
							{time 0.1}
						}
						{"action"
							{selector
								{ignore_captured_by_user 0}
								{tag "+local2"}
								{type vehicle}
								{state operatable}
							}
							{action move}
							{target
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "lane1"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{team
											{team a}
										}
									}
								}
								{sort
									{type shuffle}
								}
								{amount 1
								}
							}
						}
						{"delay"
							{time 5}
						}
						{"actor_state"
							{selector
								{ignore_captured_by_user 0}
								{tag "+local2"}
								{type vehicle}
								{state operatable}
							}
							{drop orders}
							{fire_mode open}
							{move_mode zone}
							{move_radius 20}
							{ai_move
								{mode enable}
								{enable_on injure}
							}
							{movement
								{speed normal}
							}
							{cannon fire}
						}
						{"delay"
							{time 1}
						}
						{"action"
							{selector
								{ignore_captured_by_user 0}
								{tag "+local2"}
								{type vehicle}
								{state operatable}
							}
							{action rotate}
							{target
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "lane1"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{team
											{team a}
										}
									}
								}
								{sort
									{type shuffle}
								}
								{amount 1
								}
							}
						}
						{"delay"
							{time 0.2}
						}
						{"entity_state"
							{selector
								{ignore_captured_by_user 0}
								{tag "+local2"}
							}
							{tag_add local2_del}
							{tag_remove "+local2"}
						}
						{"delay"
							{time 0.2}
						}
					}
					{"delay"
						{time 0.5}
					}
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag _local2}
										}
									}
									{include
										{zone
											{zone "lane1"}
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
											{state user_control}
										}
									}
								}
							}
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
											{tag _local2}
										}
									}
									{include
										{zone
											{zone "lane1"}
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
											{state user_control}
										}
									}
								}
								{amount 2
								}
							}
							{tag_add "+local2"}
							{tag_remove _local2}
						}
						{"delay"
							{time 0.4}
						}
						{"actor_state"
							{selector
								{ignore_captured_by_user 0}
								{tag "+local2"}
								{type human}
								{state operatable}
							}
							{drop orders}
							{fire_mode open}
							{move_mode free}
							{weapon_prepare on}
							{ai_move
								{mode disable}
								{enable_on injure}
							}
							{movement
								{type normal}
							}
							{ai
								{advance_ratio 5}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"action"
							{selector
								{ignore_captured_by_user 0}
								{tag "+local2"}
								{type human}
								{state operatable}
							}
							{action advance}
							{target
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "lane1"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{team
											{team a}
										}
									}
								}
								{sort
									{type shuffle}
								}
								{amount 1
								}
							}
						}
						{"delay"
							{time 3}
						}
						{"actor_to_cover"
							{selector
								{ignore_captured_by_user 0}
								{tag "+local2"}
								{type human}
								{state operatable}
							}
							{drop "orders sensor senseless"}
						}
						{"delay"
							{time 3}
						}
						{"actor_state"
							{selector
								{ignore_captured_by_user 0}
								{tag _local2}
								{type human}
								{state operatable}
							}
							{drop orders}
							{fire_mode open}
							{move_mode zone}
							{move_radius 10}
							{weapon_prepare on}
							{ai_move
								{mode enable}
								{enable_on injure}
							}
							{ai
								{advance_ratio 5}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"action"
							{selector
								{ignore_captured_by_user 0}
								{tag "+local2"}
								{type human}
								{state operatable}
							}
							{action rotate}
							{target
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "lane1"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{team
											{team a}
										}
									}
								}
								{sort
									{type shuffle}
								}
								{amount 1
								}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{ignore_captured_by_user 0}
								{tag "+local2"}
							}
							{tag_add local2_del}
							{tag_remove "+local2"}
						}
						{"delay"
							{time 0.2}
						}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag local2_del}
						}
						{tag_add _lua_ignore}
						{tag_remove _lua_mi}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag _local2}
						}
						{tag_remove _lua_mi}
					}
					{"delay"
						{time 0.5}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag local2_del}
						}
						{tag_remove local2_del}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag _local2}
						}
						{tag_remove _local2}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag _local3}
						}
						{tag_remove _local3}
					}
					{"delay"
						{time 30}
					}
					{"trigger"
						{name "lua/b_at_flag"}
					}
				}
			}
			{"lua/ignore_incheck"
				{condition
					{expression "(1 & 2) | (2 & 3)"}
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag _lua_ignore}
										}
									}
									{include
										{zone
											{zone "global"}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{zone
											{zone "f11"}
										}
										{zone
											{zone "f12"}
										}
										{zone
											{zone "f13"}
										}
										{zone
											{zone "f14"}
										}
									}
								}
							}
							{count
								{op ">"}
								{value 2}
							}
						}
						{"2.cmp_i"
							{var "ai_on$"}
							{op ">"}
							{value 0}
						}
						{"3.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag _lua_ignore}
										}
									}
									{include
										{zone
											{zone "global"}
										}
										{tag
											{tag _lua_mi}
										}
										{state
											{state operatable}
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
												{tag _lua_ignore}
											}
										}
										{include
											{tag
												{tag _lua_mi}
											}
										}
									}
								}
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
												{tag _lua_ignore}
											}
										}
										{include
											{tag
												{tag _lua_mi}
											}
										}
									}
								}
								{tag_remove _lua_ignore}
							}
							{"delay"
								{time 5}
							}
							{"trigger"
								{name "lua/ignore_incheck"}
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
												{tag _lua_ignore}
											}
										}
										{include
											{state
												{state operatable}
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
										{mode farthest}
									}
									{amount 1
									}
								}
								{tag_add _tidy1}
							}
							{"delay"
								{time 1}
							}
							{"switch"
								{"case"
									{condition
										{type see_enemy}
										{selector
											{ignore_captured_by_user 0}
											{tag _tidy1}
											{state operatable}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag _tidy1}
										}
										{tag_remove _lua_ignore}
									}
									{"delay"
										{time 1}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag _tidy1}
										}
										{tag_remove _tidy1}
									}
								}
							}
							{"delay"
								{time 15}
							}
							{"trigger"
								{name "lua/ignore_incheck"}
							}
						}
					}
				}
			}
			{"ai/recrew_tank"
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
											{tag bot}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state operatable}
										}
										{team
											{team a}
										}
									}
									{exclude
										{tag
											{tag _lua_mi}
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
							}
							{enemy
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag bot_tank}
										}
										{tag
											{tag player_armor}
										}
									}
									{include
										{zone
											{zone "global"}
										}
										{prop
											{prop vehicle}
										}
										{team
											{team b}
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
								{meters 50}
							}
							{tag
								{"tag pair"}
								{"for selector" tcrew}
								{"for enemy" etank_enter}
							}
						}
						{"2.see_actors"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag bot}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state operatable}
										}
										{team
											{team b}
										}
									}
									{exclude
										{tag
											{tag _lua_mi}
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
							}
							{enemy
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag bot_tank}
										}
										{tag
											{tag player_armor}
										}
									}
									{include
										{zone
											{zone "global"}
										}
										{prop
											{prop vehicle}
										}
										{team
											{team a}
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
								{meters 53}
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
								{type see_enemy}
								{selector
									{ignore_captured_by_user 0}
									{tag tcrew}
									{zone "global"}
									{state operatable}
								}
							}
							{"delay"
								{time 1}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
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
														{tag tcrew}
													}
												}
												{include
													{team
														{team b}
													}
												}
											}
										}
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
														{tag bot}
													}
												}
												{include
													{prop
														{prop human}
													}
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
												{exclude
													{tag
														{tag _lua_mi}
													}
													{tag
														{tag repairing}
													}
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
													{tag tcrew}
												}
											}
											{amount 1
											}
										}
										{tag_add temp3}
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
														{tag tcrew}
													}
												}
												{include
													{team
														{team a}
													}
												}
											}
										}
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
														{tag bot}
													}
												}
												{include
													{prop
														{prop human}
													}
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
												{exclude
													{tag
														{tag _lua_mi}
													}
													{tag
														{tag repairing}
													}
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
													{tag tcrew}
												}
											}
											{amount 1
											}
										}
										{tag_add temp3}
									}
								}
								{"default"}
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
								{tag_add _lua_mi}
							}
							{"actor_state"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
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
									{ignore_captured_by_user 0}
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
											{ignore_captured_by_user 0}
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
											{ignore_captured_by_user 0}
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
							{ignore_captured_by_user 0}
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
						{tag_remove _lua_mi}
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
						{name "ai/recrew_tank"}
					}
				}
			}
			{"lua/in_transit_act"
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
											{tag _bot}
										}
									}
									{include
										{state
											{state operatable}
										}
										{team
											{team b}
										}
									}
									{exclude
										{tag
											{tag _lua_alert}
										}
										{tag
											{tag _lua_mi}
										}
										{tag
											{tag _lua_ignore}
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
										{team
											{team a}
										}
									}
								}
							}
							{distance
								{mode near_than}
								{meters 90}
							}
							{tag
								{"tag pair"}
								{"for selector" _act_b}
								{"for enemy" _act_b}
							}
						}
						{"2.see_actors"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag _bot}
										}
									}
									{include
										{state
											{state operatable}
										}
										{team
											{team a}
										}
									}
									{exclude
										{tag
											{tag _lua_alert}
										}
										{tag
											{tag _lua_mi}
										}
										{tag
											{tag _lua_ignore}
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
										{team
											{team b}
										}
									}
								}
							}
							{distance
								{mode near_than}
								{meters 75}
							}
							{tag
								{"tag pair"}
								{"for selector" _act_a}
								{"for enemy" _act_a}
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
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag _act_b}
											}
										}
										{include
											{zone
												{zone "global"}
											}
											{tag
												{tag _ai}
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
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag _act_a}
								}
								{tag_remove _act_a}
							}
							{"delay"
								{time 0.2}
							}
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{ignore_captured_by_user 0}
											{tag _act_b}
											{zone "lane1"}
										}
										{count
											{op "=="}
											{value 1}
										}
									}
									{"delay"
										{time 1}
									}
								}
								{## "case"
									{condition
										{type entities}
										{selector
											{ignore_captured_by_user 0}
											{tag _act_b}
											{zone "lane2"}
										}
										{count
											{op "=="}
											{value 1}
										}
									}
									{"delay"
										{time 1}
									}
								}
								{## "case"
									{condition
										{type entities}
										{selector
											{ignore_captured_by_user 0}
											{tag _act_b}
											{zone "lane3"}
										}
										{count
											{op "=="}
											{value 1}
										}
									}
									{"delay"
										{time 1}
									}
								}
								{## "case"
									{condition
										{type entities}
										{selector
											{ignore_captured_by_user 0}
											{tag _act_b}
											{zone "lane4"}
										}
										{count
											{op "=="}
											{value 1}
										}
									}
									{"delay"
										{time 1}
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
														{tag _act_b}
													}
												}
												{include
													{tag
														{tag _user}
													}
												}
											}
										}
										{tag_remove _act_b}
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
														{tag _act_b}
													}
												}
												{include
													{tag
														{tag _ai}
													}
												}
												{exclude
													{state
														{state user_control}
													}
												}
											}
										}
										{tag_add _act}
										{tag_remove _act_b}
									}
									{"delay"
										{time 0.2}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag _act}
										}
										{tag_add _lua_alert}
									}
									{"delay"
										{time 0.4}
									}
									{"switch"
										{"case"
											{condition
												{type see_enemy}
												{selector
													{ignore_captured_by_user 0}
													{tag _act}
													{state operatable}
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
																		{tag _act}
																	}
																}
																{include
																	{tag
																		{tag bot_veh}
																	}
																	{prop
																		{prop vehicle}
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
															{tag _act}
															{state operatable}
														}
														{drop orders}
														{fire_mode open}
														{ai_move
															{mode enable}
														}
														{cannon fire}
													}
													{"entity_state"
														{selector
															{ignore_captured_by_user 0}
															{tag _act}
															{state operatable}
														}
														{tag_add _lua_alert}
														{tag_remove _lua_ignore}
													}
													{"delay"
														{time 10}
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
																		{tag _act}
																	}
																}
																{include
																	{tag
																		{tag bot}
																	}
																	{prop
																		{prop human}
																	}
																}
																{exclude
																	{state
																		{state dead}
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
															{tag _act}
															{state operatable}
														}
														{drop orders}
														{fire_mode open}
														{move_mode hold}
														{ai_move
															{mode enable}
														}
													}
													{"entity_state"
														{selector
															{ignore_captured_by_user 0}
															{tag _act}
															{state operatable}
														}
														{tag_add _lua_alert}
														{tag_remove _lua_ignore}
													}
													{"delay"
														{time 1}
													}
													{"actor_state"
														{selector
															{tag _act}
															{state operatable}
														}
														{fire_mode open}
														{move_mode free}
														{ai_move
															{mode enable}
														}
													}
													{"delay"
														{time 22}
													}
												}
												{"default"
													{"delay"
														{time 0.1}
													}
													{"actor_state"
														{selector
															{tag _act}
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
													{"entity_state"
														{selector
															{tag _act}
															{state operatable}
														}
														{tag_add _lua_alert}
														{tag_remove _lua_ignore}
													}
													{"delay"
														{time 2}
													}
													{"actor_state"
														{selector
															{ignore_captured_by_user 0}
															{tag _act}
															{state operatable}
														}
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
														{time 22}
													}
												}
											}
										}
										{"default"
											{"delay"
												{time 0.1}
											}
										}
									}
									{"delay"
										{time 1}
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
										{type entities}
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag _act_a}
													}
												}
												{include
													{zone
														{zone "global"}
													}
													{tag
														{tag _ai}
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
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag _act_b}
										}
										{tag_remove _act_b}
									}
									{"delay"
										{time 0.2}
									}
									{"switch"
										{"case"
											{condition
												{type entities}
												{selector
													{ignore_captured_by_user 0}
													{tag _act_a}
													{zone "lane1"}
												}
												{count
													{op "=="}
													{value 1}
												}
											}
											{"delay"
												{time 1}
											}
										}
										{## "case"
											{condition
												{type entities}
												{selector
													{ignore_captured_by_user 0}
													{tag _act_a}
													{zone "lane2"}
												}
												{count
													{op "=="}
													{value 1}
												}
											}
											{"delay"
												{time 1}
											}
										}
										{## "case"
											{condition
												{type entities}
												{selector
													{ignore_captured_by_user 0}
													{tag _act_a}
													{zone "lane3"}
												}
												{count
													{op "=="}
													{value 1}
												}
											}
											{"delay"
												{time 1}
											}
										}
										{## "case"
											{condition
												{type entities}
												{selector
													{ignore_captured_by_user 0}
													{tag _act_a}
													{zone "lane4"}
												}
												{count
													{op "=="}
													{value 1}
												}
											}
											{"delay"
												{time 1}
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
																{tag _act_a}
															}
														}
														{include
															{tag
																{tag _user}
															}
														}
													}
												}
												{tag_remove _act_a}
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
																{tag _act_a}
															}
														}
														{include
															{tag
																{tag _ai}
															}
														}
														{exclude
															{state
																{state user_control}
															}
														}
													}
												}
												{tag_add _act}
												{tag_remove _act_a}
											}
											{"delay"
												{time 0.4}
											}
											{"switch"
												{"case"
													{condition
														{type see_enemy}
														{selector
															{ignore_captured_by_user 0}
															{tag _act}
															{state operatable}
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
																				{tag _act}
																			}
																		}
																		{include
																			{tag
																				{tag bot_veh}
																			}
																			{prop
																				{prop vehicle}
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
																	{tag _act}
																	{state operatable}
																}
																{drop orders}
																{fire_mode open}
																{ai_move
																	{mode enable}
																}
																{cannon fire}
															}
															{"entity_state"
																{selector
																	{ignore_captured_by_user 0}
																	{tag _act}
																	{state operatable}
																}
																{tag_add _lua_alert}
																{tag_remove _lua_ignore}
															}
															{"delay"
																{time 10}
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
																				{tag _act}
																			}
																		}
																		{include
																			{tag
																				{tag bot}
																			}
																			{prop
																				{prop human}
																			}
																		}
																		{exclude
																			{state
																				{state dead}
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
																	{tag _act}
																	{state operatable}
																}
																{drop orders}
																{fire_mode open}
																{move_mode hold}
																{ai_move
																	{mode enable}
																}
															}
															{"entity_state"
																{selector
																	{ignore_captured_by_user 0}
																	{tag _act}
																	{state operatable}
																}
																{tag_add _lua_alert}
																{tag_remove _lua_ignore}
															}
															{"delay"
																{time 1}
															}
															{"actor_state"
																{selector
																	{tag _act}
																	{state operatable}
																}
																{fire_mode open}
																{move_mode free}
																{ai_move
																	{mode enable}
																}
															}
															{"delay"
																{time 22}
															}
														}
														{"default"
															{"delay"
																{time 0.1}
															}
															{"actor_state"
																{selector
																	{tag _act}
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
															{"entity_state"
																{selector
																	{tag _act}
																	{state operatable}
																}
																{tag_add _lua_alert}
																{tag_remove _lua_ignore}
															}
															{"delay"
																{time 2}
															}
															{"actor_state"
																{selector
																	{ignore_captured_by_user 0}
																	{tag _act}
																	{state operatable}
																}
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
																{time 22}
															}
														}
													}
												}
												{"default"
													{"delay"
														{time 0.1}
													}
												}
											}
											{"delay"
												{time 1}
											}
										}
									}
								}
								{"default"}
							}
							{"delay"
								{time 1}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag _act}
						}
						{tag_remove _act}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag _act_a}
						}
						{tag_remove _act_a}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag _act_b}
						}
						{tag_remove _act_b}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "lua/in_transit_act"}
					}
				}
			}
			{"lua/alert_clear"
				{condition
					{expression "(!1 & 2 & 4) | (3 & 4)"}
					{terms
						{"1.see_enemy"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag _lua_alert}
										}
									}
									{include
										{zone
											{zone "global"}
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
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag _lua_alert}
										}
									}
									{include
										{zone
											{zone "global"}
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
						{"3.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag _lua_alert}
										}
									}
									{include
										{zone
											{zone "global"}
										}
										{tag
											{tag _lua_mi}
										}
										{state
											{state operatable}
										}
									}
								}
							}
						}
						{"4.cmp_i"
							{var "ai_on$"}
							{op ">"}
							{value 0}
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
										{tag bot_veh}
									}
									{tag
										{tag bot_tank}
									}
									{tag
										{tag bot_car}
									}
								}
								{include
									{tag
										{tag _lua_alert}
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
							{amount 1
							}
						}
						{tag_add alert_temp2}
					}
					{"delay"
						{time 0.4}
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
												{tag alert_temp2}
											}
										}
										{include
											{state
												{state operatable}
											}
											{team
												{team b}
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
											{tag alert_temp2}
											{zone "global"}
											{type vehicle}
											{state operatable}
										}
									}
									{"delay"
										{time 0.1}
									}
									{"action"
										{selector
											{tag alert_temp2}
										}
										{action rotate}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{zone
														{zone "global"}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team a}
													}
												}
											}
											{sort
												{type entity}
												{entity
													{tag alert_temp2}
												}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag alert_temp2}
										}
										{tag_remove _lua_alert}
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
													{tag
														{tag alert_temp2}
													}
												}
												{include
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
												{tag alert_temp2}
											}
										}
										{include
											{state
												{state operatable}
											}
											{team
												{team a}
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
											{tag alert_temp2}
											{zone "global"}
											{type vehicle}
											{state operatable}
										}
									}
									{"delay"
										{time 0.1}
									}
									{"action"
										{selector
											{tag alert_temp2}
										}
										{action rotate}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{zone
														{zone "global"}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team b}
													}
												}
											}
											{sort
												{type entity}
												{entity
													{tag alert_temp2}
												}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag alert_temp2}
										}
										{tag_remove _lua_alert}
									}
									{"delay"
										{time 0.1}
									}
									{"action"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag alert_temp2}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
										{action advance}
										{target
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag _user}
													}
													{tag
														{tag _bot}
													}
												}
												{include
													{state
														{state operatable}
													}
													{team
														{team b}
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
													{tag alert_temp2}
												}
											}
										}
									}
								}
							}
						}
						{"default"}
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
												{tag _lua_alert}
											}
										}
										{include
											{tag
												{tag _lua_mi}
											}
										}
										{exclude
											{tag
												{tag alert_temp2}
											}
										}
									}
								}
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
												{tag _lua_alert}
											}
										}
										{include
											{tag
												{tag _lua_mi}
											}
										}
									}
								}
								{tag_remove _lua_alert}
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
												{tag _lua_alert}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag alert_temp2}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add alert_temp}
							}
							{"delay"
								{time 1}
							}
							{"switch"
								{"case"
									{condition
										{type see_enemy}
										{selector
											{ignore_captured_by_user 0}
											{tag alert_temp}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag alert_temp}
										}
										{tag_remove _lua_alert}
									}
									{"delay"
										{time 1}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag alert_temp}
										}
										{tag_remove alert_temp}
									}
								}
							}
						}
					}
					{"delay"
						{time 5}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag alert_temp2}
						}
						{tag_remove alert_temp2}
					}
					{"delay"
						{time 3}
					}
					{"trigger"
						{name "lua/alert_clear"}
					}
				}
			}
			{"mines/1"
				{condition
					{terms
						{"1.cmp_i"
							{var "b_l1_bot_id$"}
							{op ">"}
							{value 0}
						}
						{"2.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag bot}
										}
									}
									{include
										{zone
											{zone "lane1"}
										}
										{state
											{state operatable}
										}
										{team
											{team b}
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
							{count
								{op ">"}
								{value 3}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.4}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_nation$"}
								{op "=="}
								{value 1}
							}
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag m_1_ger}
											}
											{tag
												{tag m_1_fin}
											}
											{tag
												{tag m_1_usa}
											}
										}
									}
								}
							}
							{"delay"
								{time 0.4}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag m_1_rus}
								}
								{tag_remove m_1_rus}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_nation$"}
								{op "=="}
								{value 2}
							}
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag m_1_rus}
											}
											{tag
												{tag m_1_fin}
											}
											{tag
												{tag m_1_usa}
											}
										}
									}
								}
							}
							{"delay"
								{time 0.4}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag m_1_ger}
								}
								{tag_remove m_1_ger}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_nation$"}
								{op "=="}
								{value 3}
							}
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag m_1_rus}
											}
											{tag
												{tag m_1_ger}
											}
											{tag
												{tag m_1_usa}
											}
										}
									}
								}
							}
							{"delay"
								{time 0.4}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag m_1_fin}
								}
								{tag_remove m_1_fin}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_nation$"}
								{op "=="}
								{value 4}
							}
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag m_1_rus}
											}
											{tag
												{tag m_1_ger}
											}
											{tag
												{tag m_1_fin}
											}
										}
									}
								}
							}
							{"delay"
								{time 0.4}
							}
							{"entity_state"
								{selector
									{ignore_captured_by_user 0}
									{tag m_1_usa}
								}
								{tag_remove m_1_usa}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "error$"}
								{op "="}
								{value 11}
							}
						}
					}
					{"delay"
						{time 0.5}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 1}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
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
										{type waypoint}
										{wpid "0"}
									}
									{amount 1
									}
								}
								{tag_add "+1_0_miner"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 2}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
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
										{type waypoint}
										{wpid "0"}
									}
									{amount 2
									}
								}
								{tag_add "+1_0_miner"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 4}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
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
										{type waypoint}
										{wpid "0"}
									}
									{amount 4
									}
								}
								{tag_add "+1_0_miner"}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
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
										{type waypoint}
										{wpid "0"}
									}
									{amount 3
									}
								}
								{tag_add "+1_0_miner"}
							}
						}
					}
					{"delay"
						{time 0.2}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag "+1_0_miner"}
						}
						{tag_add _lua_mi}
						{tag_remove _lua_ignore}
					}
				}
			}
			{"mines/lane1/0"
				{condition
					{terms
						{"1.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag "+1_0_miner"}
								{zone "lane1"}
								{type human}
								{state operatable}
							}
						}
						{"2.cmp_i"
							{var "mine_bot1$"}
							{op "=="}
							{value 0}
						}
					}
				}
				{actions
					{"delay"
						{time 0.2}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 1}
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
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag "+1_0_miner"}
										}
										{tag_remove _lua_mi}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag "+1_0_miner"}
										}
										{tag_remove "+1_0_miner"}
									}
								}
								{"default"}
							}
						}
						{"default"}
					}
					{"delay"
						{time 0.5}
					}
					{"while"
						{condition
							{type entities}
							{selector
								{ignore_captured_by_user 0}
								{tag "+1_0_miner"}
								{zone "lane1"}
								{type human}
								{state operatable}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"entity_state"
							{selector
								{ignore_captured_by_user 0}
								{amount 1
								}
								{tag "+1_0_miner"}
								{zone "global"}
								{type human}
							}
							{tag_add _1_0_miner}
							{tag_remove "+1_0_miner"}
						}
						{"delay"
							{time 0.4}
						}
						{"actor_state"
							{selector
								{ignore_captured_by_user 0}
								{tag _1_0_miner}
							}
							{drop orders}
							{weapon_prepare off}
							{ai_move
								{mode disable}
								{enable_on injure}
							}
							{movement
								{speed bow}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"waypoint"
							{who
								{type actor}
								{actors
									{ignore_captured_by_user 0}
									{tag _1_0_miner}
									{type human}
									{state operatable}
								}
							}
							{action
								{type start}
								{waypoint "0"}
								{make_squad}
								{approach force}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{ignore_captured_by_user 0}
								{tag _1_0_miner}
							}
							{tag_add "1_0_miner"}
							{tag_remove _1_0_miner}
						}
						{"delay"
							{time 0.5}
						}
					}
					{"delay"
						{time 10}
					}
					{"set_i"
						{var "mine_bot1$"}
						{op "+"}
						{value 1}
					}
				}
			}
			{"mines/lane1/arm"
				{condition
					{terms
						{"1.event"
							{id "arm1"}
						}
						{"2.cmp_i"
							{var "b_l1_bot_id$"}
							{op ">"}
							{value 0}
						}
						{"3.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag "1_0_miner"}
										}
										{tag
											{tag "1_1_miner"}
										}
										{tag
											{tag "1_2_miner"}
										}
										{tag
											{tag "1_3_miner"}
										}
										{tag
											{tag "1_4_miner"}
										}
									}
									{include
										{zone
											{zone "lane1"}
										}
										{prop
											{prop human}
										}
										{state
											{state operatable}
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
					{"event"
						{event "arm1"}
						{mode reset}
						{delay 0}
					}
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_id$"}
								{op "=="}
								{value 1}
							}
							{"delay"
								{time 0.1}
							}
							{"mine_state"
								{selector
									{ignore_captured_by_user 0}
									{tag mine_1_bot}
									{zone "lane1"}
								}
								{action arm}
								{miner "1"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_id$"}
								{op "=="}
								{value 2}
							}
							{"delay"
								{time 0.1}
							}
							{"mine_state"
								{selector
									{ignore_captured_by_user 0}
									{tag mine_1_bot}
									{zone "lane1"}
								}
								{action arm}
								{miner "2"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_id$"}
								{op "=="}
								{value 3}
							}
							{"delay"
								{time 0.1}
							}
							{"mine_state"
								{selector
									{ignore_captured_by_user 0}
									{tag mine_1_bot}
									{zone "lane1"}
								}
								{action arm}
								{miner "3"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_id$"}
								{op "=="}
								{value 4}
							}
							{"delay"
								{time 0.1}
							}
							{"mine_state"
								{selector
									{ignore_captured_by_user 0}
									{tag mine_1_bot}
									{zone "lane1"}
								}
								{action arm}
								{miner "4"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_id$"}
								{op "=="}
								{value 5}
							}
							{"delay"
								{time 0.1}
							}
							{"mine_state"
								{selector
									{ignore_captured_by_user 0}
									{tag mine_1_bot}
									{zone "lane1"}
								}
								{action arm}
								{miner "5"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_id$"}
								{op "=="}
								{value 6}
							}
							{"delay"
								{time 0.1}
							}
							{"mine_state"
								{selector
									{ignore_captured_by_user 0}
									{tag mine_1_bot}
									{zone "lane1"}
								}
								{action arm}
								{miner "6"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_id$"}
								{op "=="}
								{value 7}
							}
							{"delay"
								{time 0.1}
							}
							{"mine_state"
								{selector
									{ignore_captured_by_user 0}
									{tag mine_1_bot}
									{zone "lane1"}
								}
								{action arm}
								{miner "7"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_id$"}
								{op "=="}
								{value 8}
							}
							{"delay"
								{time 0.1}
							}
							{"mine_state"
								{selector
									{ignore_captured_by_user 0}
									{tag mine_1_bot}
									{zone "lane1"}
								}
								{action arm}
								{miner "8"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_id$"}
								{op "=="}
								{value 9}
							}
							{"delay"
								{time 0.1}
							}
							{"mine_state"
								{selector
									{ignore_captured_by_user 0}
									{tag mine_1_bot}
									{zone "lane1"}
								}
								{action arm}
								{miner "9"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_id$"}
								{op "=="}
								{value 10}
							}
							{"delay"
								{time 0.1}
							}
							{"mine_state"
								{selector
									{ignore_captured_by_user 0}
									{tag mine_1_bot}
									{zone "lane1"}
								}
								{action arm}
								{miner "10"}
							}
						}
						{"default"
							{"set_i"
								{var "error$"}
								{op "+"}
								{value 1}
							}
						}
					}
					{"delay"
						{time 0.4}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag mine_1_bot}
									}
								}
								{include
									{tag
										{tag mine_planted}
									}
								}
							}
						}
						{tag_remove mine_1_bot}
					}
					{"delay"
						{time 0.4}
					}
					{"trigger"
						{name "mines/lane1/arm"}
					}
				}
			}
			{"mines/clean"
				{condition
				}
				{actions
					{"delay"
						{time 25}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "ai_on$"}
								{op "=="}
								{value 0}
							}
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag mine_1_bot}
											}
											{tag
												{tag mine_2_bot}
											}
											{tag
												{tag mine_3_bot}
											}
											{tag
												{tag mine_4_bot}
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
							{"switch"
								{"case"
									{condition
										{type cmp_i}
										{var "b_l1_bot_id$"}
										{op "<<"}
										{value 1}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{ignore_captured_by_user 0}
											{tag mine_1_bot}
										}
									}
								}
								{"default"}
							}
							{"delay"
								{time 1}
							}
							{"switch"
								{"case"
									{condition
										{type cmp_i}
										{var "b_l2_bot_id$"}
										{op "<<"}
										{value 1}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{ignore_captured_by_user 0}
											{tag mine_2_bot}
										}
									}
								}
								{"default"}
							}
							{"delay"
								{time 1}
							}
							{"switch"
								{"case"
									{condition
										{type cmp_i}
										{var "b_l3_bot_id$"}
										{op "<<"}
										{value 1}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{ignore_captured_by_user 0}
											{tag mine_3_bot}
										}
									}
								}
								{"default"}
							}
							{"delay"
								{time 1}
							}
							{"switch"
								{"case"
									{condition
										{type cmp_i}
										{var "b_l4_bot_id$"}
										{op "<<"}
										{value 1}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{ignore_captured_by_user 0}
											{tag mine_4_bot}
										}
									}
								}
								{"default"}
							}
						}
					}
				}
			}
			{"mines/1+"
				{condition
					{terms
						{"1.cmp_i"
							{var "mine_bot1$"}
							{op ">"}
							{value 0}
						}
						{"2.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag bot}
										}
									}
									{include
										{zone
											{zone "lane1"}
										}
										{state
											{state operatable}
										}
										{team
											{team b}
										}
									}
									{exclude
										{tag
											{tag _lua_mi}
										}
										{tag
											{tag _lua_alert}
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
							{count
								{op ">"}
								{value 3}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.4}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 1}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
											}
										}
										{exclude
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _lua_alert}
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
										{type waypoint}
										{wpid "24"}
									}
									{amount 1
									}
								}
								{tag_add "+1_1_miner"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 2}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
											}
										}
										{exclude
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _lua_alert}
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
										{type waypoint}
										{wpid "24"}
									}
									{amount 2
									}
								}
								{tag_add "+1_1_miner"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 4}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
											}
										}
										{exclude
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _lua_alert}
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
										{type waypoint}
										{wpid "24"}
									}
									{amount 4
									}
								}
								{tag_add "+1_1_miner"}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
											}
										}
										{exclude
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _lua_alert}
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
										{type waypoint}
										{wpid "24"}
									}
									{amount 3
									}
								}
								{tag_add "+1_1_miner"}
							}
						}
					}
					{"delay"
						{time 0.2}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag "+1_1_miner"}
						}
						{tag_remove _lua_ignore}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag "+1_1_miner"}
						}
						{tag_remove _lua_alert}
					}
					{"delay"
						{time 120}
					}
					{"set_i"
						{var "mine_bot1$"}
						{op "+"}
						{value 1}
					}
				}
			}
			{"mines/lane1/1"
				{condition
					{terms
						{"1.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag "+1_1_miner"}
								{zone "lane1"}
								{type human}
								{state operatable}
							}
						}
						{"2.cmp_i"
							{var "mine_bot1$"}
							{op ">"}
							{value 0}
						}
					}
				}
				{actions
					{"delay"
						{time 0.2}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 1}
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
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag "+1_1_miner"}
										}
										{tag_remove _lua_mi}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag "+1_1_miner"}
										}
										{tag_remove "+1_1_miner"}
									}
								}
								{"default"}
							}
						}
						{"default"}
					}
					{"delay"
						{time 0.5}
					}
					{"while"
						{condition
							{type entities}
							{selector
								{ignore_captured_by_user 0}
								{tag "+1_1_miner"}
								{zone "lane1"}
								{type human}
								{state operatable}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"entity_state"
							{selector
								{ignore_captured_by_user 0}
								{amount 1
								}
								{tag "+1_1_miner"}
								{zone "global"}
								{type human}
							}
							{tag_add _1_1_miner}
							{tag_remove "+1_1_miner"}
						}
						{"delay"
							{time 0.4}
						}
						{"actor_state"
							{selector
								{ignore_captured_by_user 0}
								{tag _1_1_miner}
							}
							{drop orders}
							{weapon_prepare off}
							{ai_move
								{mode disable}
								{enable_on injure}
							}
							{movement
								{speed bow}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"waypoint"
							{who
								{type actor}
								{actors
									{ignore_captured_by_user 0}
									{tag _1_1_miner}
									{type human}
									{state operatable}
								}
							}
							{action
								{type start}
								{waypoint "24"}
								{make_squad}
								{approach force}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{ignore_captured_by_user 0}
								{tag _1_1_miner}
							}
							{tag_add "1_1_miner"}
							{tag_remove _1_1_miner}
						}
						{"delay"
							{time 0.5}
						}
					}
				}
			}
			{"mines/1++"
				{condition
					{terms
						{"1.cmp_i"
							{var "mine_bot1$"}
							{op ">"}
							{value 1}
						}
						{"2.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag bot}
										}
									}
									{include
										{zone
											{zone "lane1"}
										}
										{state
											{state operatable}
										}
										{team
											{team b}
										}
									}
									{exclude
										{tag
											{tag _lua_mi}
										}
										{tag
											{tag _lua_alert}
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
							{count
								{op ">"}
								{value 3}
							}
						}
						{"3.cmp_i"
							{var "game:frontlinesphase@"}
							{op "<<"}
							{value 2}
						}
					}
				}
				{actions
					{"delay"
						{time 0.4}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 1}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
											}
										}
										{exclude
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _lua_alert}
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
										{type waypoint}
										{wpid "30"}
									}
									{amount 1
									}
								}
								{tag_add "+1_2_miner"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 2}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
											}
										}
										{exclude
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _lua_alert}
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
										{type waypoint}
										{wpid "30"}
									}
									{amount 2
									}
								}
								{tag_add "+1_2_miner"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 4}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
											}
										}
										{exclude
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _lua_alert}
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
										{type waypoint}
										{wpid "30"}
									}
									{amount 4
									}
								}
								{tag_add "+1_2_miner"}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
											}
										}
										{exclude
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _lua_alert}
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
										{type waypoint}
										{wpid "30"}
									}
									{amount 3
									}
								}
								{tag_add "+1_2_miner"}
							}
						}
					}
					{"delay"
						{time 0.2}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag "+1_2_miner"}
						}
						{tag_remove _lua_ignore}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag "+1_2_miner"}
						}
						{tag_remove _lua_alert}
					}
					{"delay"
						{time 120}
					}
					{"set_i"
						{var "mine_bot1$"}
						{op "="}
						{value 3}
					}
				}
			}
			{"mines/lane1/2"
				{condition
					{terms
						{"1.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag "+1_2_miner"}
								{zone "lane1"}
								{type human}
								{state operatable}
							}
						}
						{"2.cmp_i"
							{var "mine_bot1$"}
							{op ">"}
							{value 1}
						}
					}
				}
				{actions
					{"delay"
						{time 0.2}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 1}
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
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag "+1_2_miner"}
										}
										{tag_remove _lua_mi}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag "+1_2_miner"}
										}
										{tag_remove "+1_2_miner"}
									}
								}
								{"default"}
							}
						}
						{"default"}
					}
					{"delay"
						{time 0.5}
					}
					{"while"
						{condition
							{type entities}
							{selector
								{ignore_captured_by_user 0}
								{tag "+1_2_miner"}
								{zone "lane1"}
								{type human}
								{state operatable}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"entity_state"
							{selector
								{ignore_captured_by_user 0}
								{amount 1
								}
								{tag "+1_2_miner"}
								{zone "global"}
								{type human}
							}
							{tag_add _1_2_miner}
							{tag_remove "+1_2_miner"}
						}
						{"delay"
							{time 0.4}
						}
						{"actor_state"
							{selector
								{ignore_captured_by_user 0}
								{tag _1_2_miner}
							}
							{drop orders}
							{weapon_prepare off}
							{ai_move
								{mode disable}
								{enable_on injure}
							}
							{movement
								{speed bow}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"waypoint"
							{who
								{type actor}
								{actors
									{ignore_captured_by_user 0}
									{tag _1_2_miner}
									{type human}
									{state operatable}
								}
							}
							{action
								{type start}
								{waypoint "30"}
								{make_squad}
								{approach force}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{ignore_captured_by_user 0}
								{tag _1_2_miner}
							}
							{tag_add "1_2_miner"}
							{tag_remove _1_2_miner}
						}
						{"delay"
							{time 0.5}
						}
					}
				}
			}
			{"mines/1_2"
				{condition
					{expression "(1 & 2) | (2 & 3)"}
					{terms
						{"1.cmp_i"
							{var "mine_bot1$"}
							{op ">"}
							{value 2}
						}
						{"2.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag bot}
										}
									}
									{include
										{zone
											{zone "lane1"}
										}
										{state
											{state operatable}
										}
										{team
											{team b}
										}
									}
									{exclude
										{tag
											{tag _lua_mi}
										}
										{tag
											{tag _lua_alert}
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
							{count
								{op ">"}
								{value 3}
							}
						}
						{"3.cmp_i"
							{var "game:frontlinesphase@"}
							{op ">"}
							{value 1}
						}
					}
				}
				{actions
					{"delay"
						{time 0.4}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 1}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
											}
										}
										{exclude
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _lua_alert}
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
										{type waypoint}
										{wpid "36"}
									}
									{amount 1
									}
								}
								{tag_add "+1_3_miner"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 2}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
											}
										}
										{exclude
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _lua_alert}
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
										{type waypoint}
										{wpid "36"}
									}
									{amount 2
									}
								}
								{tag_add "+1_3_miner"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 4}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
											}
										}
										{exclude
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _lua_alert}
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
										{type waypoint}
										{wpid "36"}
									}
									{amount 4
									}
								}
								{tag_add "+1_3_miner"}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
											}
										}
										{exclude
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _lua_alert}
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
										{type waypoint}
										{wpid "36"}
									}
									{amount 3
									}
								}
								{tag_add "+1_3_miner"}
							}
						}
					}
					{"delay"
						{time 0.2}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag "+1_3_miner"}
						}
						{tag_remove _lua_ignore}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag "+1_3_miner"}
						}
						{tag_remove _lua_alert}
					}
					{"delay"
						{time 100}
					}
					{"set_i"
						{var "mine_bot1$"}
						{op "="}
						{value 4}
					}
				}
			}
			{"mines/lane1/3"
				{condition
					{terms
						{"1.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag "+1_3_miner"}
								{zone "lane1"}
								{type human}
								{state operatable}
							}
						}
						{"2.cmp_i"
							{var "mine_bot1$"}
							{op ">"}
							{value 2}
						}
					}
				}
				{actions
					{"delay"
						{time 0.2}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 1}
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
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag "+1_3_miner"}
										}
										{tag_remove _lua_mi}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag "+1_3_miner"}
										}
										{tag_remove "+1_3_miner"}
									}
								}
								{"default"}
							}
						}
						{"default"}
					}
					{"delay"
						{time 0.5}
					}
					{"while"
						{condition
							{type entities}
							{selector
								{ignore_captured_by_user 0}
								{tag "+1_3_miner"}
								{zone "lane1"}
								{type human}
								{state operatable}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"entity_state"
							{selector
								{ignore_captured_by_user 0}
								{amount 1
								}
								{tag "+1_3_miner"}
								{zone "global"}
								{type human}
							}
							{tag_add _1_3_miner}
							{tag_remove "+1_3_miner"}
						}
						{"delay"
							{time 0.4}
						}
						{"actor_state"
							{selector
								{ignore_captured_by_user 0}
								{tag _1_3_miner}
							}
							{drop orders}
							{weapon_prepare off}
							{ai_move
								{mode disable}
								{enable_on injure}
							}
							{movement
								{speed bow}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"waypoint"
							{who
								{type actor}
								{actors
									{ignore_captured_by_user 0}
									{tag _1_3_miner}
									{type human}
									{state operatable}
								}
							}
							{action
								{type start}
								{waypoint "36"}
								{make_squad}
								{approach force}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{ignore_captured_by_user 0}
								{tag _1_3_miner}
							}
							{tag_add "1_3_miner"}
							{tag_remove _1_3_miner}
						}
						{"delay"
							{time 0.5}
						}
					}
				}
			}
			{"mines/1_2+"
				{condition
					{terms
						{"1.cmp_i"
							{var "mine_bot1$"}
							{op ">"}
							{value 3}
						}
						{"2.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag bot}
										}
									}
									{include
										{zone
											{zone "lane1"}
										}
										{state
											{state operatable}
										}
										{team
											{team b}
										}
									}
									{exclude
										{tag
											{tag _lua_mi}
										}
										{tag
											{tag _lua_alert}
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
							{count
								{op ">"}
								{value 3}
							}
						}
						{"3.cmp_i"
							{var "game:frontlinesphase@"}
							{op ">"}
							{value 1}
						}
					}
				}
				{actions
					{"delay"
						{time 0.4}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 1}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
											}
										}
										{exclude
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _lua_alert}
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
										{type waypoint}
										{wpid "42"}
									}
									{amount 1
									}
								}
								{tag_add "+1_4_miner"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 2}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
											}
										}
										{exclude
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _lua_alert}
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
										{type waypoint}
										{wpid "42"}
									}
									{amount 2
									}
								}
								{tag_add "+1_4_miner"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 4}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
											}
										}
										{exclude
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _lua_alert}
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
										{type waypoint}
										{wpid "42"}
									}
									{amount 4
									}
								}
								{tag_add "+1_4_miner"}
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
												{tag bot}
											}
										}
										{include
											{zone
												{zone "lane1"}
											}
											{state
												{state operatable}
											}
											{team
												{team b}
											}
										}
										{exclude
											{tag
												{tag _lua_mi}
											}
											{tag
												{tag _lua_alert}
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
										{type waypoint}
										{wpid "42"}
									}
									{amount 3
									}
								}
								{tag_add "+1_4_miner"}
							}
						}
					}
					{"delay"
						{time 0.2}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag "+1_4_miner"}
						}
						{tag_remove _lua_ignore}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag "+1_4_miner"}
						}
						{tag_remove _lua_alert}
					}
					{"delay"
						{time 120}
					}
					{"set_i"
						{var "mine_bot1$"}
						{op "="}
						{value 5}
					}
				}
			}
			{"mines/lane1/4"
				{condition
					{terms
						{"1.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag "+1_4_miner"}
								{zone "lane1"}
								{type human}
								{state operatable}
							}
						}
						{"2.cmp_i"
							{var "mine_bot1$"}
							{op ">"}
							{value 3}
						}
					}
				}
				{actions
					{"delay"
						{time 0.2}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "b_l1_bot_diff$"}
								{op "=="}
								{value 1}
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
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag "+1_4_miner"}
										}
										{tag_remove _lua_mi}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{ignore_captured_by_user 0}
											{tag "+1_4_miner"}
										}
										{tag_remove "+1_4_miner"}
									}
								}
								{"default"}
							}
						}
						{"default"}
					}
					{"delay"
						{time 0.5}
					}
					{"while"
						{condition
							{type entities}
							{selector
								{ignore_captured_by_user 0}
								{tag "+1_4_miner"}
								{zone "lane1"}
								{type human}
								{state operatable}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"entity_state"
							{selector
								{ignore_captured_by_user 0}
								{amount 1
								}
								{tag "+1_4_miner"}
								{zone "global"}
								{type human}
							}
							{tag_add _1_4_miner}
							{tag_remove "+1_4_miner"}
						}
						{"delay"
							{time 0.4}
						}
						{"actor_state"
							{selector
								{ignore_captured_by_user 0}
								{tag _1_4_miner}
							}
							{drop orders}
							{weapon_prepare off}
							{ai_move
								{mode disable}
								{enable_on injure}
							}
							{movement
								{speed bow}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"waypoint"
							{who
								{type actor}
								{actors
									{ignore_captured_by_user 0}
									{tag _1_4_miner}
									{type human}
									{state operatable}
								}
							}
							{action
								{type start}
								{waypoint "42"}
								{make_squad}
								{approach force}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{ignore_captured_by_user 0}
								{tag _1_4_miner}
							}
							{tag_add "1_4_miner"}
							{tag_remove _1_4_miner}
						}
						{"delay"
							{time 0.5}
						}
					}
				}
			}