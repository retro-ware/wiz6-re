extern int g363a;
extern int g4ee8;
extern int g4f9a;
fda96(p4)
{
	int l2;
	register int rsi;
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0feh
#endasm
	if (f2962(l2, 14, 1) != 1) goto Ldae4;
	if (f2962(l2, 12, 2) == g4f9a) goto Ldae4;
	return 0;
Ldae4:
	if (f2962(l2, 8, 1)) goto Ldafe;
	return 0;
Ldafe:
	g4ee8 = p4;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,0f0h,08ah,080h,030h,006h,02ah,0e4h,0a3h,0c4h,043h
#endasm
	g363a = 21;
	return 1;
}
