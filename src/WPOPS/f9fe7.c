extern char g50a1[];
extern char g50ad[];
extern char g50b4[];
extern char g50be[];
hide_behind_left(p4, p6)
{
	if ((p6) || (g50a1[(p4 * 3)] == 1)) {
	g50b4[p4] = 0;
	g50ad[p4] = 0;
	g50be[p4] = 0;
	}
}
