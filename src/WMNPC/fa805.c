extern char g00cc[];
extern char pc_item_flags[];
extern char pc_item_qty[];
extern int g51ba;
extern int g51be;
extern int g527a;
extern int pc_gold[];
extern int pc_item_id[];
extern int trap_guess_letters;
fa805(p4, p6, p8)
{
	int l2;
	int l4;
	char x4[13];
	char l18;
	char l19;
	char x19[35];
	char l55;
	char l56;
	int l58;
	char l62[4];
	char x62[14];
	int l78;
	int l80;
	int l82;
	int l84;
	char x84[4];
	int l90;
	int l94[2];
	l2 = 0;
	l84 = *(int *)((char *)pc_item_id + ((432 * p6) + (p8 << 3)));
	access_scenario_record(1, &l78, l84, 0);
	if ((l80 = (((unsigned char)l56 * (unsigned char)l55) + l58)) < 1) {
	l80 = 1;
	}
	if ((l82 = (unsigned char)pc_item_qty[((432 * p6) + (p8 << 3))]) < 1) {
	l82 = 1;
	}
	if (g00cc[(unsigned char)l18] != 1) goto La8b2;
	*(long *)(l62 + 0) = ((long)l82 * *(long *)(l62 + 0));
	goto La900;
La8b2:
	*(long *)(l62 + 0) = ((((*(long *)(l62 + 0) * 100L) / (long)l80) * (long)l82) / 100L);
La900:
	*(long *)(l62 + 0) = (((long)g51ba * *(long *)(l62 + 0)) / 100L);
	if (((!((unsigned char)l19 & 2)) || (l84 == trap_guess_letters)) || (l84 == g51be)) goto La94e;
	fa645(1529);
	return l2;
La94e:
	if ((*(long *)(l62 + 0) > 0L) || (l84 == trap_guess_letters)) goto La974;
	fa645(1518);
	return l2;
La974:
	if (!((unsigned char)pc_item_flags[((432 * p6) + (p8 << 3))] & 1)) goto La99f;
	fa645(1528);
	return l2;
La99f:
	get_message(1525, 20948);
	long_to_string(*(int *)(l62 + 0), *(int *)(l62 + (0 + 2)), 21116);
	replace_char_with_string(20948, 21116, 36);
	fill_window(p4, 32, 3, 0);
	refresh_window(p4);
	set_cursor(p4, (10 - ((strlen(20948) + 1) / 2)), 1);
	print_string_hi(p4, 20948, 3);
	for (l4 = 0; l4 <= 1; l4++) {
	l94[l4] = 1;
	}
	l90 = -1;
	l4 = f5e0c(p4, 1526, l94, 6, 3, 5, 1, 5, 0, 1);
	if (!l4) {
	l84 = *(int *)((char *)pc_item_id + ((432 * p6) + (p8 << 3)));
	f6835(p6, p8);
	*(long *)((char *)pc_gold + (432 * p6)) += *(long *)(l62 + 0);
	f5078(p6, g527a);
	l2 = f7f76(p6, 3, l84, 0, 0);
	}
	return l2;
}
