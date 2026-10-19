extern char g50a1[];
extern char g50cc[];
extern char g50d5[];
extern char g50de[];
hide_behind_right(p4, p6)
{
	if (p6) goto La033;
	if (g50a1[(p4 * 3)] != 1) goto La045;
La033:
	g50cc[p4] = 0;
	g50d5[p4] = 0;
	g50de[p4] = 0;
La045:
	;
}
