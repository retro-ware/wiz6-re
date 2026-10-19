extern int sheet_win;
clear_name_rows()
{
	int l2;
	l2 = 0;
L5282:
	set_cursor(sheet_win, 1, (l2 + 1));
	print_string_hi(sheet_win, 20473, 3);
	l2++;
	if (l2 < 3) goto L5282;
}
