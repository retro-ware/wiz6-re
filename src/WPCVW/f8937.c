draw_member_name(p4, p6)
{
	set_cursor(p4, (((p6 % 2) * 9) + 22), ((p6 / 2) + 1));
	print_string_hi(p4, ((432 * p6) + 17384), 3);
}
