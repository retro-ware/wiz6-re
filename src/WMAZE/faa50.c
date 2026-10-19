extern char *g522a;
print_member_message(p4, p6, p8, p10, p12, p14, p16, p18)
char *p6;
char *p8;
char *p10;
{
	int l2;
	clear_window(g522a, 0);
	refresh_all_windows();
	l2 = ((((*p6 ? 1 : 0) + (*p8 ? 1 : 0)) + (*p10 ? 1 : 0)) + 1);
	set_cursor(g522a, (20 - (((((strlen(((432 * p4) + 17384)) + strlen(p6)) + strlen(p8)) + strlen(p10)) + l2) / 2)), 1);
	print_string(g522a, ((432 * p4) + 17384), p12);
	g522a[6]++;
	if (!*p6) goto Lab2e;
	print_string(g522a, p6, p14);
	g522a[6]++;
Lab2e:
	if (!*p8) goto Lab4b;
	print_string(g522a, p8, p16);
	g522a[6]++;
Lab4b:
	if (!*p10) goto Lab68;
	print_string(g522a, p10, p18);
	g522a[6]++;
Lab68:
	;
}
