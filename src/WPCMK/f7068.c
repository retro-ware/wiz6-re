extern char *sheet_win;
extern char char_stats[];
extern int bonus_points;
extern int char_hp;
extern int char_hp_max;
extern int char_stamina;
extern int char_stamina_max;
draw_stats()
{
	register int rsi;
	for (rsi = 0; rsi < 8; rsi++) {
	print_msg_at((rsi + 204), sheet_win, 1, (rsi + 5), 5);
	sheet_win[6]++;
	print_int(sheet_win, (unsigned char)char_stats[rsi], 2, 1);
	}
	if (bonus_points >= 0) {
	set_cursor(sheet_win, 10, 11);
	print_message(1107, sheet_win, -7);
	sheet_win[6]++;
	print_int(sheet_win, bonus_points, 2, 7);
	}
	print_msg_at(212, sheet_win, 10, 5, 4);
	sheet_win[6]++;
	print_int(sheet_win, char_hp, 4, 6);
	put_char(sheet_win, 47, 8);
	set_cursor(sheet_win, 14, 6);
	print_int(sheet_win, char_hp_max, 4, 6);
	print_msg_at(213, sheet_win, 10, 8, 4);
	sheet_win[6]++;
#asm
	db 0feh,047h,006h
#endasm
	print_int(sheet_win, char_stamina, 3, 6);
	put_char(sheet_win, 47, 8);
	set_cursor(sheet_win, 15, 9);
	print_int(sheet_win, char_stamina_max, 3, 6);
}
