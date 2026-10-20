extern int game_state_arg;
extern int maze_data;
extern int party_facing;
get_left_wall(x, y, cx, cy, level, side)
{
	int l2;
	int l4;
	register int cell;
	register int wall;
	if ((!side) || (!step_relative(&x, &y, &cx, &cy, &level, side, 0))) goto L9352;
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto L934d;
	return 0;
L934d:
	return 2;
L9352:
	cell = (((level << 6) + (cy << 3)) + cx);
	if (test_bit((maze_data + 1082), cell) != 1) goto L93ac;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if ((game_state_arg == 12) && (level <= 8)) goto L9396;
	return 0;
L9396:
	goto L93ac;
	}
L93ac:
	wall = 0;
	switch (party_facing) {
case 0:
	wall = get_south_wall(x, y, cx, cy, level);
	goto L9426;
case 1:
	wall = get_bitfield((maze_data + 96), cell, 2);
	goto L9426;
case 2:
	wall = get_bitfield((maze_data + 288), cell, 2);
	goto L9426;
case 3:
	wall = get_west_wall(x, y, cx, cy, level);
	goto L9426;
	}
L9426:
	l2 = get_bitfield((maze_data + 504), cell, 4);
	l4 = ((get_bitfield((maze_data + 888), cell, 2) + 1) % 4);
	if (l4 != party_facing) goto L94bb;
	switch (l2) {
case 1:
	wall = 5;
	goto L94bb;
case 2:
	wall = 6;
	goto L94bb;
case 3:
	wall = 8;
	goto L94bb;
case 4:
	wall = 9;
	goto L94bb;
case 7:
	wall = 4;
	goto L94bb;
case 8:
	wall = 7;
	goto L94bb;
case 9:
	wall = 10;
	goto L94bb;
case 10:
	wall = 11;
	goto L94bb;
case 11:
	wall = 12;
	goto L94bb;
case 12:
	wall = 13;
	goto L94bb;
	}
L94bb:
	return wall;
}
