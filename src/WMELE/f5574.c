extern char *g43b8;
extern char g019b[];
extern char g4326[];
extern int g4336;
extern int g4360;
extern int g43a8[];
extern int g43b6[];
f5574()
{
	int l2;
	int l4;
	l4 = 0;
L557f:
	g4326[l4] = 0;
	l4++;
	if (l4 < 3) goto L557f;
	l2 = 1;
	goto L55c1;
L5599:
	g019b[g43a8[l2]] = (char)f4858((unsigned char)(*(char **)((char *)g43b6 + (l2 << 1)))[209]);
	l2++;
L55c1:
	if (l2 <= g4360) goto L5599;
	if ((unsigned)g43b8[210] <= 0) goto L55e6;
	if ((unsigned char)g43b8[210] == g4336) goto L55e6;
	f45f1((unsigned char)g43b8[210]);
L55e6:
	;
}
