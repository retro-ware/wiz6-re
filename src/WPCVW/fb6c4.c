extern char g558e[];
extern char g558f;
extern char pc_class[];
extern char pc_item_qty[];
extern char pc_race[];
extern char pc_sex[];
extern int pc_item_id[];
extern int realm_colors[];
/* Show an item's description window: type, damage, classes, spells. */
show_item_info(p4, p6, p8, p10)
{
	int l2;
	int l4;
	char *l6;
	int l8;
	char l9;
	char l10;
	char x10[1];
	char l12;
	char l13;
	char l14;
	char l22[8];
	int l24;
	int l26;
	char l34[8];
	char x34[1];
	char l36;
	char l37;
	char l38;
	char l39;
	char l40;
	char l41;
	char l42;
	char l43;
	char l44;
	char l45;
	char l46;
	char l47;
	char x47[1];
	int l50;
	int l52;
	char l53;
	char l54;
	int l56;
	char x56[22];
	int l80;
	int l122[21];
	int l124;
	int l126;
	char x126[38];
	int l166;
	int l168;
	int l170;
	access_scenario_record(1, &l80, *(int *)((char *)pc_item_id + ((432 * p6) + (p8 << 3))), 0);
	l6 = create_window(20, 8, 20, 12, 25, -1, 0, 0);
	fill_window(l6, 0, 1, 0);
	fb139(l6, 0, 0, 21);
	fb139(l6, 19, 0, 8);
	fb139(l6, 0, 11, 11);
	fb139(l6, 19, 11, 8);
	for (l2 = 1; l2 < 19; l2++) {
	fb139(l6, l2, 0, 7);
	fb139(l6, l2, 2, 18);
	fb139(l6, l2, 11, 7);
	}
	for (l2 = 2; l2 < 11; l2++) {
	fb139(l6, 0, l2, 13);
	fb139(l6, 19, l2, 5);
	}
	fb139(l6, 0, 2, 36);
	fb139(l6, 19, 2, 19);
	fb139(l6, 0, 5, 15);
	fb139(l6, 0, 7, 15);
	fb139(l6, 0, 9, 15);
	fb139(l6, 0, 1, 5);
	defer_window_draw(l6);
	set_cursor(l6, 1, 1);
	for (l2 = 1; l2 < 20; l2++) {
	put_char_hi(l6, 32, 3);
	}
	put_icon_at2(l6, 1, 1, ((unsigned char)l22[3] + 1));
	put_icon_at2(l6, 18, 1, ((unsigned char)l22[3] + 1));
	set_cursor(l6, (10 - ((strlen(&l80) + 1) / 2)), 1);
	print_string_hi(l6, &l80, 3);
	l122[19] = 0;
	l122[18] = 0;
	l122[17] = 0;
	l122[16] = 0;
	l122[15] = 0;
	l122[14] = 0;
	l122[13] = 0;
	l122[12] = 0;
	l122[11] = 0;
	l122[8] = 0;
	l122[6] = 0;
	l122[7] = 0;
	l122[10] = 1;
	l122[9] = 7;
	switch ((unsigned char)l22[2]) {
case 0:
case 1:
case 2:
case 3:
	l122[19] = 1;
	l122[16] = 1;
	l122[14] = 1;
	l122[13] = 1;
	l122[8] = 1;
	l122[6] = 1;
	l122[7] = 1;
	goto Lba42;
case 4:
	l122[18] = 1;
	l122[8] = 1;
	l122[6] = 1;
	goto Lba42;
case 5:
	l122[17] = 1;
	l122[9] = 3;
	l122[12] = 1;
	l122[7] = 1;
	goto Lba42;
case 6:
case 7:
case 8:
case 9:
case 10:
	l122[17] = 1;
	l122[15] = 1;
	l122[12] = 1;
	l122[7] = 1;
	goto Lba42;
case 11:
	l122[17] = 1;
	l122[12] = 1;
	l122[7] = 1;
	goto Lba42;
case 12:
case 16:
	l122[10] = 0;
	l122[19] = 1;
	l122[11] = 1;
	l122[13] = 1;
	goto Lba42;
case 13:
	l122[10] = 0;
	l122[18] = 1;
	l122[11] = 1;
	goto Lba42;
case 14:
case 15:
	l122[18] = 1;
	l122[13] = 1;
	l122[7] = 1;
	goto Lba42;
	}
Lba42:
	if (p10) goto Lc029;
	get_message(((unsigned char)l22[2] + 1550), 21902);
	set_cursor(l6, (10 - ((strlen(21902) + 1) / 2)), 3);
	print_string(l6, 21902, 1);
	if (!l122[10]) goto Lbbaa;
	set_cursor(l6, 3, 4);
	get_message(454, 21902);
	for (l2 = 0; l2 < 11; l2++) {
	put_char(l6, (unsigned char)g558e[l2], (test_bit(&l24, l2) == 1 ? 6 : 11));
	}
	l6[6]++;
	get_message(455, 21902);
	for (l2 = 0; l2 < 2; l2++) {
	put_char(l6, (unsigned char)g558e[l2], (test_bit(l22, l2) == 1 ? 6 : 11));
	}
	set_cursor(l6, 3, 5);
	get_message(456, 21902);
	for (l2 = 0; l2 < 14; l2++) {
	put_char(l6, (unsigned char)g558e[l2], (test_bit(&l26, l2) == 1 ? 6 : 11));
	}
	goto Lbc08;
Lbbaa:
	if ((!l122[11]) || (!l52)) goto Lbc08;
	l126 = (l52 % 256);
	get_message((l126 + 4000), 21902);
	set_cursor(l6, (10 - ((strlen(21902) + 1) / 2)), 5);
	print_string(l6, 21902, 4);
Lbc08:
	if (!l122[14]) goto Lbdc3;
	switch ((unsigned char)l22[3]) {
case 0:
case 18:
case 89:
	l124 = 0;
	goto Lbd0a;
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
	goto Lbd0a;
case 2:
case 3:
	l124 = 2;
	goto Lbd0a;
case 4:
case 5:
case 6:
case 52:
case 54:
case 56:
case 98:
	l124 = 3;
	goto Lbd0a;
case 7:
case 8:
case 9:
case 10:
case 17:
case 19:
case 57:
case 90:
	l124 = 4;
	goto Lbd0a;
case 11:
case 12:
	l124 = 7;
	goto Lbd0a;
case 13:
	l124 = 6;
	goto Lbd0a;
case 24:
case 38:
	l124 = 8;
	goto Lbd0a;
case 20:
case 21:
	l124 = 5;
	goto Lbd0a;
	}
Lbd0a:
	if (((test_bit(&l24, (unsigned char)pc_race[(432 * p6)]) != 1) || (test_bit(&l26, (unsigned char)pc_class[(432 * p6)]) != 1)) || (test_bit(l22, (unsigned char)pc_sex[(432 * p6)]) != 1)) {
	get_message(1567, 21902);
	l2 = 9;
	} else {
	get_message((l124 + 5500), 21902);
	l2 = 2;
	}
	set_cursor(l6, (10 - ((strlen(21902) + 1) / 2)), 6);
	print_string(l6, 21902, l2);
Lbdc3:
	if (!l122[13]) goto Lbe78;
	if (l22[2] != 3) goto Lbe04;
	get_message(3058, 21902);
	set_cursor(l6, 3, 7);
	print_string(l6, 21902, 5);
	goto Lbe78;
Lbe04:
	l4 = 0;
	l2 = 0;
Lbe0e:
	if (test_bit(&l8, l2) == 1) {
	set_cursor(l6, (((l4 / 3) << 3) + 3), ((l4 % 3) + 7));
	get_message((l2 + 3050), 21902);
	print_string(l6, 21902, 5);
	l4++;
	}
	l2++;
	if (l2 < 8) goto Lbe0e;
Lbe78:
	set_cursor(l6, 1, 10);
	if ((l122[19]) || (l122[18])) {
	get_message(451, 21902);
	put_char(l6, (unsigned char)g558e[0], (l122[19] != 0 ? 6 : 14));
	put_char(l6, 47, 14);
	put_char(l6, (unsigned char)g558f, (((unsigned char)l22[(0 + 1)] & 8) ? 6 : 14));
	} else {
	if (l122[17]) {
	get_message(452, 21902);
	print_string(l6, 21902, (l122[9] + 8));
	l6[6]++;
	int_to_string((0 - l10), 21902);
	print_string(l6, 21902, l122[9]);
	}
	}
	if (l122[16]) {
	get_message((((unsigned char)l22[(0 + 1)] & 4) ? 458 : 457), 21902);
	set_cursor(l6, 8, 10);
	print_string(l6, 21902, 4);
	} else {
	if (l122[15]) {
	get_message(((unsigned char)l22[2] + 454), 21902);
	set_cursor(l6, 8, 10);
	print_string(l6, 21902, 4);
	}
	}
	set_cursor(l6, 14, 10);
	print_int(l6, (l50 / 10), 3, 9);
	put_char(l6, 46, 9);
	print_int(l6, (l50 % 10), 1, 9);
	goto Lc661;
Lc029:
	if ((p10 * 3) <= (unsigned char)l22[4]) goto Lc61e;
	l168 = 3;
	if (l122[8]) {
	set_cursor(l6, 1, 3);
	get_message(466, 21902);
	print_string(l6, 21902, 14);
	int_to_string((unsigned char)l54, 21902);
	int_to_string((unsigned char)l53, 22416);
	int_to_string(l56, &l166);
	set_cursor(l6, (19 - (((strlen(21902) + strlen(22416)) + strlen(&l166)) + 2)), 3);
	print_string(l6, 21902, 5);
	get_message(478, 21902);
	print_string(l6, 21902, 5);
	print_string(l6, 22416, 5);
	put_char(l6, 43, 5);
	print_string(l6, &l166, 5);
	if (l9) {
	set_cursor(l6, 1, 4);
	get_message(467, 21902);
	print_string(l6, 21902, 14);
	set_cursor(l6, 7, 4);
	int_to_string(l9, 21902);
	if (l9 >= 0) {
	put_char(l6, 43, 5);
	}
	print_string(l6, 21902, 5);
	}
	l168 = 5;
	}
	if ((l122[7]) && (((unsigned char)l14 - (unsigned char)l13))) {
	l168 = (l122[8] != 0 ? 4 : 3);
	set_cursor(l6, 11, l168);
	get_message(468, 21902);
	print_string(l6, 21902, 14);
	set_cursor(l6, 17, l168);
	int_to_string(((unsigned char)l14 - (unsigned char)l13), 21902);
	if (((unsigned char)l14 - (unsigned char)l13) >= 0) {
	put_char(l6, 43, 5);
	}
	print_string(l6, 21902, 5);
	l168 = 5;
	}
	if (l22[5]) {
	set_cursor(l6, 1, l168);
	get_message(465, 21902);
	print_string(l6, 21902, 3);
	set_cursor(l6, 15, l168);
	fb659(l6, (unsigned char)l22[5], 1);
	l168++;
	}
	if (l52) {
	l126 = (l52 % 256);
	get_message((l126 + 4000), 21902);
	set_cursor(l6, 1, l168);
	print_string(l6, 21902, 4);
	set_cursor(l6, 16, l168);
	if (!pc_item_qty[((432 * p6) + (p8 << 3))]) {
	get_message(480, 21902);
	print_string(l6, 21902, 1);
	} else {
	print_int(l6, (unsigned char)pc_item_qty[((432 * p6) + (p8 << 3))], 3, 1);
	}
	l168++;
	}
	if ((l168 > 3) && (l168 < 8)) {
	l168++;
	}
	if (l12) {
	get_message(469, 21902);
	set_cursor(l6, 1, l168);
	print_string(l6, 21902, 7);
	set_cursor(l6, 15, l168);
	fb659(l6, (unsigned char)l12, 1);
	l168++;
	}
	if (!l122[6]) goto Lc49e;
	l4 = 0;
	l2 = 0;
Lc437:
	if ((unsigned)l34[l2] > 0) {
	set_cursor(l6, (((l4 / 3) << 3) + 3), ((l4 % 3) + l168));
	get_message((l2 + 470), 21902);
	print_string(l6, 21902, 5);
	l4++;
	}
	l2++;
	if (l2 < 8) goto Lc437;
	goto Lc61c;
Lc49e:
	if (!l122[12]) goto Lc61c;
	l122[0] = (((unsigned char)l47 + (unsigned char)l46) / 2);
	l122[1] = (((unsigned char)l45 + (unsigned char)l44) / 2);
	l122[2] = (((unsigned char)l43 + (unsigned char)l42) / 2);
	l122[3] = (((unsigned char)l41 + (unsigned char)l40) / 2);
	l122[4] = (((unsigned char)l39 + (unsigned char)l38) / 2);
	l122[5] = (((unsigned char)l37 + (unsigned char)l36) / 2);
	for (l2 = 0; l2 < 6; l2++) {
	l122[l2] = (l122[l2] > 99 ? 99 : l122[l2]);
	set_cursor(l6, (((l2 / 3) * 9) + 1), ((l2 % 3) + l168));
	get_message((l2 + 3950), 21902);
	print_string(l6, 21902, realm_colors[l2]);
	set_cursor(l6, (((l2 / 3) * 9) + 7), ((l2 % 3) + l168));
	print_int(l6, l122[l2], 2, 1);
	put_char(l6, 37, realm_colors[l2]);
	}
Lc61c:
	goto Lc661;
Lc61e:
	get_message(482, 21902);
	set_cursor(l6, (10 - ((strlen(21902) + 1) / 2)), 4);
	print_string(l6, 21902, 1);
Lc661:
	resume_window_draw(l6);
	fill_window(p4, 32, 3, 0);
	defer_window_draw(p4);
	get_message(609, 21902);
	set_cursor(p4, (20 - ((strlen(21902) + 1) / 2)), 1);
	print_string_hi(p4, 21902, 3);
	resume_window_draw(p4);
	refresh_window(l6);
	refresh_window(p4);
	l170 = 1;
Lc6e2:
	if (check_screen_click()) {
	l170 = 0;
	}
	if ((key_available(1) == 1) && ((char)get_key(1) == 13)) {
	l170 = 0;
	}
	if (l170) goto Lc6e2;
	destroy_window(l6, 0);
}
