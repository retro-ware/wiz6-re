extern char g019d[];
extern int g43b4;
extern int monster_group_count;
f861e(p4, p6, p8, p10, p12, p14)
{
	int l2;
	if ((p4 <= 0) || (p4 >= 6)) goto L8661;
	for (l2 = 1; l2 <= monster_group_count; l2++) {
	f8149(l2, -10, p6, p8, p10, p12, p14);
	}
	goto L86a6;
L8661:
	f8149(0, -10, p6, p8, p10, p12, p14);
	if ((unsigned)g019d[g43b4] <= 0) goto L86a6;
	f8149(6, -10, p6, p8, p10, p12, p14);
L86a6:
	;
}
