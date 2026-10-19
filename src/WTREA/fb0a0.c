extern char g52a8[];
extern char g52b5[];
extern char g52c6[];
fb0a0(p4, p6)
{
	if (p6 == 2) goto Lb0c1;
	if (p6 >= 5) goto Lb0c1;
	if (g52a8[(p4 * 3)] != 1) goto Lb0ce;
Lb0c1:
	g52b5[p4] = 0;
	g52c6[p4] = 0;
Lb0ce:
	;
}
