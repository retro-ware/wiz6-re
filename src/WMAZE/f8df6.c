extern char g5067[];
extern char g5074[];
extern char g507b[];
extern char g507c[];
extern char g508b[];
extern char g508c[];
extern char g508d[];
extern char g5093[];
extern char g5094[];
extern char g509c[];
extern int g521e;
f8df6(p4, p6)
{
	if (p6 == 2) goto L8e17;
	if (p6 >= 5) goto L8e17;
	if (g5067[(p4 * 3)] != 1) goto L8e55;
L8e17:
	g508b[p4] = 0;
	g508c[p4] = 0;
	g508d[p4] = 0;
	g507b[p4] = 0;
	g5093[p4] = 0;
	g5074[p4] = 0;
	g507c[p4] = 0;
	g5094[p4] = 0;
	g509c[p4] = 0;
	if ((p4 + 3) >= g521e) goto L8e55;
	g521e = (p4 + 3);
L8e55:
	;
}
