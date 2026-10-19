extern char g4326[];
extern char g4330[];
extern int bottom_line_win;
extern int g4f86;
extern int g4f88;
extern int g4fa8;
extern int g4fb0;
extern int main_window;
extern int maze_data;
extern int party_picture_win;
/* Clear the party picture window and build the game command windows. */
setup_game_windows()
{
	int i;
	char x2[80];
	g4f88 = 0;
	defer_window_draw(party_picture_win);
	i = 0;
L5d52:
	set_cursor(party_picture_win, 19, i);
	put_char_hi(party_picture_win, 27, 3);
	i++;
	if (i < 5) goto L5d52;
	resume_window_draw(party_picture_win);
	erase_window(main_window, 0);
	f0a42(bottom_line_win, 0);
	g4fb0 = create_window(20, 19, 20, 5, 8, -1, 0, 0);
	fill_window(g4fb0, 32, 3, 0);
	defer_window_draw(g4fb0);
	if (g4f88) goto L5e70;
	draw_glyph_2x2(g4fb0, 13, 1, 5, 6, 7, 8);
	draw_glyph_2x2(g4fb0, 10, 3, 1, 13, 3, 14);
	draw_glyph_4x2(g4fb0, 12, 3, 17);
	draw_glyph_2x2(g4fb0, 16, 3, 15, 10, 16, 12);
	goto L5eec;
L5e70:
	draw_glyph_2x2(g4fb0, 13, 1, 5, 6, 7, 8);
	draw_glyph_2x2(g4fb0, 10, 3, 1, 2, 3, 4);
	draw_glyph_4x2(g4fb0, 12, 3, 25);
	draw_glyph_2x2(g4fb0, 16, 3, 9, 10, 11, 12);
L5eec:
	i = 0;
L5ef1:
	set_cursor(g4fb0, 1, (i + 1));
	print_message((i + 1300), g4fb0, 18);
	i++;
	if (i < 4) goto L5ef1;
	resume_window_draw(g4fb0);
	setmem(20192, 8, 0);
	g4f86 = 0;
	maze_data = 0;
	g4fa8 = 0;
	i = 0;
L5f55:
	g4330[i] = 255;
	g4326[i] = 0;
	i++;
	if (i < 3) goto L5f55;
}
