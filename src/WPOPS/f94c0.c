extern int game_state_arg;
extern int maze_data;
extern int party_facing;
get_right_wall(x, y, cx, cy, level, side)
{
	int l2;
	int l4;
	register int cell;
	register int wall;
	if (!side) goto L950f;
	if (!step_relative(&x, &y, &cx, &cy, &level, side, 0)) goto L950f;
	if (game_state_arg == 10) goto L9501;
	if (game_state_arg != 12) goto L950a;
L9501:
	return 0;
L950a:
	return 2;
L950f:
	cell = (((level << 6) + (cy << 3)) + cx);
	if (test_bit((maze_data + 1082), cell) != 1) goto L9569;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if (game_state_arg != 12) goto L954e;
	if (level <= 8) goto L9553;
L954e:
	return 0;
L9553:
	goto L9569;
	}
L9569:
	wall = 0;
	switch (party_facing) {
case 0:
	wall = get_bitfield((maze_data + 288), cell, 2);
	goto L95e3;
case 1:
	wall = get_west_wall(x, y, cx, cy, level);
	goto L95e3;
case 2:
	wall = get_south_wall(x, y, cx, cy, level);
	goto L95e3;
case 3:
	wall = get_bitfield((maze_data + 96), cell, 2);
	goto L95e3;
	}
L95e3:
	l2 = get_bitfield((maze_data + 504), cell, 4);
	l4 = ((get_bitfield((maze_data + 888), cell, 2) + 3) % 4);
	if (l4 != party_facing) goto L967a;
	switch (l2) {
case 1:
	wall = 5;
	goto L967a;
case 2:
	wall = 6;
	goto L967a;
case 3:
	wall = 8;
	goto L967a;
case 4:
	wall = 9;
	goto L967a;
case 7:
	wall = 4;
	goto L967a;
case 8:
	wall = 7;
	goto L967a;
case 9:
	wall = 10;
	goto L967a;
case 10:
	wall = 11;
	goto L967a;
case 11:
	wall = 12;
	goto L967a;
case 12:
	wall = 13;
	goto L967a;
	}
L967a:
	return wall;
}
