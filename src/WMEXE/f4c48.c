extern char *g43b8;
extern char g018e[];
extern char g44e6[];
extern char g44f6[];
extern char g44f9[];
extern char g4524[];
extern char g4525[];
extern char g4596[];
extern char g505c;
extern char g50ac;
extern char pc_class[];
extern char pc_equipped[];
extern char pc_item_icon[];
extern char pc_item_qty[];
extern char pc_item_type[];
extern char pc_skills[];
extern int g4352;
extern int g435a;
extern int g435c;
extern int g435e;
extern int g44d8[];
extern int g44da[];
extern int g44e8[];
extern int g44ea[];
extern int g4ecc;
extern int g4ece;
extern int g4ed4;
extern int g4ed6;
extern int g4fc8;
extern int g4fcc;
extern int g500a;
extern int g50fc;
extern int group_monster_rec[];
extern int monster_groups[];
extern int party_picture_win;
extern int pc_item_id[];
struct s14 { int w[7]; };
/* Execute one melee/missile attack of the acting combatant (g435e side, g435c index); p8 is the attack kind. */
do_attack(p4, p6, p8)
char *p4;
{
	char x0[44];
	int l46;
	char x46[26];
	int l74;
	int l76;
	int l78;
	int l80;
	char *l82;
	int l84;
	int l86;
	int l88;
	int l90;
	int l92;
	int l94;
	int l96;
	int l98;
	int l100;
	int l102;
	char x102[2];
	int l106;
	int l108;
	char l110[2];
	int l112;
	int l114;
	int l116;
	int l118;
	char x118[4];
	int l124;
	int l126;
	int l128;
	char x128[8];
	int l138;
	int l140;
	int l142;
	int l144;
	int l146;
	int l148;
	int l150;
	int l152;
	int l154;
	int l156;
	int l158;
	int l160;
	l78 = (unsigned char)p4[31];
	l80 = (unsigned char)p4[32];
	l118 = -1;
	l150 = -1;
	l158 = 0;
	g500a = 4;
	get_combatant_name(20492, g435e, g435c);
	g50ac = 0;
	g505c = 0;
	if (g435e) goto L4e25;
	get_message((p8 + 3350), 20652);
	l76 = (unsigned char)pc_equipped[((432 * g435c) + p6)];
	if (p8 == 8) {
	l76 = (unsigned char)g44f9[(432 * g435c)];
	}
	if (((!p4[43]) || (p8 == 4)) || (p8 == 8)) goto L4d0a;
	get_message((random(2) + 3385), 20652);
L4d0a:
	if (l76 == 255) goto L4e22;
	access_scenario_record(1, &l74, *(int *)((char *)pc_item_id + ((432 * g435c) + (l76 << 3))), 0);
	strcpy(20572, &l74);
	if ((p8 != 4) && (p8 != 8)) goto L4e22;
	if ((p8 != 4) || (!l46)) goto L4d7c;
	l150 = l46;
	get_message(3384, 20652);
L4d7c:
	switch ((unsigned char)pc_item_icon[((432 * g435c) + (l76 << 3))]) {
case 0:
	l118 = 5;
	goto L4e22;
case 20:
	l118 = 11;
	goto L4e22;
case 6:
	l118 = 10;
	goto L4e22;
case 18:
	l118 = 13;
	goto L4e22;
case 21:
	l118 = 12;
	goto L4e22;
case 22:
case 83:
	l118 = 7;
	goto L4e22;
case 23:
	l118 = 9;
	goto L4e22;
case 32:
case 100:
case 101:
	l118 = 14;
	goto L4e22;
case 34:
	l118 = 3;
	goto L4e22;
	}
L4e22:
	goto L4f9b;
L4e25:
	if ((unsigned)((char *)group_monster_rec[g435e] + p6)[128] > 3) goto L4f79;
	get_message((p8 + 3350), 20652);
	if ((!p4[43]) || ((p8 == 4) || (p8 == 8))) goto L4e7a;
	get_message((random(2) + 3385), 20652);
L4e7a:
	if ((p8 != 4) && (p8 != 8)) goto L4f4e;
	l112 = *(int *)(((char *)group_monster_rec[g435e] + (p6 << 4)) + 68);
	*(int *)(l110 + 0) = *(int *)(((char *)group_monster_rec[g435e] + (p6 << 4)) + 70);
	switch ((unsigned char)((char *)group_monster_rec[g435e] + p6)[131]) {
case 2:
	l118 = 6;
	goto L4f39;
case 7:
	l118 = 9;
	goto L4f39;
case 9:
case 10:
	l118 = 10;
	goto L4f39;
case 13:
case 18:
case 19:
case 24:
	l118 = 8;
	goto L4f39;
case 28:
	l118 = 12;
	goto L4f39;
case 32:
	l118 = 14;
	l150 = (((unsigned char)l110[0] << 8) + (unsigned char)l110[(0 + 1)]);
	goto L4f39;
	}
L4f39:
	if (l150 == -1) goto L4f4e;
	get_message(3384, 20652);
L4f4e:
	if ((unsigned)((char *)group_monster_rec[g435e] + p6)[131] > 0) {
	get_message(((unsigned char)((char *)group_monster_rec[g435e] + p6)[131] + 3799), 20572);
	}
	goto L4f9b;
L4f79:
	get_message(((unsigned char)((char *)group_monster_rec[g435e] + p6)[128] + 3371), 20652);
L4f9b:
	print_combat_line(20492, 20652, 20572, (g435e == 0 ? 1 : 6), 14, 11);
	if (l150 == -1) {
	get_combatant_name(20492, l78, l80);
	print_combat_centered(20492, (l78 == 0 ? 1 : 6), 2);
	}
	if (l118 != -1) {
	f8efc(l78, l80, l118, (l150 == -1 ? 0 : 1));
	l158 = 1;
	}
	l84 = (((((unsigned char)(*(char **)((char *)group_monster_rec + (l78 << 1)))[137] + (unsigned char)(*(char **)((char *)group_monster_rec + (l78 << 1)))[136]) + (unsigned char)(*(char **)((char *)group_monster_rec + (l78 << 1)))[135]) - (((unsigned char)(*(char **)((char *)group_monster_rec + (g435e << 1)))[137] + (unsigned char)(*(char **)((char *)group_monster_rec + (g435e << 1)))[136]) + (unsigned char)(*(char **)((char *)group_monster_rec + (g435e << 1)))[135])) / 2);
	l126 = p4[40];
	if (g435e) goto L5408;
	if (p8 != 4) goto L509d;
	l124 = 5;
	goto L51d1;
L509d:
	if ((unsigned char)pc_equipped[((432 * g435c) + p6)] == 255) goto L51cc;
	switch ((unsigned char)pc_item_icon[((432 * g435c) + ((unsigned char)pc_equipped[((432 * g435c) + p6)] << 3))]) {
case 0:
case 18:
case 89:
	l124 = 0;
	goto L51ca;
case 1:
case 14:
case 15:
case 16:
case 51:
case 53:
case 55:
case 58:
case 59:
	l124 = 1;
	goto L51ca;
case 2:
case 3:
case 20:
	l124 = 2;
	goto L51ca;
case 4:
case 5:
case 6:
case 52:
case 54:
case 56:
case 98:
	l124 = 3;
	goto L51ca;
case 7:
case 8:
case 9:
case 10:
case 17:
case 19:
case 57:
case 90:
	l124 = 4;
	goto L51ca;
case 11:
case 12:
	l124 = 7;
	goto L51ca;
case 13:
	l124 = 6;
	goto L51ca;
case 24:
case 38:
	l124 = 8;
	goto L51ca;
default:
	l124 = 0;
	goto L51ca;
	}
L51ca:
	goto L51d1;
L51cc:
	l124 = 9;
L51d1:
	if ((((l124 == 9) && ((unsigned)g4525[(432 * g435c)] <= 0)) && (pc_class[(432 * g435c)] != 12)) && (pc_class[(432 * g435c)] != 13)) goto L5206;
	try_raise_skill(g435c, l124, 2);
L5206:
	*(struct s14 *)(char *)(&l142) = *(struct s14 *)(char *)(get_load_category_x(g435c));
	l144 = (p6 == 0 ? l140 : l138);
	l86 = ((((((f4572(0, *(int *)(p4 + 6), *(int *)(p4 + 8)) + g4596[(432 * g435c)]) + g44e6[((432 * g435c) + (p6 << 4))]) + (p4[39] * 5)) + l84) + l144) - ((unsigned char)pc_skills[((432 * g435c) + l124)] / 3));
	l112 = *(int *)((char *)g44d8 + ((432 * g435c) + (p6 << 4)));
	*(int *)(l110 + 0) = *(int *)((char *)g44da + ((432 * g435c) + (p6 << 4)));
	l82 = (char *)g44d8 + ((432 * g435c) + (p6 << 4));
	l114 = (unsigned char)pc_equipped[((432 * g435c) + p6)];
	if (p8 != 8) goto L5356;
	if (((l116 = (unsigned char)g44f9[(432 * g435c)]) == 255) || (pc_item_type[((432 * g435c) + (l116 << 3))] != 4)) goto L5354;
	l112 = *(int *)((char *)g44e8 + (432 * g435c));
	*(int *)(l110 + 0) = *(int *)((char *)g44ea + (432 * g435c));
	l82 = (char *)g44e8 + (432 * g435c);
	l86 += g44f6[(432 * g435c)];
	l126 = 0;
	use_item_charge_x(l116);
L5354:
	goto L5391;
L5356:
	if (p8 != 4) goto L5391;
	if ((pc_item_type[((432 * g435c) + (l114 << 3))] != 14) && (((unsigned)pc_item_type[((432 * g435c) + (l114 << 3))] >= 12) || (pc_item_type[((432 * g435c) + (l114 << 3))] == 2))) goto L5385;
	pc_item_qty[((432 * g435c) + (l114 << 3))] = 1;
L5385:
	l126 = 0;
	use_item_charge_x(l114);
L5391:
	l88 = (f4572(1, *(int *)(((char *)monster_groups[l78] + (44 * l80)) + 6), *(int *)(((char *)monster_groups[l78] + (44 * l80)) + 8)) + ((char *)monster_groups[l78] + (44 * l80))[38]);
	if (g4ed4 > 0) {
	l88 += g4ed6;
	}
	l90 = ((*(char **)((char *)group_monster_rec + (l78 << 1)))[190] + l88);
	l92 = (((char *)group_monster_rec[l78] + p8)[198] + l88);
	goto L5531;
L5408:
	l86 = (((f4572(0, *(int *)(p4 + 6), *(int *)(p4 + 8)) + (p4[39] * 5)) + ((char *)group_monster_rec[g435e] + (p6 << 4))[82]) + l84);
	l112 = *(int *)(((char *)group_monster_rec[g435e] + (p6 << 4)) + 68);
	*(int *)(l110 + 0) = *(int *)(((char *)group_monster_rec[g435e] + (p6 << 4)) + 70);
	l82 = (((char *)group_monster_rec[g435e] + (p6 << 4)) + 68);
	if ((p8 != 4) && (p8 != 8)) goto L547a;
	l126 = 0;
L547a:
	if (!l78) {
	*(struct s14 *)(char *)(&l142) = *(struct s14 *)(char *)(get_load_category_x(l80));
	l146 = l142;
	} else {
	l146 = 0;
	}
	l88 = (f4572(1, *(int *)(((char *)monster_groups[l78] + (44 * l80)) + 6), *(int *)(((char *)monster_groups[l78] + (44 * l80)) + 8)) + ((char *)monster_groups[l78] + (44 * l80))[38]);
	if ((l78) || (g4ecc <= 0)) goto L54fc;
	l88 -= g4ece;
L54fc:
	l90 = (((*(char **)((char *)group_monster_rec + (l78 << 1)))[190] + l88) + l146);
	l92 = (l88 + l146);
	if (!l78) goto L5531;
	l92 += ((char *)group_monster_rec[l78] + p8)[198];
L5531:
	l156 = 1;
	if (p4[43]) {
	l90 = (l90 > 10 ? l90 : 10);
	l156 = 2;
	}
	if ((unsigned)p4[18] > 0) {
	l86 = (l86 < 90 ? 90 : l86);
	l90 = (l90 > 0 ? 0 : l90);
	}
	if ((((unsigned)p4[22] <= 0) && ((unsigned)p4[15] <= 0)) && ((unsigned)p4[23] <= 0)) goto L5591;
	l86 += 25;
L5591:
	if (((((unsigned)((char *)monster_groups[l78] + (44 * l80))[18] <= 0) && ((unsigned)((char *)monster_groups[l78] + (44 * l80))[16] <= 0)) && ((unsigned)((char *)monster_groups[l78] + (44 * l80))[17] <= 0)) && (((char *)monster_groups[l78] + (44 * l80))[34] != 2)) goto L55c7;
	l90 = 15;
	l156 = 2;
L55c7:
	if (((unsigned)((char *)monster_groups[l78] + (44 * l80))[22] <= 0) && ((unsigned)((char *)monster_groups[l78] + (44 * l80))[15] <= 0)) goto L55d7;
	l90 += 4;
L55d7:
	l128 = 0;
	if ((unsigned)(*(char **)((char *)group_monster_rec + (g435e << 1)))[134] > 15) {
	l128++;
	}
	if ((unsigned)(*(char **)((char *)group_monster_rec + (g435e << 1)))[134] > 17) {
	l128++;
	}
	l126 += l128;
	if ((l100 = (random(((unsigned char)(*(char **)((char *)group_monster_rec + (g435e << 1)))[212] - (((char *)monster_groups[l78] + (44 * l80))[41] / 10))) + 1)) < 1) {
	l100 = 1;
	}
	if (l100 > 4) {
	l100 = 4;
	}
	switch (p8) {
case 0:
	goto L56f9;
case 1:
	l90 -= 2;
	l92++;
	l126++;
	goto L56f9;
case 2:
	l92 -= 2;
	l126 = ((l126 + l128) + 2);
	goto L56f9;
case 3:
	l90 += -4;
	l92 += -4;
	l156 = 2;
	goto L56f9;
case 4:
	l100 = 1;
	l156 = 1;
	l90--;
	l92++;
	goto L56f9;
case 5:
	l90++;
	l92--;
	goto L56f9;
case 6:
	l90 -= 2;
	l126 = ((l126 + l128) + 2);
	goto L56f9;
case 7:
	l90 += 2;
	l92 -= 2;
	l156 = 1;
	goto L56f9;
case 8:
	l100 = 1;
	l156 = 1;
	l92 += 2;
	goto L56f9;
	}
L56f9:
	if (((char *)monster_groups[l78] + (44 * l80))[30] == 7) {
	l90 = (l90 > 10 ? l90 : 10);
	l156 = 2;
	}
	if ((((((char *)monster_groups[l78] + (44 * l80))[18]) || (((char *)monster_groups[l78] + (44 * l80))[16])) || (((char *)monster_groups[l78] + (44 * l80))[17])) || (((char *)monster_groups[l78] + (44 * l80))[34])) goto L59aa;
	if (((char *)monster_groups[l78] + (44 * l80))[30] != 1) goto L5971;
	switch (*(int *)(((char *)monster_groups[l78] + (44 * l80)) + 10)) {
case 0:
	if (!l78) {
	l90 -= (((unsigned char)g4524[(432 * l80)] / 10) + 1);
	try_raise_skill(l80, 8, 2);
	} else {
	l90 -= ((*(int *)((char *)monster_groups[l78] + (44 * l80)) / 4) + 1);
	}
	l156 = 1;
	goto L596f;
case 1:
	l90 -= 2;
	l156 = 1;
	goto L596f;
case 2:
	if ((p8 == 4) || (p8 == 8)) goto L5949;
	((char *)monster_groups[l78] + (44 * l80))[30] = 0;
	((char *)monster_groups[l78] + (44 * l80))[33] = 0;
	((char *)monster_groups[l78] + (44 * l80))[24] = (char)(g435a - 1);
	((char *)monster_groups[l78] + (44 * l80))[31] = *(char *)&g435e;
	((char *)monster_groups[l78] + (44 * l80))[32] = *(char *)&g435c;
	*(int *)(((char *)monster_groups[l78] + (44 * l80)) + 12) = -1;
	*(int *)(((char *)monster_groups[l78] + (44 * l80)) + 10) = 255;
	if (l78) goto L58cd;
	l148 = 7;
L5890:
	if (test_bit(((432 * l80) + 17639), l148) == 1) {
	*(int *)(((char *)monster_groups[l78] + (44 * l80)) + 10) = l148;
	}
	if (--l148 >= 0) goto L5890;
	goto L5913;
L58cd:
	l148 = 7;
L58d3:
	if (test_bit((group_monster_rec[l78] + 83), l148) == 1) {
	*(int *)(((char *)monster_groups[l78] + (44 * l80)) + 10) = l148;
	}
	if (--l148 >= 0) goto L58d3;
L5913:
	if (*(int *)(((char *)monster_groups[l78] + (44 * l80)) + 10) == 255) {
	*(int *)(((char *)monster_groups[l78] + (44 * l80)) + 10) = 8;
	}
	((char *)monster_groups[l78] + (44 * l80))[28] = 0;
L5949:
	goto L596f;
case 3:
	l90 = 15;
	goto L596f;
	}
L596f:
	goto L59aa;
L5971:
	if (((l78) || ((unsigned char)g44f9[(432 * l80)] == 255)) || (pc_item_type[((432 * l80) + ((unsigned char)g44f9[(432 * l80)] << 3))] != 11)) goto L59aa;
	try_raise_skill(l80, 8, 0);
L59aa:
	if ((((!g435e) || (l158)) || (((unsigned)g43b8[210] <= 0) || (g43b8[210] == 6))) || ((*(char **)((char *)group_monster_rec + (g435e << 1)))[210] != g43b8[210])) goto L59eb;
	play_sound(14);
L59eb:
	combat_delay((g4fc8 / 4));
	l98 = 0;
	goto L5e71;
L5a01:
	l96 = (g4fcc == 0 ? random(100) : 0);
	if (!l78) {
	l108 = pick_weighted(((char *)group_monster_rec[g435e] + 182));
	l94 = (((char *)group_monster_rec[l78] + l108)[190] + l92);
	} else {
	l108 = pick_weighted((group_monster_rec[l78] + 174));
	l94 = (((char *)group_monster_rec[l78] + l108)[190] + l92);
	}
	if (((char *)monster_groups[l78] + (44 * l80))[34] == 2) {
	l94 = (l94 > 0 ? 0 : l94);
	}
	clear_window_area(party_picture_win, 0, 3, 39, 4);
	if (!l158) {
	play_sound(6);
	}
	if (((*(char **)((char *)group_monster_rec + (l78 << 1)))[208] != 22) || (l150 != -1)) goto L5b4f;
	if (g435e) goto L5b4a;
	if ((unsigned char)pc_equipped[((432 * g435c) + p6)] == 255) goto L5b43;
	if ((*(int *)((char *)pc_item_id + ((432 * g435c) + ((unsigned char)pc_equipped[((432 * g435c) + p6)] << 3))) == 458) && (g4352)) goto L5b3b;
	l96 = 0;
	goto L5b41;
L5b3b:
	l156 = 1;
L5b41:
	goto L5b48;
L5b43:
	l96 = 0;
L5b48:
	goto L5b4f;
L5b4a:
	l96 = 0;
L5b4f:
	if (((p8 != 4) && (p8 != 8)) || (random(100) >= (unsigned char)g018e[monster_groups[l78]])) goto L5b99;
	print_msg_centered(3214, 14, 3);
	play_sound(7);
	goto L5e60;
L5b99:
	if ((l96 < 5) || (((l96 < 95) && ((l86 - (l90 * 5)) >= l96)) && (l150 == -1))) goto L5e4e;
	if (l150 == -1) goto L5bf7;
	l154 = (l150 / 256);
	l152 = (l150 % 256);
	g50fc = 1;
	do_cast_spell(p4, l152, l154);
	goto L5e4c;
L5bf7:
	print_msg_centered(3302, 4, 3);
	play_sound(7);
	if ((*(char **)((char *)group_monster_rec + (l78 << 1)))[208] == 17) {
	get_message((l108 + 3330), 20492);
	} else {
	get_message((l108 + 3320), 20492);
	}
	l102++;
	if (p4[43] == 1) {
	p4[43] = -1;
	}
	l106 = ((roll_dice_x(l112, *(int *)(l110 + 0)) + l126) * l156);
	if ((l106 <= 0) || ((l96 < 95) && ((l86 - (l94 * 5)) >= l96))) goto L5e09;
	int_to_string(l106, 20652);
	get_message(3306, 20572);
	set_cursor(party_picture_win, 0, 4);
	print_combat_line(20492, 20652, 20572, 4, 5, 5);
	*(int *)(((char *)monster_groups[l78] + (44 * l80)) + 2) -= l106;
	((char *)monster_groups[l78] + (44 * l80))[16] = 0;
	if ((l160 = ((unsigned char)((char *)monster_groups[l78] + (44 * l80))[17] - (random(3) + 2))) < 0) {
	l160 = 0;
	}
	if (l160 > 255) {
	l160 = 255;
	}
	((char *)monster_groups[l78] + (44 * l80))[17] = *(char *)&l160;
	if (*(int *)(((char *)monster_groups[l78] + (44 * l80)) + 2) > 0) goto L5dba;
	combat_delay((g4fc8 / 4));
	do_damage_effect(l78, l80, 3486, 0, 3, 0, 6, 6, 3408, 0);
	if (p4[43] == -1) {
	p4[43] = 1;
	}
	goto L5e07;
L5dba:
	if (!l78) {
	play_sound(2);
	draw_member_card_x(l80, 1);
	}
	combat_delay((g4fc8 / 4));
	if ((*(char **)((char *)group_monster_rec + (l78 << 1)))[208] == 22) goto L5e07;
	apply_hit_effects(p4, l82, l78, l80);
L5e07:
	goto L5e4c;
L5e09:
	get_message(3303, 20652);
	set_cursor(party_picture_win, 0, 4);
	g505c = 0;
	print_combat_line(20492, 20652, 20572, 4, 14, 0);
L5e4c:
	goto L5e60;
L5e4e:
	print_msg_centered(3301, 14, 3);
L5e60:
	combat_delay((g4fc8 / 4));
	l98++;
L5e71:
	if ((l98 < l100) && ((unsigned)((char *)monster_groups[l78] + (44 * l80))[34] < 3)) goto L5a01;
	if (p4[43] == -1) {
	p4[43] = 0;
	}
	if (!l78) {
	draw_member_card_x(l80, 0);
	}
}
