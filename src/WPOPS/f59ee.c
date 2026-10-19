draw_member_name(win, member)
{
	set_cursor(win, (((member % 2) * 9) + 2), ((member / 2) + 1));
	print_string_hi(win, ((432 * member) + 17384), 3);
}
