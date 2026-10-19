extern char g00df[];
extern char g00e0[];
extern char g00e2[];
extern char g575a;
extern char g575b;
extern char g5772;
extern char g5773;
extern int g553c;
extern int g5754;
extern int g5756;
extern int g5758;
extern int g578a;
extern int g578c;
extern int g578e;
extern int menu_clicked;
extern int pc_level[];
extern int pc_spell_pts[];
extern int realm_colors[];
/* Spell book: pick realm then spell (and power level when p10); returns (power << 8) + spell or -1. */
choose_spell(p4, p6, member, ask_power)
char *p4;
{
	char *l2;
	char *l4;
	int l6;
	char x6[2];
	int l10;
	int l50[20];
	int spell;
	int power;
	int l56;
	int l58;
	int l60;
	char x60[2];
	int realm;
	int l66;
	char x66[4];
	int l72;
	int l74;
	int l76;
	l2 = create_window(20, 4, 20, 16, 22, -1, 0, 0);
	l4 = create_window(21, 7, 19, 8, 23, -1, 0, 0);
	fill_window(l4, 32, 3, 0);
	draw_spell_window(l2, member);
	draw_spell_list_frame(l4, 1);
	refresh_window(p6);
	realm = 0;
	l6 = 0;
L789b:
	l74 = (((l6 / 3) * 10) + 1);
	l76 = (((l6 % 3) << 1) + 14);
	set_click_region(l6, ((unsigned char)p4[2] + l74), ((unsigned char)p4[3] + l76), ((unsigned char)p4[2] + l74), ((unsigned char)p4[3] + l76));
	l6++;
	if (l6 < 6) goto L789b;
	set_click_region(6, ((unsigned char)l2[2] + 1), ((unsigned char)l2[3] + 12), ((unsigned char)l2[2] + 1), ((unsigned char)l2[3] + 12));
L7923:
	set_click_region(7, 255, 0, 0, 0);
	l72 = 1;
L793c:
	if (l72 != 1) goto L7ab1;
	g553c = 1;
	if (realm != -1) goto L79cc;
	g5754 = l2;
	g5756 = 1;
	g5758 = 12;
	clear_window_area(l2, 11, 12, 18, 12);
	set_cursor(l2, 11, 12);
	print_message(3956, l2, 9);
	clear_window_area(l2, 6, 14, 8, 14);
	l10 = -1;
	draw_spell_list_frame(l4, 1);
	goto L7a88;
L79cc:
	g5754 = p4;
	g5756 = (((realm / 3) * 10) + 1);
	g5758 = (((realm % 3) << 1) + 14);
	clear_window_area(l2, 11, 12, 18, 12);
	set_cursor(l2, 11, 12);
	print_message((realm + 3950), l2, realm_colors[realm]);
	clear_window_area(l2, 6, 14, 8, 14);
	l10 = count_known_spells(member, realm, l50);
	draw_spell_list(l4, member, realm, 0, 0, l10, l50);
L7a88:
	g5772 = 99;
	g5773 = 0;
	g578c = 5;
	g575a = (char)(realm + 35);
	g575b = 0;
	g578a = 17;
	l72 = 0;
L7ab1:
	l6 = get_menu_input(21822, 13720);
	if (menu_clicked != 1) goto L7b0e;
	if (l6 != realm) goto L7ad5;
	l6 = 5;
	goto L7b06;
L7ad5:
	unhighlight_realm(p4, l2, realm);
	if (l6 >= 6) goto L7af7;
	realm = l6;
	l6 = 0;
	goto L7b06;
L7af7:
	realm = -1;
	l6 = 5;
	l10 = -1;
L7b06:
	l72 = 1;
	goto L7c03;
L7b0e:
	switch (l6) {
case 1:
	if (realm != -1) goto L7b35;
	unhighlight_realm(p4, l2, realm);
	realm = 4;
	l72 = 1;
	goto L7b55;
L7b35:
	if ((realm - 3) < 0) goto L7b55;
	unhighlight_realm(p4, l2, realm);
	realm += -3;
	l72 = 1;
L7b55:
	goto L7c03;
case 2:
	if (realm == -1) goto L7b85;
	if ((realm % 3) <= 0) goto L7b85;
	unhighlight_realm(p4, l2, realm);
	realm--;
	l72 = 1;
L7b85:
	goto L7c03;
case 3:
	if (realm == -1) goto L7bb7;
	unhighlight_realm(p4, l2, realm);
	l72 = 1;
	if ((realm + 3) >= 6) goto L7bb2;
	realm = (realm + 3);
	goto L7bb7;
L7bb2:
	realm = -1;
L7bb7:
	goto L7c03;
case 4:
	if (realm == -1) goto L7be7;
	if (((realm % 3) + 1) >= 3) goto L7be7;
	unhighlight_realm(p4, l2, realm);
	realm++;
	l72 = 1;
L7be7:
	goto L7c03;
	}
L7c03:
	if (l6 != 5) goto L793c;
	if (!l10) goto L793c;
	if (realm != -1) goto L7c42;
	g553c = -1;
	destroy_window(l2, 0);
	destroy_window(l4, 0);
	return -1;
L7c42:
	unhighlight_realm(p4, l2, realm);
	l58 = 0;
	l60 = 0;
	g5754 = l4;
	g5756 = 1;
	g5758 = 3;
	strcpy(22362, 20462);
	g578a = 0;
	set_click_region(7, (unsigned char)l4[2], (unsigned char)l4[3], (unsigned char)l4[2], (unsigned char)l4[3]);
	set_click_region(8, (unsigned char)l4[2], ((unsigned char)l4[3] + 6), (unsigned char)l4[2], ((unsigned char)l4[3] + 6));
	set_click_region(9, ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 3), ((unsigned char)l4[2] + 18), ((unsigned char)l4[3] + 3));
	set_click_region(10, 255, 0, 0, 0);
L7d14:
	g553c = 1;
	get_message((l50[l58] + 4000), 22386);
	g578c = realm_colors[realm];
	draw_spell_list(l4, member, realm, l58, 1, l10, l50);
	l66 = (unsigned char)g00e0[(l50[l58] * 6)];
	set_cursor(l2, 6, 14);
	if (*(int *)((char *)pc_spell_pts + ((432 * member) + (realm << 2))) >= l66) goto L7dc3;
	print_string(l2, 20478, realm_colors[realm]);
	goto L7dde;
L7dc3:
	print_int(l2, l66, 3, realm_colors[realm]);
L7dde:
	l6 = get_menu_input(21822, 13720);
	if (menu_clicked != 1) goto L7e61;
#asm
	db 0ebh,05ch
#endasm
	realm = l6;
	l6 = 1;
	goto L7e61;
	g553c = -1;
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
	db 0ebh,021h,0f8h,07dh,0f8h,07dh,0f8h,07dh,0f8h,07dh,0f8h,07dh,0f8h,07dh,005h,07eh
	db 02bh,07eh,032h,07eh,039h,07eh
l7e54:
	db 03dh,00ah,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,040h,07eh
#endasm
L7e61:
	switch (l6) {
case 1:
	l60 = 1;
	goto L7e95;
case 2:
	if (l58 <= 0) goto L7e76;
	l58--;
L7e76:
	goto L7e95;
case 4:
	if ((l58 + 1) >= l10) goto L7e84;
	l58++;
L7e84:
	goto L7e95;
	}
L7e95:
	if (l6 == 5) goto L7ea4;
	if (l60 != 1) goto L7d14;
L7ea4:
	if (l60 == 1) goto L7923;
	spell = l50[l58];
	if (ask_power) goto L7ee8;
	g553c = -1;
	destroy_window(l2, 0);
	destroy_window(l4, 0);
	return spell;
L7ee8:
	draw_spell_list_frame(l4, 0);
	defer_window_draw(l4);
	set_cursor(l4, 1, 3);
	print_message((spell + 4000), l4, 18);
	resume_window_draw(l4);
	refresh_window(l4);
	power = 1;
	l56 = ((*(int *)((char *)pc_level + (432 * member)) - (unsigned char)g00df[(spell * 6)]) + 1);
#asm
	db 0b8h,001h,000h,08bh,04eh,0c8h,083h,0f9h,001h,07ch,00ch,08bh,0c1h,050h,03dh,006h
	db 000h,058h,07eh,003h,0b8h,006h,000h
#endasm
L7f74:
	;
#asm
l7f74:
	db 089h,046h,0c8h
#endasm
	l6 = 0;
	goto L7fb7;
L7f7e:
	set_click_region(l6, (((unsigned char)l2[2] + l6) + 3), ((unsigned char)l2[3] + 12), (((unsigned char)l2[2] + l6) + 3), ((unsigned char)l2[3] + 12));
	l6++;
L7fb7:
	if (l6 < l56) goto L7f7e;
	set_click_region(l56, ((unsigned char)l2[2] + 1), ((unsigned char)l2[3] + 12), ((unsigned char)l2[2] + 1), ((unsigned char)l2[3] + 12));
	set_click_region((l56 + 1), 255, 0, 0, 0);
	l72 = 1;
	g5754 = l2;
L800b:
	l66 = ((unsigned char)g00e0[(spell * 6)] * power);
	if (l72 != 1) goto L8156;
	g553c = 1;
	l72 = 0;
	if (power) goto L80c4;
	g5756 = 1;
	g5758 = 12;
	g5772 = 99;
	g5773 = 0;
	g578c = 5;
	g575a = 34;
	g575b = 0;
	g578a = 17;
	clear_window_area(l2, 11, 12, 18, 12);
	set_cursor(l2, 11, 12);
	print_message(3956, l2, 9);
	clear_window_area(l2, 6, 14, 8, 14);
	goto L8156;
L80c4:
	g5756 = (power + 2);
	g5758 = 12;
	g5772 = (char)(power + 23);
	g5773 = 0;
	g578c = 7;
	g575a = 32;
	g575b = 0;
	g578a = 0;
	set_cursor(l2, 6, 14);
	if (*(int *)((char *)pc_spell_pts + ((432 * member) + (realm << 2))) >= l66) goto L813b;
	print_string(l2, 20482, realm_colors[realm]);
	goto L8156;
L813b:
	print_int(l2, l66, 3, realm_colors[realm]);
L8156:
	l6 = get_menu_input(21822, 13720);
	if (menu_clicked != 1) goto L81cc;
	if ((l6 + 1) != power) goto L817b;
	l6 = 5;
	goto L81c4;
L817b:
	set_cursor(l2, (power + 2), 12);
	put_char(l2, (unsigned char)((power + 23)), 5);
	power = (l6 < l56 ? (l6 + 1) : 0);
	l6 = (power == 0 ? 5 : 0);
L81c4:
	l72 = 1;
	goto L82be;
L81cc:
	switch (l6) {
case 1:
	if (power <= 0) goto L8209;
	set_cursor(l2, (power + 2), 12);
	put_char(l2, (unsigned char)((power + 23)), 5);
	power--;
	l72 = 1;
L8209:
	goto L82be;
case 3:
	if (power) goto L8273;
	unhighlight_realm(p4, l2, -1);
	clear_window_area(l2, 11, 12, 18, 12);
	set_cursor(l2, 11, 12);
	print_message((realm + 3950), l2, realm_colors[realm]);
	power = 1;
	l72 = 1;
	goto L82ac;
L8273:
	if (power >= l56) goto L82ac;
	set_cursor(l2, (power + 2), 12);
	put_char(l2, (unsigned char)((power + 23)), 5);
	power++;
	l72 = 1;
L82ac:
	goto L82be;
	}
L82be:
	if (l6 != 5) goto L800b;
	if (*(int *)((char *)pc_spell_pts + ((432 * member) + (realm << 2))) < l66) goto L800b;
	g553c = -1;
	destroy_window(l2, 0);
	destroy_window(l4, 0);
	if (power) goto L8310;
	return -1;
L8310:
	if (g00e2[(spell * 6)] != 1) goto L8346;
	g578e = choose_member(p4, p6, 502, -1);
	if (g578e != -1) goto L8346;
	return -1;
L8346:
	return ((power << 8) + spell);
}
