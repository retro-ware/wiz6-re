extern int g3596;
extern int g3646;
extern int g4358;
extern int g4fc4;
extern int g522c;
f5994(p4, p6)
{
	int l2;
	int l4;
	l4 = g3646;
	if (g522c == -1) goto L59aa;
	f591a();
L59aa:
	f280c();
	g4fc4 = 0;
L59b3:
	l2 = f2643(1);
#asm
	db 085h,0c0h,075h,03ah
#endasm
	l2 = f0bd8(p6);
	if (g3596 != 1) goto L59de;
	g4fc4 = 1;
	return (l2 - 1);
L59de:
	f55dc();
	if (g4358 != -2) goto L59fa;
	if (g522c == -1) goto L59fa;
	if (g3646 != l4) goto L59fa;
	f591a();
L59fa:
	goto L59b3;
L59fc:
	l2 = f3350(p4, (unsigned char)(f2724(1)));
	if (l2 < 0) goto L5a1a;
	return;
L5a1a:
	goto L59b3;
#asm
	db 0ebh,0bch
#endasm
}
