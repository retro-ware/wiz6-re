extern char g52aa[];
extern char g52dd[];
extern char g52e6[];
fb0d2(p4, p6)
{
	if (p6 == 2) goto Lb0f3;
	if (p6 >= 5) goto Lb0f3;
	if (g52aa[(p4 * 3)] != 1) goto Lb100;
Lb0f3:
	g52dd[p4] = 0;
	g52e6[p4] = 0;
Lb100:
	;
}
