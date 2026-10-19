f67dc(p4, p6)
{
	register int rsi;
	f32be(p4, 32, 3, 0);
	f3118(p4);
	f6760(p4, 1, 0, 69);
	rsi = 1;
L6814:
	f6760(p4, 1, rsi, 71);
	rsi++;
	if (rsi < 4) goto L6814;
	f6760(p4, 1, 4, 70);
	f31d1(p4);
	if (!p6) goto L6855;
	f2b19(p4);
L6855:
	;
}
