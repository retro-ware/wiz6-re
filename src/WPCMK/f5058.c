print_msg_color(msg, win, color)
{
	char x0[78];
	int text;
	get_message(msg, &text);
	print_string(win, &text, color);
}
