extern char *monster_groups;
extern char g00df[];
extern char g00e0[];
extern char g00e2[];
extern char g501c;
extern char g501d;
extern char g5034;
extern char g5035;
extern int blink_state;
extern int g5010;
extern int g5012;
extern int g5014;
extern int g5018;
extern int g501a;
extern int menu_clicked;
extern int pc_level[];
extern int pc_spell_pts[];
extern int realm_colors[];
/* Pick a spell realm, spell and power level for a party member; returns (level<<8)+spell or -1. */
choose_combat_spell(win, member)
{
	char *l2;
	char *l4;
	int l6;
	char x6[2];
	int count;
	int spells[20];
	int spell;
	int level;
	int max_level;
	int pos;
	int l60;
	char x60[2];
	int realm;
	int cost;
	int l68;
	int l70;
	int l72;
	int l74;
	int l76;
	register int rsi;
	l2 = create_window(0, 18, 23, 7, 25, -1, 0, 0);
	l4 = create_window(22, 19, 18, 6, 26, -5, 0, 0);
	draw_combat_spell_window(l2, member);
	draw_combat_list_box(l4, 1);
	realm = 0;
	l6 = 0;
L64c0:
	l74 = (((l6 / 3) * 6) + 1);
	l76 = (((l6 % 3) << 1) + 1);
	set_click_region(l6, ((unsigned char)l2[2] + l74), ((unsigned char)l2[3] + l76), ((unsigned char)l2[2] + l74), ((unsigned char)l2[3] + l76));
	l6++;
	if (l6 < 6) goto L64c0;
	set_click_region(6, ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3), ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3));
L6545:
	set_click_region(7, 255, 0, 0, 0);
	l72 = 1;
	g5014 = l2;
L6564:
	if (l72 != 1) goto L66c6;
	blink_state = 1;
	if (realm != -1) goto L65ee;
	g5012 = 13;
	g5010 = 3;
	clear_window_area(l2, 13, 1, 20, 1);
	set_cursor(l2, 13, 1);
	print_message(3956, l2, 9);
	clear_window_area(l2, 18, 5, 20, 5);
	count = -1;
	draw_combat_list_box(l4, 1);
	goto L669d;
L65ee:
	g5012 = (((realm / 3) * 6) + 1);
	g5010 = (((realm % 3) << 1) + 1);
	clear_window_area(l2, 13, 1, 20, 1);
	set_cursor(l2, 13, 1);
	print_message((realm + 3950), l2, realm_colors[realm]);
	clear_window_area(l2, 18, 5, 20, 5);
	count = list_known_realm_spells(member, realm, spells);
	draw_combat_spell_list(l4, member, realm, 0, 0, count, spells);
L669d:
	g5034 = 99;
	g5035 = 0;
	g501a = 5;
	g501c = (char)(realm + 35);
	g501d = 0;
	g5018 = 17;
	l72 = 0;
L66c6:
	l6 = get_combat_input(17270, 13720);
	if (menu_clicked != 1) goto L6720;
	if (l6 != realm) goto L66ea;
	l6 = 5;
	goto L6718;
L66ea:
	unhighlight_combat_realm(l2, realm);
	if (l6 >= 6) goto L6709;
	realm = l6;
	l6 = 0;
	goto L6718;
L6709:
	realm = -1;
	l6 = 5;
	count = -1;
L6718:
	l72 = 1;
	goto L6806;
L6720:
	switch (l6) {
case 1:
	if (realm != -1) goto L6744;
	unhighlight_combat_realm(l2, realm);
	realm = 4;
	l72 = 1;
	goto L6761;
L6744:
	if ((realm - 3) < 0) goto L6761;
	unhighlight_combat_realm(l2, realm);
	realm += -3;
	l72 = 1;
L6761:
	goto L6806;
case 2:
	if (realm == -1) goto L678e;
	if ((realm % 3) <= 0) goto L678e;
	unhighlight_combat_realm(l2, realm);
	realm--;
	l72 = 1;
L678e:
	goto L6806;
case 3:
	if (realm == -1) goto L67bd;
	unhighlight_combat_realm(l2, realm);
	l72 = 1;
	if ((realm + 3) >= 6) goto L67b8;
	realm = (realm + 3);
	goto L67bd;
L67b8:
	realm = -1;
L67bd:
	goto L6806;
case 4:
	if (realm == -1) goto L67ea;
	if (((realm % 3) + 1) >= 3) goto L67ea;
	unhighlight_combat_realm(l2, realm);
	realm++;
	l72 = 1;
L67ea:
	goto L6806;
	}
L6806:
	if (l6 != 5) goto L6564;
	if (!count) goto L6564;
	if (realm != -1) goto L6846;
	blink_state = -1;
	destroy_window(l2, 0);
	destroy_window(l4, 0);
	return -1;
L6846:
	unhighlight_combat_realm(l2, realm);
	pos = 0;
	l60 = 0;
	g5014 = l4;
	g5012 = 2;
	g5010 = 2;
	strcpy(20508, 20462);
	g5018 = 0;
	set_click_region(7, ((unsigned char)l4[2] + 1), (unsigned char)l4[3], ((unsigned char)l4[2] + 1), (unsigned char)l4[3]);
	set_click_region(8, ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4), ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4));
	set_click_region(9, ((unsigned char)l4[2] + 2), ((unsigned char)l4[3] + 2), ((unsigned char)l4[2] + 19), ((unsigned char)l4[3] + 2));
	set_click_region(10, 255, 0, 0, 0);
L6918:
	blink_state = 1;
	get_message((spells[pos] + 4000), 20532);
	g501a = realm_colors[realm];
	draw_combat_spell_list(l4, member, realm, pos, 1, count, spells);
	cost = (unsigned char)g00e0[(spells[pos] * 6)];
	set_cursor(l2, 18, 5);
	if (*(int *)((char *)pc_spell_pts + ((432 * member) + (realm << 2))) >= cost) goto L69c7;
	print_string(l2, 20478, realm_colors[realm]);
	goto L69e2;
L69c7:
	print_int(l2, cost, 3, realm_colors[realm]);
L69e2:
	l6 = get_combat_input(17270, 13720);
	if (menu_clicked != 1) goto L6a65;
#asm
	db 0ebh,05ch
#endasm
	realm = l6;
	l6 = 1;
	goto L6a65;
	blink_state = -1;
	destroy_window(l2, 0);
	destroy_window(l4, 0);
	return -1;
	l6 = 2;
#asm
	db 0ebh,02fh
#endasm
	l6 = 4;
#asm
	db 0ebh,028h
#endasm
	l6 = 5;
#asm
	db 0ebh,021h,0fch,069h,0fch,069h,0fch,069h,0fch,069h,0fch,069h,0fch,069h,009h,06ah
	db 02fh,06ah,036h,06ah,03dh,06ah
l6a58:
	db 03dh,00ah,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,044h,06ah
#endasm
L6a65:
	switch (l6) {
case 1:
	l60 = 1;
	goto L6a99;
case 2:
	if (pos <= 0) goto L6a7a;
	pos--;
L6a7a:
	goto L6a99;
case 4:
	if ((pos + 1) >= count) goto L6a88;
	pos++;
L6a88:
	goto L6a99;
	}
L6a99:
	if (l6 == 5) goto L6aa8;
	if (l60 != 1) goto L6918;
L6aa8:
	if (l60 == 1) goto L6545;
	spell = spells[pos];
	draw_combat_list_box(l4, 0);
	defer_window_draw(l4);
	set_cursor(l4, 2, 2);
	print_message((spell + 4000), l4, 18);
	resume_window_draw(l4);
	refresh_window(l4);
	g5014 = l2;
	level = 1;
	max_level = ((*(int *)((char *)pc_level + (432 * member)) - (unsigned char)g00df[(spell * 6)]) + 1);
#asm
	db 0b8h,001h,000h,08bh,04eh,0c8h,083h,0f9h,001h,07ch,00ch,08bh,0c1h,050h,03dh,006h
	db 000h,058h,07eh,003h,0b8h,006h,000h
#endasm
L6b4f:
	;
#asm
l6b4f:
	db 089h,046h,0c8h
#endasm
	l6 = 0;
	goto L6b92;
L6b59:
	set_click_region(l6, (((unsigned char)l2[2] + l6) + 15), ((unsigned char)l2[3] + 3), (((unsigned char)l2[2] + l6) + 15), ((unsigned char)l2[3] + 3));
	l6++;
L6b92:
	if (l6 < max_level) goto L6b59;
	set_click_region(max_level, ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3), ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3));
	set_click_region((max_level + 1), 255, 0, 0, 0);
	l72 = 1;
L6be4:
	cost = ((unsigned char)g00e0[(spell * 6)] * level);
	if (l72 != 1) goto L6d30;
	l72 = 0;
	blink_state = 1;
	if (level) goto L6c9d;
	g5012 = 13;
	g5010 = 3;
	g5034 = 99;
	g5035 = 0;
	g501a = 5;
	g501c = 34;
	g501d = 0;
	g5018 = 17;
	clear_window_area(l2, 13, 1, 20, 1);
	set_cursor(l2, 13, 1);
	print_message(3956, l2, 9);
	clear_window_area(l2, 18, 5, 20, 5);
	goto L6d30;
L6c9d:
	g5012 = (level + 14);
	g5010 = 3;
	g5034 = (char)(level + 23);
	g5035 = 0;
	g501a = 7;
	g501c = 32;
	g501d = 0;
	g5018 = 0;
	set_cursor(l2, 18, 5);
	if (*(int *)((char *)pc_spell_pts + ((432 * member) + (realm << 2))) >= cost) goto L6d15;
	print_string(l2, 20482, realm_colors[realm]);
	goto L6d30;
L6d15:
	print_int(l2, cost, 3, realm_colors[realm]);
L6d30:
	l6 = get_combat_input(17270, 13720);
	if (menu_clicked != 1) goto L6da7;
	if ((l6 + 1) != level) goto L6d55;
	l6 = 5;
	goto L6d9f;
L6d55:
	set_cursor(l2, (level + 14), 3);
	put_char(l2, (unsigned char)((level + 23)), 5);
	level = (l6 < max_level ? (l6 + 1) : 0);
	l6 = (level == 0 ? 5 : 0);
L6d9f:
	l72 = 1;
	goto L6e98;
L6da7:
	switch (l6) {
case 1:
	if (level <= 0) goto L6de5;
	set_cursor(l2, (level + 14), 3);
	put_char(l2, (unsigned char)((level + 23)), 5);
	level--;
	l72 = 1;
L6de5:
	goto L6e98;
case 3:
	if (level) goto L6e4c;
	unhighlight_combat_realm(l2, -1);
	clear_window_area(l2, 13, 1, 20, 1);
	set_cursor(l2, 13, 1);
	print_message((realm + 3950), l2, realm_colors[realm]);
	level = 1;
	l72 = 1;
	goto L6e86;
L6e4c:
	if (level >= max_level) goto L6e86;
	set_cursor(l2, (level + 14), 3);
	put_char(l2, (unsigned char)((level + 23)), 5);
	level++;
	l72 = 1;
L6e86:
	goto L6e98;
	}
L6e98:
	if (l6 != 5) goto L6be4;
	if (*(int *)((char *)pc_spell_pts + ((432 * member) + (realm << 2))) < cost) goto L6be4;
	blink_state = -1;
	destroy_window(l2, 0);
	destroy_window(l4, 0);
	if (level) goto L6eea;
	return -1;
L6eea:
	if (g00e2[(spell * 6)] != 1) goto L6f52;
	fill_window(win, 32, 3, 0);
	refresh_all_windows();
	rsi = (44 * member);
	(monster_groups + rsi)[31] = 0;
	if ((l70 = select_party_member(3609)) != -1) goto L6f3c;
	return -1;
L6f3c:
	;
#asm
l6f3c:
	db 08ah,046h,0bah,050h,0b8h,02ch,000h,0f7h,06eh,006h,08bh,0f0h,08bh,01eh,0a8h,043h
	db 058h,088h,040h,020h
#endasm
	goto L6f9d;
L6f52:
	if (g00e2[(spell * 6)] != 2) goto L6f9d;
	if ((l68 = select_monster_group(win, 3603, 3, 0)) != -1) goto L6f89;
	return -1;
L6f89:
	;
#asm
l6f89:
	db 08ah,046h,0bch,050h,0b8h,02ch,000h,0f7h,06eh,006h,08bh,0f0h,08bh,01eh,0a8h,043h
	db 058h,088h,040h,01fh
#endasm
L6f9d:
	return ((level << 8) + spell);
}
