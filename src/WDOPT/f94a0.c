extern char g5438[];
extern char g5445[];
extern char g5456[];
f94a0(p4, p6)
{
	if (p6 == 2) goto L94c1;
	if (p6 >= 5) goto L94c1;
	if (g5438[(p4 * 3)] != 1) goto L94ce;
L94c1:
	g5445[p4] = 0;
	g5456[p4] = 0;
L94ce:
	;
}
