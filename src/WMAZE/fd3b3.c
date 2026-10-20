extern char *g4fa8;
extern char g452b[];
extern char pc_class[];
extern int lock_tumblers[];
extern int main_window;
extern int message_delay;
extern int party_facing;
extern int party_x;
extern int party_y;
extern int pc_level[];
/* Tumbler mini-game for picking a lock; trains the skill and returns 0 on success. */
pick_lock(member, event)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int win;
	char l52[40];
	int result;
	int rolls[6];
	int tumblers;
	int l70;
	int l72;
	int l74;
	clear_click_flag();
	win = create_window(20, 19, 20, 5, 20, -1, 0, 0);
	fill_window(win, 32, 1, 0);
	fceb2(win, 0, 0, 17);
	fceb2(win, 18, 0, 19);
	fceb2(win, 0, 1, 4);
	fceb2(win, 18, 1, 5);
	fceb2(win, 0, 2, 9);
	fceb2(win, 18, 2, 10);
	fceb2(win, 0, 3, 4);
	fceb2(win, 18, 3, 5);
	fceb2(win, 0, 4, 6);
	fceb2(win, 18, 4, 8);
	for (l2 = 1; l2 < 18; l2++) {
	fceb2(win, l2, 0, 18);
	fceb2(win, l2, 2, 12);
	fceb2(win, l2, 4, 7);
	}
	l2 = 3;
	do {
	fceb2(win, l2, 0, 34);
	fceb2(win, l2, 1, 13);
	fceb2(win, l2, 2, 16);
	fceb2(win, l2, 3, 13);
	fceb2(win, l2, 4, 11);
	l2 += 3;
	} while (l2 < 18);
	defer_window_draw(win);
	for (l2 = 0; l2 < 5; l2++) {
	set_cursor(win, 19, l2);
	put_char_hi(win, 32, 3);
	}
	resume_window_draw(win);
	l10 = *(int *)((g4fa8 + (event << 1)) + 288);
	l4 = (unsigned char)(g4fa8 + event)[1584];
	l8 = extract_bits(l4, 0, 5);
	if ((l6 = (*(int *)((char *)pc_level + (432 * member)) + (unsigned char)g452b[(432 * member)])) > 95) {
	l6 = 95;
	}
	if ((tumblers = ((l8 / 3) + 1)) > 6) {
	tumblers = 6;
	}
	l70 = 0;
	l4 = *(int *)((g4fa8 + (event << 1)) + 576);
	if (extract_bits(l4, (party_facing << 1), 2) == 2) {
	lock_tumblers[((party_x + party_y) % tumblers)] = 100;
	l70 = 1;
	}
	get_message(2111, l52);
	set_cursor(main_window, 21, 0);
	print_string_hi(main_window, l52, 3);
	l52[0] = 99;
	l52[(0 + 1)] = 99;
	l52[2] = 0;
	l74 = 1;
Ld6c1:
	result = 0;
	defer_window_draw(win);
	for (l2 = 0; l2 < tumblers; l2++) {
	rolls[l2] = random(l6);
	set_cursor(win, ((l2 * 3) + 1), 3);
	print_int(win, rolls[l2], 2, 1);
	set_cursor(win, ((l2 * 3) + 1), 1);
	if (rolls[l2] > lock_tumblers[l2]) {
	l72 = 6;
	} else {
	l72 = 12;
	result = (l70 + 1);
	}
	print_string(win, l52, l72);
	}
	resume_window_draw(win);
	refresh_window(win);
	if ((key_available(1)) && ((char)get_key(1) == 13)) {
	l74 = 0;
	}
	if ((l74 == 1) && (!check_screen_click())) goto Ld6c1;
	if (result) {
	if ((result == 1) && (((pc_class[(432 * member)] == 3) || (pc_class[(432 * member)] == 6)) || (pc_class[(432 * member)] == 13))) {
	try_skill_gain(member, 15, 1);
	}
	if (!random(3)) {
	fce13(event);
	}
	} else {
	fce81(event);
	if (((pc_class[(432 * member)] == 3) || (pc_class[(432 * member)] == 6)) || (pc_class[(432 * member)] == 13)) {
	try_skill_gain(member, 15, 4);
	}
	}
	erase_window(main_window, 1);
	get_message((result + 2113), l52);
	set_cursor(main_window, (20 - ((strlen(l52) + 1) / 2)), 0);
	print_string_hi(main_window, l52, 3);
	wait_animating_m(message_delay);
	destroy_window(win, 0);
	return result;
}
