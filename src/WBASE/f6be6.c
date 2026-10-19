/* Print member i's name in the member picker window. */
draw_member_name(win, i)
{
	set_cursor(win, (((i % 2) * 9) + 2), ((i / 2) + 1));
	print_string_hi(win, ((432 * i) + 17384), 3);
}
