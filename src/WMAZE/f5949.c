extern int g363e;
extern int g4ee0[];
extern int g5034;
extern int g503a;
extern int message_delay;
extern int party_cell_x;
extern int party_cell_y;
extern int party_facing;
extern int party_level;
extern int party_x;
extern int party_y;
/* Move the party one step, handling bumps into walls and doors. */
move_party(p4)
{
	int l2;
	int l4;
	g503a = 2020;
	l4 = (((party_facing + p4) + 4) % 4);
	l2 = get_wall_in_direction(l4, party_level, party_cell_x, party_cell_y, party_x, party_y);
	switch (g4ee0[l4]) {
case 0:
	if (l2 >= 2) goto L59aa;
	if (!try_move(l4)) goto L59a8;
L59a4:
	return;
L59a8:
	goto L59fe;
L59aa:
	if ((l2 != 3) || (l4 != party_facing)) goto L59fe;
	play_sound(4);
	g363e = 1;
	redraw_maze_view();
	play_sound(13);
	wait_seconds_or_enter(2);
	g363e = 2;
	redraw_maze_view();
	wait_seconds_or_enter(2);
	g363e = 0;
	if (!try_move(l4)) goto L59fe;
	return;
L59fe:
	if (!g5034) {
	f567c(g503a, (g503a == 2020 ? 2 : 0), 2);
	}
	goto L5a9a;
case 1:
case 2:
	if ((l2 == 3) && (l4 == party_facing)) {
	f567c(2021, 2, (message_delay / 2));
	} else {
	f567c(g503a, 2, 2);
	}
	goto L5a9a;
case 3:
	if (l2 != 2) goto L5a72;
	if (try_move(l4)) goto L59a4;
	goto L5a81;
L5a72:
	f567c(g503a, 2, 2);
L5a81:
	goto L5a9a;
	}
L5a9a:
	return;
}
