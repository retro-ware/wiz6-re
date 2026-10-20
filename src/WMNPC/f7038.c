extern char *g4fa8;
extern char g00cc[];
extern char g450c[];
extern char g4511[];
extern char g51cc;
extern char pc_condition[];
extern char pc_item_type[];
extern char pc_stats[];
extern int cell_event_index;
extern int g4338;
extern int g433a;
extern int g4354;
extern int g43fe[];
extern int g50de[];
extern int g5142;
extern int g5186[];
extern int g51c2;
extern int g5264;
extern int g5274;
extern int g5276;
extern int g527a;
extern int game_state;
extern int game_state_arg;
extern int party_cell_x;
extern int party_cell_y;
extern int party_count;
extern int party_facing;
extern int party_level;
extern int party_x;
extern int party_y;
extern int pc_gold[];
extern int pc_hp[];
extern int pc_hp_max[];
extern int pc_stamina[];
extern int pc_stamina_max[];
extern int return_cmd;
extern int view_pos_group[];
extern long g51c0;
f7038(p4, p6)
{
	int l2;
	int l4;
	char l36[32];
	int l38;
	int l40;
	int l42;
	long l46;
	int l54[4];
	l4 = g5186[p6];
	access_scenario_record(6, l36, l4, 0);
	l2 = 0;
L7067:
	if (l2 >= 8) goto L7f73;
	switch ((unsigned char)l36[((l2 << 2) + 3)]) {
case 0:
	return 0;
case 1:
	if (!l36[((l2 << 2) + 2)]) {
	if (!g5264) {
	f6d9d();
	fc999(*(int *)(l36 + (l2 << 2)));
	f6de9();
	} else {
	fc999(*(int *)(l36 + (l2 << 2)));
	}
	} else {
	f5c61(*(int *)(l36 + (l2 << 2)), ((unsigned char)l36[((l2 << 2) + 2)] - 1));
	}
	goto L7f6d;
case 2:
	f5d9b(1541, 1);
	g433a = (unsigned char)g51cc;
	g4338 = 1;
	g4354 = 0;
	g5276 = 0;
	game_state = 10;
	return_cmd = 18;
	return 1;
case 3:
	if (!l36[((l2 << 2) + 2)]) {
	f5d9b(1542, 0);
	}
	g5276 = 1;
	game_state = 5;
	return_cmd = 18;
	return 1;
case 4:
	l38 = (*(int *)(l36 + (l2 << 2)) / 256);
	l40 = (*(int *)(l36 + (l2 << 2)) % 256);
	if ((unsigned)l36[((l2 << 2) + 2)] > 0) {
	f5508((unsigned char)l36[((l2 << 2) + 2)], l38);
	view_pos_group[l40] = l38;
	f4572(view_pos_group[l40], l40);
	f5690();
	} else {
	view_pos_group[l40] = 0;
	f5690();
	}
	goto L7f6d;
case 5:
	f5a1e((unsigned char)l36[((l2 << 2) + 2)]);
	goto L7f6d;
case 6:
	if (!g5264) {
	f6d9d();
	l42 = npc_input_word(p4, *(int *)(l36 + (l2 << 2)), (unsigned char)l36[((l2 << 2) + 2)]);
	f6de9();
	} else {
	l42 = npc_input_word(p4, *(int *)(l36 + (l2 << 2)), (unsigned char)l36[((l2 << 2) + 2)]);
	}
	if (l42 <= 1) goto L7243;
	if (f7038(p4, l42) != 1) goto L7241;
	return 1;
L7241:
	goto L7287;
L7243:
	if (!g5264) goto L7287;
	get_message((*(int *)(l36 + (l2 << 2)) + 1), 20948);
	if (strlen(20948) <= 0) goto L7287;
	fc7d9(20948, 5);
	f4f73(g5264);
L7287:
	goto L7f6d;
case 7:
	f5a69();
	goto L7f6d;
case 8:
	switch (party_facing) {
case 0:
	party_y--;
	goto L72c1;
case 1:
	party_x--;
	goto L72c1;
case 2:
	party_y++;
	goto L72c1;
case 3:
	party_x++;
	goto L72c1;
	}
L72c1:
	party_facing = ((party_facing + 2) % 4);
	fd90e(20384, 20382, 20380, party_x, party_y);
	cell_event_index = (unsigned char)(g4fa8 + party_level)[1728];
	game_state = 5;
	return_cmd = 18;
	return 1;
case 9:
	l54[2] = npc_give_item_to_member(p4, *(int *)(l36 + (l2 << 2)), -1);
	l40 = p4;
	l38 = 0;
	goto L735f;
L7338:
	l54[2] = npc_give_item_to_member(l38, *(int *)(l36 + (l2 << 2)), -1);
	l40 = l38;
	l38++;
L735f:
	if ((l38 < party_count) && (l54[2] == -1)) goto L7338;
	if (l54[2] != -1) goto L737a;
	return 0;
L737a:
	if (l36[((l2 << 2) + 2)] == 1) {
	get_message(1547, 20948);
	replace_char_with_string(20948, ((432 * l40) + 17384), 94);
	f5d0c(20948, 1);
	}
	goto L7f6d;
case 10:
	if ((l42 = f6d11(p4, *(int *)(l36 + (l2 << 2)))) == -1) goto L741d;
	if (g00cc[(unsigned char)pc_item_type[((432 * p4) + (l42 << 3))]] != 1) goto L7411;
	f69db(p4, l42);
	goto L741d;
L7411:
	f6835(p4, l42);
L741d:
	goto L7f6d;
case 11:
	l46 = ((long)*(int *)(l36 + (l2 << 2)) * (unsigned char)l36[((l2 << 2) + 2)]);
	*(long *)((char *)pc_gold + (432 * p4)) += l46;
	g51c0 -= l46;
	if (g51c0 < 0L) {
	g51c2 = 0;
	*(int *)&g51c0 = 0;
	}
	goto L7f6d;
case 12:
	l46 = ((long)*(int *)(l36 + (l2 << 2)) * 10);
	if (l46 != 0L) goto L74d6;
	for (l38 = 0; l38 < party_count; l38++) {
	*(int *)((char *)g43fe + (432 * l38)) = 0;
	*(int *)((char *)pc_gold + (432 * l38)) = 0;
	}
L74d6:
	if (*(long *)((char *)pc_gold + (432 * p4)) >= l46) goto L7544;
	f5382(p4);
	if (*(long *)((char *)pc_gold + (432 * p4)) >= l46) goto L7544;
	if (f7038(p4, (unsigned char)l36[((l2 << 2) + 2)]) != 1) goto L753e;
	return 1;
L753e:
	return 0;
L7544:
	*(long *)((char *)pc_gold + (432 * p4)) -= l46;
	g51c0 += l46;
	goto L7f6d;
case 13:
	goto L7f6d;
case 14:
	if (((l42 = *(int *)(l36 + (l2 << 2))) <= 0) || (l42 >= 79)) goto L75ad;
	set_bit(((game_state_arg * 10) + 20204), l42, (unsigned char)l36[((l2 << 2) + 2)]);
L75ad:
	goto L7f6d;
case 15:
	if (((l42 = *(int *)(l36 + (l2 << 2))) <= 0) || (l42 >= 79)) goto L7616;
	set_bit(((game_state_arg * 10) + 20204), l42, (unsigned char)l36[((l2 << 2) + 2)]);
	set_bit(((game_state_arg * 10) + 13304), l42, (unsigned char)l36[((l2 << 2) + 2)]);
L7616:
	goto L7f6d;
case 16:
	if (((l42 = *(int *)(l36 + (l2 << 2))) <= 0) || (l42 >= 15)) goto L7647;
	set_bit(21112, l42, (unsigned char)l36[((l2 << 2) + 2)]);
L7647:
	goto L7f6d;
case 17:
	if (((l42 = *(int *)(l36 + (l2 << 2))) <= 0) || (l42 >= 15)) goto L769b;
	set_bit(21112, l42, (unsigned char)l36[((l2 << 2) + 2)]);
	set_bit(((g5274 << 1) + 13472), l42, (unsigned char)l36[((l2 << 2) + 2)]);
L769b:
	goto L7f6d;
case 18:
	if (test_bit(((game_state_arg * 10) + 20204), *(int *)(l36 + (l2 << 2))) != 1) goto L76ce;
	return 0;
L76ce:
	goto L7f6d;
case 19:
	if (test_bit(((game_state_arg * 10) + 20204), *(int *)(l36 + (l2 << 2)))) goto L7700;
	return 0;
L7700:
	goto L7f6d;
case 20:
	if (test_bit(21112, *(int *)(l36 + (l2 << 2))) != 1) goto L7726;
	return 0;
L7726:
	goto L7f6d;
case 21:
	if (test_bit(21112, *(int *)(l36 + (l2 << 2)))) goto L774b;
	return 0;
L774b:
	goto L7f6d;
case 22:
	if (l36[((l2 << 2) + 2)]) goto L7770;
	l54[2] = f6d11(p4, *(int *)(l36 + (l2 << 2)));
	goto L77a8;
L7770:
	l54[2] = -1;
	l38 = 0;
	goto L7799;
L777c:
	l54[2] = f6d11(l38, *(int *)(l36 + (l2 << 2)));
	l38++;
L7799:
	if (l38 >= party_count) goto L77a8;
	if (l54[2] == -1) goto L777c;
L77a8:
	if (l54[2] != -1) goto L77b4;
	return 0;
L77b4:
	goto L7f6d;
case 23:
	if (l36[((l2 << 2) + 2)]) goto L77d9;
	l54[2] = f6d11(p4, *(int *)(l36 + (l2 << 2)));
	goto L7811;
L77d9:
	l54[2] = -1;
	l38 = 0;
	goto L7802;
L77e5:
	l54[2] = f6d11(l38, *(int *)(l36 + (l2 << 2)));
	l38++;
L7802:
	if (l38 >= party_count) goto L7811;
	if (l54[2] == -1) goto L77e5;
L7811:
	if (l54[2] == -1) goto L781d;
	return 0;
L781d:
	goto L7f6d;
case 24:
	if (random(100) <= *(int *)(l36 + (l2 << 2))) goto L7840;
	return 0;
L7840:
	goto L7f6d;
case 25:
	if ((test_bit(((game_state_arg * 10) + 20204), *(int *)(l36 + (l2 << 2)))) || (f7038(p4, (unsigned char)l36[((l2 << 2) + 2)]) != 1)) goto L7891;
	return 1;
L7891:
	goto L7f6d;
case 26:
	if ((test_bit(((game_state_arg * 10) + 20204), *(int *)(l36 + (l2 << 2))) != 1) || (f7038(p4, (unsigned char)l36[((l2 << 2) + 2)]) != 1)) goto L78e3;
	return 1;
L78e3:
	goto L7f6d;
case 27:
	if ((test_bit(21112, *(int *)(l36 + (l2 << 2)))) || (f7038(p4, (unsigned char)l36[((l2 << 2) + 2)]) != 1)) goto L7927;
	return 1;
L7927:
	goto L7f6d;
case 28:
	if ((test_bit(21112, *(int *)(l36 + (l2 << 2))) != 1) || (f7038(p4, (unsigned char)l36[((l2 << 2) + 2)]) != 1)) goto L796c;
	return 1;
L796c:
	goto L7f6d;
case 29:
	if ((random(100) >= *(int *)(l36 + (l2 << 2))) || (f7038(p4, (unsigned char)l36[((l2 << 2) + 2)]) != 1)) goto L79a3;
	return 1;
L79a3:
	goto L7f6d;
case 30:
	l38 = 0;
	goto L7a0c;
L79ad:
	if (!pc_condition[(432 * l38)]) {
	get_message(1548, 20948);
	replace_char_with_string(20948, ((432 * l38) + 17384), 94);
	f5d0c(20948, 1);
	g4511[(432 * l38)]++;
	f5078(l38, g527a);
	}
	l38++;
L7a0c:
	if (l38 < party_count) goto L79ad;
	goto L7f6d;
case 31:
	l54[2] = *(int *)(l36 + (l2 << 2));
	l38 = 0;
	goto L7b0a;
L7a31:
	if ((unsigned)pc_condition[(432 * l38)] >= 3) goto L7b07;
	if (f6d11(l38, 245) == -1) goto L7a71;
	l54[2] = (unsigned char)l36[((l2 << 2) + 2)];
	l38 = party_count;
	goto L7b07;
L7a71:
	get_message(1549, 20948);
	replace_char_with_string(20948, ((432 * l38) + 17384), 94);
	f5d0c(20948, 1);
	*(int *)((char *)pc_hp + (432 * l38)) = (random(*(int *)((char *)pc_hp + (432 * l38))) + 1);
	*(int *)((char *)pc_hp_max + (432 * l38)) -= (random(4) + 1);
	if (*(int *)((char *)pc_hp_max + (432 * l38)) < 1) {
	*(int *)((char *)pc_hp_max + (432 * l38)) = 1;
	}
	if (*(int *)((char *)pc_hp + (432 * l38)) > *(int *)((char *)pc_hp_max + (432 * l38))) {
	*(int *)((char *)pc_hp + (432 * l38)) = *(int *)((char *)pc_hp_max + (432 * l38));
	}
	f5078(l38, g527a);
L7b07:
	l38++;
L7b0a:
	if (l38 < party_count) goto L7a31;
	if (f7038(0, l54[2]) != 1) goto L7b2e;
	return 1;
L7b2e:
	goto L7f6d;
case 32:
	l38 = 0;
	goto L7bfe;
L7b39:
	l54[0] = (*(int *)(l36 + (l2 << 2)) - 1);
	l54[1] = ((unsigned char)l36[((l2 << 2) + 2)] - 1);
	l54[3] = 0;
L7b59:
	l54[2] = l54[l54[3]];
	if (l54[2] < 0) goto L7bed;
	if (l54[2] > 7) {
	l54[2] = random(8);
	}
	if ((unsigned)pc_stats[((432 * l38) + l54[2])] >= 18) goto L7bed;
	pc_stats[((432 * l38) + l54[2])]++;
	get_message(5015, 20948);
	get_message((l54[2] + 5050), 21116);
	replace_char_with_string(20948, ((432 * l38) + 17384), 94);
	replace_char_with_string(20948, 21116, 36);
	f5d0c(20948, 1);
L7bed:
	l54[3]++;
	if (l54[3] < 2) goto L7b59;
	l38++;
L7bfe:
	if (l38 < party_count) goto L7b39;
	goto L7f6d;
case 33:
	l42 = 0;
	for (l38 = 0; *(int *)(l36 + (l2 << 2)) > l38; l38++) {
	l42 += random(8);
	}
	if ((unsigned)l36[((l2 << 2) + 2)] > 0) {
	*(int *)((char *)pc_stamina + (432 * p4)) -= l42;
	if (*(int *)((char *)pc_stamina + (432 * p4)) < 0) {
	*(int *)((char *)pc_stamina + (432 * p4)) = 0;
	g450c[(432 * p4)] = *(char *)&l42;
	}
	} else {
	*(int *)((char *)pc_stamina + (432 * p4)) += l42;
	if (*(int *)((char *)pc_stamina + (432 * p4)) > *(int *)((char *)pc_stamina_max + (432 * p4))) {
	*(int *)((char *)pc_stamina + (432 * p4)) = *(int *)((char *)pc_stamina_max + (432 * p4));
	}
	}
	f5078(p4, g527a);
	goto L7f6d;
case 34:
	if (f7038(p4, (unsigned char)l36[((l2 << 2) + 2)]) != 1) goto L7cca;
	return 1;
L7cca:
	goto L7f6d;
case 35:
	f5c61(((random((unsigned char)l36[((l2 << 2) + 2)]) << 1) + *(int *)(l36 + (l2 << 2))), 1);
	goto L7f6d;
case 36:
	party_facing = *(int *)(l36 + (l2 << 2));
	f5690();
	f5a1e(4);
	goto L7f6d;
case 37:
	l38 = 0;
	goto L7d9f;
L7d28:
	switch ((unsigned char)l36[((l2 << 2) + 2)]) {
case 0:
	party_y++;
	goto L7d66;
case 1:
	party_x++;
	goto L7d66;
case 2:
	party_y--;
	goto L7d66;
case 3:
	party_x--;
	goto L7d66;
	}
L7d66:
	fd90e(20384, 20382, 20380, party_x, party_y);
	cell_event_index = (unsigned char)(g4fa8 + party_level)[1728];
	f5690();
	f5a1e(4);
	l38++;
L7d9f:
	if (*(int *)(l36 + (l2 << 2)) > l38) goto L7d28;
	goto L7f6d;
case 38:
	if ((fb2fd(p4)) || (f7038(p4, (unsigned char)l36[((l2 << 2) + 2)]) != 1)) goto L7de8;
	return 1;
L7de8:
	goto L7f6d;
case 39:
	return 1;
case 40:
	party_x = 129;
	party_y = 132;
	party_cell_x = 1;
	party_cell_y = 4;
	party_level = 0;
	party_facing = 0;
	game_state_arg = 13;
	game_state = 6;
	return_cmd = 18;
	return 1;
case 41:
	f6e7e(*(int *)(l36 + (l2 << 2)), (unsigned char)l36[((l2 << 2) + 2)]);
	return;
case 42:
	l54[2] = -1;
	l38 = 0;
	goto L7ea0;
L7e56:
	if ((l54[2] = f6d11(l38, (unsigned char)l36[((l2 << 2) + 2)])) != -1) {
	f6835(l38, l54[2]);
	npc_give_item_to_member(l38, *(int *)(l36 + (l2 << 2)), -1);
	}
	l38++;
L7ea0:
	if ((l38 < party_count) && (l54[2] == -1)) goto L7e56;
	goto L7f6d;
case 43:
	l38 = (*(int *)(l36 + (l2 << 2)) / 256);
	l40 = (*(int *)(l36 + (l2 << 2)) % 256);
	*(int *)((char *)g50de + ((l38 * 10) + (l40 << 1))) = (unsigned char)l36[((l2 << 2) + 2)];
	goto L7f6d;
case 44:
	g5142 = (unsigned char)l36[((l2 << 2) + 2)];
	goto L7f6d;
	}
L7f6d:
	l2++;
	goto L7067;
L7f73:
	return;
}
