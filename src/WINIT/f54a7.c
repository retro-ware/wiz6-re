extern char g4322[];
extern char g4326[];
extern char g432c[];
extern char g4330[];
extern int g303e;
extern int g3342;
extern int g363a;
extern int g433a;
extern int g43ce;
extern int g43dc[];
extern int g4fac;
extern int g4fb2;
extern int g4fb6;
extern int g4fb8;
extern int g4fba;
extern int g4fbc;
extern int g4fbe;
extern int g4fc6;
f54a7()
{
	char x0[2];
	int l4;
	int l6;
	f3640();
	l6 = 0;
L54b5:
	g432c[l6] = 255;
	g4322[l6] = 0;
	l6++;
	if (l6 < 10) goto L54b5;
	f4721(3, 0);
	f4721(1, 1);
	f4721(2, 2);
	f4721(7, 3);
	f4721(4, 7);
	f4721(5, 8);
	f4721(6, 9);
	if (!(g4fc6 & 1)) goto L5541;
	f4e5b(20910, 0);
	goto L5591;
L5541:
	if (!(g4fc6 & 2)) goto L5559;
	f4e5b(20923, 0);
	goto L5591;
L5559:
	if (!(g4fc6 & 4)) goto L5571;
	f4e5b(20936, 0);
	goto L5591;
L5571:
	if (!(g4fc6 & 8)) goto L5589;
	f4e5b(20949, 0);
	goto L5591;
L5589:
	f00d5(13);
L5591:
	g4fb6 = f011a(0, 19, 40, 5, 4, -1, 0, 0);
	f32be(g4fb6, 26, 3, 0);
	g4fba = f011a(1, 5, 7, 12, 6, -2, 0, 0);
	f32be(g4fba, 32, 3, 0);
	g4fb8 = f011a(32, 5, 7, 12, 7, -3, 0, 0);
	f32be(g4fb8, 32, 3, 0);
	g3342 = f011a(0, 18, 40, 1, 14, -1, 0, 0);
	f09fb(g3342, 0);
	g4fb2 = f011a(0, 24, 40, 1, 3, -1, 0, 0);
	f09fb(g4fb2, 0);
	g4fbc = f011a(9, 4, 22, 14, 2, -1, 2, 0);
	g4fac = f011a(2, 0, 36, 3, 5, -1, 2, 0);
	g303e = -1;
	g43ce = 0;
	l4 = 0;
L5710:
	g43dc[l4] = -1;
	l4++;
	if (l4 < 6) goto L5710;
	l6 = 0;
L572d:
	g4330[l6] = 255;
	g4326[l6] = 0;
	l6++;
	if (l6 < 3) goto L572d;
	g433a = 0;
	g363a = 4;
	f36a0(g4fbe);
}
