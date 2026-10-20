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
	do {
	if (((p8 + rsi) >= 0) && ((p8 + rsi) < g5324)) {
	set_cursor(p4, 2, (rsi + 2));
	l2 = g5326[(p8 + rsi)];
	if ((p10 == 1) && (!rsi)) {
	print_string(p4, ((l2 << 4) + 21330), 3);
	if (g00cc[(unsigned char)pc_item_type[((432 * p6) + (l2 << 3))]] == 1) {
	pad_to_column(p4, 15, 3);
	print_int(p4, (unsigned char)pc_item_qty[((432 * p6) + (l2 << 3))], 3, 1);
	} else {
	pad_to_column(p4, 18, 3);
	}
	} else {
	print_string_hi(p4, ((l2 << 4) + 21330), 3);
	if (g00cc[(unsigned char)pc_item_type[((432 * p6) + (l2 << 3))]] == 1) {
	set_cursor(p4, 15, (rsi + 2));
	print_int(p4, (unsigned char)pc_item_qty[((432 * p6) + (l2 << 3))], 3, 18);
	}
	}
	set_cursor(p4, 18, (rsi + 2));
	put_char_hi(p4, (unsigned char)(((unsigned char)pc_item_icon[((432 * p6) + (l2 << 3))] + 1)), 4);
	}
	rsi++;
	} while (rsi <= 2);
	resume_window_draw(p4);
	refresh_window(p4);
}
