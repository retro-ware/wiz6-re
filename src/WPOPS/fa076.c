extern char g50a0[];
extern char g50ad[];
extern char g50be[];
hide_left_far(p4, p6)
{
	if (((p6 == 2) || (p6 >= 5)) || (g50a0[(p4 * 3)] == 1)) {
	g50ad[p4] = 0;
	g50be[p4] = 0;
	}
}
