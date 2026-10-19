f5fa1(p4, p6, p8, p10)
char *p10;
{
	int l2;
	l2 = *(int *)(p10 + (p6 << 1));
	*(int *)(p10 + (p6 << 1)) = *(int *)(p10 + (p8 << 1));
	*(int *)(p10 + (p8 << 1)) = l2;
	set_cursor(p4, (((p6 % 2) * 9) + 2), ((p6 / 2) + 1));
	print_string_hi(p4, ((*(int *)(p10 + (p6 << 1)) * 432) + 17384), 3);
	set_cursor(p4, (((p8 % 2) * 9) + 2), ((p8 / 2) + 1));
	print_string_hi(p4, ((*(int *)(p10 + (p8 << 1)) * 432) + 17384), 3);
}
