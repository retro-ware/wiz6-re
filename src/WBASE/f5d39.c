extern char g4326[];
extern char g4330[];
extern int g3342;
extern int g4f86;
extern int g4f88;
extern int g4fa8;
extern int g4faa;
extern int g4fb0;
extern int g4fb2;
extern int g4fb6;
f5d39()
{
	int l2;
	char x2[80];
	g4f88 = 0;
	f3118(g4fb6);
	l2 = 0;
L5d52:
	f030b(g4fb6, 19, l2);
	f23e3(g4fb6, 27, 3);
	l2++;
	if (l2 < 5) goto L5d52;
	f31d1(g4fb6);
	f09fb(g3342, 0);
	f0a42(g4fb2, 0);
	g4fb0 = f011a(20, 19, 20, 5, 8, -1, 0, 0);
	f32be(g4fb0, 32, 3, 0);
	f3118(g4fb0);
	if (g4f88) goto L5e70;
	f4ac2(g4fb0, 13, 1, 5, 6, 7, 8);
	f4ac2(g4fb0, 10, 3, 1, 13, 3, 14);
	f4b35(g4fb0, 12, 3, 17);
	f4ac2(g4fb0, 16, 3, 15, 10, 16, 12);
	goto L5eec;
L5e70:
	f4ac2(g4fb0, 13, 1, 5, 6, 7, 8);
	f4ac2(g4fb0, 10, 3, 1, 2, 3, 4);
	f4b35(g4fb0, 12, 3, 25);
	f4ac2(g4fb0, 16, 3, 9, 10, 11, 12);
L5eec:
	l2 = 0;
L5ef1:
	f030b(g4fb0, 1, (l2 + 1));
	f083f((l2 + 1300), g4fb0, 18);
	l2++;
	if (l2 < 4) goto L5ef1;
	f31d1(g4fb0);
	setmem(20192, 8, 0);
	g4f86 = 0;
	g4faa = 0;
	g4fa8 = 0;
	l2 = 0;
L5f55:
	g4330[l2] = 255;
	g4326[l2] = 0;
	l2++;
	if (l2 < 3) goto L5f55;
}
