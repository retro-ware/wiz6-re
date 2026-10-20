extern char g00cc[];
extern char pc_item_icon[];
extern char pc_item_qty[];
extern char pc_item_type[];
extern int g5324;
extern int g5326[];
f9827(p4, p6, p8, p10)
{
	int l2;
	register int rsi;
	f88c7(p4, 0);
	defer_window_draw(p4);
	rsi = -2;
L9845:
	if (((p8 + rsi) < 0) || ((p8 + rsi) >= g5324)) goto L99ca;
	set_cursor(p4, 2, (rsi + 2));
	l2 = g5326[(p8 + rsi)];
	if ((p10 != 1) || (rsi)) goto L9916;
	print_string(p4, ((l2 << 4) + 21330), 3);
	if (g00cc[(unsigned char)pc_item_type[((432 * p6) + (l2 << 3))]] == 1) {
	pad_to_column(p4, 15, 3);
	print_int(p4, (unsigned char)pc_item_qty[((432 * p6) + (l2 << 3))], 3, 1);
	} else {
	pad_to_column(p4, 18, 3);
	}
	goto L998e;
L9916:
	print_string_hi(p4, ((l2 << 4) + 21330), 3);
	if (g00cc[(unsigned char)pc_item_type[((432 * p6) + (l2 << 3))]] != 1) goto L998e;
	set_cursor(p4, 15, (rsi + 2));
	print_int(p4, (unsigned char)pc_item_qty[((432 * p6) + (l2 << 3))], 3, 18);
L998e:
	set_cursor(p4, 18, (rsi + 2));
	put_char_hi(p4, (unsigned char)(((unsigned char)pc_item_icon[((432 * p6) + (l2 << 3))] + 1)), 4);
L99ca:
	rsi++;
	if (rsi <= 2) goto L9845;
	resume_window_draw(p4);
	refresh_window(p4);
}
