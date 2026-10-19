extern int realm_colors[];
/* Draw the scrolling spell list of a realm. */
draw_spell_list(win, member, realm, sel, highlight, p14, p16)
char *win;
char *p16;
{
	register int row;
	draw_list_frame_dopt(win, 0);
	defer_window_draw(win);
	row = -2;
L6b59:
	if ((sel + row) < 0) goto L6be0;
	if ((sel + row) >= p14) goto L6be0;
	set_cursor(win, 2, (row + 2));
	print_message((*(int *)(p16 + ((sel + row) << 1)) + 4000), win, ((highlight == 1) && (!row) ? realm_colors[realm] : 18));
	if (highlight != 1) goto L6be0;
	if (row) goto L6be0;
L6bbd:
	if ((unsigned)win[6] >= 17) goto L6be0;
	put_char(win, 32, realm_colors[realm]);
	goto L6bbd;
L6be0:
	row++;
	if (row <= 2) goto L6b59;
	resume_window_draw(win);
	refresh_window(win);
}
