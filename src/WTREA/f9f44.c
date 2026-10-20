extern char g5285[];
extern char g52a9[];
extern char g52b4[];
extern char g52cc[];
extern char g52d4[];
extern char g52ed[];
extern int g5282;
extern int g5292[];
extern int g52fa[];
extern int game_state_arg;
extern int maze_data;
extern int party_facing;
extern int view_rows_open;
get_front_wall_t(p4, p6, p8, p10, p12, p14)
{
	char x0[2];
	int l4;
	int l6;
	int l8;
	register int rsi;
	register int rdi;
	if ((!p14) || (!step_relative_t(&p4, &p6, &p8, &p10, &p12, p14, 0))) goto L9fd6;
	if ((!g5282) && (!p14)) {
	view_rows_open = 0;
	}
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto L9fd1;
	g5285[((g5282 * 3) + p14)] = 1;
	*(int *)((char *)g5292 + ((g5282 * 6) + (p14 << 1))) = 1;
	return 0;
L9fd1:
	return 2;
L9fd6:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (test_bit((maze_data + 1082), rsi) != 1) goto La10d;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if ((game_state_arg != 12) || (p12 >= 9)) goto La035;
	*(int *)((char *)g5292 + ((g5282 * 6) + (p14 << 1))) = 1;
	goto La097;
La035:
	g52a9[((g5282 * 3) + p14)] = 1;
	switch (p14) {
case -1:
	g52b4[g5282] = 0;
#asm
	db 0c6h,087h,0bch,052h,000h,0c6h,087h,0c4h,052h,000h
#endasm
	goto La091;
case 0:
	g52cc[g5282] = 0;
	goto La091;
case 1:
	g52d4[g5282] = 0;
#asm
	db 0c6h,087h,0dch,052h,000h,0c6h,087h,0e4h,052h,000h
#endasm
	goto La091;
	}
La091:
	return 0;
La097:
	goto La10d;
case 1:
	g52ed[((g5282 * 3) + p14)] = 1;
#asm
	db 0c6h,087h,085h,052h,001h
#endasm
	goto La10d;
case 2:
case 3:
case 6:
case 11:
case 13:
	g52ed[((g5282 * 3) + p14)] = 1;
	goto La10d;
case 8:
case 10:
	*(int *)((char *)g5292 + ((g5282 * 6) + (p14 << 1))) = 1;
	goto La10d;
	}
La10d:
	if (test_bit((maze_data + 1178), rsi) != 1) goto La163;
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
	g5285[((g5282 * 3) + p14)] = 1;
	goto La163;
	}
La163:
	l4 = 0;
	switch (party_facing) {
case 0:
	l4 = get_bitfield((maze_data + 96), rsi, 2);
	goto La1e3;
case 1:
	l4 = get_bitfield((maze_data + 288), rsi, 2);
	goto La1e3;
case 2:
	l4 = get_west_wall_t(p4, p6, p8, p10, p12);
	goto La1e3;
case 3:
	l4 = get_south_wall_t(p4, p6, p8, p10, p12);
	goto La1e3;
	}
La1e3:
	l6 = get_bitfield((maze_data + 504), rsi, 4);
	l8 = get_bitfield((maze_data + 888), rsi, 2);
	if (((l8 != party_facing) && (l6 != 6)) && (l6 <= 12)) goto La30e;
	switch (l6) {
case 1:
	l4 = 5;
	goto La30e;
case 2:
	l4 = 6;
	goto La30e;
case 3:
	l4 = 8;
	goto La30e;
case 4:
	l4 = 9;
	goto La30e;
case 5:
	l4 = 14;
	goto La30e;
case 6:
	*(int *)((char *)g52fa + ((g5282 * 6) + (p14 << 1))) = 1;
	goto La30e;
case 7:
	l4 = 4;
	goto La30e;
case 8:
	l4 = 7;
	goto La30e;
case 9:
	l4 = 10;
	goto La30e;
case 10:
	l4 = 11;
	goto La30e;
case 11:
	l4 = 12;
	goto La30e;
case 12:
	l4 = 13;
	goto La30e;
case 13:
	*(int *)((char *)g5292 + ((g5282 * 6) + (p14 << 1))) = 1;
	goto La30e;
case 14:
	g52ed[((g5282 * 3) + p14)] = 1;
	goto La30e;
case 15:
	g5285[((g5282 * 3) + p14)] = 1;
	goto La30e;
	}
La30e:
	if (((l4) && (!g5282)) && (!p14)) {
	view_rows_open = 0;
	}
	return l4;
}
