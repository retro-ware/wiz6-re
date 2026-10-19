extern char pc_item_icon[];
extern int g51b8;
extern int g51ba[];
extern int g5346[];
/* Draw five rows of member's item list around sel. */
draw_item_list(win, member, sel, highlight)
char *win;
{
	int slot;
	register int row;
	draw_list_frame_dopt(win, 0);
	defer_window_draw(win);
	row = -2;
L76f3:
	if ((sel + row) < 0) goto L7844;
	if ((sel + row) >= g51b8) goto L7844;
	set_cursor(win, 2, (row + 2));
	slot = g51ba[(sel + row)];
	if (highlight != 1) goto L77b3;
	if (row) goto L77b3;
	print_string(win, ((slot << 4) + 20966), 3);
	if (g5346[slot] <= 0) goto L7797;
L775f:
	if ((unsigned)win[6] >= 15) goto L7779;
	put_char(win, 32, 3);
	goto L775f;
L7779:
	print_int(win, g5346[slot], 3, 1);
	goto L77b1;
L7797:
	if ((unsigned)win[6] >= 18) goto L77b1;
	put_char(win, 32, 3);
	goto L7797;
L77b1:
	goto L7808;
L77b3:
	print_string_hi(win, ((slot << 4) + 20966), 3);
	if (g5346[slot] <= 0) goto L7808;
	set_cursor(win, 15, (row + 2));
	print_int(win, g5346[slot], 3, 18);
L7808:
	set_cursor(win, 18, (row + 2));
	put_char_hi(win, (unsigned char)(((unsigned char)pc_item_icon[((432 * member) + (slot << 3))] + 1)), 4);
L7844:
	row++;
	if (row <= 2) goto L76f3;
	resume_window_draw(win);
	refresh_window(win);
}
