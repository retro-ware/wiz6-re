extern int pc_spell_pts[];
extern int realm_colors[];
/* Draw the six realm icons with member's spell points and the cost line. */
draw_spell_points(win, member)
{
	register int i;
	defer_window_draw(win);
	fill_window(win, 0, 1, 0);
	draw_spell_window_frame(win);
	draw_glyph_at_dopt(win, 1, 1, 35);
	draw_glyph_at_dopt(win, 1, 3, 36);
	draw_glyph_at_dopt(win, 1, 5, 37);
	draw_glyph_at_dopt(win, 7, 1, 38);
	draw_glyph_at_dopt(win, 7, 3, 39);
	draw_glyph_at_dopt(win, 7, 5, 40);
	draw_glyph_at_dopt(win, 13, 3, 34);
	i = 0;
L6a0d:
	set_cursor(win, (i < 3 ? 3 : 9), (((i % 3) << 1) + 1));
	print_int(win, *(int *)((char *)pc_spell_pts + ((432 * member) + (i << 2))), 3, realm_colors[i]);
	i++;
	if (i < 6) goto L6a0d;
	i = 0;
L6a63:
	draw_char_at(win, (i + 15), 3, (i + 24));
	i++;
	if (i < 6) goto L6a63;
	set_cursor(win, 13, 5);
	print_message(3957, win, 18);
	set_cursor(win, 13, 6);
	i = 0;
L6ab8:
	put_char_hi(win, 32, 3);
	i++;
	if (i < 4) goto L6ab8;
	resume_window_draw(win);
	refresh_window(win);
}
