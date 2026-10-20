#asm
	extrn pick_target_monster_:near
	extrn random_:near
#endasm
extern char *monster_groups;
extern char g44e5[];
extern char g44f5[];
extern char g44f9[];
extern char g450c[];
extern char g450d[];
extern char g451a[];
extern char g452c[];
extern char g4592[];
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
	register int rsi;
	member = 0;
	goto L7864;
L76f9:
	l180 = (monster_groups + (44 * member));
#asm
	db 0b8h,00ah,000h,050h
	call random_
	db 059h,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,08ah,087h,093h,045h,02ah,0e4h
	db 08bh,0c8h,058h,003h,0c1h,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh
	db 0a8h,043h,08ah,040h,029h,098h,08bh,0c8h,058h,003h,0c1h,089h,086h,052h,0ffh,03dh
	db 001h,000h,07dh,006h
#endasm
	l174 = 1;
L774b:
	l176 = (l174 / (unsigned char)g4592[(432 * member)]);
	if ((unsigned)l180[36] <= 0) goto L77a4;
	l180[37] = (char)((random((l174 / 2)) + random(20)) + (l174 / 2));
L77a4:
	l180[33] = 0;
	l180[28] = 0;
	l180[29] = 1;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,08ah,087h,092h,045h,02ah,0e4h,050h,0b8h
	db 02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h,08ah,040h,029h,098h,0b9h
	db 00ah,000h,099h,0f7h,0f9h,08bh,0c8h,058h,003h,0c1h,089h,086h,04eh,0ffh,03dh,001h
	db 000h,07dh,006h
#endasm
	l178 = 1;
L77f5:
	if (l178 <= 4) goto L7802;
	l178 = 4;
L7802:
	l172 = 0;
L7808:
	if ((((l172 < l178) && ((unsigned)pc_condition[(432 * member)] < 2)) && ((unsigned)g450d[(432 * member)] <= 0)) && ((unsigned)g450c[(432 * member)] <= 0)) goto L783d;
#asm
l782f:
	db 08bh,09eh,04ch,0ffh,08bh,0b6h,054h,0ffh,0c6h,040h,018h,000h
#endasm
	goto L7854;
L783d:
	;
#asm
l783d:
	db 08ah,086h,052h,0ffh,08bh,09eh,04ch,0ffh,08bh,0b6h,054h,0ffh,088h,040h,018h
#endasm
	l174 -= l176;
L7854:
	l172++;
	if (l172 < 4) goto L7808;
	member++;
L7864:
	if (member < party_count) goto L76f9;
	setmem(20556, 45, 0);
	done_count = 0;
	member = 0;
L788d:
	if (member >= party_count) goto L82dd;
	if ((((unsigned)pc_condition[(member * 432)] >= 2) || (g450d[(member * 432)])) || (g450c[(member * 432)])) goto L818d;
	done_members[done_count] = member;
	done_count++;
	l180 = (monster_groups + (member * 44));
	l2 = 0;
L78e8:
	enabled[l2] = 1;
	l2++;
	if (l2 < 11) goto L78e8;
	if (pc_race[(432 * member)] == 7) goto L7915;
	l24 = 0;
L7915:
	rsi = (44 * member);
	if ((!(monster_groups + rsi)[43]) && ((((((pc_class[(432 * member)] == 3) || (pc_class[(432 * member)] == 13)) || (pc_class[(432 * member)] == 4)) || (pc_class[(432 * member)] == 6)) || (pc_class[(432 * member)] == 12)) || (g452c[(432 * member)]))) goto L7953;
	l28 = 0;
L7953:
	if (pc_item_count[(432 * member)]) goto L7967;
	enabled[4] = 0;
L7967:
	if (done_count >= 2) goto L7978;
	l22 = 0;
	l20 = 0;
L7978:
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
	db 0bfh,0e5h,044h,000h,075h,00fh
#endasm
	if ((monster_groups + rsi)[43] == 1) goto L7aa9;
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
	if (enabled[l4] != 1) goto L7b3d;
	l72++;
L7b3d:
	l4++;
	goto L7b25;
L7b42:
	action = combat_menu_select(win, 3000, enabled, 1, 1, 6, (l72 > 9 ? 4 : 3), 5, 0);
	choice = -1;
	rsi = (44 * member);
	(monster_groups + rsi)[31] = -1;
	rsi = (44 * member);
	(monster_groups + rsi)[32] = 0;
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
	if (l70[l2] != 1) goto L7cb2;
	l186++;
	choice = l2;
L7cb2:
	l2++;
	if (l2 < 8) goto L7c3a;
	l54 = -1;
L7cc5:
	if (l186 <= 1) goto L7cfc;
	refresh_all_windows();
	choice = combat_menu_select(win, 3050, l70, 3, 1, 8, 3, 5, 0);
L7cfc:
	;
#asm
l7cfc:
	db 083h,0beh,05eh,0ffh,0ffh,075h,003h,0e9h,06dh,000h
#endasm
L7d06:
	if (((l188 = (unsigned char)g44e5[(432 * member)]) != 2) || (choice == 4)) goto L7d2a;
	l188 = 0;
L7d2a:
	if (l188) goto L7d5a;
#asm
	db 08bh,046h,0fah,03dh,003h,000h,07ch,021h,0b9h,02ch,000h,0f7h,0e9h,08bh,0f0h,08bh
	db 01eh,0a8h,043h,080h,078h,02bh,001h,074h,010h
#endasm
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
	;
#asm
l7d89:
	db 08ah,086h,05ch,0ffh,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h
	db 043h,058h,088h,040h,01fh
#endasm
L7d9e:
	goto L7fe6;
	fill_window(win, 32, 3, 0);
	get_message(3502, &l152);
	replace_char_with_string(&l152, &l160, 36);
	print_combat_prompt(&l152, 0);
	refresh_all_windows();
	l2 = 0;
L7df0:
	enabled[l2] = 1;
	l2++;
	if (l2 < 4) goto L7df0;
	if (pc_item_type[((432 * member) + ((unsigned char)g44f9[(432 * member)] << 3))] == 11) goto L7e39;
	enabled[0] = 0;
L7e39:
	enabled[4] = -1;
	if ((choice = combat_menu_select(win, 3100, enabled, 3, 1, 9, 2, 5, 0)) != -1) goto L7e76;
	l168 = 1;
L7e76:
	goto L7fe6;
#asm
	db 0e9h,06ah,001h
#endasm
	choice = choose_combat_spell(win, member);
	blink_state = -1;
	if (choice != -1) goto L7e9d;
	l168 = 1;
L7e9d:
	goto L7fe6;
	if ((choice = choose_combat_item(win, member)) != -1) goto L7ebb;
	l168 = 1;
L7ebb:
	goto L7fe6;
	if ((choice = select_party_member(3611)) != -1) goto L7ed5;
	l168 = 1;
L7ed5:
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
	;
#asm
l7f07:
	db 08ah,086h,05ch,0ffh,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h
	db 043h,058h,088h,040h,01fh
#endasm
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
	rsi = (44 * l164);
	if ((unsigned)(monster_groups + rsi)[31] <= 0) goto L7f6e;
	g504c[(((unsigned char)(monster_groups + rsi)[31] * 9) + (unsigned char)(monster_groups + rsi)[32])] = 1;
L7f6e:
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
#asm
l7ffa:
	db 08bh,086h,05eh,0ffh,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h
	db 043h,058h,089h,040h,00ah
#endasm
	rsi = (44 * member);
	*(int *)((monster_groups + rsi) + 12) = -1;
#asm
	db 08ah,046h,0f8h,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h
	db 058h,088h,040h,01eh
#endasm
	rsi = (44 * member);
	if (((l164 = (unsigned char)(monster_groups + rsi)[31]) < 1) || (l164 > 5)) goto L8074;
#asm
	db 08ah,086h,05ch,0ffh,02ah,0e4h,050h,0ffh,076h,0fah
	call pick_target_monster_
	db 083h,0c4h,004h,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h
	db 058h,088h,040h,020h
#endasm
L8074:
	l182 = (unsigned char)g44f9[(432 * member)];
	if (action) goto L818d;
	if ((l182 != 255) || ((unsigned char)pc_equipped[(432 * member)] != 255)) goto L80c9;
	if ((l2 = pick_random_set_bit(((432 * member) + 17639))) == -1) goto L80c6;
#asm
	db 08bh,046h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h
	db 058h,089h,040h,00ch
#endasm
L80c6:
	goto L818d;
L80c9:
	if (l182 == 255) goto L818d;
	if (((pc_item_type[((432 * member) + (l182 << 3))] != 2) && (pc_item_type[((432 * member) + (l182 << 3))] != 12)) && (pc_item_type[((432 * member) + (l182 << 3))] != 16)) goto L810c;
	rsi = (44 * member);
	*(int *)((monster_groups + rsi) + 12) = 4;
	goto L818d;
L810c:
	if (((unsigned)pc_item_type[((432 * member) + (l182 << 3))] >= 2) || ((g44f5[(432 * member)] != 1) && ((member >= 3) || (l164 >= 3)))) goto L818d;
	l10 = 0;
L8148:
	l2 = pick_random_set_bit(((432 * member) + 17655));
	l10++;
#asm
	db 083h,07eh,0feh,004h,075h,006h
#endasm
	if (l10 < 10) goto L8148;
L8168:
	;
#asm
l8168:
	db 083h,07eh,0feh,004h,075h,005h
#endasm
	l2 = -1;
L8173:
	if (l2 == -1) goto L818d;
#asm
	db 08bh,046h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h
	db 058h,089h,040h,00ch
#endasm
L818d:
	member++;
	if (member != party_count) goto L82da;
	draw_monster_groups(g438c, 0);
	fill_window(win, 32, 3, 0);
	get_message(3506, &l152);
	print_combat_prompt(&l152, 0);
	refresh_all_windows();
	l2 = 0;
L81e5:
	enabled[l2] = 1;
	l2++;
	if (l2 < 3) goto L81e5;
	if (done_count) goto L820f;
	enabled[2] = 0;
	enabled[1] = 0;
L820f:
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
	rsi = (44 * l164);
	if ((unsigned)(monster_groups + rsi)[31] <= 0) goto L82b7;
	g504c[(((unsigned char)(monster_groups + rsi)[31] * 9) + (unsigned char)(monster_groups + rsi)[32])] = 1;
L82b7:
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
	rsi = (44 * member);
	if (((unsigned)(monster_groups + rsi)[15] <= 0) || (random(100) <= ((unsigned char)g451a[(432 * member)] + 80))) goto L832a;
	rsi = (44 * member);
	(monster_groups + rsi)[30] = 7;
L832a:
	rsi = (44 * member);
	if (((monster_groups + rsi)[30] != 1) && ((monster_groups + rsi)[30] != 5)) goto L8346;
	(monster_groups + rsi)[24] = 1;
L8346:
	rsi = (44 * member);
	if ((monster_groups + rsi)[30]) goto L8374;
	if (*(int *)((monster_groups + rsi) + 12) != -1) goto L8372;
	(monster_groups + rsi)[25] = 0;
	rsi = (44 * member);
	(monster_groups + rsi)[27] = 0;
L8372:
	goto L8397;
L8374:
	l2 = 1;
L8379:
	;
#asm
l8379:
	db 0b8h,02ch,000h,0f7h,06eh,0fah,003h,046h,0feh,08bh,0f0h,08bh,01eh,0a8h,043h,0c6h
	db 040h,018h,000h
#endasm
	l2++;
	if (l2 < 4) goto L8379;
L8397:
	member++;
L839a:
	if (member < party_count) goto L82e5;
}
