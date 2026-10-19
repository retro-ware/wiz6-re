f619b(p4, p6)
{
	register int rsi;
	f32be(p4, 32, 3, 0);
	f3118(p4);
	f507f(p4, 0, 0, 69);
	rsi = 1;
L61d0:
	f507f(p4, 0, rsi, 71);
	rsi++;
	if (rsi < 6) goto L61d0;
	f507f(p4, 0, 6, 70);
	f31d1(p4);
	if (!p6) goto L6211;
	f2b19(p4);
L6211:
	;
}
