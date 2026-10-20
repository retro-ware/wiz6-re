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
	l2 = ((char *)monster_groups[g435e] + (44 * g435c));
	if (((unsigned)l2[36] <= 0) || ((unsigned char)l2[37] != g435a)) goto Ld226;
	if (l2[43]) goto Ld1dc;
	if ((unsigned char)(l2 + (unsigned char)l2[33])[24] != g435a) {
	l2[43] = 3;
	clear_window(party_picture_win, 1);
	combat_delay(2);
	fb85f(3518, -1, 6);
	combat_delay((g4fc8 / 2));
	}
	if ((l6 = ((g435a - random(10)) + -5)) < 1) {
	l6 = 1;
	}
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
	if (((unsigned)l2[36] <= 0) || (l2[43] != 3)) goto Ld288;
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
	if ((unsigned)l2[33] > 3) {
	l2[33] = 3;
	}
	g435c++;
Ld2c3:
	if ((unsigned char)(*(char **)((char *)monster_groups + (g435e << 1)))[413] > g435c) goto Ld12b;
#asm
ld2dd:
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,0bfh,09dh,001h,000h
	db 077h,003h
#endasm
	goto Ld4a0;
Ld2f2:
	l4 = 0;
Ld2f7:
	l6 = (unsigned char)((char *)monster_groups[g435e] + l4)[402];
	if (((unsigned char)((char *)monster_groups[g435e] + l4)[406] != g435a) || (l6 <= 0)) goto Ld492;
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
	if (--g435a > 0) goto Ld11c;
	combat_delay(8);
	game_state = 14;
	return;
}
