f5488(p4)
char *p4;
{
	char x0[4];
	f53e5();
	defer_window_draw(p4);
	clear_window(p4, 1);
	set_cursor(p4, 0, 0);
	put_char(p4, 49, 6);
	p4[6]++;
	print_string(p4, 20806, 14);
	set_cursor(p4, 19, 0);
	put_char(p4, 49, 9);
	resume_window_draw(p4);
}
