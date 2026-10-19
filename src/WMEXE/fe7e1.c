extern char g5141[];
extern char g514e[];
extern char g5155[];
extern char g5156[];
extern char g5165[];
extern char g5166[];
extern char g5167[];
extern char g516d[];
extern char g516e[];
extern char g5176[];
extern int g52f8;
fe7e1(p4, p6)
{
	if (p6 == 2) goto Le802;
	if (p6 >= 5) goto Le802;
	if (g5141[(p4 * 3)] != 1) goto Le840;
Le802:
	g5165[p4] = 0;
	g5166[p4] = 0;
	g5167[p4] = 0;
	g5155[p4] = 0;
	g516d[p4] = 0;
	g514e[p4] = 0;
	g5156[p4] = 0;
	g516e[p4] = 0;
	g5176[p4] = 0;
	if ((p4 + 3) >= g52f8) goto Le840;
	g52f8 = (p4 + 3);
Le840:
	;
}
