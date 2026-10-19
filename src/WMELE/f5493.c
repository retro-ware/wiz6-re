extern char g451c[];
extern int g440c[];
f5493(p4, p6, p8)
{
	if ((unsigned)g451c[((432 * p4) + p6)] >= 100) goto L54d1;
	if ((f09e2((unsigned char)g451c[((432 * p4) + p6)]) - (*(int *)((char *)g440c + (432 * p4)) * p8)) > 0) goto L54d1;
	g451c[((432 * p4) + p6)]++;
L54d1:
	;
}
