extern char g019d[];
extern int g43a8[];
f83ab(p4, p6)
char *p4;
{
	int l2;
	int l4;
	register int rsi;
	l4 = 0;
	l2 = 0;
	goto L841d;
L83be:
	rsi = (44 * l2);
	if ((*(int *)(((char *)g43a8[p6] + rsi) + 4) - *(int *)(((char *)g43a8[p6] + rsi) + 2)) <= l4) goto L841a;
	if (f09e2(2)) goto L841a;
	p4[31] = *(char *)&p6;
	p4[32] = *(char *)&l2;
	rsi = (44 * l2);
	l4 = (*(int *)(((char *)g43a8[p6] + rsi) + 4) - *(int *)(((char *)g43a8[p6] + rsi) + 2));
L841a:
	l2++;
L841d:
	if ((unsigned char)g019d[g43a8[p6]] > l2) goto L83be;
	return l4;
}
