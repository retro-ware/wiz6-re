extern char g4518[];
extern char g452b[];
extern char pc_class[];
extern int chest_trap;
extern int game_state_arg;
extern int menu_clicked;
extern int pc_level[];
/* Disarm: let the member pick a trap name; returns 1 disarmed, 0 failed safely, -1 trap sprung. */
disarm_chest(member, chest)
{
	int l2;
	int l4;
	char *win;
	int chance;
	int sel;
	int count;
	int traps[16];
	if (chest_trap) goto L6afa;
	return -1;
L6afa:
	win = create_window(20, 19, 20, 5, 25, -5, 0, 0);
	count = 0;
	l2 = 0;
L6b2a:
	if (test_bit((chest + 36), l2) == 1) {
	traps[count] = l2;
	count++;
	}
	l2++;
	if (l2 < 16) goto L6b2a;
	sel = 0;
	set_click_region(0, ((unsigned char)win[2] + 2), ((unsigned char)win[3] + 2), ((unsigned char)win[2] + 19), ((unsigned char)win[3] + 2));
	set_click_region(1, ((unsigned char)win[2] + 1), (unsigned char)win[3], ((unsigned char)win[2] + 1), (unsigned char)win[3]);
	set_click_region(2, ((unsigned char)win[2] + 1), ((unsigned char)win[3] + 4), ((unsigned char)win[2] + 1), ((unsigned char)win[3] + 4));
	set_click_region(3, 255, 0, 0, 0);
L6bf7:
	draw_trap_list(win, sel, 1, count, traps);
	l2 = get_chest_input(20670, 13720);
	if (menu_clicked != 1) goto L6c4c;
	switch (l2) {
case 0:
	l2 = 5;
	goto L6c4c;
case 1:
	l2 = 2;
	goto L6c4c;
case 2:
	l2 = 4;
	goto L6c4c;
	}
L6c4c:
	switch (l2) {
case 2:
	if (sel > 0) {
	sel--;
	}
	goto L6c74;
case 4:
	if ((sel + 1) < count) {
	sel++;
	}
	goto L6c74;
	}
L6c74:
	if (l2 != 5) goto L6bf7;
	destroy_window(win, 0);
	if (traps[sel] == chest_trap) goto L6ca2;
	return -1;
L6ca2:
	chance = (((((unsigned char)g452b[(432 * member)] / 2) + ((unsigned char)g4518[(432 * member)] / 2)) + *(int *)((char *)pc_level + (432 * member))) - (game_state_arg << 1));
	if (pc_class[(432 * member)] == 3) {
	chance += ((unsigned char)g4518[(432 * member)] * 3);
	try_skill_gain(member, 15, 3);
	} else {
	if (((pc_class[(432 * member)] == 13) || (pc_class[(432 * member)] == 4)) || (pc_class[(432 * member)] == 6)) {
	chance += ((unsigned char)g4518[(432 * member)] << 1);
	try_skill_gain(member, 15, 2);
	}
	}
	if (chance > 95) {
	chance = 95;
	}
	if (chance < 5) {
	chance = 5;
	}
	l4 = random(100);
	if (l4 >= chance) goto L6d5f;
	return 1;
L6d5f:
	if ((100 - ((100 - chance) / 3)) >= l4) goto L6d7d;
	return -1;
L6d7d:
	return 0;
}
