extern char g5140[];
extern char g514d[];
extern char g515e[];
fe8d3(p4, p6)
{
	if (p6 == 2) goto Le8f4;
	if (p6 >= 5) goto Le8f4;
	if (g5140[(p4 * 3)] != 1) goto Le901;
Le8f4:
	g514d[p4] = 0;
	g515e[p4] = 0;
Le901:
	;
}
