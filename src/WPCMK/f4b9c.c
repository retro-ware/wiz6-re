extern int sheet_win;
print_status_centered(p4)
{
	char x0[38];
	int l40;
	clear_status_line();
	get_message(p4, &l40);
	set_cursor(sheet_win, (30 - ((strlen(&l40) + 1) / 2)), 5);
	print_string_hi(sheet_win, &l40, 3);
}
