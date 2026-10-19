extern char g00df[];
extern char g00e0[];
extern char g00e2[];
extern char g5232;
extern char g5233;
extern char g524a;
extern char g524b;
extern int event_screen_dirty;
extern int g5226;
extern int g5228;
extern int g522a;
extern int g522c;
extern int g522e;
extern int g5322;
extern int menu_clicked;
extern int pc_level[];
extern int pc_spell_pts[];
extern int realm_colors[];
npc_choose_spell(p4, p6)
{
	char *l2;
	char *l4;
	int l6;
	char x6[2];
	int l10;
	int l50[20];
	int l52;
	int l54;
	int l56;
	int l58;
	int l60;
	char x60[2];
	int l64;
	int l66;
	char x66[4];
	int l72;
	int l74;
	int l76;
	l2 = create_window(0, 18, 23, 7, 25, -1, 0, 0);
	l4 = create_window(22, 19, 18, 6, 26, -5, 0, 0);
	npc_draw_spell_window(l2, p6);
	f88c7(l4, 1);
	l64 = 0;
	l6 = 0;
L8d5d:
	l74 = (((l6 / 3) * 6) + 1);
	l76 = (((l6 % 3) << 1) + 1);
	set_click_region(l6, ((unsigned char)l2[2] + l74), ((unsigned char)l2[3] + l76), ((unsigned char)l2[2] + l74), ((unsigned char)l2[3] + l76));
	l6++;
	if (l6 < 6) goto L8d5d;
	set_click_region(6, ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3), ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3));
L8de2:
	set_click_region(7, 255, 0, 0, 0);
	l72 = 1;
	g522a = l2;
L8e01:
	if (l72 != 1) goto L8f63;
	g522c = 1;
	if (l64 != -1) goto L8e8b;
	g5228 = 13;
	g5226 = 3;
	clear_window_area(l2, 13, 1, 20, 1);
	set_cursor(l2, 13, 1);
	print_message(3956, l2, 9);
	clear_window_area(l2, 18, 5, 20, 5);
	l10 = -1;
	f88c7(l4, 1);
	goto L8f3a;
L8e8b:
	g5228 = (((l64 / 3) * 6) + 1);
	g5226 = (((l64 % 3) << 1) + 1);
	clear_window_area(l2, 13, 1, 20, 1);
	set_cursor(l2, 13, 1);
	print_message((l64 + 3950), l2, realm_colors[l64]);
	clear_window_area(l2, 18, 5, 20, 5);
	l10 = f8bcd(p6, l64, l50);
	f8c28(l4, p6, l64, 0, 0, l10, l50);
L8f3a:
	g524a = 99;
	g524b = 0;
	event_screen_dirty = 5;
	g5232 = (char)(l64 + 35);
	g5233 = 0;
	g522e = 17;
	l72 = 0;
L8f63:
	l6 = f5994(21098, 13720);
	if (menu_clicked != 1) goto L8fbd;
	if (l6 != l64) goto L8f87;
	l6 = 5;
	goto L8fb5;
L8f87:
	f8874(l2, l64);
	if (l6 >= 6) goto L8fa6;
	l64 = l6;
	l6 = 0;
	goto L8fb5;
L8fa6:
	l64 = -1;
	l6 = 5;
	l10 = -1;
L8fb5:
	l72 = 1;
	goto L90a3;
L8fbd:
	switch (l6) {
case 1:
	if (l64 != -1) goto L8fe1;
	f8874(l2, l64);
	l64 = 4;
	l72 = 1;
	goto L8ffe;
L8fe1:
	if ((l64 - 3) < 0) goto L8ffe;
	f8874(l2, l64);
	l64 += -3;
	l72 = 1;
L8ffe:
	goto L90a3;
case 2:
	if ((l64 == -1) || ((l64 % 3) <= 0)) goto L902b;
	f8874(l2, l64);
	l64--;
	l72 = 1;
L902b:
	goto L90a3;
case 3:
	if (l64 == -1) goto L905a;
	f8874(l2, l64);
	l72 = 1;
	if ((l64 + 3) >= 6) goto L9055;
	l64 = (l64 + 3);
	goto L905a;
L9055:
	l64 = -1;
L905a:
	goto L90a3;
case 4:
	if ((l64 == -1) || (((l64 % 3) + 1) >= 3)) goto L9087;
	f8874(l2, l64);
	l64++;
	l72 = 1;
L9087:
	goto L90a3;
	}
L90a3:
	if (l6 != 5) goto L8e01;
	if (!l10) goto L8e01;
	if (l64 != -1) goto L90e2;
	g522c = -1;
	destroy_window(l2, 0);
	destroy_window(l4, 0);
	return -1;
L90e2:
	f8874(l2, l64);
	l58 = 0;
	l60 = 0;
	g522a = l4;
	g5228 = 2;
	g5226 = 2;
	strcpy(21042, 20491);
	g522e = 0;
	set_click_region(7, ((unsigned char)l4[2] + 1), (unsigned char)l4[3], ((unsigned char)l4[2] + 1), (unsigned char)l4[3]);
	set_click_region(8, ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4), ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 4));
	set_click_region(9, ((unsigned char)l4[2] + 2), ((unsigned char)l4[3] + 2), ((unsigned char)l4[2] + 19), ((unsigned char)l4[3] + 2));
	set_click_region(10, 255, 0, 0, 0);
L91b4:
	g522c = 1;
	get_message((l50[l58] + 4000), 21066);
	event_screen_dirty = realm_colors[l64];
	f8c28(l4, p6, l64, l58, 1, l10, l50);
	l66 = (unsigned char)g00e0[(l50[l58] * 6)];
	set_cursor(l2, 18, 5);
	if (*(int *)((char *)pc_spell_pts + ((432 * p6) + (l64 << 2))) >= l66) goto L9263;
	print_string(l2, 20507, realm_colors[l64]);
	goto L927e;
L9263:
	print_int(l2, l66, 3, realm_colors[l64]);
L927e:
	l6 = f5994(21098, 13720);
	if (menu_clicked != 1) goto L9301;
	switch (l6) {
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
	l64 = l6;
	l6 = 1;
	goto L9301;
case 6:
	g522c = -1;
	destroy_window(l2, 0);
	destroy_window(l4, 0);
	return -1;
case 7:
	l6 = 2;
	goto L9301;
case 8:
	l6 = 4;
	goto L9301;
case 9:
	l6 = 5;
	goto L9301;
	}
L9301:
	switch (l6) {
case 1:
	l60 = 1;
	goto L9335;
case 2:
	if (l58 <= 0) goto L9316;
	l58--;
L9316:
	goto L9335;
case 4:
	if ((l58 + 1) >= l10) goto L9324;
	l58++;
L9324:
	goto L9335;
	}
L9335:
	if (l6 == 5) goto L9344;
	if (l60 != 1) goto L91b4;
L9344:
	if (l60 == 1) goto L8de2;
	l52 = l50[l58];
	f88c7(l4, 0);
	defer_window_draw(l4);
	set_cursor(l4, 2, 2);
	print_message((l52 + 4000), l4, 18);
	resume_window_draw(l4);
	refresh_window(l4);
	g522a = l2;
	l54 = 1;
	l56 = ((*(int *)((char *)pc_level + (432 * p6)) - (unsigned char)g00df[(l52 * 6)]) + 1);
	l56 = (l56 >= 1 ? (l56 > 6 ? 6 : l56) : 1);
	l6 = 0;
	goto L942e;
L93f5:
	set_click_region(l6, (((unsigned char)l2[2] + l6) + 15), ((unsigned char)l2[3] + 3), (((unsigned char)l2[2] + l6) + 15), ((unsigned char)l2[3] + 3));
	l6++;
L942e:
	if (l6 < l56) goto L93f5;
	set_click_region(l56, ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3), ((unsigned char)l2[2] + 13), ((unsigned char)l2[3] + 3));
	set_click_region((l56 + 1), 255, 0, 0, 0);
	l72 = 1;
L9480:
	l66 = ((unsigned char)g00e0[(l52 * 6)] * l54);
	if (l72 != 1) goto L95cc;
	l72 = 0;
	g522c = 1;
	if (l54) goto L9539;
	g5228 = 13;
	g5226 = 3;
	g524a = 99;
	g524b = 0;
	event_screen_dirty = 5;
	g5232 = 34;
	g5233 = 0;
	g522e = 17;
	clear_window_area(l2, 13, 1, 20, 1);
	set_cursor(l2, 13, 1);
	print_message(3956, l2, 9);
	clear_window_area(l2, 18, 5, 20, 5);
	goto L95cc;
L9539:
	g5228 = (l54 + 14);
	g5226 = 3;
	g524a = (char)(l54 + 23);
	g524b = 0;
	event_screen_dirty = 7;
	g5232 = 32;
	g5233 = 0;
	g522e = 0;
	set_cursor(l2, 18, 5);
	if (*(int *)((char *)pc_spell_pts + ((432 * p6) + (l64 << 2))) >= l66) goto L95b1;
	print_string(l2, 20511, realm_colors[l64]);
	goto L95cc;
L95b1:
	print_int(l2, l66, 3, realm_colors[l64]);
L95cc:
	l6 = f5994(21098, 13720);
	if (menu_clicked != 1) goto L9643;
	if ((l6 + 1) != l54) goto L95f1;
	l6 = 5;
	goto L963b;
L95f1:
	set_cursor(l2, (l54 + 14), 3);
	put_char(l2, (unsigned char)((l54 + 23)), 5);
	l54 = (l6 < l56 ? (l6 + 1) : 0);
	l6 = (l54 == 0 ? 5 : 0);
L963b:
	l72 = 1;
	goto L9734;
L9643:
	switch (l6) {
case 1:
	if (l54 <= 0) goto L9681;
	set_cursor(l2, (l54 + 14), 3);
	put_char(l2, (unsigned char)((l54 + 23)), 5);
	l54--;
	l72 = 1;
L9681:
	goto L9734;
case 3:
	if (l54) goto L96e8;
	f8874(l2, -1);
	clear_window_area(l2, 13, 1, 20, 1);
	set_cursor(l2, 13, 1);
	print_message((l64 + 3950), l2, realm_colors[l64]);
	l54 = 1;
	l72 = 1;
	goto L9722;
L96e8:
	if (l54 >= l56) goto L9722;
	set_cursor(l2, (l54 + 14), 3);
	put_char(l2, (unsigned char)((l54 + 23)), 5);
	l54++;
	l72 = 1;
L9722:
	goto L9734;
	}
L9734:
	if (l6 != 5) goto L9480;
	if (*(int *)((char *)pc_spell_pts + ((432 * p6) + (l64 << 2))) < l66) goto L9480;
	g522c = -1;
	destroy_window(l2, 0);
	destroy_window(l4, 0);
	if (l54) goto L9786;
	return -1;
L9786:
	if (g00e2[(l52 * 6)] != 1) goto L97b9;
	refresh_all_windows();
	if ((g5322 = f62ee(2030, 1)) != -1) goto L97b9;
	return -1;
L97b9:
	return ((l54 << 8) + l52);
}
