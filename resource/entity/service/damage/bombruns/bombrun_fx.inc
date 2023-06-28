	{tag "crosshair"}
	{NoGetShadows}
	{spriteview 
		{sprite "pointer_halo"
			{scale 5}
			{highlight 0xffffff}
			{Light
				{Peak
					{min 0.05}
					{max 0.20}
				}
			}
			{visibility 0.3}
			{timer
				{mode play }
				{duration 1}
			}
		}
		{ground }
		{layer grounddynamic}
		{Offset 0 0 10}
	}
	{SpriteView
		{Sprite "crosshair.ebm"
			{Light
				{Peak
					{min 0.2}
					{max 0.20}
				}
			}
			{Highlight 0xffffff}
			{scale 1.5
				{Peak
					{min 1.4}
					{max 1.5}
				}
			}
			{visibility 0.1}
			{Timer
				{Mode play}
				{Duration 0.2}
			}
		}
		{ground }
;		{layer debug}
;		{layer alphasort}
		{layer grounddynamic}
		{Offset 0 0 35}
	}
