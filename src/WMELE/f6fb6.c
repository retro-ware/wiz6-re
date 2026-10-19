extern char g4326[];
extern int g3342;
extern int g438a;
extern int g438c;
extern int g4390[];
extern int g43a8[];
extern int g43b6[];
extern int g4fb0;
extern int g4fb2;
extern int g4fb6;
f6fb6()
{
	int l2;
	int l4;
	f02d2(g438a, 0);
	f02d2(g438c, 0);
	f31d1(g3342);
	f31d1(g4fb2);
	f31d1(g4fb0);
	f09fb(g3342, 0);
	f3118(g4fb6);
	f32be(g4fb6, 26, 3, 0);
	l2 = 0;
L7021:
	f030b(g4fb6, 19, l2);
	f23e3(g4fb6, 27, 3);
	l2++;
	if (l2 < 5) goto L7021;
	f31d1(g4fb6);
	f0a42(g4fb2, 0);
	l2 = 0;
L706a:
	free(g43b6[l2]);
	free(g43a8[l2]);
	l2++;
	if (l2 < 7) goto L706a;
	l2 = 0;
L7098:
	free(g4390[l2]);
	l2++;
	if (l2 < 12) goto L7098;
	l4 = 0;
L70b7:
	g4326[l4] = 0;
	l4++;
	if (l4 < 3) goto L70b7;
}
