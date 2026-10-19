extern int g0022;
extern int g3342;
extern int g3646;
extern int g4fbc;
extern int g5062;
extern int g5064;
f4f79(p4, p6)
{
	int l2;
	int l4;
	l2 = 1;
L4f84:
	g3646 = ((g3646 + 1) % 2);
	g5064 = (((0 - g0022) * l2) / 2);
	g5062 = ((l2 * g0022) / 2);
	f4d1b(g3646, g5064, g5062);
	f36a0(g4fbc);
	f0aaa(3);
	l2++;
	if (l2 < 9) goto L4f84;
	f4617(5);
	f09fb(g3342, 0);
	l4 = f011a(0, 19, 40, 5, 30, -1, 0, 0);
	f3118(l4);
	f32be(l4, 32, 3, 0);
	f0b7e(l4, p4, 1, 18);
	f0b7e(l4, p6, 2, 18);
	f31d1(l4);
	f2a63();
	f02d2(l4, 0);
}
