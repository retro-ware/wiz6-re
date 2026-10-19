extern char char_class;
extern char char_race;
extern char char_sex;
extern int sheet_win;
draw_sex_race_class()
{
	char x0[8];
	int l10;
	print_str_at(sheet_win, 4, 1, 21616, 5);
	set_cursor(sheet_win, 13, 1);
	get_message(((unsigned char)char_sex + 140), &l10);
	put_char(sheet_win, (unsigned char)*(char *)&l10, 1);
	put_char(sheet_win, 45, 1);
	print_msg_color(((unsigned char)char_race + 100), sheet_win, 1);
	print_msg_at(((unsigned char)char_class + 120), sheet_win, 13, 2, 1);
}
