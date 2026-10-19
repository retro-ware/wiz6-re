extern char g451c[];
extern int g440c[];
f77d4(p4, p6, p8)
{
	if ((unsigned)g451c[((432 * p4) + p6)] >= 100) goto L7812;
	if ((f09e2((unsigned char)g451c[((432 * p4) + p6)]) - (*(int *)((char *)g440c + (432 * p4)) * p8)) > 0) goto L7812;
	g451c[((432 * p4) + p6)]++;
L7812:
	;
}
