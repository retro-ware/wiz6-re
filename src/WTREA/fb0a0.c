extern char g52a8[];
extern char g52b5[];
extern char g52c6[];
fb0a0(p4, p6)
{
	if (((p6 != 2) && (p6 < 5)) && (g52a8[(p4 * 3)] != 1)) goto Lb0ce;
	g52b5[p4] = 0;
	g52c6[p4] = 0;
Lb0ce:
	;
}
