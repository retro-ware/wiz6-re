extern int g4f9a;
extern int g502a;
extern int g502c;
f517b(p4)
{
	int l2;
	int l4;
	char x4[2];
	int l8;
	int l10;
	int l12;
	int l14;
	register int rsi;
	l14 = f50e8();
	if (l14 != -1) goto L5195;
	return -1;
L5195:
	;
#asm
l5195:
	db 08bh,046h,0f2h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,020h,001h,089h
	db 046h,0fah
#endasm
	rsi = l14;
#asm
	db 08ah,080h,030h,006h,02ah,0e4h,089h,046h,0feh
#endasm
	l4 = f2962(l2, 0, 5);
	l10 = 0;
#asm
	db 08bh,046h,0f2h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0feh
#endasm
	if (f2962(l2, (g4f9a << 1), 2) != 2) goto L5201;
	if (l4) goto L5201;
	l10 = 1;
L5201:
	l12 = 0;
	l8 = ((((f09e2((p4 << 1)) + f09e2((p4 << 1))) + f09e2((p4 << 1))) + 3) / 2);
	if (l8 >= l4) goto L5246;
	l12 = 1;
L5246:
	if (!l10) goto L5251;
	l12 = 2;
L5251:
	if (l12) goto L525e;
	f5051(l14);
L525e:
	g502a = (l12 + 2113);
	g502c = l12;
	return 0;
}
