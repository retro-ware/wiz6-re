extern char pc_sex[];
extern int g435e;
extern int g4fc8;
extern int g500a;
extern int group_monster_rec[];
extern int monster_groups[];
extern int pc_hp[];
extern int pc_hp_max[];
struct s4 { int w[2]; };
struct s4 f5eea();
/* Apply special hit effects (poison, paralysis, drain, ...) of an attack. */
apply_hit_effects(p4, p6, p8, p10)
char *p4;
char *p6;
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	g500a = 4;
	l4 = ((*(int *)p4 - *(int *)((char *)monster_groups[p8] + (44 * p10))) * 3);
	l2 = 0;
L47db:
	if (random(100) >= (unsigned char)(p6 + l2)[4]) goto L4c34;
	l6 = ((*(int *)p4 / 3) + 1);
	switch (l2) {
case 0:
	do_status_effect(p8, p10, 3474, 9, 2, l4, l6, 2, l6, 3408, 0);
	goto L4c34;
case 1:
	do_status_effect(p8, p10, 3475, 4, 3, l4, ((l6 * l6) << 1), 5, l6, 3408, 0);
	goto L4c34;
case 2:
	do_status_effect(p8, p10, 3477, 6, 5, l4, (l6 * 10), 2, (unsigned char)p6[12], 3408, 0);
	goto L4c34;
case 3:
	do_damage_effect(p8, p10, 3485, 11, 2, l4, 14, 6, 3408, 0);
	goto L4c34;
case 4:
	goto L4c34;
case 5:
	if (!g435e) goto L4b58;
	l8 = 0;
	switch ((unsigned char)(*(char **)((char *)group_monster_rec + (g435e << 1)))[217]) {
case 3:
	l8 = roll_dice_x(f5eea((l6 << 1), 5, (l6 * 3)));
	reduce_field6(((char *)monster_groups[p8] + (44 * p10)), l8);
	l10 = 3751;
	goto L4a5e;
case 11:
	if (random(100) <= (unsigned char)(*(char **)((char *)group_monster_rec + (p8 << 1)))[161]) goto L4a4c;
	l8 = roll_dice_x(f5eea(1, 4, 0));
	*(int *)(((char *)monster_groups[p8] + (44 * p10)) + 4) -= l8;
	*(int *)(((char *)monster_groups[p8] + (44 * p10)) + 2) -= l8;
	if (*(int *)(((char *)monster_groups[p8] + (44 * p10)) + 4) < 1) {
	*(int *)(((char *)monster_groups[p8] + (44 * p10)) + 4) = 1;
	}
	if (!p8) {
	*(int *)((char *)pc_hp + (432 * p10)) = *(int *)(((char *)monster_groups[p8] + (44 * p10)) + 2);
	*(int *)((char *)pc_hp_max + (432 * p10)) = *(int *)(((char *)monster_groups[p8] + (44 * p10)) + 4);
	}
	l10 = 3752;
L4a4c:
	goto L4a5e;
	}
L4a5e:
	if (l8 <= 0) goto L4b58;
	get_combatant_name(20492, p8, p10);
	get_message(l10, 20572);
	if (l8 > 0) {
	int_to_string(l8, 20652);
	replace_char_with_string(20572, 20652, 36);
	}
	get_message(3750, 20652);
	clear_msg_line(4);
	print_combat_line(20492, 20652, 20572, (p8 == 0 ? 1 : 5), 5, 5);
	if (!p8) {
	play_sound(((unsigned char)pc_sex[(432 * p10)] + 8));
	draw_member_card_x(p10, 1);
	}
	combat_delay((g4fc8 / 2));
	if (*(int *)(((char *)monster_groups[p8] + (44 * p10)) + 2) > 0) goto L4b58;
	do_damage_effect(p8, p10, 3486, 0, 3, l4, 6, 6, 3408, 0);
L4b58:
	goto L4c34;
case 6:
	l10 = (p8 == 0 ? 11 : 13);
	if (random(100) > ((unsigned char)((char *)group_monster_rec[p8] + l10)[148] - l4)) {
	clear_msg_line(4);
	print_msg_centered(3495, 5, 4);
	combat_delay((g4fc8 / 4));
	do_damage_effect(p8, p10, 3486, 0, 3, l4, 6, 6, 3408, 0);
	}
	goto L4c34;
case 7:
	do_status_effect(p8, p10, 3484, 9, 2, l4, (l6 << 1), 3, l6, 3408, 0);
	goto L4c34;
	}
L4c34:
	l2++;
	if (l2 < 8) goto L47db;
}
