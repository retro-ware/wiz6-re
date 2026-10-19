extern char *sheet_win;
clear_status_line()
{
	set_cursor(sheet_win, 21, 5);
L4b7f:
	put_char_hi(sheet_win, 32, 3);
	if ((unsigned)sheet_win[6] < 39) goto L4b7f;
}
