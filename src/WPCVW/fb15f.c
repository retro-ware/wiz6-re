print_msg_at2(p4, p6, p8, p10, p12)
{
	char x0[78];
	int l80;
	get_message(p4, &l80);
	set_cursor(p6, p8, p10);
	print_string(p6, &l80, p12);
}
