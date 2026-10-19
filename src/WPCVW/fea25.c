extern char g451c[];
extern int g440c[];
fea25(p4, p6, p8, p10, p12)
{
	int l2;
	l2 = ((f09e2(p10) + (p6 / p8)) - (*(int *)((char *)g440c + (432 * p4)) / 3));
	if (l2 < 0) goto Lea69;
	if ((unsigned)g451c[((432 * p4) + p12)] <= 50) goto Lea6e;
Lea69:
	l2 = 0;
Lea6e:
	g451c[((432 * p4) + p12)] = (char)((unsigned char)g451c[((432 * p4) + p12)] + l2);
	return l2;
}
