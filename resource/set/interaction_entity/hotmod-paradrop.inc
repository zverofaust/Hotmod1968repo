{"offmap_paradrop"			;// Helper that spawns stuff
	(define "offmap"
		{on spawn
			{delay 5
				{delay 1
					{spawn %0 offset -250 0 1000}
					{hide 1}
				}
			}
		}
	)
}

{"flare_paradrop_ammo"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_ammo_pallet"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

;//American

{"flare_paradrop_entac"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_crate_entac"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"flare_paradrop_m29"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_crate_m29"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"flare_paradrop_m116"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_m116"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"flare_paradrop_m40"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_m102"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"flare_paradrop_m102"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_m102"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"flare_paradrop_m151_m40"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_m151_m40"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"flare_paradrop_m56"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_m56"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

;//Soviet
{"flare_paradrop_asu57"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_asu57"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"flare_paradrop_asu85"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_asu85" offset -250 0 1000}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"flare_paradrop_bmd1"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_bmd1"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"flare_paradrop_rpu14"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_rpu14"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"flare_paradrop_sd44"	
	{on spawn
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{impulse up 5 forward 3 rnd_dir 3 com}
		{start_sound "vehicle/airborne/cargo_plane_flyby" ambient}
		{delay 10 {spawn "paradrop_sd44"}}
		{delay 20 {view stop "smoke"}}
		{delay 20 {delete}}
	}
}

{"parachute_paradrop"
	{on spawn
		{start_sound "vehicle/deploy/tent"}
		{ani_wind "flight" end}
		;{ani_play "flight" callback}
	}
	{on animation_end "flight"
		{ani_play "landing" callback}
		{with_linked_entity "attach"
			{unlink}
			{impulse up 0.1 com}
		}
	}
	{on animation_end "landing"
		{with_linked_entity "attach"
			{unlink}
			{impulse up 5 com}
		}
		{delay 1 {delete}}
	}
}

{"paratrooper_attach"			;// Parachute
	{on spawn
		{ani_play "flight" callback}
		;{ani_play "landing"}
	}
	{on animation_end "flight"
		{ani_play "landing" callback}	
		{delay 5 {delete}}
	}
}


{"paradropper"         ;// Planes/Helicopters that can paradrop infantry
	{on "paradrop"
		{call "deploy_paratroops"} ;// "paradrop" button pressed
	}
	{on "deploy_paratroops"  
		{able select 0}
		{drop_orders}
		{ani_play "doorback"}
		{delay 1
			{with_linked_entity "seat01"
				{unlink}
			}
			{delay 0.5
				{with_linked_entity "seat02"
					{unlink}
				}
				{delay 0.5
					{with_linked_entity "seat03"
						{unlink}
					}
					{delay 0.5
						{with_linked_entity "seat04"
							{unlink}
						}
						{delay 0.5
							{with_linked_entity "seat05"
								{unlink}
							}
							{delay 0.5
								{with_linked_entity "seat06"
									{unlink}
								}
								{delay 0.5
									{with_linked_entity "seat07"
										{unlink}
									}
									{delay 0.5
										{with_linked_entity "seat08"
											{unlink}
										}
										{delay 0.5
											{with_linked_entity "seat09"
												{unlink}
											}
											{delay 0.5
												{with_linked_entity "seat10"
													{unlink}
												}
												{delay 0.5
													{with_linked_entity "seat11"
														{unlink}
													}
													{delay 0.5
														{with_linked_entity "seat12"
															{unlink}
														}
														{delay 0.5
															{with_linked_entity "seat13"
																{unlink}
															}
															{delay 0.5
																{with_linked_entity "seat14"
																	{unlink}
																}
																{delay 0.5
																	{with_linked_entity "seat15"
																		{unlink}
																	}
																	{delay 0.5
																		{with_linked_entity "seat16"
																			{unlink}
																		}
																		{delay 0.5
																			{with_linked_entity "seat17"
																				{unlink}
																			}
																			{delay 0.5
																				{with_linked_entity "seat18"
																					{unlink}
																				}
																				{delay 0.5
																					{with_linked_entity "seat19"
																						{unlink}
																					}
																					{delay 0.5
																						{with_linked_entity "seat20"
																							{unlink}
																						}
																						{delay 10 {delete}}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}										
			}
		}
	}
}

(define "vehicle_paradrop"
	{"paradropper paradrop_%name"
		{on "paradrop"      ;// "paradrop" button pressed
			{delay 2
				{spawn "%spawntype" offset -150 0 -50 dir_velocity}
			}
		}
	}
)

("vehicle_paradrop" name(supplies) 	spawntype(ammo_pallet_para))
("vehicle_paradrop" name(m29) 		spawntype(paradrop_crate_m29))
("vehicle_paradrop" name(entac) 	spawntype(paradrop_crate_entac))
("vehicle_paradrop" name(m40) 		spawntype(m40_para))
("vehicle_paradrop" name(m102) 		spawntype(m102_para))
("vehicle_paradrop" name(mgr-3) 	spawntype(mgr-3_para))
("vehicle_paradrop" name(m151_m40) 	spawntype(m151_m40_para))
("vehicle_paradrop" name(m56) 		spawntype(m56_para))
("vehicle_paradrop" name(m551) 		spawntype(m551_para))

("vehicle_paradrop" name(zu2) 		spawntype(zu-2_para))
("vehicle_paradrop" name(gp1958) 	spawntype(gp1958_para))
("vehicle_paradrop" name(rpu14) 	spawntype(rpu-14_para))
("vehicle_paradrop" name(asu57) 	spawntype(asu57_para))
("vehicle_paradrop" name(asu85) 	spawntype(asu-85_para))
("vehicle_paradrop" name(bmd1) 		spawntype(bmd-1_para))

("vehicle_paradrop" name(gaz69_b10) 		spawntype(gaz-69_b10_pol_para))



{"paradropped" ;// versions of vehicles made exclusively for parachute deployment
	{on spawn
		{if altitude 3
			{volumes disable contact}			;// stops vehicles from "colliding" with plane when ejecting.
			{impulse up -1 forward 5 rnd_dir 3 com}
			{gravity 0.5}
			{delay 5 
				{with_linked_entity "attach"
					{unlink}
				}
				{gravity 1}
				{delay 3
					{volumes enable contact blast}
				}
			}
		}
	}
}


{"parachute_vehicle"  ;// big triple parachute rig used for vehicles
	{on spawn
		{start_sound "vehicle/deploy/tent"}
		{ani_play "flight_vehicle" callback}
		{delay 5
			{ani_play "landing_vehicle" callback}
			{if linked "vehicle"
				{unlink}
			}
		}
	}
	{on animation_end "landing_vehicle"
		{delay 1 {delete}}
	}
}