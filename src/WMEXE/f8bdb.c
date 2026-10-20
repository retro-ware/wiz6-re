extern int g4fc8;
extern int group_monster_rec[];
extern int monster_groups[];
extern int party_picture_win;
f8bdb(p4, p6, p8, p10)
{
	int l2;
	int l4;
	int l6;
	int l8;
	l4 = (unsigned char)(*(char **)((char *)monster_groups + (p4 << 1)))[413];
	l6 = (p6 < 0 ? -p6 : p6);
	if (l6 > l4) {
	l6 = l4;
	}
	l8 = random((l4 - l6));
	l2 = l8;
	goto L8ee9;
L8c24:
	if (random(100) <= ((unsigned char)(*(char **)((char *)group_monster_rec + (p4 << 1)))[150] - p10)) goto L8e42;
	switch (random(10)) {
case 0:
	f7ddc(p4, l2, 4, 7, p8, 12, p10);
	goto L8e3f;
case 1:
	f825f(p4, l2, 3476, 2, 4, p10, 0, (p8 << 1), 4, p8, 0, 0);
	goto L8e3f;
case 2:
	f825f(p4, l2, 3474, 9, 2, p10, 0, p8, 2, 0, 0, 0);
	goto L8e3f;
case 3:
	f825f(p4, l2, 3475, 4, 3, p10, 0, (p8 << 1), 1, p8, 0, 0);
	goto L8e3f;
case 4:
	f825f(p4, l2, 3480, 5, 8, p10, 0, p8, 4, p8, 0, 0);
	goto L8e3f;
case 5:
	f825f(p4, l2, 3489, 11, 3, (p10 + -25), 1, 0, 0, 0, 14, 6);
	goto L8e3f;
case 6:
	f7ddc(p4, l2, (p8 << 1), 4, (p8 << 1), 0, p10);
	goto L8e3f;
case 7:
	f825f(p4, l2, 3479, 10, 7, p10, 0, p8, 2, p8, 0, 0);
	goto L8e3f;
case 8:
	f825f(p4, l2, 3485, 11, 2, (p10 + -25), 1, 0, 0, 0, 14, 6);
	goto L8e3f;
case 9:
	f7ddc(p4, l2, 4, 7, p8, 1, p10);
	goto L8e3f;
	}
L8e3f:
	goto L8ee6;
L8e42:
	if (((unsigned)((char *)monster_groups[p4] + (44 * l2))[34] >= 3) || (((char *)monster_groups[p4] + (44 * l2))[43])) goto L8ee6;
	clear_window_area(party_picture_win, 0, 2, 39, 4);
	set_cursor(party_picture_win, 1, 2);
	combat_delay(1);
	get_combatant_name(20492, p4, l2);
	print_combat_centered(20492, (p4 == 0 ? 1 : 6), 2);
	print_msg_centered(3471, 14, 3);
	combat_delay((g4fc8 / 2));
L8ee6:
	l2++;
L8ee9:
	if ((l8 + l6) > l2) goto L8c24;
}
