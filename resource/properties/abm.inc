(define "accuracy_by_motion" ; 	spreading depending on the speed of "body", "gun" volumes
	{AccuracyByMotion
		{MaxLinearSpeed %max_linear}				;km/h
		{ByLinearSpeed %accuracy_by_linear}
		{MaxAngularSpeed %max_angular}				;deg/s
		{ByAngularSpeed %accuracy_by_angular}
		{DisorderTime %disorder_time}				;s, how quickly aiming circle grows when moving
		{OrderTime %order_time}						;s, how quickly aiming circle shrinks when aiming/not moving
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
		max_linear(15) accuracy_by_linear(0.4)				;// aim accuracy on actor movement
		max_angular(45) accuracy_by_angular(0.4)				;// aim accuracy on aim movement
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