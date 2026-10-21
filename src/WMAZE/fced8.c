extern int pc_stamina_max[];
extern char *g4fa8;
extern char g450c[];
extern char pc_stats[];
extern int main_window;
extern int message_delay;
extern int party_facing;
extern int pc_stamina[];
/* Strength bar mini-game for forcing a door; returns 0 on success. */
force_lock(member, event)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	char *win;
	char x12[38];
	int l52;
	int result;
	int target;
	int strength;
	int l60;
	int l62;
	clear_click_flag();
	win = create_window(20, 19, 20, 5, 20, -1, 0, 0);
	fill_window(win, 32, 1, 0);
	fceb2(win, 0, 0, 17);
	fceb2(win, 19, 0, 19);
	fceb2(win, 0, 1, 4);
	fceb2(win, 19, 1, 5);
	fceb2(win, 0, 2, 9);
	fceb2(win, 19, 2, 10);
	fceb2(win, 0, 3, 4);
	fceb2(win, 19, 3, 5);
	fceb2(win, 0, 4, 6);
	fceb2(win, 19, 4, 8);
	for (l2 = 1; l2 < 19; l2++) {
	fceb2(win, l2, 0, 18);
	fceb2(win, l2, 2, 12);
	fceb2(win, l2, 4, 7);
	}
	l10 = *(int *)((g4fa8 + (event << 1)) + 288);
	l4 = (unsigned char)(g4fa8 + event)[1584];
	l8 = extract_bits(l4, 0, 5);
	l60 = 0;
	l4 = *(int *)((g4fa8 + (event << 1)) + 576);
	if (extract_bits(l4, (party_facing << 1), 2) == 2) {
	l60 = 1;
	}
	get_message(2112, &l52);
	set_cursor(main_window, 21, 0);
	print_string_hi(main_window, &l52, 3);
	if ((target = ((18 - ((unsigned char)pc_stats[(432 * member)] - l8)) + l8)) < 1) {
	target = 1;
	}
	if (target > 18) {
	target = 18;
	}
	if (l60) {
	target = 18;
	}
	defer_window_draw(win);
	set_cursor(win, 1, 3);
	for (l2 = 0; l2 < target; l2++) {
	put_char(win, 97, 12);
	}
	resume_window_draw(win);
	l62 = 1;
Ld157:
	defer_window_draw(win);
	if (((l6 = (int)((((long)*(int *)((char *)pc_stamina + (432 * member)) * 100) / (long)*(int *)((char *)pc_stamina_max + (432 * member)) * (long)(unsigned char)pc_stats[(432 * member)]) / 100L)) > 0) && (random(50))) goto Ld227;
Ld1cb:
	(*(int *)((char *)pc_stamina + (432 * member)))--;
	if ((l6 > 0) && (*(int *)((char *)pc_stamina + (432 * member)) > 0)) goto Ld220;
	g450c[(432 * member)] = (char)(random(6) + 6);
	*(int *)((char *)pc_stamina + (432 * member)) = 0;
	draw_member_status_m(member);
	destroy_window(win, 0);
	return (l60 + 1);
Ld220:
	draw_member_status_m(member);
Ld227:
	if ((strength = ((((random(l6) + random(l6)) + random(l6)) + random(l6)) / 4)) < 1) {
	strength = 1;
	}
	if (strength > 18) {
	strength = 18;
	}
	set_cursor(win, 1, 1);
	for (l2 = 0; l2 < strength; l2++) {
	put_char(win, 97, (l60 == 1 ? 4 : 6));
	}
	clear_window_area(win, (unsigned char)win[6], 1, 18, 1);
	resume_window_draw(win);
	refresh_window(win);
	if ((key_available(1)) && ((char)get_key(1) == 13)) {
	l62 = 0;
	}
	if ((l62 == 1) && (!check_screen_click())) goto Ld157;
	result = (strength >= target ? 0 : 1);
	if (l60) {
	result = 2;
	}
	if (result) {
	if (!random(3)) {
	fce13(event);
	}
	} else {
	fce81(event);
	}
	erase_window(main_window, 1);
	get_message((result + 2113), &l52);
	set_cursor(main_window, (20 - ((strlen(&l52) + 1) / 2)), 0);
	print_string_hi(main_window, &l52, 3);
	wait_animating_m(message_delay);
	destroy_window(win, 0);
	return result;
}
