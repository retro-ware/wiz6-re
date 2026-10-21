extern char g00cc[];
extern char pc_item_count[];
extern char pc_item_flags[];
extern char pc_item_icon[];
extern char pc_item_qty[];
extern char pc_item_type[];
extern char pc_swag_count[];
extern int g43ca;
extern int pc_item_id[];
struct s8 { int w[4]; };
/* Swag bag menu: move items between inventory and swag, drop swag. */
do_swag_menu(p4, p6, p8)
{
	int l2;
	int l4;
	int l6;
	char x6[10];
	int l18;
	int l26[4];
	int l28;
	int l30;
	int l32;
	char x32[72];
	int l106;
	l32 = 0;
	l4 = create_window(20, 4, 20, 16, 25, -1, 0, 0);
	for (;;) {
	fill_window(l4, 0, 1, 0);
	put_frame_char(l4, 0, 0, 14);
	put_frame_char(l4, 19, 0, 10);
	put_frame_char(l4, 0, 15, 11);
	put_frame_char(l4, 19, 15, 8);
	l2 = 1;
L63b5:
	put_frame_char(l4, l2, 0, 12);
	put_frame_char(l4, l2, 2, 12);
	put_frame_char(l4, l2, 15, 7);
	l2++;
	if (l2 < 19) goto L63b5;
	l2 = 1;
L6401:
	put_frame_char(l4, 0, l2, 13);
	put_frame_char(l4, 19, l2, 5);
	l2++;
	if (l2 < 15) goto L6401;
	put_frame_char(l4, 0, 2, 33);
	put_frame_char(l4, 0, 9, 15);
	put_frame_char(l4, 0, 11, 15);
	put_frame_char(l4, 0, 13, 15);
	put_frame_char(l4, 19, 2, 10);
	put_frame_char(l4, 17, 2, 14);
	put_frame_char(l4, 17, 15, 11);
	l2 = 3;
L64cc:
	put_frame_char(l4, 17, l2, 13);
	l2++;
	if (l2 < 15) goto L64cc;
	defer_window_draw(l4);
	set_cursor(l4, 1, 1);
	print_message(750, l4, 18);
	put_icon_at(l4, 2, 1, 100);
	put_icon_at(l4, 17, 1, 100);
	l2 = 0;
	goto L6684;
L6543:
	l28 = (l2 + 10);
	if (l32) goto L6591;
	access_scenario_record(1, &l106, *(int *)((char *)pc_item_id + ((432 * p8) + (l28 << 3))), 0);
	strcpy(((l2 << 4) + 22162), &l106);
L6591:
	set_cursor(l4, 2, (l2 + 3));
	print_string(l4, ((l2 << 4) + 22162), 9);
	pad_to_column(l4, 14, 0);
	if (g00cc[(unsigned char)pc_item_type[((432 * p8) + (l28 << 3))]] != 1) goto L6632;
	set_cursor(l4, 14, (l2 + 3));
	print_int(l4, (unsigned char)pc_item_qty[((432 * p8) + (l28 << 3))], 3, 1);
	goto L6643;
L6632:
	pad_to_column(l4, 17, 0);
L6643:
	set_cursor(l4, 18, (l2 + 3));
	put_char_hi(l4, (unsigned char)(((unsigned char)pc_item_icon[((432 * p8) + (l28 << 3))] + 1)), 4);
	l2++;
L6684:
	if ((unsigned char)pc_swag_count[(432 * p8)] > l2) goto L6543;
L669a:
	if ((unsigned)pc_swag_count[(432 * p8)] < 12) clear_window_area(l4, 1, ((unsigned char)pc_swag_count[(432 * p8)] + 3), 16, 14);
L66c8:
	l2 = (unsigned char)pc_swag_count[(432 * p8)];
	goto L6703;
L66db:
	set_cursor(l4, 18, (l2 + 3));
	put_char_hi(l4, 32, 3);
	l2++;
L6703:
	if (l2 < 12) goto L66db;
	l32 = 1;
	resume_window_draw(l4);
	fill_window(p6, 32, 3, 0);
	refresh_window(l4);
	refresh_window(p6);
	l2 = 0;
L673d:
	l26[l2] = 1;
	l2++;
	if (l2 <= 3) goto L673d;
	if (((unsigned)pc_swag_count[(432 * p8)] < 12) && (pc_item_count[(432 * p8)])) goto L6771;
	l26[0] = 0;
L6771:
	if ((pc_swag_count[(432 * p8)]) && ((unsigned)pc_item_count[(432 * p8)] < 10)) goto L6784;
	l26[1] = 0;
L6784:
	if (pc_swag_count[(432 * p8)]) goto L6790;
	l26[2] = 0;
L6790:
	l18 = -1;
	fill_window(p6, 32, 3, 0);
	refresh_window(p6);
	l6 = run_menu(p6, 751, l26, 2, 1, 8, 2, 5, count_enabled_before(l26, 3));
	switch (l6) {
	case 0:
	defer_window_draw(l4);
	fill_window(p6, 32, 3, 0);
	refresh_all_windows();
	g43ca = choose_item(p4, p6, 760, p8, 0);
	if (g43ca != -1) {
	if ((unsigned char)pc_item_flags[((432 * p8) + (g43ca << 3))] & 1) {
	play_sound(0);
	} else {
	l28 = ((unsigned char)pc_swag_count[(432 * p8)] + 10);
	*(struct s8 *)((char *)pc_item_id + ((432 * p8) + (l28 << 3))) = *(struct s8 *)((char *)pc_item_id + ((432 * p8) + (g43ca << 3)));
	strcpy((((unsigned char)pc_swag_count[(432 * p8)] << 4) + 22162), ((g43ca << 4) + 21982));
	pc_swag_count[(432 * p8)]++;
	remove_item(p8, g43ca);
	defer_window_draw(p4);
	draw_inventory_panel(p4, p8);
	resume_window_draw(p4);
	}
	}
	resume_window_draw(l4);
	break;
	case 1:
	l30 = choose_item(l4, p6, 761, p8, 1);
	if (l30 != -1) {
	l28 = (l30 + 10);
	*(struct s8 *)((char *)pc_item_id + ((432 * p8) + ((unsigned char)pc_item_count[(432 * p8)] << 3))) = *(struct s8 *)((char *)pc_item_id + ((432 * p8) + (l28 << 3)));
	strcpy((((unsigned char)pc_item_count[(432 * p8)] << 4) + 21982), ((l30 << 4) + 22162));
	pc_item_count[(432 * p8)]++;
	remove_swag_item(p8, l30);
	draw_inventory_panel(p4, p8);
	}
	break;
	case 2:
	if ((l30 = choose_item(l4, p6, 762, p8, 1)) != -1) {
	l28 = (l30 + 10);
	if ((unsigned char)pc_item_flags[((432 * p8) + (l28 << 3))] & 64) {
	play_sound(0);
	} else {
	remove_swag_item(p8, l30);
	}
	}
	break;
	case 3:
	fill_window(p6, 32, 3, 0);
	destroy_window(l4, 1);
	return;
	}
	}
}
