#asm
	extrn test_bit_:near
#endasm
extern char g5043[];
extern char g5067[];
extern char g5072[];
extern char g508a[];
extern char g5092[];
extern char g50ab[];
extern int g5040;
extern int g5050[];
extern int g50b8[];
extern int game_state_arg;
extern int maze_data;
extern int party_facing;
extern int view_rows_open;
get_front_wall_m(p4, p6, p8, p10, p12, p14)
{
	char x0[2];
	int l4;
	int l6;
	int l8;
	register int rsi;
	register int rdi;
	if ((!p14) || (!step_relative_m(&p4, &p6, &p8, &p10, &p12, p14, 0))) goto L7e1e;
	if ((g5040) || (p14)) goto L7dd5;
	view_rows_open = 0;
L7dd5:
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto L7e19;
	g5043[((g5040 * 3) + p14)] = 1;
	*(int *)((char *)g5050 + ((g5040 * 6) + (p14 << 1))) = 1;
	return 0;
L7e19:
	return 2;
L7e1e:
	;
#asm
l7e1e:
	db 08bh,046h,00ch,0b9h,006h,000h,0d3h,0e0h,08bh,04eh,00ah,0d1h,0e1h,0d1h,0e1h,0d1h
	db 0e1h,003h,0c1h,08bh,0f0h,003h,046h,008h,08bh,0f0h,056h,0a1h,0aah,04fh,005h,03ah
	db 004h,050h
	call test_bit_
	db 083h,0c4h,004h,03dh,001h,000h,074h,003h
#endasm
	goto L7f55;
L7e4e:
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if ((game_state_arg != 12) || (p12 >= 9)) goto L7e7d;
	*(int *)((char *)g5050 + ((g5040 * 6) + (p14 << 1))) = 1;
	goto L7edf;
L7e7d:
	g5067[((g5040 * 3) + p14)] = 1;
	switch (p14) {
case -1:
	g5072[g5040] = 0;
#asm
	db 0c6h,087h,07ah,050h,000h,0c6h,087h,082h,050h,000h
#endasm
	goto L7ed9;
case 0:
	g508a[g5040] = 0;
	goto L7ed9;
case 1:
	g5092[g5040] = 0;
#asm
	db 0c6h,087h,09ah,050h,000h,0c6h,087h,0a2h,050h,000h
#endasm
	goto L7ed9;
	}
L7ed9:
	return 0;
L7edf:
	goto L7f55;
case 1:
	g50ab[((g5040 * 3) + p14)] = 1;
#asm
	db 0c6h,087h,043h,050h,001h
#endasm
	goto L7f55;
case 2:
case 3:
case 6:
case 11:
case 13:
	g50ab[((g5040 * 3) + p14)] = 1;
	goto L7f55;
case 8:
case 10:
	*(int *)((char *)g5050 + ((g5040 * 6) + (p14 << 1))) = 1;
	goto L7f55;
	}
L7f55:
	if (test_bit((maze_data + 1178), rsi) != 1) goto L7fab;
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
	g5043[((g5040 * 3) + p14)] = 1;
	goto L7fab;
	}
L7fab:
	l4 = 0;
	switch (party_facing) {
case 0:
	l4 = get_bitfield((maze_data + 96), rsi, 2);
	goto L802b;
case 1:
	l4 = get_bitfield((maze_data + 288), rsi, 2);
	goto L802b;
case 2:
	l4 = f7c41(p4, p6, p8, p10, p12);
	goto L802b;
case 3:
	l4 = f7ca6(p4, p6, p8, p10, p12);
	goto L802b;
	}
L802b:
	l6 = get_bitfield((maze_data + 504), rsi, 4);
	l8 = get_bitfield((maze_data + 888), rsi, 2);
	if (((l8 != party_facing) && (l6 != 6)) && (l6 <= 12)) goto L8156;
	switch (l6) {
case 1:
	l4 = 5;
	goto L8156;
case 2:
	l4 = 6;
	goto L8156;
case 3:
	l4 = 8;
	goto L8156;
case 4:
	l4 = 9;
	goto L8156;
case 5:
	l4 = 14;
	goto L8156;
case 6:
	*(int *)((char *)g50b8 + ((g5040 * 6) + (p14 << 1))) = 1;
	goto L8156;
case 7:
	l4 = 4;
	goto L8156;
case 8:
	l4 = 7;
	goto L8156;
case 9:
	l4 = 10;
	goto L8156;
case 10:
	l4 = 11;
	goto L8156;
case 11:
	l4 = 12;
	goto L8156;
case 12:
	l4 = 13;
	goto L8156;
case 13:
	*(int *)((char *)g5050 + ((g5040 * 6) + (p14 << 1))) = 1;
	goto L8156;
case 14:
	g50ab[((g5040 * 3) + p14)] = 1;
	goto L8156;
case 15:
	g5043[((g5040 * 3) + p14)] = 1;
	goto L8156;
	}
L8156:
	if (((!l4) || (g5040)) || (p14)) goto L816f;
	view_rows_open = 0;
L816f:
	return l4;
}
