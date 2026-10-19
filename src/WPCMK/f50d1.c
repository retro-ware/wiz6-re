extern int char_spell_points[];
extern int char_spell_points_max[];
extern int realm_colors[];
extern int sheet_win;
draw_spell_points()
{
	int l2;
	l2 = 0;
L50dc:
	set_cursor(sheet_win, (l2 < 3 ? 3 : 13), (((l2 % 3) << 1) + 14));
	print_int(sheet_win, *(int *)((char *)char_spell_points + (l2 << 2)), 3, realm_colors[l2]);
	put_char(sheet_win, 47, 9);
	print_int(sheet_win, *(int *)((char *)char_spell_points_max + (l2 << 2)), 3, realm_colors[l2]);
	l2++;
	if (l2 < 6) goto L50dc;
}
