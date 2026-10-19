extern int g3596;
extern int g3646;
extern int g4fbc;
extern int g4fc4;
extern int g5060;
extern int g5062;
extern int g5064;
f469f(p4, p6)
{
	int l2;
	g4fc4 = 0;
L46ab:
	if (f2643(1)) goto L4717;
	l2 = f0bd8(p6);
	if (g3596 != 1) goto L46d3;
	g4fc4 = 1;
	return (l2 - 1);
L46d3:
	if (g5060) goto L4701;
	g3646 = ((g3646 + 1) % 2);
	f4d1b(g3646, g5064, g5062);
	f36a0(g4fbc);
	goto L4707;
L4701:
	f2858();
	f2858();
L4707:
	g5060 = ((g5060 + 1) % 10);
	goto L46ab;
L4717:
	l2 = f3350(p4, (unsigned char)(f2724(1)));
	if (l2 < 0) goto L4735;
	return;
L4735:
	goto L46ab;
#asm
	db 0ebh,095h
#endasm
}
