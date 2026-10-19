extern int game_state_arg;
extern int maze_data;
extern int party_facing;
/* Return the wall type on the right of the cell. */
get_right_wall(x, y, cx, cy, level, side)
{
	int l2;
	int l4;
	register int cell;
	register int wall;
	if (!side) goto L7d92;
	if (!step_in_facing(&x, &y, &cx, &cy, &level, side, 0)) goto L7d92;
	if (game_state_arg == 10) goto L7d84;
	if (game_state_arg != 12) goto L7d8d;
L7d84:
	return 0;
L7d8d:
	return 2;
L7d92:
	cell = (((level << 6) + (cy << 3)) + cx);
	if (test_bit((maze_data + 1082), cell) != 1) goto L7dec;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if (game_state_arg != 12) goto L7dd1;
	if (level <= 8) goto L7dd6;
L7dd1:
	return 0;
L7dd6:
	goto L7dec;
	}
L7dec:
	wall = 0;
	switch (party_facing) {
case 0:
	wall = get_bitfield((maze_data + 288), cell, 2);
	goto L7e66;
case 1:
	wall = f7652(x, y, cx, cy, level);
	goto L7e66;
case 2:
	wall = f76b7(x, y, cx, cy, level);
	goto L7e66;
case 3:
	wall = get_bitfield((maze_data + 96), cell, 2);
	goto L7e66;
	}
L7e66:
	l2 = get_bitfield((maze_data + 504), cell, 4);
	l4 = ((get_bitfield((maze_data + 888), cell, 2) + 3) % 4);
	if (l4 != party_facing) goto L7efd;
	switch (l2) {
case 1:
	wall = 5;
	goto L7efd;
case 2:
	wall = 6;
	goto L7efd;
case 3:
	wall = 8;
	goto L7efd;
case 4:
	wall = 9;
	goto L7efd;
case 7:
	wall = 4;
	goto L7efd;
case 8:
	wall = 7;
	goto L7efd;
case 9:
	wall = 10;
	goto L7efd;
case 10:
	wall = 11;
	goto L7efd;
case 11:
	wall = 12;
	goto L7efd;
case 12:
	wall = 13;
	goto L7efd;
	}
L7efd:
	return wall;
}
