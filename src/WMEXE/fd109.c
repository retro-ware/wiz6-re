extern char g019d[];
extern int g435a;
extern int g435c;
extern int g435e;
extern int g4fc8;
extern int game_state;
extern int monster_groups[];
extern int party_picture_win;
/* Main loop of a combat round: run every combatant's action in initiative order. */
run_combat_round()
{
	char *l2;
	int l4;
	int l6;
	reset_effects();
	refresh_all_windows();
	g435a = 100;
Ld11c:
	g435e = 0;
Ld122:
	g435c = 0;
	goto Ld2c3;
Ld12b:
	;
#asm
ld12b:
	db 0b8h,02ch,000h,0f7h,02eh,05ch,043h,08bh,0c8h,0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h
	db 08bh,087h,0a8h,043h,003h,0c1h,089h,046h,0feh,08bh,0d8h,080h,07fh,024h,000h,077h
	db 003h
#endasm
	goto Ld226;
Ld14f:
	;
#asm
ld14f:
	db 08ah,047h,025h,02ah,0e4h,03bh,006h,05ah,043h,074h,003h
#endasm
	goto Ld226;
Ld15d:
	;
#asm
ld15d:
	db 080h,07fh,02bh,000h,074h,003h,0e9h,076h,000h
#endasm
Ld166:
	;
#asm
ld166:
	db 08ah,047h,021h,02ah,0e4h,08bh,0f0h,08ah,040h,018h,02ah,0e4h,03bh,006h,05ah,043h
	db 074h,03ah,0c6h,047h,02bh,003h
#endasm
	clear_window(party_picture_win, 1);
	combat_delay(2);
	fb85f(3518, -1, 6);
	combat_delay((g4fc8 / 2));
Ld1b2:
	l6 = ((g435a - random(10)) + -5);
	if (l6 >= 1) goto Ld1d1;
	l6 = 1;
Ld1d1:
	l2[37] = *(char *)&l6;
	goto Ld226;
Ld1dc:
	if (l2[43] != 3) goto Ld226;
	l2[43] = 0;
	l2[37] = 0;
	clear_window(party_picture_win, 1);
	combat_delay(2);
	fb85f(3519, -1, 6);
	combat_delay((g4fc8 / 2));
Ld226:
	if ((unsigned char)(l2 + (unsigned char)l2[33])[24] != g435a) goto Ld29f;
	if ((unsigned)l2[36] <= 0) goto Ld288;
	if (l2[43] != 3) goto Ld288;
	l2[43] = 0;
	l2[37] = 0;
	clear_window(party_picture_win, 1);
	combat_delay(2);
	fb85f(3519, -1, 6);
	combat_delay((g4fc8 / 2));
Ld288:
	fc66e();
	l2[33]++;
	if (game_state == 13) goto Ld29d;
	return;
Ld29d:
	goto Ld2b2;
Ld29f:
	if ((l2 + (unsigned char)l2[33])[24]) goto Ld2b2;
	l2[33]++;
Ld2b2:
	if ((unsigned)l2[33] <= 3) goto Ld2bf;
	l2[33] = 3;
Ld2bf:
	g435c++;
Ld2c3:
	if ((unsigned char)g019d[monster_groups[g435e]] > g435c) goto Ld12b;
#asm
ld2dd:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,0bfh,09dh,001h,000h
	db 077h,003h
#endasm
	goto Ld4a0;
Ld2f2:
	l4 = 0;
Ld2f7:
	;
#asm
ld2f7:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,076h,0fch,08ah,080h
	db 092h,001h,02ah,0e4h,089h,046h,0fah,08ah,080h,096h,001h,02ah,0e4h,03bh,006h,05ah
	db 043h,074h,003h
#endasm
	goto Ld492;
Ld31d:
	if (l6 <= 0) goto Ld492;
	clear_window(party_picture_win, 1);
	combat_delay(2);
	switch (l4) {
case 0:
	fd0ad(3220, 4);
	f8149(g435e, -10, 2, 4, l6, 1, ((l6 * 5) + 25));
	goto Ld492;
case 1:
	fd0ad(3221, 3);
	f83f3(g435e, -10, 3477, 6, l6, ((l6 * 5) + 25), 1, 4, 5, 0, (l6 * 10), 2, l6, 0, 0);
	goto Ld492;
case 2:
	fd0ad(3222, 6);
	f83f3(g435e, -10, 3480, 5, l6, ((l6 * 5) + 25), 2, 3, 8, 0, l6, 4, l6, 0, 0);
	goto Ld492;
case 3:
	fd0ad(3223, 6);
	f8149(g435e, -10, 1, 6, l6, 8, ((l6 * 5) + 25));
	goto Ld492;
	}
Ld492:
	l4++;
	if (l4 < 4) goto Ld2f7;
Ld4a0:
	g435e++;
	if (g435e < 7) goto Ld122;
	g435a--;
#asm
	db 07eh,003h
#endasm
	goto Ld11c;
Ld4b8:
	combat_delay(8);
	game_state = 14;
	return;
}
