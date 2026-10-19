extern int g3596;
extern int g4fc4;
f45fc(p4, p6)
{
	int l2;
	g4fc4 = 0;
L4608:
	if (f2643(1)) goto L4632;
	l2 = f0bd8(p6);
	if (g3596 != 1) goto L4630;
	g4fc4 = 1;
	return (l2 - 1);
L4630:
	goto L4608;
L4632:
	l2 = f3350(p4, (unsigned char)(f2724(1)));
	if (l2 < 0) goto L4650;
	return;
L4650:
	goto L4608;
#asm
	db 0ebh,0d8h
#endasm
}
