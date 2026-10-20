extern char g511b[];
extern char g513f[];
extern char g514a[];
extern char g5162[];
extern char g516a[];
extern char g5183[];
extern int g5118;
extern int g5128[];
extern int g5190[];
extern int game_state_arg;
extern int maze_data;
extern int party_facing;
extern int view_rows_open;
/* Return the wall type straight ahead of the cell at the given offset. */
get_center_wall(x, y, cx, cy, level, side)
{
	char x0[2];
	int wall;
	int l6;
	int l8;
	register int cell;
	register int rdi;
	if ((!side) || (!step_in_facing(&x, &y, &cx, &cy, &level, side, 0))) goto L782f;
	if ((!g5118) && (!side)) {
	view_rows_open = 0;
	}
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto L782a;
	g511b[((g5118 * 3) + side)] = 1;
	*(int *)((char *)g5128 + ((g5118 * 6) + (side << 1))) = 1;
	return 0;
L782a:
	return 2;
L782f:
	cell = (((level << 6) + (cy << 3)) + cx);
	if (test_bit((maze_data + 1082), cell) != 1) goto L7966;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if ((game_state_arg != 12) || (level >= 9)) goto L788e;
	*(int *)((char *)g5128 + ((g5118 * 6) + (side << 1))) = 1;
	goto L78f0;
L788e:
	g513f[((g5118 * 3) + side)] = 1;
	switch (side) {
case -1:
	g514a[g5118] = 0;
#asm
	db 0c6h,087h,052h,051h,000h,0c6h,087h,05ah,051h,000h
#endasm
	goto L78ea;
case 0:
	g5162[g5118] = 0;
	goto L78ea;
case 1:
	g516a[g5118] = 0;
#asm
	db 0c6h,087h,072h,051h,000h,0c6h,087h,07ah,051h,000h
#endasm
	goto L78ea;
	}
L78ea:
	return 0;
L78f0:
	goto L7966;
case 1:
	g5183[((g5118 * 3) + side)] = 1;
#asm
	db 0c6h,087h,01bh,051h,001h
#endasm
	goto L7966;
case 2:
case 3:
case 6:
case 11:
case 13:
	g5183[((g5118 * 3) + side)] = 1;
	goto L7966;
case 8:
case 10:
	*(int *)((char *)g5128 + ((g5118 * 6) + (side << 1))) = 1;
	goto L7966;
	}
L7966:
	if (test_bit((maze_data + 1178), cell) != 1) goto L79bc;
	switch (game_state_arg) {
case 0:
case 1:
case 3:
case 4:
case 6:
case 8:
case 10:
case 11:
case 12:
case 13:
	g511b[((g5118 * 3) + side)] = 1;
	goto L79bc;
	}
L79bc:
	wall = 0;
	switch (party_facing) {
case 0:
	wall = get_bitfield((maze_data + 96), cell, 2);
	goto L7a3c;
case 1:
	wall = get_bitfield((maze_data + 288), cell, 2);
	goto L7a3c;
case 2:
	wall = f7652(x, y, cx, cy, level);
	goto L7a3c;
case 3:
	wall = f76b7(x, y, cx, cy, level);
	goto L7a3c;
	}
L7a3c:
	l6 = get_bitfield((maze_data + 504), cell, 4);
	l8 = get_bitfield((maze_data + 888), cell, 2);
	if (((l8 != party_facing) && (l6 != 6)) && (l6 <= 12)) goto L7b67;
	switch (l6) {
case 1:
	wall = 5;
	goto L7b67;
case 2:
	wall = 6;
	goto L7b67;
case 3:
	wall = 8;
	goto L7b67;
case 4:
	wall = 9;
	goto L7b67;
case 5:
	wall = 14;
	goto L7b67;
case 6:
	*(int *)((char *)g5190 + ((g5118 * 6) + (side << 1))) = 1;
	goto L7b67;
case 7:
	wall = 4;
	goto L7b67;
case 8:
	wall = 7;
	goto L7b67;
case 9:
	wall = 10;
	goto L7b67;
case 10:
	wall = 11;
	goto L7b67;
case 11:
	wall = 12;
	goto L7b67;
case 12:
	wall = 13;
	goto L7b67;
case 13:
	*(int *)((char *)g5128 + ((g5118 * 6) + (side << 1))) = 1;
	goto L7b67;
case 14:
	g5183[((g5118 * 3) + side)] = 1;
	goto L7b67;
case 15:
	g511b[((g5118 * 3) + side)] = 1;
	goto L7b67;
	}
L7b67:
	if (((wall) && (!g5118)) && (!side)) {
	view_rows_open = 0;
	}
	return wall;
}
