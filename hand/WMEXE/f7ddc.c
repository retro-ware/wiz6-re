extern char g505c;
extern int g4fc8;
extern int g500a;
extern int group_monster_rec;
extern int monster_groups[];
extern int party_picture_win;
f7ddc(p4, p6, p8, p10, p12, p14, p16)
{
	int l2;
	char x2[2];
	int l6;
	int l8;
	char x8[24];
	g500a = 4;
	if (((unsigned)((char *)monster_groups[p4] + (44 * p6))[34] < 3) && (!((char *)monster_groups[p4] + (44 * p6))[43])) goto L7e10;
	return 0;
L7e10:
	l2 = 0;
	l6 = p12;
L7e1b:
	if (l6 <= 0) goto L7e45;
	l8 = p8;
L7e27:
	if (l8 <= 0) goto L7e40;
	l2 = ((random(p10) + l2) + 1);
	l8--;
	goto L7e27;
L7e40:
	l6--;
	goto L7e1b;
L7e45:
	if (p4) goto L7e66;
	movmem(((432 * p6) + 17722), (group_monster_rec + 148), 14);
L7e66:
	if (random(100) <= ((unsigned char)(*(char **)((char *)&group_monster_rec + (p4 << 1)))[p14 + 148] - p16)) goto L7ea4;
	l2 = f7af7(p4, l2, p14, p16);
	goto L7ea9;
L7ea4:
	l2 = 0;
L7ea9:
	clear_window_area(party_picture_win, 0, 2, 39, 4);
	set_cursor(party_picture_win, 1, 2);
	combat_delay(1);
	get_combatant_name(20492, p4, p6);
	print_combat_centered(20492, (p4 == 0 ? 1 : 6), 2);
	if (l2 <= 0) goto L8010;
	print_msg_centered(3302, 4, 3);
	combat_delay(2);
	int_to_string(l2, 20492);
	get_message(3309, 20652);
	set_cursor(party_picture_win, 0, 4);
	g505c = 0;
	print_combat_line(20492, 20652, 20572, 5, 5, 0);
	*(int *)(((char *)monster_groups[p4] + (44 * p6)) + 2) -= l2;
	if (*(int *)(((char *)monster_groups[p4] + (44 * p6)) + 2) > 0) goto L7fe5;
	combat_delay((g4fc8 / 4));
	do_damage_effect(p4, p6, 3486, 0, 3, 0, 6, 6, 3408, 0);
	goto L800e;
L7fe5:
	if (p4) goto L8000;
	play_sound(2);
	draw_member_card_x(p6, 1);
L8000:
	combat_delay((g4fc8 / 4));
L800e:
	goto L8022;
L8010:
	print_msg_centered(3310, 14, 3);
L8022:
	combat_delay((g4fc8 / 4));
	return l2;
}
