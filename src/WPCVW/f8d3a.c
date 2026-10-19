wait_key_or_click(p4)
{
	int l2;
	fill_window(p4, 32, 3, 0);
	refresh_window(p4);
	get_message(409, 22416);
	print_centered(p4, 22416, 2, 18);
	l2 = 1;
L8d84:
	if (!check_screen_click()) goto L8d90;
	l2 = 0;
L8d90:
	if (key_available(1) != 1) goto L8dae;
	if ((char)get_key(1) != 13) goto L8dae;
	l2 = 0;
L8dae:
	if (l2) goto L8d84;
	fill_window(p4, 32, 3, 0);
	refresh_window(p4);
}
