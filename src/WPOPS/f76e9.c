extern char *monster_groups;
extern char g44e5[];
extern char g44f5[];
extern char g44f9[];
extern char g450c[];
extern char g450d[];
extern char g451a[];
extern char g452c[];
extern char g4592[];
extern char g4593[];
extern char g504c[];
extern char pc_class[];
extern char pc_condition[];
extern char pc_equipped[];
extern char pc_item_count[];
extern char pc_item_icon[];
extern char pc_item_type[];
extern char pc_race[];
extern int blink_state;
extern int g438c;
extern int party_count;
/* Ask each able party member for a combat action (fight, spell, item, ...), with back/redo. */
choose_party_actions(win)
{
	int l2;
	int l4;
	int member;
	int action;
	int l10;
	char x10[6];
	int l18;
	int l20;
	int l22;
	int l24;
	char x24[2];
	int l28;
	int enabled[6];
	char x40[12];
	int l54;
	int l70[8];
	int l72;
	char x72[78];
	int l152;
	char x152[6];
	int l160;
	int choice;
	int l164;
	char x164[2];
	int l168;
	int l170;
	int l172;
	int l174;
	int l176;
	int l178;
	char *l180;
	int l182;
	int l184;
	int l186;
	int l188;
	int done_count;
	int done_members[6];
	for (member = 0; member < party_count; member++) {
	l180 = (monster_groups + (44 * member));
	if ((l174 = ((random(10) + (unsigned char)g4593[(432 * member)]) + (monster_groups + (44 * member))[41])) < 1) {
	l174 = 1;
	}
	l176 = (l174 / (unsigned char)g4592[(432 * member)]);
	if ((unsigned)l180[36] > 0) {
	l180[37] = (char)((random((l174 / 2)) + random(20)) + (l174 / 2));
	}
	l180[33] = 0;
	l180[28] = 0;
	l180[29] = 1;
	if ((l178 = ((unsigned char)g4592[(432 * member)] + ((monster_groups + (44 * member))[41] / 10))) < 1) {
	l178 = 1;
	}
	if (l178 > 4) {
	l178 = 4;
	}
	l172 = 0;
L7808:
	if ((((l172 < l178) && ((unsigned)pc_condition[(432 * member)] < 2)) && ((unsigned)g450d[(432 * member)] <= 0)) && ((unsigned)g450c[(432 * member)] <= 0)) goto L783d;
	(l180 + l172)[24] = 0;
	goto L7854;
L783d:
	(l180 + l172)[24] = *(char *)&l174;
	l174 -= l176;
L7854:
	l172++;
	if (l172 < 4) goto L7808;
	}
	setmem(20556, 45, 0);
	done_count = 0;
	member = 0;
L788d:
	if (member >= party_count) goto L82dd;
	if ((((unsigned)pc_condition[(member * 432)] >= 2) || (g450d[(member * 432)])) || (g450c[(member * 432)])) goto L818d;
	done_members[done_count] = member;
	done_count++;
	l180 = (monster_groups + (member * 44));
	for (l2 = 0; l2 < 11; l2++) {
	enabled[l2] = 1;
	}
	if (pc_race[(432 * member)] != 7) {
	l24 = 0;
	}
	if ((!(monster_groups + (44 * member))[43]) && ((((((pc_class[(432 * member)] == 3) || (pc_class[(432 * member)] == 13)) || (pc_class[(432 * member)] == 4)) || (pc_class[(432 * member)] == 6)) || (pc_class[(432 * member)] == 12)) || (g452c[(432 * member)]))) goto L7953;
	l28 = 0;
L7953:
	if (!pc_item_count[(432 * member)]) {
	enabled[4] = 0;
	}
	if (done_count < 2) {
	l22 = 0;
	l20 = 0;
	}
	l182 = (unsigned char)pc_equipped[(432 * member)];
	if ((l182 == 255) || (pc_item_type[((432 * member) + (l182 << 3))] != 3)) goto L7a84;
	l184 = (unsigned char)g44f9[(432 * member)];
	if (l184 == 255) goto L7a7f;
	if (pc_item_type[((432 * member) + (l184 << 3))] == 4) goto L79cd;
	enabled[0] = 0;
	goto L7a7d;
L79cd:
	if ((((pc_item_icon[((432 * member) + (l182 << 3))] != 11) || (pc_item_icon[((432 * member) + (l184 << 3))] == 22)) && ((pc_item_icon[((432 * member) + (l182 << 3))] != 13) || (pc_item_icon[((432 * member) + (l184 << 3))] == 23))) && ((pc_item_icon[((432 * member) + (l182 << 3))] != 12) || (pc_item_icon[((432 * member) + (l184 << 3))] == 83))) goto L7a7d;
	enabled[0] = 0;
L7a7d:
	goto L7a84;
L7a7f:
	enabled[0] = 0;
L7a84:
	;
#asm
l7a84:
	db 08bh,046h,0fah,03dh,003h,000h,07ch,01dh,0b9h,0b0h,001h,0f7h,0e9h,08bh,0d8h,080h
	db 0bfh,0e5h,044h,000h,075h,00fh,08bh,01eh,0a8h,043h,080h,078h,02bh,001h,074h,005h
#endasm
	enabled[0] = 0;
L7aa9:
	l18 = -1;
	copy_name(((432 * member) + 17384), &l160);
L7ac3:
	draw_monster_groups(g438c, 0);
	fill_window(win, 32, 3, 0);
	get_message(3500, &l152);
	replace_char_with_string(&l152, &l160, 36);
	print_combat_prompt(&l152, 0);
	refresh_all_windows();
	l72 = 0;
	l4 = 0;
L7b25:
	if (enabled[l4] == -1) goto L7b42;
	if (enabled[l4] == 1) {
	l72++;
	}
	l4++;
	goto L7b25;
L7b42:
	action = combat_menu_select(win, 3000, enabled, 1, 1, 6, (l72 > 9 ? 4 : 3), 5, 0);
	choice = -1;
	(monster_groups + (44 * member))[31] = -1;
	(monster_groups + (44 * member))[32] = 0;
	l168 = 0;
	l170 = 0;
#asm
	db 08bh,046h,0f8h,0e9h,02dh,004h
#endasm
	fill_window(win, 32, 3, 0);
	get_message(3501, &l152);
	replace_char_with_string(&l152, &l160, 36);
	print_combat_prompt(&l152, 0);
	if (((l182 = (unsigned char)pc_equipped[(432 * member)]) == 255) || (pc_item_type[((432 * member) + (l182 << 3))] != 3)) goto L7c25;
	l186 = 1;
	choice = 8;
L7c25:
	if (choice != -1) goto L7cc5;
	l186 = 0;
	l2 = 0;
L7c3a:
	l70[l2] = test_bit(((432 * member) + 17639), l2);
	if ((((l2 == 4) || (member < 3)) || (l182 == 255)) || (pc_item_type[((432 * member) + (l182 << 3))] != 2)) goto L7c98;
	l70[l2] = 0;
L7c98:
	if (l70[l2] == 1) {
	l186++;
	choice = l2;
	}
	l2++;
	if (l2 < 8) goto L7c3a;
	l54 = -1;
L7cc5:
	if (l186 > 1) {
	refresh_all_windows();
	choice = combat_menu_select(win, 3050, l70, 3, 1, 8, 3, 5, 0);
	}
	if (choice == -1) goto L7d73;
	if (((l188 = (unsigned char)g44e5[(432 * member)]) != 2) || (choice == 4)) goto L7d2a;
	l188 = 0;
L7d2a:
	if (((l188) || (member < 3)) || ((monster_groups + (member * 44))[43] == 1)) goto L7d5a;
	play_sound(0);
	l164 = -1;
	goto L7d73;
L7d5a:
	l164 = select_monster_group(win, 3602, l188, 0);
L7d73:
	if ((choice != -1) && (l164 != -1)) goto L7d89;
	l168 = 1;
	goto L7d9e;
L7d89:
	(monster_groups + (44 * member))[31] = *(char *)&l164;
L7d9e:
	goto L7fe6;
	fill_window(win, 32, 3, 0);
	get_message(3502, &l152);
	replace_char_with_string(&l152, &l160, 36);
	print_combat_prompt(&l152, 0);
	refresh_all_windows();
	for (l2 = 0; l2 < 4; l2++) {
	enabled[l2] = 1;
	}
	if (pc_item_type[((432 * member) + ((unsigned char)g44f9[(432 * member)] << 3))] != 11) {
	enabled[0] = 0;
	}
	enabled[4] = -1;
	if ((choice = combat_menu_select(win, 3100, enabled, 3, 1, 9, 2, 5, 0)) == -1) {
	l168 = 1;
	}
	goto L7fe6;
#asm
	db 0e9h,06ah,001h
#endasm
	choice = choose_combat_spell(win, member);
	blink_state = -1;
	if (choice == -1) {
	l168 = 1;
	}
	goto L7fe6;
	if ((choice = choose_combat_item(win, member)) == -1) {
	l168 = 1;
	}
	goto L7fe6;
	if ((choice = select_party_member(3611)) == -1) {
	l168 = 1;
	}
	goto L7fe6;
#asm
	db 0e9h,00bh,001h
#endasm
	l164 = select_monster_group(win, 3605, 1, 0);
	choice = 8;
	if (l164 != -1) goto L7f07;
	l168 = 1;
#asm
	db 0ebh,015h
#endasm
L7f07:
	(monster_groups + (44 * member))[31] = *(char *)&l164;
L7f1c:
	;
#asm
l7f1c:
	db 0e9h,0c7h,000h
#endasm
	goto L7fe6;
	setmem(20556, 45, 0);
	l164 = 0;
#asm
	db 0ebh,036h
#endasm
L7f3c:
	if ((unsigned)(monster_groups + (44 * l164))[31] > 0) {
	g504c[(((unsigned char)(monster_groups + (44 * l164))[31] * 9) + (unsigned char)(monster_groups + (44 * l164))[32])] = 1;
	}
	l164++;
L7f72:
	if ((member - 1) > l164) goto L7f3c;
	member = (done_members[(done_count - 2)] - 1);
	done_count -= 2;
	l170 = 1;
	goto L7fe6;
	setmem(20556, 45, 0);
	member = -1;
	l170 = 1;
	done_count = 0;
#asm
	db 0ebh,023h,0ach,07bh,0a1h,07dh,079h,07eh,07ch,07eh,0a0h,07eh,0beh,07eh,0d8h,07eh
	db 01fh,07fh,0dbh,07eh,022h,07fh,09eh,07fh
l7fd9:
	db 03dh,00bh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0c3h,07fh
#endasm
L7fe6:
	if (l168 == 1) goto L7ac3;
	if (l170) goto L818d;
	*(int *)((monster_groups + (44 * member)) + 10) = choice;
	*(int *)((monster_groups + (44 * member)) + 12) = -1;
	(monster_groups + (44 * member))[30] = *(char *)&action;
	if (((l164 = (unsigned char)(monster_groups + (44 * member))[31]) < 1) || (l164 > 5)) goto L8074;
	(monster_groups + (44 * member))[32] = (char)pick_target_monster(member, (unsigned char)*(char *)&l164);
L8074:
	l182 = (unsigned char)g44f9[(432 * member)];
	if (action) goto L818d;
	if ((l182 != 255) || ((unsigned char)pc_equipped[(432 * member)] != 255)) goto L80c9;
	if ((l2 = pick_random_set_bit(((432 * member) + 17639))) != -1) {
	*(int *)((monster_groups + (44 * member)) + 12) = l2;
	}
	goto L818d;
L80c9:
	if (l182 == 255) goto L818d;
	if (((pc_item_type[((432 * member) + (l182 << 3))] != 2) && (pc_item_type[((432 * member) + (l182 << 3))] != 12)) && (pc_item_type[((432 * member) + (l182 << 3))] != 16)) goto L810c;
	*(int *)((monster_groups + (44 * member)) + 12) = 4;
	goto L818d;
L810c:
	if (((unsigned)pc_item_type[((432 * member) + (l182 << 3))] >= 2) || ((g44f5[(432 * member)] != 1) && ((member >= 3) || (l164 >= 3)))) goto L818d;
	l10 = 0;
	do {
	l2 = pick_random_set_bit(((432 * member) + 17655));
	l10++;
	} while ((l2 == 4) && (l10 < 10));
	if (l2 == 4) {
	l2 = -1;
	}
	if (l2 == -1) goto L818d;
	*(int *)((monster_groups + (44 * member)) + 12) = l2;
L818d:
	member++;
	if (member != party_count) goto L82da;
	draw_monster_groups(g438c, 0);
	fill_window(win, 32, 3, 0);
	get_message(3506, &l152);
	print_combat_prompt(&l152, 0);
	refresh_all_windows();
	for (l2 = 0; l2 < 3; l2++) {
	enabled[l2] = 1;
	}
	if (!done_count) {
	enabled[2] = 0;
	enabled[1] = 0;
	}
	enabled[3] = -1;
	if ((l2 = combat_menu_select(win, 3507, enabled, 3, 1, 14, 4, 5, 0)) != 2) goto L8265;
	setmem(20556, 45, 0);
	member = 0;
	done_count = 0;
	goto L82da;
L8265:
	if (l2 != 1) goto L82da;
	setmem(20556, 45, 0);
	l164 = 0;
	goto L82bb;
L8285:
	if ((unsigned)(monster_groups + (44 * l164))[31] > 0) {
	g504c[(((unsigned char)(monster_groups + (44 * l164))[31] * 9) + (unsigned char)(monster_groups + (44 * l164))[32])] = 1;
	}
	l164++;
L82bb:
	if ((party_count - 1) > l164) goto L8285;
	member = done_members[(done_count - 1)];
	done_count--;
L82da:
	goto L788d;
L82dd:
	member = 0;
	goto L839a;
L82e5:
	if (((unsigned)(monster_groups + (44 * member))[15] <= 0) || (random(100) <= ((unsigned char)g451a[(432 * member)] + 80))) goto L832a;
	(monster_groups + (44 * member))[30] = 7;
L832a:
	if (((monster_groups + (44 * member))[30] != 1) && ((monster_groups + (44 * member))[30] != 5)) goto L8346;
	(monster_groups + (44 * member))[24] = 1;
L8346:
	if ((monster_groups + (44 * member))[30]) goto L8374;
	if (*(int *)((monster_groups + (44 * member)) + 12) == -1) {
	(monster_groups + (44 * member))[25] = 0;
	(monster_groups + (44 * member))[27] = 0;
	}
	goto L8397;
L8374:
	for (l2 = 1; l2 < 4; l2++) {
	(monster_groups + ((44 * member) + l2))[24] = 0;
	}
L8397:
	member++;
L839a:
	if (member < party_count) goto L82e5;
}
