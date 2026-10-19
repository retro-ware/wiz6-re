extern char cfg_level;
extern char g00df[];
extern char g00e1[];
extern char g451b[];
extern char g4528[];
extern char pc_class[];
extern char pc_skills[];
extern int g4352;
extern int g435c;
extern int g435e;
extern int g4fc8;
extern int g50fc;
extern int g5118;
extern int monster_groups[];
extern int pc_item_id[];
do_use_item_action(p4)
char *p4;
{
	char x0[2];
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	int l16;
	char x16[4];
	char l21;
	char x21[8];
	char l30;
	char x30[30];
	int l62;
	char x62[26];
	int l90;
	l10 = (unsigned char)p4[31];
	l12 = (unsigned char)p4[32];
	get_combatant_name(20492, g435e, g435c);
	l4 = 0;
	l6 = 0;
	l16 = -1;
	if (g435e) goto Lb675;
	l8 = *(int *)(p4 + 10);
	access_scenario_record(1, &l90, *(int *)((char *)pc_item_id + ((432 * g435c) + (l8 << 3))), 0);
	strcpy(20572, &l90);
	if (!l62) goto Lb60c;
	l4 = (l62 / 256);
	l6 = (l62 % 256);
	switch ((unsigned char)l30) {
case 12:
	get_message(3313, 20652);
	goto Lb603;
case 13:
	get_message(3314, 20652);
	l16 = 24;
	goto Lb603;
case 16:
	get_message(3315, 20652);
	goto Lb603;
default:
	if (l6 < 80) goto Lb542;
	get_message(3318, 20652);
	goto Lb5e6;
Lb542:
	if (l4) goto Lb5d3;
	if (pc_class[(432 * g435c)] != 6) goto Lb5ad;
	l4 = ((((unsigned char)g4528[(432 * g435c)] / 15) + 2) - (unsigned char)g00df[(l6 * 6)]);
	try_raise_skill(g435c, 12, 1);
	if (l4 >= 0) goto Lb5a2;
	l4 = 0;
Lb5a2:
	if (l4 <= 6) goto Lb5ad;
	l4 = 6;
Lb5ad:
	if (l4) goto Lb5c3;
	get_message(3305, 20652);
	goto Lb5d1;
Lb5c3:
	get_message(3304, 20652);
Lb5d1:
	goto Lb5e6;
Lb5d3:
	get_message(3312, 20652);
	l16 = 22;
Lb5e6:
	goto Lb603;
	}
Lb603:
	use_item_charge_x(l8);
	goto Lb636;
Lb60c:
	if ((l30 != 2) && (l30 != 4)) goto Lb628;
	get_message(3317, 20652);
	goto Lb636;
Lb628:
	get_message(3316, 20652);
Lb636:
	if (l21 != 7) goto Lb655;
	g4352 = 1;
	l16 = -1;
	get_message(3312, 20652);
Lb655:
	print_combat_line(20492, 20652, 20572, 1, 14, 11);
	goto Lb675;
Lb675:
	if (!l4) goto Lb84c;
	g50fc = 0;
	g5118 = 0;
	l14 = (random((((unsigned char)g00df[(l6 * 6)] * 10) + (l4 * 5))) + -10);
	if (g435e) goto Lb733;
	if (l16 == -1) goto Lb731;
	try_raise_skill(g435c, l16, 3);
	if ((unsigned char)pc_skills[((432 * g435c) + l16)] >= l14) goto Lb731;
	if ((cfg_level == 1) || (random(36) <= ((unsigned char)g451b[(432 * g435c)] + 18))) goto Lb72b;
	g50fc = 1;
	goto Lb731;
Lb72b:
	g5118 = 1;
Lb731:
	goto Lb779;
Lb733:
	if (((*(int *)((char *)monster_groups[g435e] + (44 * g435c)) * 5) - 2) >= l14) goto Lb779;
	if ((cfg_level == 2) || (random(7))) goto Lb773;
	g50fc = 1;
	goto Lb779;
Lb773:
	g5118 = 1;
Lb779:
	if ((g50fc != 1) || (((unsigned char)g00e1[(l6 * 6)] & 2))) goto Lb7a4;
	g50fc = 0;
	g5118 = 1;
Lb7a4:
	if ((g5118 != 1) || (((unsigned char)g00e1[(l6 * 6)] & 1))) goto Lb7c9;
	g5118 = 0;
Lb7c9:
	if (g5118 != 1) goto Lb7fa;
	combat_delay(2);
	print_msg_centered(3201, 5, 2);
	combat_delay((g4fc8 / 2));
	goto Lb84a;
Lb7fa:
	if (g50fc != 1) goto Lb83b;
	combat_delay(2);
	print_msg_centered(3202, 4, 2);
	combat_delay((g4fc8 / 2));
	p4[31] = *(char *)&g435e;
	p4[32] = *(char *)&g435c;
Lb83b:
	do_cast_spell(p4, l6, l4);
Lb84a:
	goto Lb85a;
Lb84c:
	combat_delay((g4fc8 / 2));
Lb85a:
	;
}
