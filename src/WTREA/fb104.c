extern char g52aa[];
extern char g52e5[];
fb104(p4, p6)
{
	if (p6 == 2) goto Lb125;
	if (p6 >= 5) goto Lb125;
	if (g52aa[(p4 * 3)] != 1) goto Lb12d;
Lb125:
	g52e5[p4] = 0;
Lb12d:
	;
}
