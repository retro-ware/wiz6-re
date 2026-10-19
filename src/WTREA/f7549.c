f7549(p4, p6)
{
	register int rsi;
	f32be(p4, 32, 3, 0);
	f3118(p4);
	f74cd(p4, 1, 0, 69);
	rsi = 1;
L7581:
	f74cd(p4, 1, rsi, 71);
	rsi++;
	if (rsi < 4) goto L7581;
	f74cd(p4, 1, 4, 70);
	f31d1(p4);
	if (!p6) goto L75c2;
	f2b19(p4);
L75c2:
	;
}
