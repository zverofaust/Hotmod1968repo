;SDL
{"air"
	{on detonate
		(include "hotmod_ground.inc")
		{if stuff "grenade fire"							; Molotov Grenades
			{spawn "ex_glass_ic_air"}

		else stuff "grenade size1"							; Anti-Personnel Grenades
			{spawn "ex_air_small"}

		else stuff "grenade size2"							; Anti-Personnel Grenades
			{spawn "ex_air_big2"}

		else stuff "grenade size3"							; Anti-Tank Grenades
			{spawn "ex_air_norm"}

		else stuff "grenade size4"							; Dynamite/Satchel Charges
			{spawn "ex_air_he_size3"}

		else stuff "big mortar"
			{spawn "ex_air_he_size3"}

		else stuff "small mortar"
			{spawn "ex_small"}

		else stuff "mortar"
			{spawn "ex_air_norm"}

		else stuff "shell size1 he"
			{spawn "ex_small"}

		else stuff "shell size2 he"
			{spawn "ex_air_norm"}

		else stuff "shell size3 he"
			{spawn "ex_air_he_size3"}

		else stuff "shell size4 he"
			{spawn "ex_air_he_size4"}

		else stuff "shell size5 he"
			{spawn "ex_air_he_size5"}

		else stuff "shell wp_size1"							; 50mm WP shells
			{spawn "ex_wp_size1"}								; initial explosion fx
			{spawn "shell_smoke_wp_size1"}						; actual smoke and vision volumes

		else stuff "shell wp_size2"							; 75-95mm WP shells
			{spawn "ex_wp_size2"}								; initial explosion fx
			{spawn "shell_smoke_wp_size2"}						; actual smoke and vision volumes

		else stuff "shell wp_size3"							; 100-149mm WP shells
			{spawn "ex_wp_size3"}								; initial explosion fx
			{spawn "shell_smoke_wp_size3"}						; actual smoke and vision volumes

		else stuff "shell wp_size4"							; 150+mm WP shells
			{spawn "ex_wp_size4"}								; initial explosion fx
			{spawn "shell_smoke_wp_size4"}						; actual smoke and vision volumes

		else stuff "shell smoke_size1"						; 50mm Smoke shells
			{spawn "mortar_smoke"}								; initial explosion fx
			{spawn "shell_smoke"}								; actual smoke and vision volumes

		else stuff "shell smoke_size2"						; 75-95mm Smoke shells
			{spawn "ex_sm_size2"}								; initial explosion fx
			{spawn "shell_smoke_size2"}							; actual smoke and vision volumes

		else stuff "shell smoke_size3"						; 150+mm Smoke shells
			{spawn "ex_sm_size3"}								; initial explosion fx
			{spawn "shell_smoke_size3"}							; actual smoke and vision volumes

		else stuff "shell smoke_size4"						; 150+mm Smoke shells
			{spawn "ex_sm_size4"}								; initial explosion fx
			{spawn "shell_smoke_size4"}							; actual smoke and vision volumes

		else stuff "bomb size1"								; 50-60kg bombs / explosives
			{spawn "ex_bomb_50kg"}

		else stuff "bomb size2"								; 100-200kg bombs / explosives
			{spawn "ex_bomb_100kg"}

		else stuff "bomb size3"								; 250kg+ bomb
			{spawn "ex_bomb_250kg"}

		else stuff "mine antipersonnel"						; Anti-Personnel Mines
			{spawn "ex_air_norm"}
			{spawn "grenade_shellhole" terrain_texmod}

		else stuff "glass ic"								; Ampulomet glass ball
			{spawn "ex_glass_ic_air"}
			{spawn "burn_piece" dir_velocity}
		}
	}
}
