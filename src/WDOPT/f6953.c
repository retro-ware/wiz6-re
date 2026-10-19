extern int g0004[];
extern int g4410[];
f6953(p4, p6)
{
	register int rsi;
	f3118(p4);
	f32be(p4, 0, 1, 0);
	f6880(p4);
	f6760(p4, 1, 1, 35);
	f6760(p4, 1, 3, 36);
	f6760(p4, 1, 5, 37);
	f6760(p4, 7, 1, 38);
	f6760(p4, 7, 3, 39);
	f6760(p4, 7, 5, 40);
	f6760(p4, 13, 3, 34);
	rsi = 0;
L6a0d:
	f030b(p4, (rsi < 3 ? 3 : 9), (((rsi % 3) << 1) + 1));
	f05a5(p4, *(int *)((char *)g4410 + ((432 * p6) + (rsi << 2))), 3, g0004[rsi]);
	rsi++;
	if (rsi < 6) goto L6a0d;
	rsi = 0;
L6a63:
	f6737(p4, (rsi + 15), 3, (rsi + 24));
	rsi++;
	if (rsi < 6) goto L6a63;
	f030b(p4, 13, 5);
	f083f(3957, p4, 18);
	f030b(p4, 13, 6);
	rsi = 0;
L6ab8:
	f23e3(p4, 32, 3);
	rsi++;
	if (rsi < 4) goto L6ab8;
	f31d1(p4);
	f2b19(p4);
}
