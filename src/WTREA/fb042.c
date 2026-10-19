extern char g52a9[];
extern char g52d4[];
extern char g52dd[];
extern char g52e6[];
fb042(p4, p6)
{
	if (p6) goto Lb05d;
	if (g52a9[(p4 * 3)] != 1) goto Lb06f;
Lb05d:
	g52d4[p4] = 0;
	g52dd[p4] = 0;
	g52e6[p4] = 0;
Lb06f:
	;
}
