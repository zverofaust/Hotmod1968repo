(define "atgm_signal"
	{DecalView 
		{Sprite "signal_zone.ebm"
			{Light 1}
			{PreScaleX (* 0.30 1)}
			{PreScaleY (* 0.30 1)}
			{Visibility 0.25}
			{PreTurn 90}
		}
		{offset 0 0 10}
		{ground}
		{layer alpha}
		{dynamic}
		{useDirection}
	}
)