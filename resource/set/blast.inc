;/*----------------------*/

;// Smoke Shells
(define "smoke_blast"						;// All cannon Smoke Shells
	{damage blastwave
		{energy 1.5}
		{area 2 5}
		{ground_interaction_radius 0.2}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)
;// Shell mass < 5 kg
(define "he_level_1" ;"he_small_blast"
	{damage blastwave
		{energy (+ (/ %weight 2.5) (+ 0.9 %filler))}
		{area (* 0.5 (+ (/ %weight 10) (* 5 (+ %filler 0.25))))		(+ (/ %weight 10) (* 5 (+ %filler 0.25)))}
		{ground_interaction_radius 0.25}
	}
	{damage add blastwave
		{energy (+ 1.1 (* 0.75 %filler))}
		{area (+ (* %weight 0.25) (+ 1 (* 5 %filler))) 			(+ (* %weight 0.5) (+ 4.5 (* 5 %filler))) }
		{ground_interaction_radius 0} 		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

;// Shell mass > 5kg and Fill mass < 1kg
(define "he_level_2" ;"he_medium_blast"
	{damage blastwave
		{energy (+ (/ %weight 5) (* 3 (+ %filler 0.25)))}
		{area 0.4 0.5}
		{ground_interaction_radius 0.5}
	}
	{damage add blastwave
		{energy (+ 0.55 (- 1 (/ %filler %weight)))}
		{area (+ (* %weight 0.25) (+ 2 (* 3 %filler)))			(+ (* %weight 0.5) (+ 3.5 (* 3 %filler)))}
		{ground_interaction_radius 0} 		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

;// Shell mass 14 - 35kg and Fill mass 1 - 5kg
(define "he_level_3" ;"he_large_blast"
	{damage blastwave
		{energy (+ (/ %weight 20) (+ 5 (* %filler 1)))}
		{area 0.5 1.00}
		{ground_interaction_radius 1.25}
	}
	{damage add blastwave
		{energy (+ 2 (+ (/ %weight 20) (* 1 (- 1 (/ %filler %weight)))))}
		{area (+ (* %weight 0.1) (+ 0 (* 0.1 %filler)))			(+ (* %weight 0.2) (+ 0 (* 0.1 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
	{damage add blastwave
		{energy (+ 0.55 (- 1 (/ %filler %weight)))}
		{area (+ (* %weight 0.1) (+ 5.5 (* 0.75 %filler)))			(+ (* %weight 0.11) (+ 9 (* 1 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

;// Shell mass > 35kg and Fill mass 5 - 10kg
(define "he_level_4" ;"he_super_blast"
	{damage blastwave
		{energy (+ (/ %weight 20) (+ 6 (* %filler 1)))}
		{area 1.1 2.2}
		{ground_interaction_radius 0.6}
	}
	{damage add blastwave
		{energy (+ 2 (+ (/ %weight 20) (* 2 (- 1 (/ %filler %weight)))))}
		{area (+ (* %weight 0.05) (+ 0 (* 0.5 %filler)))			(+ (* %weight 0.1) (+ 0 (* 0.75 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
	{damage add blastwave
		{energy (+ 0.6 (- 1 (/ %filler %weight)))}
		{area (+ (* %weight 0.1) (+ 5 (* 0.5 %filler)))			(+ (* %weight 0.15) (+ 6 (* 1.2 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

;// Fill mass 10 - 25kg
(define "he_level_5" ;"he_mega_blast"
	{damage blastwave
		{energy (+ (/ %weight 25) (+ 10 (* %filler 0.3)))}
		{area 1.5 2.5}
		{ground_interaction_radius 0.8}
	}
	{damage add blastwave
		{energy (+ 2.75 (+ (/ %weight 20) (* 1.5 (- 1 (/ %filler %weight)))))}
		{area (+ (* %weight 0.03) (+ 2.25 (* 0.25 %filler)))		(+ (* %weight 0.04) (+ 5 (* 0.3 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
	{damage add blastwave
		{energy (+ 0.6 (- 1 (/ %filler %weight)))}
		{area (+ (* %weight 0.03) (+ 9 (* 0.25 %filler)))		(+ (* %weight 0.029) (+ 17 (* 0.26 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

;// Fill mass 25 - 100kg
(define "he_level_6"
	{damage blastwave
		{energy (* %filler 0.75)}
		{area (+ 2 (/ %filler 100)) (+ 4 (/ %filler 50))}
		{ground_interaction_radius 0.8}
	}
	{damage add blastwave
		{energy (+ (* %weight 0.005) (+ 5 (* 0.15 %filler)))}
		{area (+ (* %weight 0.005) (+ 7 (* 0.1 %filler)))			(+ (* %weight 0.005) (+ 14 (* 0.05 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
	{damage add blastwave
		{energy (+ 0.7 (- 1 (/ %filler %weight)))}
		{area (+ (* %weight 0.004) (+ 13 (* 0.104 %filler)))		(+ (* %weight 0.004) (+ 22 (* 0.11 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

;// Fill mass 100kg +
(define "he_level_7"
	{damage blastwave
		{energy (* %filler 0.5)}
		{area (+ 2 (/ %filler 100)) (+ 4 (/ %filler 50))}
		{ground_interaction_radius 0.8}
	}
	{damage add blastwave
		{energy (+ (* %weight 0.005) (+ 5 (* 0.09 %filler)))}
		{area (+ (* %weight 0.005) (+ 5 (* 0.055 %filler)))			(+ (* %weight 0.005) (+ 14 (* 0.055 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
	{damage add blastwave
		{energy (+ 0.75 (- 1 (/ %filler %weight)))}
		{area (+ (* %weight 0.005) (+ 10 (* 0.095 %filler)))		(+ (* %weight 0.005) (+ 20 (* 0.1 %filler)))}
		{ground_interaction_radius 0}		;// value is multiplied by 2nd value of area to deterimine is blast is close enough to ground to trigger terrain fx
	}
)

;/*----------------------*/
