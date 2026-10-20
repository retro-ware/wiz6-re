extern int g435e;
extern int g4fc8;
extern int g5116;
extern int group_monster_rec[];
extern int monster_group_count;
extern int monster_groups[];
extern int party_picture_win;
struct s4 { int w[2]; };
f8fa8(p4, p6, p8, p10, p12, p14, p16)
{
	int l2;
	int l4;
	char x4[416];
	int l422;
	int l424;
	combat_delay((g4fc8 / 4));
	g5116 = 0;
	if ((g435e) && (g435e != 6)) goto L9005;
	l4 = 6;
	if ((unsigned)(*(char **)((char *)monster_groups + (l4 << 1)))[413] <= 0) goto L9003;
	print_msg_centered(3217, 6, 2);
	return;
L9003:
	goto L9032;
L9005:
	if ((p16 <= 0) || (monster_group_count >= 5)) goto L901e;
	monster_group_count++;
	l4 = monster_group_count;
	goto L9032;
L901e:
	print_msg_centered(3217, 6, 2);
	return;
L9032:
	setmem(monster_groups[l4], 416, 0);
	l424 = 0;
	do {
	l424++;
	p16--;
	} while (((p16 > 0) && (!random(3))) && (l424 < 3));
	switch (p16) {
case 0:
	l422 = p4;
	goto L90d0;
case 1:
	l422 = p6;
	goto L90d0;
case 2:
	l422 = p8;
	goto L90d0;
case 3:
	l422 = p10;
	goto L90d0;
case 4:
	l422 = p12;
	goto L90d0;
case 5:
	l422 = p14;
	goto L90d0;
default:
	l422 = p4;
	goto L90d0;
	}
L90d0:
	access_scenario_record(4, group_monster_rec[l4], l422, 0);
	(*(char **)((char *)monster_groups + (l4 << 1)))[410] = *(char *)&l422;
	(*(char **)((char *)group_monster_rec + (l4 << 1)))[118] = *(char *)&l424;
	*(int *)((*(char **)((char *)group_monster_rec + (l4 << 1))) + 116) = (l424 - 1);
	(*(char **)((char *)monster_groups + (l4 << 1)))[413] = (char)roll_dice_x(*(struct s4 *)(((char *)group_monster_rec[l4] + 116)));
	if ((unsigned)(*(char **)((char *)monster_groups + (l4 << 1)))[413] < 1) {
	(*(char **)((char *)monster_groups + (l4 << 1)))[413] = 1;
	}
	if ((unsigned)(*(char **)((char *)monster_groups + (l4 << 1)))[413] > 9) {
	(*(char **)((char *)monster_groups + (l4 << 1)))[413] = 9;
	}
	for (l2 = 0; l2 < 6; l2++) {
	((char *)monster_groups[l4] + l2)[396] = 0;
	}
	for (l2 = 0; l2 < 4; l2++) {
	((char *)monster_groups[l4] + l2)[402] = 0;
	}
	(*(char **)((char *)monster_groups + (l4 << 1)))[412] = 0;
	for (l2 = 0; (unsigned char)(*(char **)((char *)monster_groups + (l4 << 1)))[413] > l2; l2++) {
	*(int *)((char *)monster_groups[l4] + (44 * l2)) = (unsigned char)(*(char **)((char *)group_monster_rec + (l4 << 1)))[122];
	*(int *)(((char *)monster_groups[l4] + (44 * l2)) + 4) = roll_dice_x(*(struct s4 *)(((char *)group_monster_rec[l4] + 120)));
	*(int *)(((char *)monster_groups[l4] + (44 * l2)) + 2) = *(int *)(((char *)monster_groups[l4] + (44 * l2)) + 4);
	*(int *)(((char *)monster_groups[l4] + (44 * l2)) + 8) = roll_dice_x(*(struct s4 *)(((char *)group_monster_rec[l4] + 124)));
	*(int *)(((char *)monster_groups[l4] + (44 * l2)) + 6) = *(int *)(((char *)monster_groups[l4] + (44 * l2)) + 8);
	((char *)monster_groups[l4] + (44 * l2))[42] = -1;
	((char *)monster_groups[l4] + (44 * l2))[30] = 10;
	((char *)monster_groups[l4] + (44 * l2))[33] = 0;
	((char *)monster_groups[l4] + (44 * l2))[24] = 0;
	}
	int_to_string((unsigned char)(*(char **)((char *)monster_groups + (l4 << 1)))[413], 20492);
	strcpy(20652, ((char *)group_monster_rec[l4] + (((*(char **)((char *)monster_groups + (l4 << 1)))[413] == 1 ? 0 : 1) << 4)));
	get_message(((*(char **)((char *)monster_groups + (l4 << 1)))[413] == 1 ? 3215 : 3216), 20572);
	set_cursor(party_picture_win, (20 - ((((strlen(20492) + strlen(20652)) + strlen(20572)) + 3) / 2)), 2);
	print_combat_line(20492, 20652, 20572, 1, 6, 6);
	return;
}
