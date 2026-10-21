extern char char_skills[];
extern char skill_points_left;
extern int menu_clicked;
distribute_skill_points(win, cursor_win, page, skills, count)
char *win;
char *skills;
{
	int key;
	int row;
	int added[10];
	int points;
	int l28;
	points = (unsigned char)skill_points_left;
	fill_window(win, 32, 3, 0);
	refresh_window(win);
	set_cursor(win, 7, 1);
	print_message(610, win, 18);
	set_cursor(win, 2, 2);
	print_message(606, win, 18);
	win[6] += 3;
	print_message(607, win, 18);
	for (row = 0; row < 10; row++) {
	added[row] = 0;
	}
	row = 0;
	set_click_region(0, ((unsigned char)win[2] + 2), ((unsigned char)win[3] + 2), ((unsigned char)win[2] + 2), ((unsigned char)win[3] + 2));
	set_click_region(1, ((unsigned char)win[2] + 3), ((unsigned char)win[3] + 2), ((unsigned char)win[2] + 3), ((unsigned char)win[3] + 2));
	set_click_region(2, ((unsigned char)win[2] + 22), ((unsigned char)win[3] + 2), ((unsigned char)win[2] + 22), ((unsigned char)win[3] + 2));
	set_click_region(3, ((unsigned char)win[2] + 23), ((unsigned char)win[3] + 2), ((unsigned char)win[2] + 23), ((unsigned char)win[3] + 2));
	set_click_region(4, ((unsigned char)win[2] + 13), ((unsigned char)win[3] + 3), ((unsigned char)win[2] + 13), ((unsigned char)win[3] + 3));
	set_click_region(5, 255, 0, 0, 0);
	set_cursor(cursor_win, 15, (row + 3));
	put_char(cursor_win, 100, 4);
L5887:
	set_cursor(win, 7, 3);
	print_message((points > 0 ? 608 : 609), win, 18);
	l28 = (points > 0 ? 13 : 18);
	set_click_region(4, ((unsigned char)win[2] + l28), ((unsigned char)win[3] + 3), ((unsigned char)win[2] + l28), ((unsigned char)win[3] + 3));
	key = get_menu_input(21534, 13720);
	if (menu_clicked != 1) goto L5946;
	switch (key) {
case 0:
	key = 1;
	goto L5946;
case 1:
	key = 3;
	goto L5946;
case 2:
	key = 2;
	goto L5946;
case 3:
	key = 4;
	goto L5946;
case 4:
	key = 5;
	goto L5946;
	}
L5946:
	switch (key) {
case 1:
	if (added[row] <= 0) goto L59ad;
	char_skills[*(int *)(skills + (row << 1))]--;
	added[row]--;
	points++;
	play_sound(1);
	print_skill_value(cursor_win, (row + 3), (unsigned char)char_skills[*(int *)(skills + (row << 1))]);
	print_skill_value(cursor_win, 14, points);
	goto L59b5;
L59ad:
	play_sound(0);
L59b5:
	goto L5b02;
case 2:
	set_cursor(cursor_win, 15, (row + 3));
	put_char(cursor_win, 32, 7);
	if (row > 0) {
	row--;
	} else {
	row = (count - 1);
	}
	set_cursor(cursor_win, 15, (row + 3));
	put_char(cursor_win, 100, 4);
	goto L5b02;
case 3:
	if (((unsigned)char_skills[*(int *)(skills + (row << 1))] >= 100) || (points <= 0)) goto L5a7b;
	char_skills[*(int *)(skills + (row << 1))]++;
	added[row]++;
	points--;
	play_sound(1);
	print_skill_value(cursor_win, (row + 3), (unsigned char)char_skills[*(int *)(skills + (row << 1))]);
	print_skill_value(cursor_win, 14, points);
	goto L5a83;
L5a7b:
	play_sound(0);
L5a83:
	goto L5b02;
case 4:
	set_cursor(cursor_win, 15, (row + 3));
	put_char(cursor_win, 32, 7);
	if ((row + 1) < count) {
	row++;
	} else {
	row = 0;
	}
	set_cursor(cursor_win, 15, (row + 3));
	put_char(cursor_win, 100, 4);
	goto L5b02;
	}
L5b02:
	if (key != 5) goto L5887;
	set_cursor(cursor_win, 15, (row + 3));
	put_char(cursor_win, 32, 7);
	skill_points_left = *(char *)&points;
}
