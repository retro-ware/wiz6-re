extern char g6acc[];
extern char g6aff[];
extern char g6b08[];
fed0d(p4, p6)
{
	if (((p6 != 2) && (p6 < 5)) && (g6acc[(p4 * 3)] != 1)) goto Led3b;
	g6aff[p4] = 0;
	g6b08[p4] = 0;
Led3b:
	;
}
