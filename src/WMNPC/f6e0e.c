extern int g0002;
extern int g5264;
extern int g5266;
extern int g5268;
f6e0e(p4)
char *p4;
{
	int l2;
L6e14:
	if (*p4 != 33) goto L6e25;
	p4++;
	g5266++;
	goto L6e14;
L6e25:
	l2 = (19 - ((strlen(p4) + 1) / 2));
	if (*p4 != 94) goto L6e4e;
	p4++;
	l2 = g5268;
L6e4e:
	f030b(g5264, l2, g5266);
	g5268 = l2;
	g5266++;
	f24e9(g5264, p4, g0002);
}
