
;/*================ Triggered by Hardcode Events Begin ================*/

{talk "ally die"			;// on signal "mandie", friendly unit dies in close proximity to speaker
	("human_phrases" args ally_die)
	{freq 0.8}
}

{talk "explosion"			;// on signal "explosion" ?
	("human_phrases" args alert)
	{freq 1}
}

{talk "kill_enemy"			;// on enemy killed (added to kill counter)
	("human_phrases" args enemy_is_destroyed)
	{freq 1}
}

{talk "i am rambo"			;// replaces kill_enemy sound after 3 to 6 units killed one time. Subsequent kills return to "kill_enemy"
	("human_phrases" args i_am_rambo)
	{freq 1}
}

{talk "throwing_grenade"	;// on throwing grenade
	("human_phrases" args throwing_a_grenade)
	{freq 1}
}

{talk "attack"				;// on executing an attack order
	("human_phrases" args attack)
	{freq 1}
}

{talk "executing_order"		;// on executing move order
	("human_phrases" args executing_an_order)
	{freq 1}
}

{talk "board to vehicle"	;// on executing board vehicle order
	("human_phrases" args executing_an_order)
	{freq 1}
}

{talk "selection"			;// on selecting an owned unit
	("human_phrases" args selection_of_units)
	{freq 1}
}

{talk "aimed_shot"			;// on start aiming for an aimed shot (unit ability + sniper)
	("human_phrases" args aimed_shot)
	{freq 1}
}

{talk "bazooka_shot"		;// on firing a rocket launcher by button (would need fixing to trigger on all rocket shots)
	("human_phrases" args bazooka_shot)
	{freq 1}
}

{talk "bullet missed"		;// if shot bullet missed its target, called for shooting unit
	("human_phrases" args missed_shot)
	{freq 0.2}
}

{talk "ill_take_it"			;// item was automatically distributed to squad member (if not ammo or grenade)
	("human_phrases" args ill_take_item)
	{freq 1}
}

{talk "ill_take_ammo"		;// ammo was distributed to squad member
	("human_phrases" args ill_take_item)
	{freq 1}
}

{talk "ill_take_grenades"	;// grenade was distributed to squad member
	("human_phrases" args ill_take_item)
	{freq 1}
}

{talk "cannot do this"		;// general reaction if unit cannot follow order: on trying to perform inventory operations while swimming, on trying to board vehicle with enemy or neutral units in one of its places (probably not used anymore)
	("human_phrases" args impossibility_to_execute_an_order)
	{freq 1}
}

{talk "too heavy item(s)"	;// on trying to receive item that would make carried stuff exceed max mass of 110kg
	("human_phrases" args item_too_heavy)
	{freq 1}
}

{talk "inventory full"		;// on trying to receive item that does not fit the inventory
	("human_phrases" args inventory_full)
	{freq 1}
}

{talk "repair begin"		;// on starting repairs
	("human_phrases" args executing_an_order)
	{freq 1}
}

{talk "repair_end"			;// on finishing repairs
	("human_phrases" args maintenance_is_finished)
	{freq 1}
}

{talk "cover"				;// on entering cover while in ongoing battle
	("human_phrases" args cover_enter)
	{freq 0.5}
}

;/*================ Triggered by Hardcode Events End ================*/


;/*================ Triggered by Interaction Scripts or Conditions Begin ================*/

{talk "advantage"			;// (condition) - friendly units outnumber detected enemies
	("human_phrases" args advantage)
	{freq 0.2}
}

{talk "alert_airborne"		;// (condition) - unit sees vehicle with "airborne" prop
	("human_phrases" args alert_airborne)
	{freq 0.2}
}

{talk "alert_tank"			;// (condition) - unit sees vehicle with "tank" prop
	("human_phrases" args alert_tank)
	{freq 0.5}
}

{talk "alert_at_gun"		;// (condition) - unit sees vehicle with "at_gun" prop
	("human_phrases" args alert_at_gun)
	{freq 0.5}
}

;{talk "alert_mgun"			;// (condition) - unit sees vehicle with "mg_stan" prop
;	("human_phrases" args alert_at_gun)
;	;("human_phrases" args alert_mgun)
;	{freq 0.5}
;}

{talk "idle"				;// (condition) - called when not in combat and does not detect any enemies
	("human_phrases" args idle)
	{freq 0.05}
}

{talk "in_battle"			;// (condition) - called when unit is in "battle" brain state
	("human_phrases" args in_battle)
	{freq 0.2}
}

{talk "wounded"				;// (condition) - called when unit's health drops below a percentage of it's full health
	("human_phrases" args cries_for_medic)
	{freq 1}
}

{talk "retreat"				;// (condition) - called when detected enemies greatly outnumber friendly unit
	("human_phrases" args retreat)
	{freq 1}
}

{talk "death_cry"			;// (interaction script) - called on death of unit
	("human_phrases" args death_cry)
	{freq 1}
}

{talk "injuring"			;// (interaction script) - called when unit receives damage to health
	("human_phrases" args scream_of_pain)
	{freq 0.8}
}

{talk "bleeding_out"		;// (interaction script) - called when unit is in personage (revive-able state)
	("human_phrases" args cries_for_medic)
	{freq 0.5}
}

;/*================ Triggered by Interaction Scripts or Conditions End ================*/