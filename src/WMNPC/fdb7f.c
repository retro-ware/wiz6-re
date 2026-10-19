extern char g6aa7[];
extern char g6acb[];
extern char g6ad6[];
extern char g6aee[];
extern char g6af6[];
extern char g6b0f[];
extern int g6aa4;
extern int g6ab4[];
extern int g6b1c[];
extern int game_state_arg;
extern int maze_data;
extern int party_facing;
extern int view_rows_open;
fdb7f(p4, p6, p8, p10, p12, p14)
{
	char x0[2];
	int l4;
	int l6;
	int l8;
	register int rsi;
	register int rdi;
	if (!p14) goto Ldc11;
	if (!fdafe(&p4, &p6, &p8, &p10, &p12, p14, 0)) goto Ldc11;
	if (g6aa4) goto Ldbc8;
	if (p14) goto Ldbc8;
	view_rows_open = 0;
Ldbc8:
	if (game_state_arg == 10) goto Ldbd6;
	if (game_state_arg != 12) goto Ldc0c;
Ldbd6:
	g6aa7[((g6aa4 * 3) + p14)] = 1;
	*(int *)((char *)g6ab4 + ((g6aa4 * 6) + (p14 << 1))) = 1;
	return 0;
Ldc0c:
	return 2;
Ldc11:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (test_bit((maze_data + 1082), rsi) != 1) goto Ldd48;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if (game_state_arg != 12) goto Ldc70;
	if (p12 >= 9) goto Ldc70;
	*(int *)((char *)g6ab4 + ((g6aa4 * 6) + (p14 << 1))) = 1;
	goto Ldcd2;
Ldc70:
	g6acb[((g6aa4 * 3) + p14)] = 1;
	switch (p14) {
case -1:
	g6ad6[g6aa4] = 0;
#asm
	db 0c6h,087h,0deh,06ah,000h,0c6h,087h,0e6h,06ah,000h
#endasm
	goto Ldccc;
case 0:
	g6aee[g6aa4] = 0;
	goto Ldccc;
case 1:
	g6af6[g6aa4] = 0;
#asm
	db 0c6h,087h,0feh,06ah,000h,0c6h,087h,006h,06bh,000h
#endasm
	goto Ldccc;
	}
Ldccc:
	return 0;
Ldcd2:
	goto Ldd48;
case 1:
	g6b0f[((g6aa4 * 3) + p14)] = 1;
#asm
	db 0c6h,087h,0a7h,06ah,001h
#endasm
	goto Ldd48;
case 2:
case 3:
case 6:
case 11:
case 13:
	g6b0f[((g6aa4 * 3) + p14)] = 1;
	goto Ldd48;
case 8:
case 10:
	*(int *)((char *)g6ab4 + ((g6aa4 * 6) + (p14 << 1))) = 1;
	goto Ldd48;
	}
Ldd48:
	if (test_bit((maze_data + 1178), rsi) != 1) goto Ldd9e;
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
	g6aa7[((g6aa4 * 3) + p14)] = 1;
	goto Ldd9e;
	}
Ldd9e:
	l4 = 0;
	switch (party_facing) {
case 0:
	l4 = get_bitfield((maze_data + 96), rsi, 2);
	goto Lde1e;
case 1:
	l4 = get_bitfield((maze_data + 288), rsi, 2);
	goto Lde1e;
case 2:
	l4 = fda34(p4, p6, p8, p10, p12);
	goto Lde1e;
case 3:
	l4 = fda99(p4, p6, p8, p10, p12);
	goto Lde1e;
	}
Lde1e:
	l6 = get_bitfield((maze_data + 504), rsi, 4);
	l8 = get_bitfield((maze_data + 888), rsi, 2);
	if (l8 == party_facing) goto Lde5d;
	if (l6 == 6) goto Lde5d;
	if (l6 <= 12) goto Ldf49;
Lde5d:
	switch (l6) {
case 1:
	l4 = 5;
	goto Ldf49;
case 2:
	l4 = 6;
	goto Ldf49;
case 3:
	l4 = 8;
	goto Ldf49;
case 4:
	l4 = 9;
	goto Ldf49;
case 5:
	l4 = 14;
	goto Ldf49;
case 6:
	*(int *)((char *)g6b1c + ((g6aa4 * 6) + (p14 << 1))) = 1;
	goto Ldf49;
case 7:
	l4 = 4;
	goto Ldf49;
case 8:
	l4 = 7;
	goto Ldf49;
case 9:
	l4 = 10;
	goto Ldf49;
case 10:
	l4 = 11;
	goto Ldf49;
case 11:
	l4 = 12;
	goto Ldf49;
case 12:
	l4 = 13;
	goto Ldf49;
case 13:
	*(int *)((char *)g6ab4 + ((g6aa4 * 6) + (p14 << 1))) = 1;
	goto Ldf49;
case 14:
	g6b0f[((g6aa4 * 3) + p14)] = 1;
	goto Ldf49;
case 15:
	g6aa7[((g6aa4 * 3) + p14)] = 1;
	goto Ldf49;
	}
Ldf49:
	if (!l4) goto Ldf62;
	if (g6aa4) goto Ldf62;
	if (p14) goto Ldf62;
	view_rows_open = 0;
Ldf62:
	return l4;
}
