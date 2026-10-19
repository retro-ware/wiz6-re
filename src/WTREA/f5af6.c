extern char *party_picture_win;
print_member_message(p4, p6, p8, p10, p12, p14, p16, p18)
char *p6;
char *p8;
char *p10;
{
	int l2;
	clear_window(party_picture_win, 1);
	l2 = ((((*p6 ? 1 : 0) + (*p8 ? 1 : 0)) + (*p10 ? 1 : 0)) + 1);
	set_cursor(party_picture_win, (20 - (((((strlen(((432 * p4) + 17384)) + strlen(p6)) + strlen(p8)) + strlen(p10)) + l2) / 2)), 1);
	print_string(party_picture_win, ((432 * p4) + 17384), p12);
	party_picture_win[6]++;
	if (!*p6) goto L5bd1;
	print_string(party_picture_win, p6, p14);
	party_picture_win[6]++;
L5bd1:
	if (!*p8) goto L5bee;
	print_string(party_picture_win, p8, p16);
	party_picture_win[6]++;
L5bee:
	if (!*p10) goto L5c0b;
	print_string(party_picture_win, p10, p18);
	party_picture_win[6]++;
L5c0b:
	;
}
