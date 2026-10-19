extern char g6aca[];
extern char g6ad7[];
extern char g6ae8[];
fecdb(p4, p6)
{
	if (p6 == 2) goto Lecfc;
	if (p6 >= 5) goto Lecfc;
	if (g6aca[(p4 * 3)] != 1) goto Led09;
Lecfc:
	g6ad7[p4] = 0;
	g6ae8[p4] = 0;
Led09:
	;
}
