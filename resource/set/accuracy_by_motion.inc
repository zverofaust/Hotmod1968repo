(define "accuracy_by_motion" ;  spreading depending on the speed of "body", "gun" volumes
	{AccuracyByMotion
        {MaxLinearSpeed %max_linear}               ;km/h
        {ByLinearSpeed %accuracy_by_linear}
        {MaxAngularSpeed %max_angular}             ;deg/s
        {ByAngularSpeed %accuracy_by_angular}
        {DisorderTime %disorder_time}              ;s
        {OrderTime %order_time}                    ;s
    }
)

(define "abm_low"
    ("accuracy_by_motion"
        max_linear(15) accuracy_by_linear(0.3)
        max_angular(25) accuracy_by_angular(0.3)
        disorder_time(0) order_time(0.75)
    )
)
(define "abm_medium"
    ("accuracy_by_motion"
        max_linear(15) accuracy_by_linear(0.4)
        max_angular(25) accuracy_by_angular(0.4)
        disorder_time(0) order_time(0.75)
    )
)
(define "abm_high"
    ("accuracy_by_motion"
        max_linear(15) accuracy_by_linear(0.5)
        max_angular(25) accuracy_by_angular(0.5)
        disorder_time(0) order_time(0.75)
    )
)

(define "abm_mgun"
	("accuracy_by_motion"
		max_linear(10) accuracy_by_linear(0.5)
		max_angular(30) accuracy_by_angular(0.5)
		disorder_time(0) order_time(0.75)
	)
)
(define "abm_zenite"
    ("accuracy_by_motion"
        max_linear(10) accuracy_by_linear(0.5)
        max_angular(15) accuracy_by_angular(0.5)
        disorder_time(0) order_time(0.75)
    )
)
(define "abm_howitzer"
    ("accuracy_by_motion"
        max_linear(5) accuracy_by_linear(0.5)
        max_angular(5) accuracy_by_angular(0.5)
        disorder_time(0) order_time(5.0)
    )
)