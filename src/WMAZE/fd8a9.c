extern char *g4fa8;
extern int g4fb0;
extern int lock_tumblers[];
extern int main_window;
/* Menu for a locked door: force it or pick the lock with a chosen member. */
locked_door_menu(event)
{
	int l2;
	int member;
	int win;
	char x6[12];
	int l20;
	int enabled[3];
	int choice;
	int l30;
	int l32;
	int l34;
	l34 = *(int *)((g4fa8 + (event << 1)) + 288);
	l30 = (unsigned char)(g4fa8 + event)[1584];
	l32 = extract_bits(l30, 0, 5);
	l2 = 0;
Ld8e7:
	lock_tumblers[l2] = random((l32 * 5));
	l2++;
	if (l2 < 6) goto Ld8e7;
	l2 = 0;
Ld912:
	enabled[l2] = 1;
	l2++;
	if (l2 <= 2) goto Ld912;
	l20 = -1;
	defer_window_draw(g4fb0);
	win = create_window(0, 19, 19, 5, 10, -4, 0, 0);
Ld95b:
	fill_window(win, 32, 3, 0);
	erase_window(main_window, 0);
	f0a42(main_window, 0);
	set_cursor(main_window, 3, 0);
	defer_window_draw(main_window);
	print_message(2002, main_window, 18);
	resume_window_draw(main_window);
	refresh_all_windows();
	choice = maze_menu_select(win, 2100, enabled, 1, 1, 7, 1, 5, 0);
	switch (choice) {
case 0:
	if ((member = choose_party_member_m(2110, 1)) == -1) goto Lda23;
	if (!is_member_able(member)) goto Lda23;
	if (force_lock(member, event)) goto Lda23;
	choice = 2;
Lda23:
	goto Lda65;
case 1:
	if ((member = choose_party_member_m(2110, 1)) == -1) goto Lda59;
	if (!is_member_able(member)) goto Lda59;
	if (pick_lock(member, event)) goto Lda59;
	choice = 2;
Lda59:
	goto Lda65;
	}
Lda65:
	if (choice != 2) goto Ld95b;
	destroy_window(win, 0);
	resume_window_draw(g4fb0);
	erase_window(main_window, 0);
}
