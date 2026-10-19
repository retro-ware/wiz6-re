extern int g3596;
extern int g3646;
extern int g4fc4;
extern int g5036;
f5534(p4, p6)
{
	int l2;
	g4fc4 = 0;
L5540:
	if (f2643(1)) goto L5595;
	l2 = f0bd8(p6);
	if (g3596 != 1) goto L5568;
	g4fc4 = 1;
	return (l2 - 1);
L5568:
	if (g5036) goto L5582;
	g3646 = ((g3646 + 1) % 2);
	f98cb();
	goto L5585;
L5582:
	f4655();
L5585:
	g5036 = ((g5036 + 1) % 10);
	goto L5540;
L5595:
	l2 = f3350(p4, (unsigned char)(f2724(1)));
	if (l2 < 0) goto L55b3;
	return;
L55b3:
	goto L5540;
#asm
	db 0ebh,0adh
#endasm
}
