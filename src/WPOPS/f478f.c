extern char *g43b4;
extern char *g43c2;
extern char *g4fae;
draw_ally_group()
{
	char x0[2];
	int l4;
	defer_window_draw(g4fae);
	fill_window(g4fae, 28, 3, 0);
	set_cursor(g4fae, 4, 0);
	print_message(3516, g4fae, 18);
	clear_window_area(g4fae, 0, 1, 21, 1);
	g43b4[414] = 0;
	l4 = 0;
	goto L4827;
L4802:
	if ((((unsigned)(g43b4 + (44 * l4))[34] >= 2) || ((g43b4 + (44 * l4))[17])) || ((g43b4 + (44 * l4))[16])) goto L4824;
	g43b4[414]++;
L4824:
	l4++;
L4827:
	if ((unsigned char)g43b4[413] > l4) goto L4802;
	set_cursor(g4fae, 1, 1);
	put_char(g4fae, (unsigned char)(((unsigned char)g43b4[413] + 48)), 4);
	g4fae[6]++;
	print_string(g4fae, (g43c2 + (((g43b4[413] == 1 ? 0 : 1) << 4) + ((unsigned char)g43b4[412] << 5))), 12);
	set_cursor(g4fae, 20, 1);
	put_char(g4fae, (unsigned char)(((unsigned char)g43b4[414] + 48)), 9);
	resume_window_draw(g4fae);
}
