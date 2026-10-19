extern int g525a[];
draw_loot_line(p4, p6)
{
	set_cursor(p4, 1, p6);
	print_string_hi(p4, ((p6 * 18) + 20974), 3);
	set_cursor(p4, 18, p6);
	put_char_hi(p4, (unsigned char)((g525a[p6] + 1)), 4);
}
