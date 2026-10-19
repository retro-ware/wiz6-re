print_msg_at(msg, win, x, y, color)
{
	char x0[78];
	int text;
	get_message(msg, &text);
	set_cursor(win, x, y);
	print_string(win, &text, color);
}
