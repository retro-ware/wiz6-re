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
	l2 = 0;
L9fd7:
	enabled[l2] = 1;
	l2++;
	if (l2 <= 5) goto L9fd7;
	l26 = -1;
	if (find_free_roster_slot() != -1) goto La002;
	enabled[0] = 0;
La002:
	l4 = 0;
	l2 = 0;
	goto La020;
La00e:
	if (roster_slot_used[l2] != 1) goto La01d;
	l4 = 1;
La01d:
	l2++;
La020:
	if (l2 < roster_slot_count) goto La00e;
	enabled[1] = l4;
#asm
	db 089h,046h,0deh,089h,046h,0e0h,089h,046h,0e2h
#endasm
	choice = menu_select(prompt_win, 1130, enabled, 4, 1, 12, 2, 5, count_enabled_options(enabled, 5));
#asm
	db 0e9h,0b1h,000h
#endasm
	do_create_character();
	goto La131;
	if ((sel = select_roster_character(prompt_win, menu_win, 1129)) == -1) goto La09f;
	view_character(g57b0[sel]);
La09f:
	goto La131;
	if ((sel = select_roster_character(prompt_win, menu_win, 1121)) == -1) goto La0c8;
	delete_character(g57b0[sel]);
La0c8:
	goto La131;
	if ((sel = select_roster_character(prompt_win, menu_win, 1122)) == -1) goto La0f0;
	rename_character(g57b0[sel]);
La0f0:
	goto La131;
	if ((sel = select_roster_character(prompt_win, menu_win, 1123)) == -1) goto La118;
	change_portrait(g57b0[sel]);
La118:
	goto La131;
#asm
	db 073h,0a0h,079h,0a0h,0a2h,0a0h,0cah,0a0h,0f2h,0a0h
la124:
	db 03dh,005h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,01ah,0a1h
#endasm
La131:
	if (choice != 5) goto L9fc4;
	destroy_window(menu_win, 0);
	destroy_window(prompt_win, 0);
	destroy_window(sheet_win, 0);
}
