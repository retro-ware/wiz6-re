extern char g505c;
extern int g435c;
extern int g435e;
extern int g4fc8;
extern int g5114;
fb85f(p4, p6, p8, p10)
{
	char x0[2];
	f6ba3(20492, g435e, g435c);
	f075b(p4, 20652);
	g505c = 0;
	if (p6 < 0) goto Lb89c;
	f075b(p6, 20572);
Lb89c:
	f6d32(20492, 20652, 20572, (g435e == 0 ? 1 : 6), p8, p8);
	if (p10 != 1) goto Lb8f7;
	f774b(2);
	f6d0b(3200, 3, 2);
	f774b((g4fc8 / 2));
	return 1;
Lb8f7:
	if (!g435e) goto Lb92f;
#asm
	db 08bh,01eh,0b8h,043h,08ah,087h,0d2h,000h,03ch,000h,076h,025h,03ch,006h,074h,021h
	db 0a1h,05eh,043h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,08fh,0d2h,000h,08bh
	db 01eh,0b8h,043h,08ah,087h,0d2h,000h,03ah,0c8h,075h,006h
#endasm
	g5114 = 14;
Lb92f:
	return 0;
}
