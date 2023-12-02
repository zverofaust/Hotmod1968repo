(define "accuracy_by_motion" ; 	spreading depending on the speed of "body", "gun" volumes
	{AccuracyByMotion
		{MaxLinearSpeed %max_linear}				;(KPH) How fast must actor be moving to trigger loss of accuracy
		{ByLinearSpeed %accuracy_by_linear}			;(Scale Factor) Maximum inaccuracy when ACTOR is moving (Scale factor of base accuracy, ie 1.0 = 100%, 0.1 = 10%)
		{MaxAngularSpeed %max_angular}				;(Deg/s) How fast turret/IK aim must be moving to trigger loss of accuracy
		{ByAngularSpeed %accuracy_by_angular}		;(Scale Factor) Maximum inaccuracy when AIMPOINT is moving (Scale factor of base accuracy, ie 1.0 = 100%, 0.1 = 10%)
		{DisorderTime %disorder_time}				;(Seconds) How fast to reach maximum inaccuracy (higher # = slower to lose accuracy)
		{OrderTime %order_time}						;(Seconds) How fast to reach maximum accuracy (higher # = slower to lay gun)
	}
)

;----------------------------------------------ABMs----------------------------------------------
(define "abm_dymamic"	; general setting used by most vehicles
	("accuracy_by_motion"
		max_linear(10) accuracy_by_linear(0.25)
		max_angular(8) accuracy_by_angular(0.35)
		disorder_time(%dispersion) order_time(%zeroing)
	)
)

(define "abm_dymamic_td"	; general setting used by Tank Destroyers, which conserves more accuracy on the rotation of the main gun
	("accuracy_by_motion"
		max_linear(10) accuracy_by_linear(0.4)
		max_angular(8) accuracy_by_angular(0.50)
		disorder_time(%dispersion) order_time(%zeroing)
	)
)

(define "abm_dymamic_autocannon"	; auto cannon tanks that are not AA vehicles
	("accuracy_by_motion"
		max_linear(10) accuracy_by_linear(0.30)
		max_angular(12) accuracy_by_angular(0.35)
		disorder_time(%dispersion) order_time(%zeroing)
	)
)
(define "abm_dymamic_aaa"
	("accuracy_by_motion"
		max_linear(10) accuracy_by_linear(0.25)
		max_angular(10) accuracy_by_angular(0.25)
		disorder_time(%dispersion) order_time(%zeroing)
	)
)
(define "abm_dymamic_aa"
	("accuracy_by_motion"
		max_linear(10) accuracy_by_linear(0.4)
		max_angular(12) accuracy_by_angular(0.4)
		disorder_time(%dispersion) order_time(%zeroing)
	)
)
(define "abm_dymamic_stabilised"
	("accuracy_by_motion"
		max_linear(20) accuracy_by_linear(0.55)
		max_angular(10) accuracy_by_angular(0.55)
		disorder_time(%dispersion) order_time(%zeroing)
	)
)
(define "abm_dymamic_stabilised_v" ; Stabilized on vertical axis only
	("accuracy_by_motion"
		max_linear(15) accuracy_by_linear(0.5)
		max_angular(5) accuracy_by_angular(0.35)
		disorder_time(%dispersion) order_time(%zeroing)
	)
)
(define "abm_dymamic_poor"
	("accuracy_by_motion"
		max_linear(10) accuracy_by_linear(0.25)
		max_angular(5) accuracy_by_angular(0.25)
		disorder_time(%dispersion) order_time(%zeroing)
	)
)
(define "abm_dymamic_gun"    ;for AT guns and cannons, have the benefit that they can traverse much more without losing aim.
	("accuracy_by_motion"
		max_linear(5) accuracy_by_linear(0.5)
		max_angular(8) accuracy_by_angular(0.5)
		disorder_time(%dispersion) order_time(%zeroing)
	)
)

(define "abm_dymamic_mortar"	;for Mortar cannons
	("accuracy_by_motion"
		max_linear(5) accuracy_by_linear(0.5)
		max_angular(8) accuracy_by_angular(0.5)
		disorder_time(%dispersion) order_time(%zeroing)
	)
)

(define "abm_dymamic_rocket"
	("accuracy_by_motion"
		max_linear(5) accuracy_by_linear(0.4)
		max_angular(8) accuracy_by_angular(0.4)
		disorder_time(%dispersion) order_time(%zeroing)
	)
)


;-----------------------------------------Small--------------------------------

(define "abm_mgun"
	("accuracy_by_motion"
		max_linear(8) accuracy_by_linear(0.4)
		max_angular(30) accuracy_by_angular(0.5)
		disorder_time(0.6) order_time(2)
	)
)
(define "abm_human"
	("accuracy_by_motion"
		max_linear(15) accuracy_by_linear(0.5)				;// aim accuracy on actor movement
		max_angular(15) accuracy_by_angular(0.4)				;// aim accuracy on aim movement
		disorder_time(0.5) order_time(2.0)
	)
)

;------------------------------------------Plane-------------------------------

(define "abm_rear_mg"
	("accuracy_by_motion"
		max_linear(50) accuracy_by_linear(0.8)
		max_angular(5) accuracy_by_angular(0.4)
		disorder_time(1) order_time(2)
	)
)

;;;;;;;;;;;;;;;;;; HOTMOD added

(define "hm68_abm_mortar"	;for Mortar cannons
	("accuracy_by_motion"
		max_linear(5) accuracy_by_linear(0.5)
		max_angular(8) accuracy_by_angular(0.5)
		disorder_time(1) order_time(3)
	)
)

(define "hm68_abm_gun"    ;for AT guns and cannons
	("accuracy_by_motion"
		max_linear(10) accuracy_by_linear(0.2)
		max_angular(8) accuracy_by_angular(0.5)
		disorder_time(1) order_time(7)
	)
)

(define "hm68_abm_artillery"    ;for towed artillery
	("accuracy_by_motion"
		max_linear(10) accuracy_by_linear(0.2)
		max_angular(8) accuracy_by_angular(0.5)
		disorder_time(1) order_time(7)
	)
)

(define "hm68_abm_mrl"    ;for MRLs
	("accuracy_by_motion"
		max_linear(10) accuracy_by_linear(0.2)
		max_angular(8) accuracy_by_angular(0.5)
		disorder_time(1) order_time(7)
	)
)

(define "hm68_abm_aa"	; stationary AA mounts
	("accuracy_by_motion"
		max_linear(10) accuracy_by_linear(0.4)
		max_angular(1) accuracy_by_angular(0.4)
		disorder_time(1) order_time(7)
	)
)

(define "hm68_abm_atgm"	; settings for atgm launchers
	("accuracy_by_motion"
		max_linear(100) accuracy_by_linear(1)
		max_angular(100) accuracy_by_angular(1)
		disorder_time(1) order_time(7)
	)
)

(define "hm68_abm_auto"	; auto cannon tanks
	("accuracy_by_motion"
		max_linear(10) accuracy_by_linear(0.2)
		max_angular(1) accuracy_by_angular(0.5)
		disorder_time(1) order_time(7)
	)
)

(define "hm68_abm_spaa"	; self-propelled AA with basic hand-crank controls
	("accuracy_by_motion"
		max_linear(10) accuracy_by_linear(0.4)
		max_angular(1) accuracy_by_angular(0.4)
		disorder_time(1) order_time(7)
	)
)

(define "hm68_abm_td"	; settings for vehicles without turrets
	("accuracy_by_motion"
		max_linear(10) accuracy_by_linear(0.1)
		max_angular(1) accuracy_by_angular(0.25)
		disorder_time(1) order_time(7)
	)
)

(define "hm68_abm_td_range"	; settings for vehicles without turrets but with coincidence rangefinders, ie SU-122-54
	("accuracy_by_motion"
		max_linear(10) accuracy_by_linear(0.1)
		max_angular(1) accuracy_by_angular(0.25)
		disorder_time(1) order_time(3.5)
	)
)

(define "hm68_abm_spg"	; settings for self-propelled artillery with lower direct fire ability
	("accuracy_by_motion"
		max_linear(5) accuracy_by_linear(0.2)
		max_angular(1) accuracy_by_angular(0.5)
		disorder_time(1) order_time(7)
	)
)

(define "hm68_abm_nostab_norange"	; general setting used by most vehicles, unstabilized & without rangefinder
	("accuracy_by_motion"
		max_linear(10) accuracy_by_linear(0.15)
		max_angular(1) accuracy_by_angular(0.5)
		disorder_time(1) order_time(7)
	)
)

(define "hm68_abm_stab_norange"	; stabilizer, no rangefinder
	("accuracy_by_motion"
		max_linear(20) accuracy_by_linear(0.4)
		max_angular(15) accuracy_by_angular(0.5)
		disorder_time(1.5) order_time(7)
	)
)

(define "hm68_abm_1stab_norange"	; 1-plane stabilizer, no rangefinder, a la T-54A
	("accuracy_by_motion"
		max_linear(15) accuracy_by_linear(0.35)
		max_angular(15) accuracy_by_angular(0.5)
		disorder_time(1.5) order_time(7)
	)
)

(define "hm68_abm_nostab_range"	; no stabilizer, rangefinder
	("accuracy_by_motion"
		max_linear(10) accuracy_by_linear(0.15)
		max_angular(15) accuracy_by_angular(0.5)
		disorder_time(1) order_time(3.5)
	)
)

(define "hm68_abm_stab_range"	; stabilizer, rangefinder
	("accuracy_by_motion"
		max_linear(20) accuracy_by_linear(0.6)
		max_angular(15) accuracy_by_angular(0.5)
		disorder_time(2) order_time(3.5)
	)
)

(define "hm68_abm_stab_lrange"	; stabilizer, laser rangefinder
	("accuracy_by_motion"
		max_linear(20) accuracy_by_linear(0.6)
		max_angular(15) accuracy_by_angular(0.5)
		disorder_time(2) order_time(2)
	)
)