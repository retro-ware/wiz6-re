extern int g3596;
extern int g3646;
extern int g4fc4;
extern int g553c;
f8891(p4, p6)
{
	int l2;
	int l4;
	int l6;
	l6 = 0;
	l4 = g3646;
	if (g553c == -1) goto L88ac;
	f8817();
L88ac:
	g4fc4 = 0;
L88b2:
	if (f2643(1)) goto L8914;
	l2 = f0bd8(p6);
	if (g3596 != 1) goto L88da;
	g4fc4 = 1;
	return (l2 - 1);
L88da:
	if (l6) goto L88ff;
	g3646 = ((g3646 + 1) % 2);
	if (g553c == -1) goto L88fd;
	if (g3646 != l4) goto L88fd;
	f8817();
L88fd:
	goto L8905;
L88ff:
	f2858();
	f2858();
L8905:
	l6 = ((l6 + 1) % 10);
	goto L88b2;
L8914:
	l2 = f3350(p4, (unsigned char)(f2724(1)));
	if (l2 < 0) goto L8932;
	return;
L8932:
	goto L88b2;
#asm
	db 0ebh,09fh
#endasm
}
