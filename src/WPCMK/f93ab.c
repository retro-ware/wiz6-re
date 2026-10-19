extern char *g56ca;
extern char g4fd8[];
extern char g5588[];
extern char g560c;
extern char g5618;
extern int g546e;
extern int g56ac;
extern int g56ce;
f93ab(p4, p6)
{
	int l2;
	int l4;
	int l6;
	char x6[34];
	int l42;
	int l44;
	int l46;
	setmem(21616, 432, 0);
	strcpy(21616, p4);
	f5277();
	f535b();
	g56ac = -1;
	f7068();
	f75f1();
	f770a();
	g56ac = (f09e2(6) + 5);
	if (f09e2(20)) goto L9404;
	g56ac += 8;
L9404:
	if (f09e2(20)) goto L9415;
	g56ac += 8;
L9415:
	if (g56ce != 1) goto L9422;
	g56ac = 21;
L9422:
	f7068();
	f7845();
	f7969();
	f9341();
	f7d9b();
	f7e92();
	g560c = 0;
	f9111();
	f81ad();
	f535b();
	if ((unsigned)g5618 <= 0) goto L9451;
	f604d(g56ca);
L9451:
	l2 = 0;
L9456:
	if ((unsigned)g5588[l2] <= 0) goto L9471;
	f6e38(g546e, g56ca, l2);
	goto L9456;
L9471:
	l2++;
	if (l2 < 4) goto L9456;
	f32be(g56ca, 32, 3, 0);
	f2b19(g56ca);
	l46 = 1;
	l44 = 1;
	l42 = -1;
	f030b(g56ca, 6, 1);
	f083f(1103, g56ca, 18);
	l4 = f4800(g56ca, 1114, &l46, ((unsigned char)g56ca[6] + 1), 1, 4, 1, 5, 0);
	if (l4) goto L9554;
	f457f(21616, p6, 1);
	g4fd8[p6] = 1;
	f3640();
	l6 = open(f0cd6(21502, 0), 2);
	write(l6, 20432, 24);
	close(l6);
L9554:
	;
}
