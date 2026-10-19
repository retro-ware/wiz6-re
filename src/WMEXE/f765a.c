extern int g3644;
extern int g3646;
extern int g4358;
extern int g438e;
extern int g4390[];
extern int g4fbc;
extern int g5112;
f765a()
{
	int l2;
	int l4;
	switch (g4358) {
case -3:
	f36a0(g4fbc);
	if (g5112 != 1) goto L767d;
	f0aaa(5);
L767d:
	g5112 = 0;
	g3646 = ((g3646 + 1) % 2);
	g3644 = ((g3644 + 1) % 3);
	goto L7724;
case -2:
	fea26();
	l2 = 0;
L76aa:
	(*(char **)((char *)g4390 + (l2 << 1)))[20] = 255;
	l2++;
	if (l2 < 12) goto L76aa;
	g438e = 0;
	goto L7724;
case -1:
	l2 = 0;
L76d1:
	l4 = 0;
L76d6:
	f6339(l2, l4);
	f6742(l2, l4);
	l4++;
	if (l4 < 5) goto L76d6;
	l2++;
	if (l2 < 2) goto L76d1;
	goto L7724;
default:
	f655c(g4358);
	goto L7724;
	}
L7724:
	g4358++;
	if (g4358 != 12) goto L7736;
	g4358 = -3;
L7736:
	;
}
