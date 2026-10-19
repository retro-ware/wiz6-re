#asm
	extrn f5a98_:near
	extrn f5ac7_:near
#endasm
extern char g4589[];
extern int g4400[];
extern int g4fca;
f5cc3(p4)
{
	int l2;
	char x2[18];
	int l22;
	char x22[18];
	int l42;
	char x42[18];
	int l62;
	register int rsi;
	register int rdi;
#asm
	db 0b8h,000h,000h,050h,0ffh,076h,008h,0ffh,076h,006h
	call f5ac7_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call f5a98_
	db 083h,0c4h,004h,089h,046h,0feh
#endasm
	if (!l2) goto L5d0a;
	if ((unsigned)g4589[(432 * p4)] < 3) goto L5d10;
L5d0a:
	return;
L5d10:
	f04f1(l2, &l42);
	f075b(5231, &l22);
	f075b(5232, &l62);
	if (*(int *)((char *)g4400 + (432 * p4)) >= l2) goto L5d4d;
	l2 = *(int *)((char *)g4400 + (432 * p4));
L5d4d:
	*(int *)((char *)g4400 + (432 * p4)) -= l2;
	f5af6(p4, &l22, &l42, &l62, 1, 5, 5, 5);
	f4db6(p4);
	if (*(int *)((char *)g4400 + (432 * p4)) > 0) goto L5da8;
	f48df(4);
	f5c0f(p4, 5264, 0, 3);
	goto L5db8;
L5da8:
	f0aaa(2);
	f48df(g4fca);
L5db8:
	return;
}
