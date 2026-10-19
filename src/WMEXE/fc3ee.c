extern char g505c;
extern int g435c;
extern int g435e;
extern int g4fc8;
fc3ee(p4, p6)
{
	int l2;
	int l4;
	int l6;
	if (p4 != p6) goto Lc400;
	return;
Lc400:
	if ((p4 % 2) != (p6 % 2)) goto Lc41d;
	l4 = 0;
	goto Lc42d;
Lc41d:
	if ((p6 % 2)) goto Lc428;
	l4 = 1;
	goto Lc42d;
Lc428:
	l4 = -1;
Lc42d:
	f6ba3(20492, g435e, g435c);
	if (p4 <= p6) goto Lc45c;
	f075b(3513, 20652);
	l2 = -2;
	goto Lc46f;
Lc45c:
	f075b(3514, 20652);
	l2 = 2;
Lc46f:
	g505c = 0;
	f6d32(20492, 20652, 20572, 1, 14, 0);
	f774b(3);
Lc49a:
	if ((p6 + l4) == p4) goto Lc4c0;
	l6 = (p4 + l2);
	fc31a(p4, l6);
	p4 += l2;
	goto Lc49a;
Lc4c0:
	if (!l4) goto Lc4d6;
	fc31a((p6 + l4), p6);
Lc4d6:
	f774b((g4fc8 / 2));
	return;
}
