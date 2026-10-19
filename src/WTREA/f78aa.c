extern int realm_colors[];
draw_chest_spell_list(p4, p6, p8, p10, p12, p14, p16)
char *p4;
char *p16;
{
	register int rsi;
	draw_chest_list_box(p4, 0);
	defer_window_draw(p4);
	rsi = -2;
L78c6:
	if ((p10 + rsi) < 0) goto L794d;
	if ((p10 + rsi) >= p14) goto L794d;
	set_cursor(p4, 2, (rsi + 2));
	print_message((*(int *)(p16 + ((p10 + rsi) << 1)) + 4000), p4, ((p12 == 1) && (!rsi) ? realm_colors[p8] : 18));
	if ((p12 != 1) || (rsi)) goto L794d;
L792a:
	if ((unsigned)p4[6] >= 17) goto L794d;
	put_char(p4, 32, realm_colors[p8]);
	goto L792a;
L794d:
	rsi++;
	if (rsi <= 2) goto L78c6;
	resume_window_draw(p4);
	refresh_window(p4);
}
