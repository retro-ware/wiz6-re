extern char g505c;
extern int g4fb6;
extern int g4fc8;
extern int g500a;
f7a16(p4, p6, p8, p10, p12)
{
	f6ba3(20492, p4, p6);
	f075b(p8, 20652);
	g505c = 0;
	if (g500a != 2) goto L7a93;
	f033f(g4fb6, 0, 2, 39, 4);
	f779c(2);
	f6cc3(20492, (p4 == 0 ? 1 : 6), 2);
	f6cc3(20652, 6, 3);
	goto L7abf;
L7a93:
	f779c(4);
	f6d32(20492, 20652, 20572, (p4 == 0 ? 1 : 6), 6, 0);
L7abf:
	if (p10 != 1) goto L7ae5;
	if (p4) goto L7ae5;
	if (p12 <= 0) goto L7ad8;
	f0aaa(p12);
L7ad8:
	f7353(p6, 1);
L7ae5:
	f774b((g4fc8 / 2));
}
