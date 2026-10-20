extern int group_monster_rec[];
f7af7(p4, p6, p8, p10)
{
	int l2;
	if ((l2 = (int)(((long)p6 * ((unsigned char)((char *)group_monster_rec[p4] + p8)[148] - p10)) / 100L)) < 0) {
	l2 = 0;
	}
	if (l2 > p6) {
	l2 = p6;
	}
	return (p6 - random((l2 + 1)));
}
