extern char g50a2[];
extern char g50dd[];
hide_right_center(p4, p6)
{
	if (((p6 != 2) && (p6 < 5)) && (g50a2[(p4 * 3)] != 1)) goto La103;
	g50dd[p4] = 0;
La103:
	;
}
