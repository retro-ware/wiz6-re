extern int g3596;
extern int g4fc4;
f73c0(p4, p6)
{
	int l2;
	g4fc4 = 0;
L73cc:
	if (f2643(1)) goto L73f6;
	l2 = f0bd8(p6);
	if (g3596 != 1) goto L73f4;
	g4fc4 = 1;
	return (l2 - 1);
L73f4:
	goto L73cc;
L73f6:
	l2 = f3350(p4, (unsigned char)(f2724(1)));
	if (l2 < 0) goto L7414;
	return;
L7414:
	goto L73cc;
#asm
	db 0ebh,0d8h
#endasm
}
