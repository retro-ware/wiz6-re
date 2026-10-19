extern int party_picture_win;
print_combat_centered(p4, p6, p8)
{
	int l2;
	l2 = (20 - ((strlen(p4) + 1) / 2));
	if (l2 >= 0) goto L6ceb;
	l2 = 0;
L6ceb:
	set_cursor(party_picture_win, l2, p8);
	print_wrapped(p4, p6);
}
