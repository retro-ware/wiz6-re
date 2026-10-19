extern int g3342;
extern int g363c;
extern int g4fb2;
extern int g4fb6;
extern int g501e;
extern int g50c8;
extern int g5192;
extern int g51d2;
f6d83(p4, p6, p8, p10)
{
	int l2;
	int l4;
	f3118(p4);
	f3118(p6);
	f3118(g3342);
	f3118(g4fb2);
	f02f0(g4fb6, 0);
	f2a63();
	l4 = (((p10 * 10) + 50) - (g363c * 5));
	if (l4 <= 95) goto L6de6;
	l4 = 95;
L6de6:
	if (l4 >= 5) goto L6df1;
	l4 = 5;
L6df1:
	l2 = f09e2(100);
	if (l2 >= l4) goto L6e3d;
	g5192 = 0;
	g51d2 = 1;
	g501e = 1;
	f075b(5234, 20590);
	f59e9(g4fb6, g50c8, 20590, 1, 7);
	goto L6e8b;
L6e3d:
	if ((100 - ((100 - l4) / 3)) >= l2) goto L6e5d;
	g51d2 = -1;
	goto L6e8b;
L6e5d:
	g51d2 = 0;
	f075b(5235, 20590);
	f59e9(g4fb6, g50c8, 20590, 1, 7);
L6e8b:
	f31d1(p4);
	f31d1(p6);
	f31d1(g3342);
	f31d1(g4fb2);
}
