extern char *prompt_win;
extern char char_stats[];
extern int bonus_points;
extern int menu_clicked;
extern int sheet_win;
/* Let the player distribute the remaining bonus points over the eight stats. */
distribute_bonus_points()
{
	int l2;
	int l4;
	int l20[8];
	fill_window(prompt_win, 32, 3, 0);
	refresh_window(prompt_win);
	set_cursor(prompt_win, 7, 1);
	print_message(1120, prompt_win, 18);
	set_cursor(prompt_win, 1, 2);
	print_message(1108, prompt_win, 18);
	prompt_win[6]++;
#asm
	db 0feh,047h,006h
#endasm
	print_message(1109, prompt_win, 18);
	setmem(l20, 16, 0);
	l4 = 0;
	set_cursor(sheet_win, 7, (l4 + 5));
	put_char(sheet_win, 98, 7);
	set_click_region(0, ((unsigned char)prompt_win[2] + 1), ((unsigned char)prompt_win[3] + 2), ((unsigned char)prompt_win[2] + 1), ((unsigned char)prompt_win[3] + 2));
	set_click_region(1, ((unsigned char)prompt_win[2] + 2), ((unsigned char)prompt_win[3] + 2), ((unsigned char)prompt_win[2] + 2), ((unsigned char)prompt_win[3] + 2));
	set_click_region(2, ((unsigned char)prompt_win[2] + 21), ((unsigned char)prompt_win[3] + 2), ((unsigned char)prompt_win[2] + 21), ((unsigned char)prompt_win[3] + 2));
	set_click_region(3, ((unsigned char)prompt_win[2] + 22), ((unsigned char)prompt_win[3] + 2), ((unsigned char)prompt_win[2] + 22), ((unsigned char)prompt_win[3] + 2));
	set_click_region(4, 255, 0, 0, 0);
L7afd:
	set_cursor(prompt_win, 12, 3);
	if (bonus_points) goto L7b70;
	print_message(1110, prompt_win, 18);
	set_click_region(4, ((unsigned char)prompt_win[2] + 18), ((unsigned char)prompt_win[3] + 3), ((unsigned char)prompt_win[2] + 18), ((unsigned char)prompt_win[3] + 3));
	set_click_region(5, 255, 0, 0, 0);
	goto L7b9f;
L7b70:
	if ((unsigned)prompt_win[6] >= 38) goto L7b8b;
	put_char_hi(prompt_win, 32, 3);
	goto L7b70;
L7b8b:
	set_click_region(4, 255, 0, 0, 0);
L7b9f:
	l2 = get_menu_input(21534, 13720);
	if (menu_clicked != 1) goto L7bf3;
	switch (l2) {
case 0:
	l2 = 1;
	goto L7bf3;
case 1:
	l2 = 3;
	goto L7bf3;
case 2:
	l2 = 2;
	goto L7bf3;
case 3:
	l2 = 4;
	goto L7bf3;
case 4:
	l2 = 5;
	goto L7bf3;
	}
L7bf3:
	switch (l2) {
case 1:
	if (l20[l4] <= 0) goto L7c27;
	char_stats[l4]--;
	l20[l4]--;
	bonus_points++;
	play_sound(1);
	draw_stats();
	goto L7c2f;
L7c27:
	play_sound(0);
L7c2f:
	goto L7d48;
case 2:
	set_cursor(sheet_win, 7, (l4 + 5));
	put_char(sheet_win, 32, 7);
	if (l4 <= 0) goto L7c64;
	l4--;
	goto L7c69;
L7c64:
	l4 = 6;
L7c69:
	set_cursor(sheet_win, 7, (l4 + 5));
	put_char(sheet_win, 98, 7);
	goto L7d48;
case 3:
	if (((unsigned)char_stats[l4] >= 18) || (bonus_points <= 0)) goto L7cc0;
	char_stats[l4]++;
	l20[l4]++;
	bonus_points--;
	play_sound(1);
	draw_stats();
	goto L7cc8;
L7cc0:
	play_sound(0);
L7cc8:
	goto L7d48;
case 4:
	set_cursor(sheet_win, 7, (l4 + 5));
	put_char(sheet_win, 32, 7);
	if (l4 >= 6) goto L7cfd;
	l4++;
	goto L7d02;
L7cfd:
	l4 = 0;
L7d02:
	set_cursor(sheet_win, 7, (l4 + 5));
	put_char(sheet_win, 98, 7);
	goto L7d48;
	}
L7d48:
	if ((l2 != 5) || (bonus_points <= 0)) goto L7d5d;
	play_sound(0);
L7d5d:
	if (l2 != 5) goto L7afd;
	if (bonus_points > 0) goto L7afd;
	set_cursor(sheet_win, 7, (l4 + 5));
	put_char(sheet_win, 32, 7);
}
