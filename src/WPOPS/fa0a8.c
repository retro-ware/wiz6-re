extern char g50a2[];
extern char g50d5[];
extern char g50de[];
fa0a8(p4, p6)
{
	if (p6 == 2) goto La0c9;
	if (p6 >= 5) goto La0c9;
	if (g50a2[(p4 * 3)] != 1) goto La0d6;
La0c9:
	g50d5[p4] = 0;
	g50de[p4] = 0;
La0d6:
	;
}
