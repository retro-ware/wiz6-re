extern int g5020;
extern int g5022;
extern int g5028;
extern int g502a;
extern int g50c8;
extern int party_picture_win;
show_trap_effect(p4, p6)
{
	char x0[78];
	int l80;
	g5020 = 0;
	if (p6 < 0) goto L5f03;
	g5022 = 0;
	g502a = p4;
	g5028 = p6;
L5f03:
	get_message(5227, &l80);
	show_centered_line(party_picture_win, g50c8, &l80, 0, 7);
	show_centered_line(party_picture_win, g50c8, 20682, 0, 1);
}
