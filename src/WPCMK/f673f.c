extern int realm_colors[];
draw_spell_list(p4, p6, p8, p10, p12, p14)
char *p4;
char *p14;
{
	register int rsi;
	draw_list_box(p4, 0);
	defer_window_draw(p4);
	rsi = -3;
L675b:
	if ((p8 + rsi) < 0) goto L67e3;
	if ((p8 + rsi) >= p12) goto L67e3;
	set_cursor(p4, 1, (rsi + 3));
	print_message((*(int *)(p14 + ((p8 + rsi) << 1)) + 4000), p4, ((p10 == 1) && (!rsi) ? realm_colors[p6] : 18));
	if (p10 != 1) goto L67e3;
	if (rsi) goto L67e3;
L67c0:
	if ((unsigned)p4[6] >= 18) goto L67e3;
	put_char(p4, 32, realm_colors[p6]);
	goto L67c0;
L67e3:
	rsi++;
	if (rsi <= 3) goto L675b;
	resume_window_draw(p4);
	refresh_window(p4);
}
