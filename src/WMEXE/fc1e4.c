extern char g019d[];
extern char g505c;
extern int g4354;
extern int g435c;
extern int g435e;
extern int g4360;
extern int g43a8[];
extern int g43b6[];
extern int g4fc8;
fc1e4(p4)
char *p4;
{
	int l2;
	int l4;
	l4 = (*(int *)p4 + 90);
	l2 = 1;
	goto Lc25e;
Lc1fc:
	l4 = ((l4 - ((unsigned char)(*(char **)((char *)g43b6 + (l2 << 1)))[122] * (unsigned char)g019d[g43a8[l2]])) - (((unsigned char)(*(char **)((char *)g43b6 + (l2 << 1)))[137] - (unsigned char)(*(char **)((char *)g43b6 + (g435e << 1)))[137]) << 1));
	l2++;
Lc25e:
	if (l2 <= g4360) goto Lc1fc;
	if (g4354 != 1) goto Lc273;
	l4 = 0;
Lc273:
	f6ba3(20492, g435e, g435c);
	f075b(3517, 20652);
	g505c = 0;
	f6d32(20492, 20652, 20572, (g435e == 0 ? 1 : 6), 14, 0);
	f774b((g4fc8 / 4));
	if (f09e2(100) >= l4) goto Lc2f6;
	p4[43] = 2;
	f6d0b(3522, 6, 2);
	goto Lc308;
Lc2f6:
	f6d0b(3523, 6, 2);
Lc308:
	f774b((g4fc8 / 4));
}
