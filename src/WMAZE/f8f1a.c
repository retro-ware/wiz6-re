extern char g5068[];
extern char g509b[];
extern char g50a4[];
f8f1a(p4, p6)
{
	if (p6 == 2) goto L8f3b;
	if (p6 >= 5) goto L8f3b;
	if (g5068[(p4 * 3)] != 1) goto L8f48;
L8f3b:
	g509b[p4] = 0;
	g50a4[p4] = 0;
L8f48:
	;
}
