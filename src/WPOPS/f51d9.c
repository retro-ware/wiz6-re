extern int g3596;
extern int g3646;
extern int g4358;
extern int g4fc4;
extern int g5016;
f51d9(p4, p6)
{
	int l2;
	int l4;
	f280c();
	l4 = g3646;
	if (g5016 == -1) goto L51f2;
	f50a2();
L51f2:
	g4fc4 = 0;
L51f8:
	if (f2643(1)) goto L523e;
	l2 = f0bd8(p6);
	if (g3596 != 1) goto L5220;
	g4fc4 = 1;
	return (l2 - 1);
L5220:
	f511c();
	if (g4358 != -2) goto L523c;
	if (g5016 == -1) goto L523c;
	if (g3646 != l4) goto L523c;
	f50a2();
L523c:
	goto L51f8;
L523e:
	l2 = f3350(p4, (unsigned char)(f2724(1)));
	if (l2 < 0) goto L525c;
	return;
L525c:
	goto L51f8;
#asm
	db 0ebh,0bch
#endasm
}
