extern char g51cd;
extern char g51d2;
extern int g4336;
extern int g4362;
extern int g5224;
f97c6()
{
	f5508((unsigned char)g51cd, 4);
	g4362 = 4;
	f4572(4, 0);
	if (g51d2 < 14) goto L9808;
	if (g51d2 == g4336) goto L9800;
	f4def(g51d2);
L9800:
	g5224 = 14;
	goto L981e;
L9808:
	if (g51d2 <= 0) goto L9818;
	g5224 = g51d2;
	goto L981e;
L9818:
	g5224 = 0;
L981e:
	f56a1(0);
}
