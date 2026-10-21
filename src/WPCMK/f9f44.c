extern char roster_slot_used[];
extern int g57b0[];
extern int menu_win;
extern int prompt_win;
extern int roster_slot_count;
extern int sheet_win;
/* Main character creation menu: create, view, delete, rename, change portrait. */
character_menu()
{
	int l2;
	int l4;
	int choice;
	int sel;
	char x8[16];
	int l26;
	int enabled[6];
	get_message(1000, 21534);
	sheet_win = create_window(0, 0, 40, 20, 20, -1, 0, 0);
	prompt_win = create_window(0, 20, 40, 5, 19, -1, 0, 0);
	menu_win = create_window(21, 7, 19, 13, 21, -1, 0, 0);
L9fc4:
	draw_creation_screen(sheet_win, prompt_win);
	for (l2 = 0; l2 <= 5; l2++) {
	enabled[l2] = 1;
	}
	l26 = -1;
	if (find_free_roster_slot() == -1) {
	enabled[0] = 0;
	}
	l4 = 0;
	l2 = 0;
	goto La020;
La00e:
	if (roster_slot_used[l2] == 1) {
	l4 = 1;
	}
	l2++;
La020:
	if (l2 < roster_slot_count) goto La00e;
	enabled[4] = enabled[3] = enabled[2] = enabled[1] = l4;
	choice = menu_select(prompt_win, 1130, enabled, 4, 1, 12, 2, 5, count_enabled_options(enabled, 5));
	switch (choice) {
case 0:
	do_create_character();
	goto La131;
case 1:
	if ((sel = select_roster_character(prompt_win, menu_win, 1129)) != -1) {
	view_character(g57b0[sel]);
	}
	goto La131;
case 2:
	if ((sel = select_roster_character(prompt_win, menu_win, 1121)) != -1) {
	delete_character(g57b0[sel]);
	}
	goto La131;
case 3:
	if ((sel = select_roster_character(prompt_win, menu_win, 1122)) != -1) {
	rename_character(g57b0[sel]);
	}
	goto La131;
case 4:
	if ((sel = select_roster_character(prompt_win, menu_win, 1123)) != -1) {
	change_portrait(g57b0[sel]);
	}
	goto La131;
	}
La131:
	if (choice != 5) goto L9fc4;
	destroy_window(menu_win, 0);
	destroy_window(prompt_win, 0);
	destroy_window(sheet_win, 0);
}
