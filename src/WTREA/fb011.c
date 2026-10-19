extern char g52a9[];
extern char g52b5[];
extern char g52bc[];
extern char g52c6[];
fb011(p4, p6)
{
	if (p6) goto Lb02c;
	if (g52a9[(p4 * 3)] != 1) goto Lb03e;
Lb02c:
	g52bc[p4] = 0;
	g52b5[p4] = 0;
	g52c6[p4] = 0;
Lb03e:
	;
}
