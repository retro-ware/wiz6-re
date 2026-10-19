#asm
	extrn f9ef6_:near
	extrn f9f25_:near
#endasm
extern char g4589[];
extern int g4400[];
extern int g4fca;
fac20(p4)
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
	call f9f25_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call f9ef6_
	db 083h,0c4h,004h,089h,046h,0feh
#endasm
	if (!l2) goto Lac67;
	if ((unsigned)g4589[(432 * p4)] < 3) goto Lac6d;
Lac67:
	return;
Lac6d:
	f04f1(l2, &l42);
	f075b(5231, &l22);
	f075b(5232, &l62);
	if (*(int *)((char *)g4400 + (432 * p4)) >= l2) goto Lacaa;
	l2 = *(int *)((char *)g4400 + (432 * p4));
Lacaa:
	*(int *)((char *)g4400 + (432 * p4)) -= l2;
	faa50(p4, &l22, &l42, &l62, 1, 5, 5, 5);
	f4ba8(p4);
	if (*(int *)((char *)g4400 + (432 * p4)) > 0) goto Lad05;
	f533b(2);
	fab6c(p4, 5264, 0, 3);
	goto Lad15;
Lad05:
	f0aaa(2);
	f533b(g4fca);
Lad15:
	return;
}
