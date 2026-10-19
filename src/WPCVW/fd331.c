unhighlight_item_row(p4, p6, p8, p10)
{
	if (p10) goto Ld368;
	set_cursor(p4, 22, (p6 + 9));
	print_string(p4, ((p6 << 4) + 21982), p8);
	goto Ld395;
Ld368:
	set_cursor(p4, 2, (p6 + 3));
	print_string(p4, ((p6 << 4) + 22162), 9);
Ld395:
	;
}
