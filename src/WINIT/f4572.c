extern int game_state;
/* WINIT entry: dispatch on the overlay command (0 init data, 1 title, 2 main screen, 8 graveyard). */
ovmain()
{
	switch (game_state) {
case 0:
	init_game_data();
	goto L459f;
case 1:
	show_title_sequence();
	goto L459f;
case 8:
	show_graveyard();
	goto L459f;
case 2:
	init_main_screen();
	goto L459f;
	}
L459f:
	return 0;
}
