extern char g52a8[];
extern char g52c5[];
fb073(p4, p6)
{
	if (p6 == 2) goto Lb094;
	if (p6 >= 5) goto Lb094;
	if (g52a8[(p4 * 3)] != 1) goto Lb09c;
Lb094:
	g52c5[p4] = 0;
Lb09c:
	;
}
