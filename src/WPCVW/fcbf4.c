extern char g453a[];
add_skill_bonus(p4, p6, p8)
{
	int l2;
	l2 = ((unsigned char)g453a[((432 * p4) + p6)] + p8);
	l2 = (l2 >= 0 ? (l2 > 125 ? 125 : l2) : 0);
	g453a[((432 * p4) + p6)] = *(char *)&l2;
}
