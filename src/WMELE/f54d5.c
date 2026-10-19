extern char g019c[];
extern char g4515[];
extern char g4533[];
extern int g363c;
extern int g4360;
extern int g43a8[];
extern int g43ce;
f54d5()
{
	int l2;
	int l4;
	int l6;
	l2 = 1;
	goto L5564;
L54e3:
	l4 = 0;
	goto L5558;
L54ea:
	l6 = f09e2(100);
	if (g019c[g43a8[l2]] != 1) goto L5555;
	if (((unsigned char)g4533[(432 * l4)] - (g363c * 3)) > l6) goto L5534;
	if ((unsigned char)g4515[(432 * l4)] <= l6) goto L5555;
L5534:
	g019c[g43a8[l2]] = 0;
	f5493(l4, 23, 0);
L5555:
	l4++;
L5558:
	if (l4 < g43ce) goto L54ea;
	l2++;
L5564:
	if (l2 <= g4360) goto L54e3;
}
