extern char g5140[];
extern char g515d[];
fe8a6(p4, p6)
{
	if (p6 == 2) goto Le8c7;
	if (p6 >= 5) goto Le8c7;
	if (g5140[(p4 * 3)] != 1) goto Le8cf;
Le8c7:
	g515d[p4] = 0;
Le8cf:
	;
}
