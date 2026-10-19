extern int g43ce;
extern int g51ac;
extern int g51ae;
f58f8(p4, p6, p8)
char p8;
{
	int l2;
	char l12[10];
	int l14;
	int l16;
	l2 = 0;
	goto L59b4;
L5906:
	l14 = ((g51ac << 3) + (p4 << 4));
	l16 = ((((g51ac << 3) + (p4 << 4)) + 16) - (((l2 + 1) % 2) * 6));
	l12[0] = (char)((l2 / 2) + (unsigned char)p8);
	l12[(0 + 1)] = 0;
	f3670(4, ((g51ac << 3) + (p4 << 4)), ((g51ae << 3) + (p6 << 4)), l14, l16, 0, 0, l12);
	l2++;
L59b4:
	if (l2 < g43ce) goto L5906;
}
