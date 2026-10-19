extern int game_state_arg;
extern int maze_data;
extern int party_facing;
/* Return the wall type on the left of the cell. */
get_left_wall(x, y, cx, cy, level, side)
{
	int l2;
	int l4;
	register int cell;
	register int wall;
	if (!side) goto L7bd5;
	if (!step_in_facing(&x, &y, &cx, &cy, &level, side, 0)) goto L7bd5;
	if (game_state_arg == 10) goto L7bc7;
	if (game_state_arg != 12) goto L7bd0;
L7bc7:
	return 0;
L7bd0:
	return 2;
L7bd5:
	cell = (((level << 6) + (cy << 3)) + cx);
	if (test_bit((maze_data + 1082), cell) != 1) goto L7c2f;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if (game_state_arg != 12) goto L7c14;
	if (level <= 8) goto L7c19;
L7c14:
	return 0;
L7c19:
	goto L7c2f;
	}
L7c2f:
	wall = 0;
	switch (party_facing) {
case 0:
	wall = f76b7(x, y, cx, cy, level);
	goto L7ca9;
case 1:
	wall = get_bitfield((maze_data + 96), cell, 2);
	goto L7ca9;
case 2:
	wall = get_bitfield((maze_data + 288), cell, 2);
	goto L7ca9;
case 3:
	wall = f7652(x, y, cx, cy, level);
	goto L7ca9;
	}
L7ca9:
	l2 = get_bitfield((maze_data + 504), cell, 4);
	l4 = ((get_bitfield((maze_data + 888), cell, 2) + 1) % 4);
	if (l4 != party_facing) goto L7d3e;
	switch (l2) {
case 1:
	wall = 5;
	goto L7d3e;
case 2:
	wall = 6;
	goto L7d3e;
case 3:
	wall = 8;
	goto L7d3e;
case 4:
	wall = 9;
	goto L7d3e;
case 7:
	wall = 4;
	goto L7d3e;
case 8:
	wall = 7;
	goto L7d3e;
case 9:
	wall = 10;
	goto L7d3e;
case 10:
	wall = 11;
	goto L7d3e;
case 11:
	wall = 12;
	goto L7d3e;
case 12:
	wall = 13;
	goto L7d3e;
	}
L7d3e:
	return wall;
}
