extern int g5262;
extern int g5264;
extern int g5268;
extern int game_state;
extern int game_state_arg;
extern int loot_count;
extern int msg_not_found;
extern int party_cell_x;
extern int party_cell_y;
extern int party_count;
extern int party_facing;
extern int party_level;
extern int party_x;
extern int party_y;
extern int return_cmd;
f6e7e(p4, p6)
{
	char x0[78];
	int l80;
	int l82;
	int l84;
	int l86;
	int l88;
	g5268 = 0;
	loot_count = 0;
	l82 = 0;
	if (g5264) {
	f6de9();
	l82 = 1;
	}
	g5264 = create_window(1, 1, 38, 23, 30, 1, 0, 1);
	g5262 = 21;
L6ed0:
	get_message(p4, &l80);
	if (!msg_not_found) {
	f6e0e(&l80);
	p4++;
	}
	if (!msg_not_found) goto L6ed0;
	l84 = 3;
	l86 = 0;
	flush_keys();
	l88 = 1;
L6f08:
	if (l86 == 10) {
	l86 = 0;
	set_cursor(g5264, 37, g5262);
	if (l84 < 2) {
	put_char(g5264, 32, 1);
	} else {
	put_char_hi(g5264, 126, 1);
	}
	l84 = ((l84 + 1) % 4);
	} else {
	l86++;
	delay_tick();
	delay_tick();
	}
	if (check_screen_click()) {
	l88 = 0;
	}
	if ((key_available(1) == 1) && ((char)get_key(1) == 13)) {
	l88 = 0;
	}
	if (l88) goto L6f08;
	f6de9();
	if (l82 == 1) {
	f6d9d();
	}
	g5262 = 4;
	switch (p6) {
case 0:
case 1:
case 2:
	party_x = 137;
	party_y = 151;
	party_cell_x = 1;
	party_cell_y = 4;
	party_level = 2;
	game_state_arg = 12;
	party_facing = 2;
	for (l86 = 0; l86 < party_count; l86++) {
	set_bit(((432 * l86) + 17792), p6, 1);
	}
	game_state = 6;
	return_cmd = 18;
	return 1;
case 3:
	return 1;
	}
	return 0;
}
