#asm
	extrn print_string_:near
	extrn put_char_:near
#endasm
extern char *g438c;
extern char g019d[];
extern char g019e[];
extern int g43aa[];
extern int menu_clicked;
extern int monster_group_count;
extern int mouse_present;
select_monster_group(win, msg, range, sel)
char *win;
{
	char x0[78];
	int l80;
	char x80[78];
	int l160;
	char x160[8];
	int l170;
	int key;
	int count;
	if (monster_group_count != 1) goto L55e2;
	return 1;
L55e2:
	fill_window(win, 32, 3, 0);
	refresh_all_windows();
	get_message(3600, &l80);
	get_message(msg, &l160);
	replace_char_with_string(&l80, &l160, 36);
	key = (10 - ((strlen(&l80) + 1) / 2));
	set_cursor(win, key, 1);
	print_string_hi(win, &l80, 3);
	get_message(3606, &l170);
	set_cursor(win, 7, 3);
	print_string_hi(win, &l170, 3);
	count = 5;
	switch (range) {
case 0:
case 1:
	count = 2;
	goto L56ce;
case 2:
	count = 3;
	goto L56ce;
case 3:
	count = 5;
	goto L56ce;
	}
L56ce:
	count = (count > monster_group_count ? monster_group_count : count);
	for (key = 0; key < count; key++) {
	set_click_region(key, (unsigned char)g438c[2], ((unsigned char)g438c[3] + key), ((unsigned char)g438c[2] + 19), ((unsigned char)g438c[3] + key));
	}
	set_click_region(count, ((unsigned char)win[2] + 7), ((unsigned char)win[3] + 3), ((strlen(&l170) + (unsigned char)win[2]) + 6), ((unsigned char)win[3] + 3));
	set_click_region((count + 1), 255, 0, 0, 0);
L577e:
	if (mouse_present) goto L5888;
	if (sel != -1) goto L57b4;
	set_cursor(win, 7, 3);
	print_string(win, &l170, -7);
	goto L5888;
L57b4:
	set_cursor(g438c, 0, sel);
	put_char(g438c, (unsigned char)(((unsigned char)g019d[g43aa[sel]] + 48)), -7);
#asm
	db 0b8h,0f9h,0ffh,050h,0b8h,020h,000h,050h,0ffh,036h,08ch,043h
	call put_char_
	db 083h,0c4h,006h,0b8h,0f9h,0ffh,050h,08bh,046h,00ah,0d1h,0e0h,08bh,0d8h,08bh,09fh
	db 0aah,043h,080h,0bfh,09dh,001h,001h,075h,005h,0b8h,000h,000h,0ebh,003h
#endasm
L5817:
	;
#asm
l5817:
	db 0b8h,001h,000h
#endasm
L581a:
	;
#asm
l581a:
	db 0b9h,004h,000h,0d3h,0e0h,08bh,0c8h,051h,08ah,087h,09ch,001h,02ah,0e4h,0b9h,005h
	db 000h,0d3h,0e0h,059h,003h,0c8h,08bh,046h,00ah,0d1h,0e0h,08bh,0d8h,08bh,087h,0b8h
	db 043h,003h,0c1h,050h,0ffh,036h,08ch,043h
	call print_string_
	db 083h,0c4h,006h
#endasm
L5848:
	if ((unsigned)g438c[6] >= 19) goto L5863;
	put_char(g438c, 32, -7);
	goto L5848;
L5863:
	put_char(g438c, (unsigned char)(((unsigned char)g019e[g43aa[sel]] + 48)), -7);
L5888:
	key = get_combat_input(17270, 13720);
	if (menu_clicked != 1) goto L58bc;
	sel = (key < count ? key : -1);
	key = 5;
	goto L59d1;
L58bc:
	switch (key) {
case 1:
	if (sel == -1) goto L58dc;
	draw_monster_groups(g438c, 1);
	sel = -1;
L58dc:
	goto L59d1;
case 2:
	if (sel != -1) goto L590f;
	set_cursor(win, 7, 3);
	print_string_hi(win, &l170, 3);
	sel = 0;
	goto L592d;
L590f:
	draw_monster_groups(g438c, 1);
	if ((sel - 1) < 0) goto L5928;
	sel--;
	goto L592d;
L5928:
	sel = -1;
L592d:
	goto L59d1;
case 3:
	if (sel != -1) goto L595e;
	set_cursor(win, 7, 3);
	print_string_hi(win, &l170, 3);
	sel = 0;
L595e:
	goto L59d1;
case 4:
	if (sel != -1) goto L5990;
	set_cursor(win, 7, 3);
	print_string_hi(win, &l170, 3);
	sel = 0;
	goto L59b2;
L5990:
	draw_monster_groups(g438c, 1);
	if ((sel + 1) >= count) goto L59ad;
	sel++;
	goto L59b2;
L59ad:
	sel = -1;
L59b2:
	goto L59d1;
	}
L59d1:
	if (key != 5) goto L577e;
	if (sel != -1) goto L59e7;
	return -1;
L59e7:
	return (sel + 1);
}
