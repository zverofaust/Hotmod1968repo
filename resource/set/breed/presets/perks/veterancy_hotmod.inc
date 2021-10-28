(define "vet"
	{"lvl_1"	%0} ;4
	{"lvl_2"	%1} ;10
	{"lvl_3"	%2} ;20
	{"lvl_4"	%3} ;30
	{"lvl_5"	%4} ;40
	{"lvl_6"	%5} ;60
	{"lvl_7"	%6} ;80
	{"lvl_8"	%7} ;100
)
(define "vet_mp"
	(mod "mp"
		{"lvl_1"	%0} ;2
		{"lvl_2"	%1} ;5
		{"lvl_3"	%2} ;10
		{"lvl_4"	%3} ;15
		{"lvl_5"	%4} ;20
		{"lvl_6"	%5} ;30
		{"lvl_7"	%6} ;40
		{"lvl_8"	%7} ;50
	)
)

(define "veterancy_lvl_0"
	("vet"    args 4 10 20 30 40 60 80 100)
	("vet_mp" args 2 5  10 15 20 30 40 50)
)
(define "veterancy_lvl_1"
	("vet"    args 0 6 16 26 36 56 76 96)
	("vet_mp" args 0 3 8  13 18 28 38 48)
)
(define "veterancy_lvl_2"
	("vet"    args -1 0 10 20 30 50 70 90)
	("vet_mp" args -1 0 5  10 15 25 35 45)
)
(define "veterancy_lvl_3"
	("vet"    args -1 -1 0 10 20 40 60 80)
	("vet_mp" args -1 -1 0 5  10 20 30 40)
)
(define "veterancy_lvl_4"
	("vet"    args -1 -1 -1 0 10 30 50 70)
	("vet_mp" args -1 -1 -1 0 5  15 25 35)
)
(define "veterancy_lvl_5"
	("vet"    args -1 -1 -1 -1 0 20 40 60)
	("vet_mp" args -1 -1 -1 -1 0 10 20 30)
)
(define "veterancy_lvl_6"
	("vet"    args -1 -1 -1 -1 -1 0 20 40)
	("vet_mp" args -1 -1 -1 -1 -1 0 10 20)
)
(define "veterancy_lvl_7"
	("vet"    args -1 -1 -1 -1 -1 -1 0 20)
	("vet_mp" args -1 -1 -1 -1 -1 -1 0 10)
)
(define "veterancy_lvl_8"
	("vet"    args -1 -1 -1 -1 -1 -1 -1 0)
	("vet_mp" args -1 -1 -1 -1 -1 -1 -1 0)
)