f719f(p4, p6)
{
	register int rsi;
	f32be(p4, 32, 3, 0);
	f3118(p4);
	f513c(p4, 0, 0, 69);
	rsi = 1;
L71d4:
	f513c(p4, 0, rsi, 71);
	rsi++;
	if (rsi < 6) goto L71d4;
	f513c(p4, 0, 6, 70);
	f31d1(p4);
	if (!p6) goto L7215;
	f2b19(p4);
L7215:
	;
}
