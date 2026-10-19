extern int g51d6[];
extern int g51d8[];
extern int g51e2[];
extern int g51e4[];
extern int g525a[];
extern int g525c[];
extern int g5266;
extern int g5268[];
extern int g526a[];
extern int g5274[];
extern int g5276[];
f88d2(p4)
{
	int l2;
	g5266--;
	l2 = p4;
	goto L8945;
L88e4:
	g51d6[l2] = g51d8[l2];
	strcpy(((l2 * 18) + 20974), ((l2 * 18) + 20992));
	g51e2[l2] = g51e4[l2];
	g5268[l2] = g526a[l2];
	g525a[l2] = g525c[l2];
	g5274[l2] = g5276[l2];
	l2++;
L8945:
	if (l2 < g5266) goto L88e4;
}
