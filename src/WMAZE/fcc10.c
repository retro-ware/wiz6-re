extern int g363c;
extern int g4ee8;
extern int g4f9a;
extern int g5034;
fcc10(p4)
{
	int l2;
	int l4;
	int l6;
	register int rsi;
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0feh
#endasm
	if (f2962(l2, 14, 1) != 1) goto Lcc5e;
	if (f2962(l2, 12, 2) == g4f9a) goto Lcc5e;
	return 0;
Lcc5e:
	l4 = f2962(l2, 0, 8);
	l6 = f2962(l2, 10, 1);
	f2881(((g363c * 10) + 20204), l4, l6);
	g4ee8 = p4;
	l4 = f2962(l2, 8, 2);
	fa1bc(l4);
	g4ee8 = (p4 + 1);
	g5034 = 1;
	return 1;
}
