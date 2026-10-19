extern char g50a0[];
extern char g50ad[];
extern char g50be[];
fa076(p4, p6)
{
	if (p6 == 2) goto La097;
	if (p6 >= 5) goto La097;
	if (g50a0[(p4 * 3)] != 1) goto La0a4;
La097:
	g50ad[p4] = 0;
	g50be[p4] = 0;
La0a4:
	;
}
