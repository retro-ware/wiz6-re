extern char g00de[];
extern char g00df[];
extern char g00e0[];
extern char g450c[];
extern int g3342;
extern int g4404[];
extern int g4410[];
extern int g4fb0;
extern int g4fb2;
extern int g502a;
extern int g502e;
extern int g506a;
extern int g51b6;
f7f30(p4)
{
	int l2;
	int l4;
	int l6;
	f075b(2001, 20668);
	g506a = 0;
	f3118(g4fb0);
	l2 = f011a(0, 19, 19, 5, 10, -4, 0, 0);
	f32be(l2, 32, 3, 0);
	l4 = f6bfd(l2, p4);
	g502e = -1;
	if (l4 == -1) goto L8052;
	l6 = (l4 / 256);
	l4 = (l4 % 256);
	*(int *)((char *)g4410 + ((432 * p4) + ((unsigned char)g00de[(l4 * 6)] << 2))) -= ((unsigned char)g00e0[(l4 * 6)] * l6);
	f6054(p4, l4, l6, g51b6);
	*(int *)((char *)g4404 + (432 * p4)) -= ((f09e2(l6) + (unsigned char)g00df[(l4 * 6)]) + l6);
	if (*(int *)((char *)g4404 + (432 * p4)) >= 0) goto L8052;
	*(int *)((char *)g4404 + (432 * p4)) = 0;
	g450c[(432 * p4)] = (char)(f09e2(6) + 6);
L8052:
	f02d2(l2, 0);
	f31d1(g4fb0);
	f09fb(g3342, 0);
	f0a42(g4fb2, 0);
	if (g502a <= 0) goto L8092;
	f5082(g502a);
L8092:
	;
}
