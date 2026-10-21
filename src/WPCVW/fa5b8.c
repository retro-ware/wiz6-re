extern char g4597[];
extern char pc_rank[];
extern long pc_exp[];
extern char pc_race[];
extern char pc_class[];
extern int class_allowed[];
extern int pc_level[];
/* Change-class menu for member p8. */
do_change_class(p4, p6, p8)
{
	int l2;
	int l4;
	char x4[8];
	int l14;
	int l42[14];
	int l44;
	int l46;
	calc_allowed_classes(p8);
	l46 = create_window(20, 4, 20, 16, 30, -1, 0, 0);
	fill_window(l46, 32, 3, 0);
	defer_window_draw(l46);
	draw_portrait_frame(l46);
	resume_window_draw(l46);
	fill_window(p6, 32, 3, 0);
	refresh_all_windows();
	l44 = 1;
	l4 = 0;
La637:
	if (class_allowed[l4] == 1) {
	l42[l4] = 1;
	} else {
	l42[l4] = 0;
	}
	l4++;
	if (l4 <= 13) goto La637;
	l14 = -1;
	l42[(unsigned char)pc_class[(432 * p8)]] = 0;
	set_cursor(p6, 4, 1);
	print_message(660, p6, 18);
	set_cursor(p6, 6, 2);
	print_message(661, p6, 18);
	l2 = run_menu(l46, 119, &l44, 1, 1, 10, 11, 5, 0);
	destroy_window(l46, 0);
	if (l2 <= 0) goto La789;
	pc_class[(432 * p8)] = (char)(l2 - 1);
	if (*(int *)((char *)pc_level + (432 * p8)) < 250) {
	g4597[(432 * p8)] = *((char *)pc_level + (432 * p8));
	} else {
	g4597[(432 * p8)] = 0;
	}
	*(int *)((char *)pc_level + (432 * p8)) = 1;
	pc_rank[(432 * p8)] = 0;
	*(long *)((char *)pc_exp + (432 * p8)) = 0;
	fa4b1(p8, (unsigned char)pc_race[(432 * p8)]);
	fa368(p8, (unsigned char)pc_class[(432 * p8)]);
	draw_sheet(p4, p6, p8);
	do_equip_items(p4, p6, p8);
La789:
	;
}
