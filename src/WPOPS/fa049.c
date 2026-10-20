extern char g50a0[];
extern char g50bd[];
hide_left_center(p4, p6)
{
	if (((p6 == 2) || (p6 >= 5)) || (g50a0[(p4 * 3)] == 1)) {
	g50bd[p4] = 0;
	}
}
