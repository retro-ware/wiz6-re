extern char g513e[];
extern char g514b[];
extern char g515c[];
f88f9(p4, p6)
{
	if (p6 == 2) goto L891a;
	if (p6 >= 5) goto L891a;
	if (g513e[(p4 * 3)] != 1) goto L8927;
L891a:
	g514b[p4] = 0;
	g515c[p4] = 0;
L8927:
	;
}
