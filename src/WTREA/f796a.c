extern char g00df[];
extern char g00e0[];
extern char g00e2[];
extern char g503e;
extern char g503f;
extern char g5056;
extern char g5057;
extern int g501c;
extern int g5034;
extern int g5036;
extern int g5038;
extern int g503a;
extern int g503c;
extern int g51d4;
extern int menu_clicked;
extern int pc_level[];
extern int pc_spell_pts[];
extern int realm_colors[];
choose_chest_spell(win, member)
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
	char x66[4];
	int l72;
	int l74;
	int l76;
	l2 = create_window(0, 18, 23, 7, 25, -1, 0, 0);
	l4 = create_window(22, 19, 18, 6, 26, -5, 0, 0);
	draw_chest_spell_window(l2, member);
	draw_chest_list_box(l4, 1);
	realm = 0;
	l6 = 0;
L79df:
	l74 = (((l6 / 3) * 6) + 1);
	l76 = (((l6 % 3) << 1) + 1);
	set_click_region(l6, ((unsigned char)l2[2] + l74), ((unsigned char)l2[3] + l76), ((unsigned char)l2[2] + l74), ((unsigned char)l2[3] + l76));
	l6++;
	if (l6 < 6) goto L79df;
	set_click_region(6, ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3), ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3));
L7a64:
	set_click_region(7, 255, 0, 0, 0);
	l72 = 1;
	g5038 = l2;
L7a83:
	if (l72 != 1) goto L7be5;
	g501c = 1;
	if (realm != -1) goto L7b0d;
	g5036 = 13;
	g5034 = 3;
	clear_window_area(l2, 13, 1, 20, 1);
	set_cursor(l2, 13, 1);
	print_message(3956, l2, 9);
	clear_window_area(l2, 18, 5, 20, 5);
	count = -1;
	draw_chest_list_box(l4, 1);
	goto L7bbc;
L7b0d:
	g5036 = (((realm / 3) * 6) + 1);
	g5034 = (((realm % 3) << 1) + 1);
	clear_window_area(l2, 13, 1, 20, 1);
	set_cursor(l2, 13, 1);
	print_message((realm + 3950), l2, realm_colors[realm]);
	clear_window_area(l2, 18, 5, 20, 5);
	count = count_known_realm_spells(member, realm, spells);
	draw_chest_spell_list(l4, member, realm, 0, 0, count, spells);
L7bbc:
	g5056 = 99;
	g5057 = 0;
	g503c = 5;
	g503e = (char)(realm + 35);
	g503f = 0;
	g503a = 17;
	l72 = 0;
L7be5:
	l6 = get_chest_input(20670, 13720);
	if (menu_clicked != 1) goto L7c3f;
	if (l6 != realm) goto L7c09;
	l6 = 5;
	goto L7c37;
L7c09:
	unhighlight_realm_slot(l2, realm);
	if (l6 >= 6) goto L7c28;
	realm = l6;
	l6 = 0;
	goto L7c37;
L7c28:
	realm = -1;
	l6 = 5;
	count = -1;
L7c37:
	l72 = 1;
	goto L7d25;
L7c3f:
	switch (l6) {
case 1:
	if (realm != -1) goto L7c63;
	unhighlight_realm_slot(l2, realm);
	realm = 4;
	l72 = 1;
	goto L7c80;
L7c63:
	if ((realm - 3) < 0) goto L7c80;
	unhighlight_realm_slot(l2, realm);
	realm += -3;
	l72 = 1;
L7c80:
	goto L7d25;
case 2:
	if ((realm == -1) || ((realm % 3) <= 0)) goto L7cad;
	unhighlight_realm_slot(l2, realm);
	realm--;
	l72 = 1;
L7cad:
	goto L7d25;
case 3:
	if (realm == -1) goto L7cdc;
	unhighlight_realm_slot(l2, realm);
	l72 = 1;
	if ((realm + 3) >= 6) goto L7cd7;
	realm = (realm + 3);
	goto L7cdc;
L7cd7:
	realm = -1;
L7cdc:
	goto L7d25;
case 4:
	if ((realm == -1) || (((realm % 3) + 1) >= 3)) goto L7d09;
	unhighlight_realm_slot(l2, realm);
	realm++;
	l72 = 1;
L7d09:
	goto L7d25;
	}
L7d25:
	if (l6 != 5) goto L7a83;
	if (!count) goto L7a83;
	if (realm != -1) goto L7d64;
	g501c = -1;
	destroy_window(l2, 0);
	destroy_window(l4, 0);
	return -1;
L7d64:
	unhighlight_realm_slot(l2, realm);
	pos = 0;
	l60 = 0;
	g5038 = l4;
	g5036 = 2;
	g5034 = 2;
	strcpy(20542, 20469);
	g503a = 0;
	set_click_region(7, ((unsigned char)l4[2] + 1), (unsigned char)l4[3], ((unsigned char)l4[2] + 1), (unsigned char)l4[3]);
	set_click_region(8, ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4), ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4));
	set_click_region(9, ((unsigned char)l4[2] + 2), ((unsigned char)l4[3] + 2), ((unsigned char)l4[2] + 19), ((unsigned char)l4[3] + 2));
	set_click_region(10, 255, 0, 0, 0);
L7e36:
	g501c = 1;
	get_message((spells[pos] + 4000), 20566);
	g503c = realm_colors[realm];
	draw_chest_spell_list(l4, member, realm, pos, 1, count, spells);
	cost = (unsigned char)g00e0[(spells[pos] * 6)];
	set_cursor(l2, 18, 5);
	if (*(int *)((char *)pc_spell_pts + ((432 * member) + (realm << 2))) >= cost) goto L7ee5;
	print_string(l2, 20485, realm_colors[realm]);
	goto L7f00;
L7ee5:
	print_int(l2, cost, 3, realm_colors[realm]);
L7f00:
	l6 = get_chest_input(20670, 13720);
	if (menu_clicked != 1) goto L7f83;
	switch (l6) {
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
	realm = l6;
	l6 = 1;
	goto L7f83;
case 6:
	g501c = -1;
	destroy_window(l2, 0);
	destroy_window(l4, 0);
	return -1;
case 7:
	l6 = 2;
	goto L7f83;
case 8:
	l6 = 4;
	goto L7f83;
case 9:
	l6 = 5;
	goto L7f83;
	}
L7f83:
	switch (l6) {
case 1:
	l60 = 1;
	goto L7fb7;
case 2:
	if (pos <= 0) goto L7f98;
	pos--;
L7f98:
	goto L7fb7;
case 4:
	if ((pos + 1) >= count) goto L7fa6;
	pos++;
L7fa6:
	goto L7fb7;
	}
L7fb7:
	if (l6 == 5) goto L7fc6;
	if (l60 != 1) goto L7e36;
L7fc6:
	if (l60 == 1) goto L7a64;
	spell = spells[pos];
	draw_chest_list_box(l4, 0);
	defer_window_draw(l4);
	set_cursor(l4, 2, 2);
	print_message((spell + 4000), l4, 18);
	resume_window_draw(l4);
	refresh_window(l4);
	g5038 = l2;
	level = 1;
	max_level = ((*(int *)((char *)pc_level + (432 * member)) - (unsigned char)g00df[(spell * 6)]) + 1);
	max_level = (max_level >= 1 ? (max_level > 6 ? 6 : max_level) : 1);
	l6 = 0;
	goto L80b0;
L8077:
	set_click_region(l6, (((unsigned char)l2[2] + l6) + 15), ((unsigned char)l2[3] + 3), (((unsigned char)l2[2] + l6) + 15), ((unsigned char)l2[3] + 3));
	l6++;
L80b0:
	if (l6 < max_level) goto L8077;
	set_click_region(max_level, ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3), ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3));
	set_click_region((max_level + 1), 255, 0, 0, 0);
	l72 = 1;
L8102:
	cost = ((unsigned char)g00e0[(spell * 6)] * level);
	if (l72 != 1) goto L824e;
	l72 = 0;
	g501c = 1;
	if (level) goto L81bb;
	g5036 = 13;
	g5034 = 3;
	g5056 = 99;
	g5057 = 0;
	g503c = 5;
	g503e = 34;
	g503f = 0;
	g503a = 17;
	clear_window_area(l2, 13, 1, 20, 1);
	set_cursor(l2, 13, 1);
	print_message(3956, l2, 9);
	clear_window_area(l2, 18, 5, 20, 5);
	goto L824e;
L81bb:
	g5036 = (level + 14);
	g5034 = 3;
	g5056 = (char)(level + 23);
	g5057 = 0;
	g503c = 7;
	g503e = 32;
	g503f = 0;
	g503a = 0;
	set_cursor(l2, 18, 5);
	if (*(int *)((char *)pc_spell_pts + ((432 * member) + (realm << 2))) >= cost) goto L8233;
	print_string(l2, 20489, realm_colors[realm]);
	goto L824e;
L8233:
	print_int(l2, cost, 3, realm_colors[realm]);
L824e:
	l6 = get_chest_input(20670, 13720);
	if (menu_clicked != 1) goto L82c5;
	if ((l6 + 1) != level) goto L8273;
	l6 = 5;
	goto L82bd;
L8273:
	set_cursor(l2, (level + 14), 3);
	put_char(l2, (unsigned char)((level + 23)), 5);
	level = (l6 < max_level ? (l6 + 1) : 0);
	l6 = (level == 0 ? 5 : 0);
L82bd:
	l72 = 1;
	goto L83b6;
L82c5:
	switch (l6) {
case 1:
	if (level <= 0) goto L8303;
	set_cursor(l2, (level + 14), 3);
	put_char(l2, (unsigned char)((level + 23)), 5);
	level--;
	l72 = 1;
L8303:
	goto L83b6;
case 3:
	if (level) goto L836a;
	unhighlight_realm_slot(l2, -1);
	clear_window_area(l2, 13, 1, 20, 1);
	set_cursor(l2, 13, 1);
	print_message((realm + 3950), l2, realm_colors[realm]);
	level = 1;
	l72 = 1;
	goto L83a4;
L836a:
	if (level >= max_level) goto L83a4;
	set_cursor(l2, (level + 14), 3);
	put_char(l2, (unsigned char)((level + 23)), 5);
	level++;
	l72 = 1;
L83a4:
	goto L83b6;
	}
L83b6:
	if (l6 != 5) goto L8102;
	if (*(int *)((char *)pc_spell_pts + ((432 * member) + (realm << 2))) < cost) goto L8102;
	g501c = -1;
	destroy_window(l2, 0);
	destroy_window(l4, 0);
	if (level) goto L8408;
	return -1;
L8408:
	if ((g00e2[(spell * 6)] != 1) || ((g51d4 = choose_party_member(2030, 1)) != -1)) goto L8438;
	return -1;
L8438:
	return ((level << 8) + spell);
}
