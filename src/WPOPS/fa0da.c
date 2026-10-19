extern char g50a2[];
extern char g50dd[];
hide_right_center(p4, p6)
{
	if (p6 == 2) goto La0fb;
	if (p6 >= 5) goto La0fb;
	if (g50a2[(p4 * 3)] != 1) goto La103;
La0fb:
	g50dd[p4] = 0;
La103:
	;
}
