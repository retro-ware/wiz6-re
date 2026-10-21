extern int g4fc8;
extern int group_monster_rec[];
extern int monster_groups[];
extern int party_picture_win;
f88b1(p4, p6, p8, p10, p12)
{
	int l2;
	int l4;
	int l6;
	char x6[2];
	int l10;
	int l12;
	int l14;
	int l16;
	l10 = (unsigned char)(*(char **)((char *)monster_groups + (p4 << 1)))[413];
	l12 = (p6 < 0 ? -p6 : p6);
	if (l12 > l10) {
	l12 = l10;
	}
	l14 = random((l10 - l12));
	l2 = l14;
	goto L8bc8;
L88fa:
	if (((unsigned)((char *)monster_groups[p4] + (44 * l2))[34] >= 3) || (((char *)monster_groups[p4] + (44 * l2))[43])) goto L8bc5;
	clear_window_area(party_picture_win, 0, 2, 39, 4);
	set_cursor(party_picture_win, 1, 2);
	combat_delay(1);
	get_combatant_name(20492, p4, l2);
	print_combat_centered(20492, (p4 == 0 ? 1 : 6), 2);
	l6 = f7af7(p4, p10, 3, p8);
	if ((l6 <= 0) || (random(100) <= ((unsigned char)(*(char **)((char *)group_monster_rec + (p4 << 1)))[151] - p8))) goto L8ba5;
	if (p12 != 1) goto L8a8c;
	((char *)monster_groups[p4] + (44 * l2))[40] = (char)clamp_toward_x((((l6 - 1) / 2) + 1), ((char *)monster_groups[p4] + (44 * l2))[40], 1);
	((char *)monster_groups[p4] + (44 * l2))[39] = (char)clamp_toward_x((((l6 - 1) / 2) + 1), ((char *)monster_groups[p4] + (44 * l2))[39], 0);
	if ((l4 = (*(int *)((char *)monster_groups[p4] + (44 * l2)) - l6)) < 1) {
	l4 = 1;
	}
	*(int *)((char *)monster_groups[p4] + (44 * l2)) = l4;
	l16 = 3491;
	goto L8b71;
L8a8c:
	((char *)monster_groups[p4] + (44 * l2))[41] = (char)clamp_toward_x((l6 * 3), ((char *)monster_groups[p4] + (44 * l2))[41], 1);
	for (l10 = 0; l10 < 4; l10++) {
	((char *)monster_groups[p4] + ((44 * l2) + l10))[24] = (char)((unsigned char)((char *)monster_groups[p4] + ((44 * l2) + l10))[24] / 2);
	}
	if (((char *)monster_groups[p4] + (44 * l2))[41] < 0) {
	if ((l10 = ((((char *)monster_groups[p4] + (44 * l2))[41] < 0 ? -((char *)monster_groups[p4] + (44 * l2))[41] : ((char *)monster_groups[p4] + (44 * l2))[41]) / 10)) > 3) {
	l10 = 3;
	}
	while (l10 > 0) {
	((char *)monster_groups[p4] + ((44 * l2) + (4 - l10)))[24] = 0;
	l10--;
	}
	}
L8b6c:
	l16 = 3494;
L8b71:
	print_msg_centered(l16, 5, 3);
	if (!p4) {
	draw_member_card_x(l2, 0);
	}
	combat_delay((g4fc8 / 2));
	goto L8bc5;
L8ba5:
	print_msg_centered(3471, 14, 3);
	combat_delay((g4fc8 / 2));
L8bc5:
	l2++;
L8bc8:
	if ((l14 + l12) > l2) goto L88fa;
}
