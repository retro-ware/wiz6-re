extern char cfg_level;
extern char g00df[];
extern char g00e0[];
extern char g00e1[];
extern char g0191[];
extern char g019d[];
extern char g451b[];
extern char g4529[];
extern char g4535[];
extern char party_count;
extern char pc_class[];
extern char spell_table[];
extern int g435c;
extern int g435e;
extern int g4fc8;
extern int g50fc;
extern int g5118;
extern int group_monster_rec[];
extern int monster_groups[];
extern int pc_spell_pts[];
extern int realm_colors[];
do_cast_action(p4)
char *p4;
{
	char x0[2];
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	g019d[monster_groups[0]] = party_count;
	l8 = (unsigned char)p4[31];
	l10 = (unsigned char)p4[32];
	l4 = (*(int *)(p4 + 10) / 256);
	l6 = (*(int *)(p4 + 10) % 256);
	get_combatant_name(20492, g435e, g435c);
	get_message(3308, 20652);
	get_message((l6 + 4000), 20572);
	print_combat_line(20492, 20652, 20572, (g435e == 0 ? 1 : 6), 14, realm_colors[(unsigned char)spell_table[(l6 * 6)]]);
	g50fc = 0;
	g5118 = 0;
	if (random((((unsigned char)g0191[monster_groups[g435e]] + *(int *)p4) + 1)) < (unsigned char)g0191[monster_groups[g435e]]) {
	g5118 = 1;
	}
	if (g435e) goto Lb21a;
	if (((pc_class[(432 * g435c)] != 5) && (pc_class[(432 * g435c)] != 4)) && (pc_class[(432 * g435c)] != 13)) goto Lb182;
	l14 = ((((unsigned char)g4535[(432 * g435c)] / 3) + 90) - ((unsigned char)g00df[(l6 * 6)] * l4));
	goto Lb1cb;
Lb182:
	l14 = ((((unsigned char)g4529[(432 * g435c)] / 3) + 90) - ((unsigned char)g00df[(l6 * 6)] * l4));
	try_raise_skill(g435c, 13, 2);
Lb1cb:
	if (random(100) <= l14) goto Lb217;
	if ((cfg_level == 1) || (random(36) <= ((unsigned char)g451b[(432 * g435c)] + 18))) goto Lb211;
	g5118 = 0;
	g50fc = 1;
	goto Lb217;
Lb211:
	g5118 = 1;
Lb217:
	goto Lb290;
Lb21a:
	l14 = (((*(int *)((char *)monster_groups[g435e] + (44 * g435c)) * 3) + 88) - ((unsigned char)g00df[(l6 * 6)] * l4));
	if (random(100) <= l14) goto Lb290;
	if ((cfg_level == 2) || (random(7))) goto Lb28a;
	g5118 = 0;
	g50fc = 1;
	goto Lb290;
Lb28a:
	g5118 = 1;
Lb290:
	l12 = 1;
	if (g435e) goto Lb2bc;
	if (((pc_class[(432 * g435c)] != 5) && (pc_class[(432 * g435c)] != 4)) && (pc_class[(432 * g435c)] != 13)) goto Lb2ba;
	l12 = 0;
Lb2ba:
	goto Lb2dc;
Lb2bc:
	if ((((*(char **)((char *)group_monster_rec + (g435e << 1)))[208] != 5) && ((*(char **)((char *)group_monster_rec + (g435e << 1)))[208] != 4)) && ((*(char **)((char *)group_monster_rec + (g435e << 1)))[208] != 13)) goto Lb2dc;
	l12 = 0;
Lb2dc:
	if ((g50fc != 1) || (((unsigned char)g00e1[(l6 * 6)] & 2))) goto Lb307;
	g50fc = 0;
	g5118 = 1;
Lb307:
	if ((g5118 != 1) || (((unsigned char)g00e1[(l6 * 6)] & 1))) goto Lb32c;
	g5118 = 0;
Lb32c:
	if ((l12 != 1) || ((unsigned)p4[14] <= 0)) goto Lb366;
	combat_delay(2);
	print_msg_centered(3200, 3, 2);
	combat_delay((g4fc8 / 2));
	goto Lb3e7;
Lb366:
	if (g5118 != 1) goto Lb397;
	combat_delay(2);
	print_msg_centered(3201, 5, 2);
	combat_delay((g4fc8 / 2));
	goto Lb3e7;
Lb397:
	if (g50fc == 1) {
	combat_delay(2);
	print_msg_centered(3202, 4, 2);
	combat_delay((g4fc8 / 2));
	p4[31] = *(char *)&g435e;
	p4[32] = *(char *)&g435c;
	}
	do_cast_spell(p4, l6, l4);
Lb3e7:
	if (!g435e) {
	*(int *)((char *)pc_spell_pts + ((432 * g435c) + ((unsigned char)spell_table[(l6 * 6)] << 2))) -= ((unsigned char)g00e0[(l6 * 6)] * l4);
	}
	return ((random(l4) + (unsigned char)g00df[(l6 * 6)]) + l4);
}
