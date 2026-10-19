extern char g50a0[];
extern char g50bd[];
fa049(p4, p6)
{
	if (p6 == 2) goto La06a;
	if (p6 >= 5) goto La06a;
	if (g50a0[(p4 * 3)] != 1) goto La072;
La06a:
	g50bd[p4] = 0;
La072:
	;
}
