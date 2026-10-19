extern int g50fe[];
extern int g5132[];
extern int g5178;
extern int g517a[];
f581d(p4, p6)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	l2 = -1;
	l4 = 1;
	l6 = 2;
	if (*(int *)((char *)g50fe + ((p4 * 10) + (p6 << 1))) == -1) goto L5855;
	l2 = g5178;
L5855:
	if (*(int *)((char *)g5132 + ((p4 * 10) + (p6 << 1))) == -1) goto L5867;
	l2 = g5178;
	l6 = 0;
L5867:
	l8 = (p4 - 1);
	if (l8 < 0) goto L5898;
	if (*(int *)((char *)g50fe + ((l8 * 10) + (p6 << 1))) == -1) goto L5898;
	l2 = g5178;
	l4 = 0;
L5898:
	l10 = (p6 - 1);
	if (l10 < 0) goto L58c7;
	if (*(int *)((char *)g5132 + ((p4 * 10) + (l10 << 1))) == -1) goto L58c7;
	l2 = g5178;
L58c7:
	if (l2 == -1) goto L58f4;
	*(int *)((char *)g517a + ((p4 * 10) + (p6 << 1))) = ((l2 + l4) + l6);
L58f4:
	;
}
