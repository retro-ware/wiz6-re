extern char g019d[];
extern int g3342;
extern int g363a;
extern int g4358;
extern int g438a;
extern int g438c;
extern int g43b4;
extern int g4fae;
extern int g4fb2;
extern int g4fb6;
extern int g4fbc;
extern int g5016;
f8aea()
{
	char x0[2];
	g5016 = -1;
	f31d1(g3342);
	f31d1(g4fb2);
	f4623(g438c, 0);
	f31d1(g438a);
	f31d1(g438c);
	f0a42(g3342, 0);
	f0a42(g4fb2, 0);
	if ((unsigned)g019d[g43b4] <= 0) goto L8bab;
	f02d2(g4fbc, 0);
	g4fbc = f011a(9, 4, 22, 12, 2, -1, 2, 0);
	g4fae = f011a(9, 16, 22, 2, 16, -1, 0, 0);
	f478f();
L8bab:
	f76e9(g438a);
	if (!g4fae) goto L8c15;
	f02d2(g4fae, 0);
	g4fae = 0;
	f02d2(g4fbc, 0);
	g4fbc = f011a(9, 4, 22, 14, 2, -1, 2, 0);
	g4358 = -2;
L8c0b:
	f511c();
	if (g4358 != -3) goto L8c0b;
L8c15:
	f3118(g438a);
	f3118(g438c);
	f09fb(g3342, 0);
	f09fb(g4fb2, 0);
	f02f0(g4fb6, 0);
	f8a45();
	f3118(g3342);
	f3118(g4fb2);
	g363a = 13;
}
