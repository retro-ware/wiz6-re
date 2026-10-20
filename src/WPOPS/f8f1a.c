#asm
	extrn test_bit_:near
#endasm
extern char g507d[];
extern char g50a1[];
extern char g50ac[];
extern char g50c4[];
extern char g50cc[];
extern char g50e5[];
extern int g508a[];
extern int g50f2[];
extern int game_state_arg;
extern int maze_data;
extern int party_facing;
extern int view_depth;
extern int view_rows_open;
/* Return the wall/door type in front of a view cell and flag which view cells are hidden. */
get_front_wall(x, y, cx, cy, level, side)
{
	char x0[2];
	int wall;
	int feature;
	int facing;
	register int cell;
	register int rdi;
	if ((!side) || (!step_relative(&x, &y, &cx, &cy, &level, side, 0))) goto L8fac;
	if ((view_depth) || (side)) goto L8f63;
	view_rows_open = 0;
L8f63:
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto L8fa7;
	g507d[((view_depth * 3) + side)] = 1;
	*(int *)((char *)g508a + ((view_depth * 6) + (side << 1))) = 1;
	return 0;
L8fa7:
	return 2;
L8fac:
	;
#asm
l8fac:
	db 08bh,046h,00ch,0b9h,006h,000h,0d3h,0e0h,08bh,04eh,00ah,0d1h,0e1h,0d1h,0e1h,0d1h
	db 0e1h,003h,0c1h,08bh,0f0h,003h,046h,008h,08bh,0f0h,056h,0a1h,0aah,04fh,005h,03ah
	db 004h,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,074h,003h
#endasm
	goto L90e3;
L8fdc:
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if ((game_state_arg != 12) || (level >= 9)) goto L900b;
	*(int *)((char *)g508a + ((view_depth * 6) + (side << 1))) = 1;
	goto L906d;
L900b:
	g50a1[((view_depth * 3) + side)] = 1;
	switch (side) {
case -1:
	g50ac[view_depth] = 0;
#asm
	db 0c6h,087h,0b4h,050h,000h,0c6h,087h,0bch,050h,000h
#endasm
	goto L9067;
case 0:
	g50c4[view_depth] = 0;
	goto L9067;
case 1:
	g50cc[view_depth] = 0;
#asm
	db 0c6h,087h,0d4h,050h,000h,0c6h,087h,0dch,050h,000h
#endasm
	goto L9067;
	}
L9067:
	return 0;
L906d:
	goto L90e3;
case 1:
	g50e5[((view_depth * 3) + side)] = 1;
#asm
	db 0c6h,087h,07dh,050h,001h
#endasm
	goto L90e3;
case 2:
case 3:
case 6:
case 11:
case 13:
	g50e5[((view_depth * 3) + side)] = 1;
	goto L90e3;
case 8:
case 10:
	*(int *)((char *)g508a + ((view_depth * 6) + (side << 1))) = 1;
	goto L90e3;
	}
L90e3:
	if (test_bit((maze_data + 1178), cell) != 1) goto L9139;
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
	g507d[((view_depth * 3) + side)] = 1;
	goto L9139;
	}
L9139:
	wall = 0;
	switch (party_facing) {
case 0:
	wall = get_bitfield((maze_data + 96), cell, 2);
	goto L91b9;
case 1:
	wall = get_bitfield((maze_data + 288), cell, 2);
	goto L91b9;
case 2:
	wall = get_west_wall(x, y, cx, cy, level);
	goto L91b9;
case 3:
	wall = get_south_wall(x, y, cx, cy, level);
	goto L91b9;
	}
L91b9:
	feature = get_bitfield((maze_data + 504), cell, 4);
	facing = get_bitfield((maze_data + 888), cell, 2);
	if (((facing != party_facing) && (feature != 6)) && (feature <= 12)) goto L92e4;
	switch (feature) {
case 1:
	wall = 5;
	goto L92e4;
case 2:
	wall = 6;
	goto L92e4;
case 3:
	wall = 8;
	goto L92e4;
case 4:
	wall = 9;
	goto L92e4;
case 5:
	wall = 14;
	goto L92e4;
case 6:
	*(int *)((char *)g50f2 + ((view_depth * 6) + (side << 1))) = 1;
	goto L92e4;
case 7:
	wall = 4;
	goto L92e4;
case 8:
	wall = 7;
	goto L92e4;
case 9:
	wall = 10;
	goto L92e4;
case 10:
	wall = 11;
	goto L92e4;
case 11:
	wall = 12;
	goto L92e4;
case 12:
	wall = 13;
	goto L92e4;
case 13:
	*(int *)((char *)g508a + ((view_depth * 6) + (side << 1))) = 1;
	goto L92e4;
case 14:
	g50e5[((view_depth * 3) + side)] = 1;
	goto L92e4;
case 15:
	g507d[((view_depth * 3) + side)] = 1;
	goto L92e4;
	}
L92e4:
	if (((!wall) || (view_depth)) || (side)) goto L92fd;
	view_rows_open = 0;
L92fd:
	return wall;
}
