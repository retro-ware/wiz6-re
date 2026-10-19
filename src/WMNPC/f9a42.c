extern char pc_item_count[];
extern char pc_swag_count[];
extern int bottom_line_win;
extern int g5324;
extern int g5326[];
extern int menu_clicked;
/* List the inventory and swag of member p6 and let the player pick an item. */
npc_choose_member_item(p4, p6, p8, p10)
char *p4;
{
	int l2;
	char x2[6];
	int l10;
	char *l12;
	char x12[8];
	int l22;
	int l24;
	char x24[2];
	int l28;
	fill_window(p4, 32, 3, 0);
	l12 = create_window(20, 19, 20, 5, 20, -5, 0, 0);
	fill_window(l12, 32, 3, 0);
	f80d2(((432 * p6) + 17384), &l10);
	get_message(1508, 20948);
	replace_char_with_string(20948, &l10, 36);
	f541a(20948, 0);
	f0a42(bottom_line_win, 0);
	defer_window_draw(p4);
	set_cursor(p4, 2, 1);
	print_message(p8, p4, 18);
	get_message(2035, &l22);
	set_cursor(p4, 7, 3);
	print_string_hi(p4, &l22, 3);
	resume_window_draw(p4);
	f88c7(l12, 0);
	l28 = 0;
	g5324 = 0;
	l2 = 0;
	goto L9b84;
L9b66:
	f99e6(p6, l2);
	if (p10 != l2) goto L9b81;
	l28 = (g5324 - 1);
L9b81:
	l2++;
L9b84:
	if ((unsigned char)pc_item_count[(432 * p6)] > l2) goto L9b66;
	l2 = 0;
	goto L9bc3;
L9b9e:
	f99e6(p6, (l2 + 10));
	if ((l2 + 10) != p10) goto L9bc0;
	l28 = (g5324 - 1);
L9bc0:
	l2++;
L9bc3:
	if ((unsigned char)pc_swag_count[(432 * p6)] > l2) goto L9b9e;
	if ((p10 = l28) < g5324) goto L9be9;
	p10 = (g5324 - 1);
L9be9:
	refresh_all_windows();
	l24 = 0;
	set_click_region(0, ((unsigned char)l12[2] + 2), ((unsigned char)l12[3] + 2), ((unsigned char)l12[2] + 16), ((unsigned char)l12[3] + 2));
	set_click_region(1, ((unsigned char)l12[2] + 1), (unsigned char)l12[3], ((unsigned char)l12[2] + 1), (unsigned char)l12[3]);
	set_click_region(2, ((unsigned char)l12[2] + 1), ((unsigned char)l12[3] + 4), ((unsigned char)l12[2] + 1), ((unsigned char)l12[3] + 4));
	set_click_region(3, ((unsigned char)p4[2] + 7), ((unsigned char)p4[3] + 3), ((strlen(&l22) + (unsigned char)p4[2]) + 6), ((unsigned char)p4[3] + 3));
	set_click_region(4, 255, 0, 0, 0);
L9cc6:
	if (l24 != 1) goto L9d03;
	set_cursor(p4, 7, 3);
	print_string(p4, &l22, -3);
	f9827(l12, p6, p10, 0);
	goto L9d38;
L9d03:
	set_cursor(p4, 7, 3);
	print_string_hi(p4, &l22, 3);
	f9827(l12, p6, p10, 1);
L9d38:
	l2 = f5994(21098, 13720);
	if (menu_clicked != 1) goto L9d87;
	goto L9d73;
	l2 = 5;
#asm
	db 0ebh,02eh
#endasm
	l2 = 2;
#asm
	db 0ebh,027h
#endasm
	l2 = 4;
#asm
	db 0ebh,020h
#endasm
	l24 = 1;
	l2 = 5;
#asm
	db 0ebh,014h
#endasm
L9d73:
	;
#asm
l9d73:
	db 03dh,000h,000h,074h,0dah,03dh,001h,000h,074h,0dch,03dh,002h,000h,074h,0deh,03dh
	db 003h,000h,074h,0e0h
#endasm
L9d87:
	switch (l2) {
case 1:
	if (l24 == 1) goto L9d97;
	l24 = 1;
L9d97:
	goto L9dee;
case 2:
	if (l24 != 1) goto L9da6;
	l24 = 0;
	goto L9daf;
L9da6:
	if (p10 <= 0) goto L9daf;
	p10--;
L9daf:
	goto L9dee;
case 3:
	if (l24 != 1) goto L9dbc;
	l24 = 0;
L9dbc:
	goto L9dee;
case 4:
	if (l24 != 1) goto L9dcb;
	l24 = 0;
	goto L9dd8;
L9dcb:
	if ((p10 + 1) >= g5324) goto L9dd8;
	p10++;
L9dd8:
	goto L9dee;
	}
L9dee:
	if (l2 != 5) goto L9cc6;
	destroy_window(l12, 0);
	if (l24 != 1) goto L9e11;
	return -1;
L9e11:
	return g5326[p10];
}
