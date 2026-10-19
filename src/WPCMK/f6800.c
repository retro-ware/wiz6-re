extern char g00e0[];
extern int char_spell_points[];
extern int menu_clicked;
extern int realm_colors[];
select_spell(p4, p6)
char *p4;
{
	char *l2;
	char *l4;
	int l6;
	char x6[2];
	int l10;
	int l50[20];
	int l52;
	char x52[4];
	int l58;
	int l60;
	char x60[2];
	int l64;
	int l66;
	char x66[4];
	int l72;
	int l74;
	int l76;
	l2 = create_window(20, 4, 20, 16, 22, -1, 0, 0);
	l4 = create_window(21, 7, 19, 8, 23, -1, 0, 0);
	fill_window(l4, 32, 3, 0);
	draw_spell_window(l2);
	draw_list_box(l4, 1);
	refresh_window(p6);
	l64 = 0;
	for (l6 = 0; l6 < 6; l6++) {
	l74 = (((l6 / 3) * 10) + 1);
	l76 = (((l6 % 3) << 1) + 14);
	set_click_region(l6, ((unsigned char)p4[2] + l74), ((unsigned char)p4[3] + l76), ((unsigned char)p4[2] + l74), ((unsigned char)p4[3] + l76));
	}
	set_click_region(6, ((unsigned char)l2[2] + 1), ((unsigned char)l2[3] + 12), ((unsigned char)l2[2] + 1), ((unsigned char)l2[3] + 12));
L6914:
	set_click_region(7, 255, 0, 0, 0);
	l72 = 1;
L692d:
	if (l72 != 1) goto L6a78;
	if (l64 != -1) goto L69bd;
	put_char_at(l2, 1, 12, 99);
	clear_window_area(l2, 11, 12, 18, 12);
	set_cursor(l2, 11, 12);
	print_message(3956, l2, 9);
	clear_window_area(l2, 6, 14, 8, 14);
	l10 = -1;
	draw_list_box(l4, 1);
	goto L6a73;
L69bd:
	put_char_at(p4, (((l64 / 3) * 10) + 1), (((l64 % 3) << 1) + 14), 99);
	clear_window_area(l2, 11, 12, 18, 12);
	set_cursor(l2, 11, 12);
	print_message((l64 + 3950), l2, realm_colors[l64]);
	clear_window_area(l2, 6, 14, 8, 14);
	l10 = list_realm_spells(l64, l50);
	draw_spell_list(l4, l64, 0, 0, l10, l50);
L6a73:
	l72 = 0;
L6a78:
	l6 = get_menu_input(21534, 13720);
	if (menu_clicked != 1) goto L6ad5;
	if (l6 != l64) goto L6a9c;
	l6 = 5;
	goto L6acd;
L6a9c:
	unhighlight_realm(p4, l2, l64);
	if (l6 >= 6) goto L6abe;
	l64 = l6;
	l6 = 0;
	goto L6acd;
L6abe:
	l64 = -1;
	l6 = 5;
	l10 = -1;
L6acd:
	l72 = 1;
	goto L6bca;
L6ad5:
	switch (l6) {
case 1:
	if (l64 != -1) goto L6afc;
	unhighlight_realm(p4, l2, l64);
	l64 = 4;
	l72 = 1;
	goto L6b1c;
L6afc:
	if ((l64 - 3) < 0) goto L6b1c;
	unhighlight_realm(p4, l2, l64);
	l64 += -3;
	l72 = 1;
L6b1c:
	goto L6bca;
case 2:
	if ((l64 == -1) || ((l64 % 3) <= 0)) goto L6b4c;
	unhighlight_realm(p4, l2, l64);
	l64--;
	l72 = 1;
L6b4c:
	goto L6bca;
case 3:
	if (l64 == -1) goto L6b7e;
	unhighlight_realm(p4, l2, l64);
	l72 = 1;
	if ((l64 + 3) >= 6) goto L6b79;
	l64 = (l64 + 3);
	goto L6b7e;
L6b79:
	l64 = -1;
L6b7e:
	goto L6bca;
case 4:
	if ((l64 == -1) || (((l64 % 3) + 1) >= 3)) goto L6bae;
	unhighlight_realm(p4, l2, l64);
	l64++;
	l72 = 1;
L6bae:
	goto L6bca;
	}
L6bca:
	if ((l6 != 5) || (!l10)) goto L692d;
	if (l64 != -1) goto L6c03;
	destroy_window(l2, 0);
	destroy_window(l4, 0);
	return -1;
L6c03:
	unhighlight_realm(p4, l2, l64);
	l58 = 0;
	l60 = 0;
	set_click_region(7, (unsigned char)l4[2], (unsigned char)l4[3], (unsigned char)l4[2], (unsigned char)l4[3]);
	set_click_region(8, (unsigned char)l4[2], ((unsigned char)l4[3] + 6), (unsigned char)l4[2], ((unsigned char)l4[3] + 6));
	set_click_region(9, ((unsigned char)l4[2] + 1), ((unsigned char)l4[3] + 3), ((unsigned char)l4[2] + 18), ((unsigned char)l4[3] + 3));
	set_click_region(10, 255, 0, 0, 0);
L6caf:
	draw_spell_list(l4, l64, l58, 1, l10, l50);
	l66 = (unsigned char)g00e0[(l50[l58] * 6)];
	set_cursor(l2, 6, 14);
	if (*(int *)((char *)char_spell_points + (l64 << 2)) >= l66) goto L6d25;
	print_string(l2, 20953, realm_colors[l64]);
	goto L6d40;
L6d25:
	print_int(l2, l66, 3, realm_colors[l64]);
L6d40:
	l6 = get_menu_input(21534, 13720);
	if (menu_clicked != 1) goto L6dbd;
	switch (l6) {
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
	l64 = l6;
	l6 = 1;
	goto L6dbd;
case 6:
	destroy_window(l2, 0);
	destroy_window(l4, 0);
	return -1;
case 7:
	l6 = 2;
	goto L6dbd;
case 8:
	l6 = 4;
	goto L6dbd;
case 9:
	l6 = 5;
	goto L6dbd;
	}
L6dbd:
	switch (l6) {
case 1:
	l60 = 1;
	goto L6df1;
case 2:
	if (l58 <= 0) goto L6dd2;
	l58--;
L6dd2:
	goto L6df1;
case 4:
	if ((l58 + 1) >= l10) goto L6de0;
	l58++;
L6de0:
	goto L6df1;
	}
L6df1:
	if ((l6 != 5) && (l60 != 1)) goto L6caf;
	if (l60 == 1) goto L6914;
	l52 = l50[l58];
	destroy_window(l2, 0);
	destroy_window(l4, 0);
	return l52;
}
