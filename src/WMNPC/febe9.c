extern char g6acb[];
extern char g6ad8[];
extern char g6adf[];
extern char g6ae0[];
extern char g6aef[];
extern char g6af0[];
extern char g6af1[];
extern char g6af7[];
extern char g6af8[];
extern char g6b00[];
extern int g6c82;
febe9(p4, p6)
{
	if (((p6 != 2) && (p6 < 5)) && (g6acb[(p4 * 3)] != 1)) goto Lec48;
	g6aef[p4] = 0;
	g6af0[p4] = 0;
	g6af1[p4] = 0;
	g6adf[p4] = 0;
	g6af7[p4] = 0;
	g6ad8[p4] = 0;
	g6ae0[p4] = 0;
	g6af8[p4] = 0;
	g6b00[p4] = 0;
	if ((p4 + 3) >= g6c82) goto Lec48;
	g6c82 = (p4 + 3);
Lec48:
	;
}
