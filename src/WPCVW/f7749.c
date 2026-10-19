extern int realm_colors[];
draw_spell_list(p4, p6, p8, p10, p12, p14, p16)
char *p4;
char *p16;
{
	register int rsi;
	draw_spell_list_frame(p4, 0);
	defer_window_draw(p4);
	rsi = -3;
L7765:
	if (((p10 + rsi) < 0) || ((p10 + rsi) >= p14)) goto L77ed;
	set_cursor(p4, 1, (rsi + 3));
	print_message((*(int *)(p16 + ((p10 + rsi) << 1)) + 4000), p4, ((p12 == 1) && (!rsi) ? realm_colors[p8] : 18));
	if ((p12 != 1) || (rsi)) goto L77ed;
L77ca:
	if ((unsigned)p4[6] >= 18) goto L77ed;
	put_char(p4, 32, realm_colors[p8]);
	goto L77ca;
L77ed:
	rsi++;
	if (rsi <= 3) goto L7765;
	resume_window_draw(p4);
	refresh_window(p4);
}
