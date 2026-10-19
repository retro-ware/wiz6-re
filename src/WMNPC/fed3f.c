extern char g6acc[];
extern char g6b07[];
fed3f(p4, p6)
{
	if (p6 == 2) goto Led60;
	if (p6 >= 5) goto Led60;
	if (g6acc[(p4 * 3)] != 1) goto Led68;
Led60:
	g6b07[p4] = 0;
Led68:
	;
}
