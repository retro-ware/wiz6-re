extern char *sheet_win;
clear_status_line()
{
	set_cursor(sheet_win, 21, 5);
	do {
	put_char_hi(sheet_win, 32, 3);
	} while ((unsigned)sheet_win[6] < 39);
}
