extern char g5142[];
extern char g5175[];
extern char g517e[];
fe905(p4, p6)
{
	if (p6 == 2) goto Le926;
	if (p6 >= 5) goto Le926;
	if (g5142[(p4 * 3)] != 1) goto Le933;
Le926:
	g5175[p4] = 0;
	g517e[p4] = 0;
Le933:
	;
}
