extern char g00cc[];
extern char g442c[];
extern char g442e[];
extern char g442f[];
extern char g4594[];
extern int g43ca;
extern int g4428[];
f9d8a(p4, p6, p8)
{
	int l2;
	int l4;
	int l6;
	if ((unsigned)g4594[(432 * p8)] >= 2) goto L9da3;
	return;
L9da3:
	g43ca = f5fac(p4, p6, 406, p8, 0);
	if (g43ca != -1) goto L9dc4;
	return;
L9dc4:
	l4 = f5fac(p4, p6, 407, p8, 0);
	if (l4 != -1) goto L9de5;
	return;
L9de5:
	if (l4 != g43ca) goto L9df5;
	f0aaa(0);
	return;
L9df5:
	if (!((unsigned char)g442f[((432 * p8) + (l4 << 3))] & 1)) goto L9e4e;
	l2 = g43ca;
	g43ca = l4;
	l4 = l2;
	if (!((unsigned char)g442f[((432 * p8) + (l4 << 3))] & 1)) goto L9e4e;
	f0aaa(0);
	return;
L9e4e:
	if (*(int *)((char *)g4428 + ((432 * p8) + (g43ca << 3))) != *(int *)((char *)g4428 + ((432 * p8) + (l4 << 3)))) goto L9f4e;
	if (g00cc[(unsigned char)g442c[((432 * p8) + (g43ca << 3))]] != 1) goto L9f4e;
	l6 = ((unsigned char)g442e[((432 * p8) + (g43ca << 3))] + (unsigned char)g442e[((432 * p8) + (l4 << 3))]);
	if (l6 > 250) goto L9f12;
	g442e[((432 * p8) + (g43ca << 3))] = *(char *)&l6;
	f5d5b(p8, l4);
	goto L9f4c;
L9f12:
	g442e[((432 * p8) + (g43ca << 3))] = 250;
	g442e[((432 * p8) + (l4 << 3))] = (char)(l6 + -250);
L9f4c:
	goto L9f6d;
L9f4e:
	if (f9c8e(p4, p8, g43ca, l4)) goto L9f6d;
	f0aaa(0);
L9f6d:
	f93f8(p4, p6, p8);
	return;
}
