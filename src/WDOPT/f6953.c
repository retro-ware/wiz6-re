#asm
	extrn draw_glyph_at_dopt_:near
	extrn set_cursor_:near
#endasm
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
#asm
	db 0b8h,022h,000h,050h,0b8h,003h,000h,050h,0b8h,00dh,000h,050h,0ffh,076h,004h
	call draw_glyph_at_dopt_
	db 083h,0c4h,008h,0beh,000h,000h
#endasm
L6a0d:
	set_cursor(win, (i < 3 ? 3 : 9), (((i % 3) << 1) + 1));
	print_int(win, *(int *)((char *)pc_spell_pts + ((432 * member) + (i << 2))), 3, realm_colors[i]);
	i++;
	if (i < 6) goto L6a0d;
	for (i = 0; i < 6; i++) {
	draw_char_at(win, (i + 15), 3, (i + 24));
	}
	set_cursor(win, 13, 5);
	print_message(3957, win, 18);
#asm
	db 0b8h,006h,000h,050h,0b8h,00dh,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0beh,000h,000h
#endasm
L6ab8:
	put_char_hi(win, 32, 3);
	i++;
	if (i < 4) goto L6ab8;
	resume_window_draw(win);
	refresh_window(win);
}
