extern char g52a9[];
extern char g52b6[];
extern char g52bd[];
extern char g52be[];
extern char g52cd[];
extern char g52ce[];
extern char g52cf[];
extern char g52d5[];
extern char g52d6[];
extern char g52de[];
extern int g5460;
fafae(p4, p6)
{
	if (((p6 != 2) && (p6 < 5)) && (g52a9[(p4 * 3)] != 1)) goto Lb00d;
	g52cd[p4] = 0;
	g52ce[p4] = 0;
	g52cf[p4] = 0;
	g52bd[p4] = 0;
	g52d5[p4] = 0;
	g52b6[p4] = 0;
	g52be[p4] = 0;
	g52d6[p4] = 0;
	g52de[p4] = 0;
	if ((p4 + 3) >= g5460) goto Lb00d;
	g5460 = (p4 + 3);
Lb00d:
	;
}
