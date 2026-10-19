extern char g00cc[];
extern char g442c[];
extern char g442e[];
extern int g442a[];
f6a0e(p4, p6)
{
	int l2;
	l2 = 1;
	if (g00cc[(unsigned char)g442c[((432 * p6) + (p4 << 3))]] != 1) goto L6a58;
	l2 = (unsigned char)g442e[((432 * p6) + (p4 << 3))];
	if (l2 >= 1) goto L6a58;
	l2 = 1;
L6a58:
	return (*(int *)((char *)g442a + ((432 * p6) + (p4 << 3))) * l2);
}
