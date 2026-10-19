extern int g3596;
extern int g3646;
extern int g4fc4;
extern int g501c;
extern int g502c;
f4c2f(p4, p6)
{
	int l2;
	int l4;
	l4 = g3646;
	if (g501c == -1) goto L4c45;
	f4bb5();
L4c45:
	g4fc4 = 0;
L4c4b:
	if (f2643(1)) goto L4cb2;
	l2 = f0bd8(p6);
	if (g3596 != 1) goto L4c73;
	g4fc4 = 1;
	return (l2 - 1);
L4c73:
	if (g502c) goto L4c9f;
	g3646 = ((g3646 + 1) % 2);
	f4811();
	if (g501c == -1) goto L4c9d;
	if (g3646 != l4) goto L4c9d;
	f4bb5();
L4c9d:
	goto L4ca2;
L4c9f:
	f45b8();
L4ca2:
	g502c = ((g502c + 1) % 10);
	goto L4c4b;
L4cb2:
	l2 = f3350(p4, (unsigned char)(f2724(1)));
	if (l2 < 0) goto L4cd0;
	return;
L4cd0:
	goto L4c4b;
#asm
	db 0ebh,09ah
#endasm
}
