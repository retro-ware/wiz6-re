extern char pc_skill_points[];
extern char pc_skills[];
extern int menu_clicked;
fdeca(p4, p6, p8, p10, p12, p14)
char *p4;
char *p12;
{
	int l2;
	int l4;
	int l24[10];
	int l26;
	int l28;
	l26 = (unsigned char)pc_skill_points[(432 * p8)];
	fill_window(p4, 32, 3, 0);
	refresh_window(p4);
	set_cursor(p4, 2, 1);
	print_message(606, p4, 18);
	p4[6] += 3;
	print_message(607, p4, 18);
	for (l4 = 0; l4 < 10; l4++) {
	l24[l4] = 0;
	}
	l4 = 0;
	set_click_region(0, ((unsigned char)p4[2] + 2), ((unsigned char)p4[3] + 1), ((unsigned char)p4[2] + 2), ((unsigned char)p4[3] + 1));
	set_click_region(1, ((unsigned char)p4[2] + 3), ((unsigned char)p4[3] + 1), ((unsigned char)p4[2] + 3), ((unsigned char)p4[3] + 1));
	set_click_region(2, ((unsigned char)p4[2] + 22), ((unsigned char)p4[3] + 1), ((unsigned char)p4[2] + 22), ((unsigned char)p4[3] + 1));
	set_click_region(3, ((unsigned char)p4[2] + 23), ((unsigned char)p4[3] + 1), ((unsigned char)p4[2] + 23), ((unsigned char)p4[3] + 1));
	set_click_region(4, ((unsigned char)p4[2] + 13), ((unsigned char)p4[3] + 2), ((unsigned char)p4[2] + 13), ((unsigned char)p4[3] + 2));
	set_click_region(5, 255, 0, 0, 0);
	set_cursor(p6, 15, (l4 + 3));
	put_char(p6, 100, 4);
Le075:
	set_cursor(p4, 7, 2);
	print_message((l26 > 0 ? 608 : 609), p4, 18);
	l28 = (l26 > 0 ? 13 : 18);
	set_click_region(4, ((unsigned char)p4[2] + l28), ((unsigned char)p4[3] + 2), ((unsigned char)p4[2] + l28), ((unsigned char)p4[3] + 2));
	l2 = get_menu_input(21822, 13720);
	if (menu_clicked != 1) goto Le132;
	switch (l2) {
case 0:
	l2 = 1;
	goto Le132;
case 1:
	l2 = 3;
	goto Le132;
case 2:
	l2 = 2;
	goto Le132;
case 3:
	l2 = 4;
	goto Le132;
case 4:
	l2 = 5;
	goto Le132;
	}
Le132:
	switch (l2) {
case 1:
	if (l24[l4] <= 0) goto Le1b2;
	pc_skills[((432 * p8) + *(int *)(p12 + (l4 << 1)))]--;
#asm
	db 08bh,0deh,003h,0ddh,0ffh,04fh,0e8h
#endasm
	l26++;
	play_sound(1);
	print_number_col16(p6, (l4 + 3), (unsigned char)pc_skills[((432 * p8) + *(int *)(p12 + (l4 << 1)))]);
	print_number_col16(p6, 14, l26);
	goto Le1ba;
Le1b2:
	play_sound(0);
Le1ba:
	goto Le31b;
case 2:
	set_cursor(p6, 15, (l4 + 3));
	put_char(p6, 32, 7);
	if (l4 > 0) {
	l4--;
	} else {
	l4 = (p14 - 1);
	}
	set_cursor(p6, 15, (l4 + 3));
	put_char(p6, 100, 4);
	goto Le31b;
case 3:
	if (((unsigned)pc_skills[((432 * p8) + *(int *)(p12 + (l4 << 1)))] >= 100) || (l26 <= 0)) goto Le294;
	pc_skills[((432 * p8) + *(int *)(p12 + (l4 << 1)))]++;
#asm
	db 08bh,0deh,003h,0ddh,0ffh,047h,0e8h
#endasm
	l26--;
	play_sound(1);
	print_number_col16(p6, (l4 + 3), (unsigned char)pc_skills[((432 * p8) + *(int *)(p12 + (l4 << 1)))]);
	print_number_col16(p6, 14, l26);
	goto Le29c;
Le294:
	play_sound(0);
Le29c:
	goto Le31b;
case 4:
	set_cursor(p6, 15, (l4 + 3));
	put_char(p6, 32, 7);
	if ((l4 + 1) < p14) {
	l4++;
	} else {
	l4 = 0;
	}
	set_cursor(p6, 15, (l4 + 3));
	put_char(p6, 100, 4);
	goto Le31b;
	}
Le31b:
	if (l2 != 5) goto Le075;
	set_cursor(p6, 15, (l4 + 3));
	put_char(p6, 32, 7);
	pc_skill_points[(432 * p8)] = *(char *)&l26;
}
