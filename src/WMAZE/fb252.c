extern int g363a;
extern int g4338;
extern int g4ee8;
extern int g4f8a;
extern int g4f9a;
fb252()
{
	int l2;
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0feh
#endasm
	if (f2962(l2, 2, 1) != 1) goto Lb2a0;
	g4f8a = f2962(l2, 0, 2);
	if (g4f8a == g4f9a) goto Lb2a0;
	return;
Lb2a0:
	;
#asm
lb2a0:
	db 08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h,030h,006h,02ah,0e4h,08bh,01eh
	db 084h,04fh,089h,007h
#endasm
	g4338 = 1;
	g363a = 18;
	g4ee8++;
	return;
}
