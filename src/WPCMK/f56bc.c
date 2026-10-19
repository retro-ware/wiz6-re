#asm
	extrn play_sound_:near
	extrn print_skill_value_:near
#endasm
extern char char_skills[];
extern char skill_points_left;
extern int menu_clicked;
distribute_skill_points(win, cursor_win, page, skills, count)
char *win;
char *skills;
{
	int key;
	int row;
	int added[10];
	int points;
	int l28;
	register int rsi;
	points = (unsigned char)skill_points_left;
	fill_window(win, 32, 3, 0);
	refresh_window(win);
	set_cursor(win, 7, 1);
	print_message(610, win, 18);
	set_cursor(win, 2, 2);
	print_message(606, win, 18);
	win[6] += 3;
	print_message(607, win, 18);
	row = 0;
L5745:
	added[row] = 0;
	row++;
	if (row < 10) goto L5745;
	row = 0;
	set_click_region(0, ((unsigned char)win[2] + 2), ((unsigned char)win[3] + 2), ((unsigned char)win[2] + 2), ((unsigned char)win[3] + 2));
	set_click_region(1, ((unsigned char)win[2] + 3), ((unsigned char)win[3] + 2), ((unsigned char)win[2] + 3), ((unsigned char)win[3] + 2));
	set_click_region(2, ((unsigned char)win[2] + 22), ((unsigned char)win[3] + 2), ((unsigned char)win[2] + 22), ((unsigned char)win[3] + 2));
	set_click_region(3, ((unsigned char)win[2] + 23), ((unsigned char)win[3] + 2), ((unsigned char)win[2] + 23), ((unsigned char)win[3] + 2));
	set_click_region(4, ((unsigned char)win[2] + 13), ((unsigned char)win[3] + 3), ((unsigned char)win[2] + 13), ((unsigned char)win[3] + 3));
	set_click_region(5, 255, 0, 0, 0);
	set_cursor(cursor_win, 15, (row + 3));
	put_char(cursor_win, 100, 4);
L5887:
	set_cursor(win, 7, 3);
	print_message((points > 0 ? 608 : 609), win, 18);
	l28 = (points > 0 ? 13 : 18);
	set_click_region(4, ((unsigned char)win[2] + l28), ((unsigned char)win[3] + 3), ((unsigned char)win[2] + l28), ((unsigned char)win[3] + 3));
	key = get_menu_input(21534, 13720);
	if (menu_clicked != 1) goto L5946;
#asm
	db 0ebh,02dh
#endasm
	key = 1;
	goto L5946;
	key = 3;
#asm
	db 0ebh,02ch
#endasm
	key = 2;
#asm
	db 0ebh,025h
#endasm
	key = 4;
#asm
	db 0ebh,01eh
#endasm
	key = 5;
#asm
	db 0ebh,017h,00ch,059h,013h,059h,01ah,059h,021h,059h,028h,059h
l5939:
	db 03dh,005h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,02fh,059h
#endasm
L5946:
	switch (key) {
case 1:
	if (added[row] <= 0) goto L59ad;
	rsi = (row << 1);
	char_skills[*(int *)(skills + rsi)]--;
#asm
	db 08bh,0d8h,003h,0ddh,0ffh,04fh,0e8h
#endasm
	points++;
#asm
	db 0b8h,001h,000h,050h
	call play_sound_
	db 059h,08bh,046h,0fch,0d1h,0e0h,08bh,0f0h,08bh,05eh,00ah,08bh,018h,08ah,087h,0a4h
	db 055h,02ah,0e4h,050h,08bh,046h,0fch,040h,040h,040h,050h,0ffh,076h,006h
	call print_skill_value_
	db 083h,0c4h,006h
#endasm
	print_skill_value(cursor_win, 14, points);
	goto L59b5;
L59ad:
	play_sound(0);
L59b5:
	goto L5b02;
case 2:
	set_cursor(cursor_win, 15, (row + 3));
	put_char(cursor_win, 32, 7);
	if (row <= 0) goto L59e8;
	row--;
	goto L59ef;
L59e8:
	row = (count - 1);
L59ef:
	set_cursor(cursor_win, 15, (row + 3));
	put_char(cursor_win, 100, 4);
	goto L5b02;
case 3:
	;
#asm
l5a17:
	db 08bh,046h,0fch,0d1h,0e0h,08bh,0f0h,08bh,05eh,00ah,08bh,018h,080h,0bfh,0a4h,055h
	db 064h,073h,051h
#endasm
	if (points <= 0) goto L5a7b;
#asm
	db 0feh,087h,0a4h,055h,08bh,0d8h,003h,0ddh,0ffh,047h,0e8h
#endasm
	points--;
#asm
	db 0b8h,001h,000h,050h
	call play_sound_
	db 059h,08bh,046h,0fch,0d1h,0e0h,08bh,0f0h,08bh,05eh,00ah,08bh,018h,08ah,087h,0a4h
	db 055h,02ah,0e4h,050h,08bh,046h,0fch,040h,040h,040h,050h,0ffh,076h,006h
	call print_skill_value_
	db 083h,0c4h,006h
#endasm
	print_skill_value(cursor_win, 14, points);
	goto L5a83;
L5a7b:
	play_sound(0);
L5a83:
	goto L5b02;
case 4:
	set_cursor(cursor_win, 15, (row + 3));
	put_char(cursor_win, 32, 7);
	if ((row + 1) >= count) goto L5ab9;
	row++;
	goto L5abe;
L5ab9:
	row = 0;
L5abe:
	set_cursor(cursor_win, 15, (row + 3));
	put_char(cursor_win, 100, 4);
	goto L5b02;
	}
L5b02:
	if (key != 5) goto L5887;
	set_cursor(cursor_win, 15, (row + 3));
	put_char(cursor_win, 32, 7);
	skill_points_left = *(char *)&points;
}
