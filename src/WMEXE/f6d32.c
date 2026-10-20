extern char *party_picture_win;
print_combat_line(p4, p6, p8, p10, p12, p14)
char *p4;
char *p6;
char *p8;
{
	int l2;
	int l4;
	l4 = (((*p4 ? 1 : 0) + (*p6 ? 1 : 0)) + (*p8 ? 1 : 0));
	if ((l2 = (20 - ((((strlen(p4) + strlen(p6)) + strlen(p8)) + l4) / 2))) < 0) {
	l2 = 0;
	}
	set_cursor(party_picture_win, l2, (unsigned char)party_picture_win[7]);
	if (*p4) {
	print_wrapped(p4, p10);
	}
	if (*p6) {
	print_wrapped(p6, p12);
	}
	if (*p8) {
	print_wrapped(p8, p14);
	}
}
