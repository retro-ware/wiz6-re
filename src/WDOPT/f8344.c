extern char g5415[];
extern char g5439[];
extern char g5444[];
extern char g545c[];
extern char g5464[];
extern char g547d[];
extern int char_hp_max[];
extern int g5412;
extern int g5422[];
extern int game_state_arg;
extern int maze_data;
extern int party_facing;
extern int view_rows_open;
f8344(p4, p6, p8, p10, p12, p14)
{
	char x0[2];
	int l4;
	int l6;
	int l8;
	register int rsi;
	register int rdi;
	if (!p14) goto L83d6;
	if (!f82c3(&p4, &p6, &p8, &p10, &p12, p14, 0)) goto L83d6;
	if ((g5412) || (p14)) goto L838d;
	view_rows_open = 0;
L838d:
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto L83d1;
	g5415[((g5412 * 3) + p14)] = 1;
	*(int *)((char *)g5422 + ((g5412 * 6) + (p14 << 1))) = 1;
	return 0;
L83d1:
	return 2;
L83d6:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (test_bit((maze_data + 1082), rsi) != 1) goto L850d;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if ((game_state_arg != 12) || (p12 >= 9)) goto L8435;
	*(int *)((char *)g5422 + ((g5412 * 6) + (p14 << 1))) = 1;
	goto L8497;
L8435:
	g5439[((g5412 * 3) + p14)] = 1;
	switch (p14) {
case -1:
	g5444[g5412] = 0;
#asm
	db 0c6h,087h,04ch,054h,000h,0c6h,087h,054h,054h,000h
#endasm
	goto L8491;
case 0:
	g545c[g5412] = 0;
	goto L8491;
case 1:
	g5464[g5412] = 0;
#asm
	db 0c6h,087h,06ch,054h,000h,0c6h,087h,074h,054h,000h
#endasm
	goto L8491;
	}
L8491:
	return 0;
L8497:
	goto L850d;
case 1:
	g547d[((g5412 * 3) + p14)] = 1;
#asm
	db 0c6h,087h,015h,054h,001h
#endasm
	goto L850d;
case 2:
case 3:
case 6:
case 11:
case 13:
	g547d[((g5412 * 3) + p14)] = 1;
	goto L850d;
case 8:
case 10:
	*(int *)((char *)g5422 + ((g5412 * 6) + (p14 << 1))) = 1;
	goto L850d;
	}
L850d:
	if (test_bit((maze_data + 1178), rsi) != 1) goto L8563;
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
	g5415[((g5412 * 3) + p14)] = 1;
	goto L8563;
	}
L8563:
	l4 = 0;
	switch (party_facing) {
case 0:
	l4 = get_bitfield((maze_data + 96), rsi, 2);
	goto L85e3;
case 1:
	l4 = get_bitfield((maze_data + 288), rsi, 2);
	goto L85e3;
case 2:
	l4 = f81f9(p4, p6, p8, p10, p12);
	goto L85e3;
case 3:
	l4 = f825e(p4, p6, p8, p10, p12);
	goto L85e3;
	}
L85e3:
	l6 = get_bitfield((maze_data + 504), rsi, 4);
	l8 = get_bitfield((maze_data + 888), rsi, 2);
	if ((l8 == party_facing) || (l6 == 6)) goto L8622;
	if (l6 <= 12) goto L870e;
L8622:
	switch (l6) {
case 1:
	l4 = 5;
	goto L870e;
case 2:
	l4 = 6;
	goto L870e;
case 3:
	l4 = 8;
	goto L870e;
case 4:
	l4 = 9;
	goto L870e;
case 5:
	l4 = 14;
	goto L870e;
case 6:
	*(int *)((char *)char_hp_max + ((g5412 * 6) + (p14 << 1))) = 1;
	goto L870e;
case 7:
	l4 = 4;
	goto L870e;
case 8:
	l4 = 7;
	goto L870e;
case 9:
	l4 = 10;
	goto L870e;
case 10:
	l4 = 11;
	goto L870e;
case 11:
	l4 = 12;
	goto L870e;
case 12:
	l4 = 13;
	goto L870e;
case 13:
	*(int *)((char *)g5422 + ((g5412 * 6) + (p14 << 1))) = 1;
	goto L870e;
case 14:
	g547d[((g5412 * 3) + p14)] = 1;
	goto L870e;
case 15:
	g5415[((g5412 * 3) + p14)] = 1;
	goto L870e;
	}
L870e:
	if (((!l4) || (g5412)) || (p14)) goto L8727;
	view_rows_open = 0;
L8727:
	return l4;
}
