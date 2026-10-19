print_option_at(p4, p6, p8, p10)
{
	set_cursor(p4, (((p6 / 5) * 20) + 2), (p6 % 5));
	print_string(p4, p8, p10);
}
