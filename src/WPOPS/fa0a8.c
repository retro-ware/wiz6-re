extern char g50a2[];
extern char g50d5[];
extern char g50de[];
hide_right_far(p4, p6)
{
	if (((p6 == 2) || (p6 >= 5)) || (g50a2[(p4 * 3)] == 1)) {
	g50d5[p4] = 0;
	g50de[p4] = 0;
	}
}
