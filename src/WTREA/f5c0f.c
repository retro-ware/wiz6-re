extern char g453a[];
extern char g4586[];
extern char g4589[];
extern int g4400[];
extern int g4404[];
extern int g4fca;
f5c0f(p4, p6, p8, p10)
{
	char x0[78];
	int l80;
	char x80[3];
	int l85;
	char x85[3];
	int l90;
	if (!p8) goto L5c3f;
	if (f09e2(100) <= (unsigned char)g453a[((432 * p4) + p8)]) goto L5cbf;
L5c3f:
	if ((unsigned char)g4589[(432 * p4)] >= p10) goto L5cbf;
	g4589[(432 * p4)] = *(char *)&p10;
	if (p10 < 3) goto L5c79;
	*(int *)((char *)g4400 + (432 * p4)) = 0;
	*(int *)((char *)g4404 + (432 * p4)) = 0;
	f0aaa(((unsigned char)g4586[(432 * p4)] + 8));
L5c79:
	f075b(p6, &l80);
	*(char *)&l85 = 0;
	*(char *)&l90 = 0;
	f5af6(p4, &l80, &l85, &l90, 1, 6, 0, 0);
	f4db6(p4);
	f48df(g4fca);
L5cbf:
	;
}
