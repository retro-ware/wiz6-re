extern int g3596;
extern int g3646;
extern int g4fc4;
extern int g502e;
extern int g506a;
f4728(p4, p6)
{
	int l2;
	int l4;
	l4 = g3646;
	if (g502e == -1) goto L473e;
	f46ae();
L473e:
	g4fc4 = 0;
L4744:
	if (f2643(1)) goto L47ab;
	l2 = f0bd8(p6);
	if (g3596 != 1) goto L476c;
	g4fc4 = 1;
	return (l2 - 1);
L476c:
	if (g506a) goto L4798;
	g3646 = ((g3646 + 1) % 2);
	f9e83();
	if (g502e == -1) goto L4796;
	if (g3646 != l4) goto L4796;
	f46ae();
L4796:
	goto L479b;
L4798:
	f4688();
L479b:
	g506a = ((g506a + 1) % 10);
	goto L4744;
L47ab:
	l2 = f3350(p4, (unsigned char)(f2724(1)));
	if (l2 < 0) goto L47c9;
	return;
L47c9:
	goto L4744;
#asm
	db 0ebh,09ah
#endasm
}
