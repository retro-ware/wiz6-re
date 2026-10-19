extern char g0092[];
extern char g019d[];
extern int g435c;
extern int monster_groups[];
extern int view_pos_group[];
fc546(p4, p6)
{
	int l2;
	int l4;
	int l6;
	l2 = 0;
Lc552:
	l4 = 0;
Lc557:
	if (*(int *)((char *)view_pos_group + ((l2 * 10) + ((unsigned char)g0092[(((g435c % 6) * 5) + l4)] << 1))) != p4) goto Lc60f;
	l6 = 0;
	goto Lc5f9;
Lc59e:
	if (((l2 * 10) + (unsigned char)g0092[(((g435c % 6) * 5) + l4)]) != ((char *)monster_groups[p4] + (44 * l6))[42]) goto Lc5f6;
	return l6;
Lc5f6:
	l6++;
Lc5f9:
	if ((unsigned char)g019d[monster_groups[p4]] > l6) goto Lc59e;
Lc60f:
	l4++;
	if (l4 < 5) goto Lc557;
	l2++;
	if (l2 < 2) goto Lc552;
	l6 = 0;
	goto Lc653;
Lc632:
	if ((unsigned)((char *)monster_groups[p4] + (44 * l6))[34] >= 3) goto Lc650;
	return l6;
Lc650:
	l6++;
Lc653:
	if ((unsigned char)g019d[monster_groups[p4]] > l6) goto Lc632;
	return p6;
}
