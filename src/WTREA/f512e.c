print_option_cell(p4, p6, p8, p10, p12, p14, p16)
{
	set_cursor(p4, (((p6 / p10) * p8) + p12), ((p6 % p10) + p14));
	print_string_hi(p4, p16, 3);
}
