extern char g511d[];
extern char g5141[];
extern char g514c[];
extern char g5164[];
extern char g516c[];
extern char g5185[];
extern int chest_trap[];
extern int g512a[];
extern int game_state_arg;
extern int maze_data;
extern int party_facing;
extern int pclist_race;
extern int view_rows_open;
fd777(p4, p6, p8, p10, p12, p14)
{
	char x0[2];
	int l4;
	int l6;
	int l8;
	register int rsi;
	register int rdi;
	if (!p14) goto Ld809;
	if (!fd6f6(&p4, &p6, &p8, &p10, &p12, p14, 0)) goto Ld809;
	if ((pclist_race) || (p14)) goto Ld7c0;
	view_rows_open = 0;
Ld7c0:
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto Ld804;
	g511d[((pclist_race * 3) + p14)] = 1;
	*(int *)((char *)g512a + ((pclist_race * 6) + (p14 << 1))) = 1;
	return 0;
Ld804:
	return 2;
Ld809:
	rsi = (((p12 << 6) + (p10 << 3)) + p8);
	if (test_bit((maze_data + 1082), rsi) != 1) goto Ld940;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
case 12:
	if ((game_state_arg != 12) || (p12 >= 9)) goto Ld868;
	*(int *)((char *)g512a + ((pclist_race * 6) + (p14 << 1))) = 1;
	goto Ld8ca;
Ld868:
	g5141[((pclist_race * 3) + p14)] = 1;
	switch (p14) {
case -1:
	g514c[pclist_race] = 0;
#asm
	db 0c6h,087h,054h,051h,000h,0c6h,087h,05ch,051h,000h
#endasm
	goto Ld8c4;
case 0:
	g5164[pclist_race] = 0;
	goto Ld8c4;
case 1:
	g516c[pclist_race] = 0;
#asm
	db 0c6h,087h,074h,051h,000h,0c6h,087h,07ch,051h,000h
#endasm
	goto Ld8c4;
	}
Ld8c4:
	return 0;
Ld8ca:
	goto Ld940;
case 1:
	g5185[((pclist_race * 3) + p14)] = 1;
#asm
	db 0c6h,087h,01dh,051h,001h
#endasm
	goto Ld940;
case 2:
case 3:
case 6:
case 11:
case 13:
	g5185[((pclist_race * 3) + p14)] = 1;
	goto Ld940;
case 8:
case 10:
	*(int *)((char *)g512a + ((pclist_race * 6) + (p14 << 1))) = 1;
	goto Ld940;
	}
Ld940:
	if (test_bit((maze_data + 1178), rsi) != 1) goto Ld996;
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
	g511d[((pclist_race * 3) + p14)] = 1;
	goto Ld996;
	}
Ld996:
	l4 = 0;
	switch (party_facing) {
case 0:
	l4 = get_bitfield((maze_data + 96), rsi, 2);
	goto Lda16;
case 1:
	l4 = get_bitfield((maze_data + 288), rsi, 2);
	goto Lda16;
case 2:
	l4 = fd62c(p4, p6, p8, p10, p12);
	goto Lda16;
case 3:
	l4 = fd691(p4, p6, p8, p10, p12);
	goto Lda16;
	}
Lda16:
	l6 = get_bitfield((maze_data + 504), rsi, 4);
	l8 = get_bitfield((maze_data + 888), rsi, 2);
	if ((l8 == party_facing) || (l6 == 6)) goto Lda55;
	if (l6 <= 12) goto Ldb41;
Lda55:
	switch (l6) {
case 1:
	l4 = 5;
	goto Ldb41;
case 2:
	l4 = 6;
	goto Ldb41;
case 3:
	l4 = 8;
	goto Ldb41;
case 4:
	l4 = 9;
	goto Ldb41;
case 5:
	l4 = 14;
	goto Ldb41;
case 6:
	*(int *)((char *)chest_trap + ((pclist_race * 6) + (p14 << 1))) = 1;
	goto Ldb41;
case 7:
	l4 = 4;
	goto Ldb41;
case 8:
	l4 = 7;
	goto Ldb41;
case 9:
	l4 = 10;
	goto Ldb41;
case 10:
	l4 = 11;
	goto Ldb41;
case 11:
	l4 = 12;
	goto Ldb41;
case 12:
	l4 = 13;
	goto Ldb41;
case 13:
	*(int *)((char *)g512a + ((pclist_race * 6) + (p14 << 1))) = 1;
	goto Ldb41;
case 14:
	g5185[((pclist_race * 3) + p14)] = 1;
	goto Ldb41;
case 15:
	g511d[((pclist_race * 3) + p14)] = 1;
	goto Ldb41;
	}
Ldb41:
	if (((!l4) || (pclist_race)) || (p14)) goto Ldb5a;
	view_rows_open = 0;
Ldb5a:
	return l4;
}
