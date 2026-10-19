extern char g00e2[];
extern int g4428[];
extern int g5322;
f9e1e(p4, p6)
{
	int l2;
	int l4;
	int l6;
	char x6[44];
	int l52;
	char x52[26];
	int l80;
	l2 = f9a42(p4, p6, 1516, 0);
	if (l2 == -1) goto L9ed7;
	f0882(1, &l80, *(int *)((char *)g4428 + ((432 * p6) + (l2 << 3))), 0);
	if (!l52) goto L9ed7;
	l6 = (l52 / 256);
	l4 = (l52 % 256);
	if (g00e2[(l4 * 6)] != 1) goto L9eb2;
	f2a63();
	g5322 = f62ee(2032, 1);
	if (g5322 != -1) goto L9eb2;
	l4 = -1;
L9eb2:
	if (l4 == -1) goto L9ed7;
	f69db(p6, l2);
	f817e(p6, l4, l6, g5322);
L9ed7:
	;
}
