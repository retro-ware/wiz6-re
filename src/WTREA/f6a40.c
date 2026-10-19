draw_trap_list(p4, p6, p8, p10, p12)
char *p4;
char *p12;
{
	register int rsi;
	draw_chest_list_box(p4, 0);
	defer_window_draw(p4);
	rsi = -2;
L6a5c:
	if (((p6 + rsi) < 0) || ((p6 + rsi) >= p10)) goto L6acc;
	set_cursor(p4, 2, (rsi + 2));
	print_message((*(int *)(p12 + ((p6 + rsi) << 1)) + 5300), p4, ((p8 == 1) && (!rsi) ? 6 : 18));
	if ((p8 != 1) || (rsi)) goto L6acc;
L6ab2:
	if ((unsigned)p4[6] >= 17) goto L6acc;
	put_char(p4, 32, 6);
	goto L6ab2;
L6acc:
	rsi++;
	if (rsi <= 2) goto L6a5c;
	resume_window_draw(p4);
	refresh_window(p4);
}
