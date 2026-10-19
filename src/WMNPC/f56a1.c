#asm
	extrn f49db_:near
#endasm
extern int g3342;
extern int g4358;
extern int g5224;
f56a1(p4)
{
	int l2;
	int l4;
	char x4[2];
	int l8;
	if (p4) goto L56df;
	f075b(2025, 20948);
	f09fb(g3342, 1);
	f0b7e(g3342, 20948, 0, 18);
L56df:
	l8 = f09e2(2);
	l4 = f09e2(4);
	l2 = 0;
L56fa:
	if (!f09e2(8)) goto L570e;
	if (l2 != l4) goto L571d;
L570e:
	if (g5224 <= 0) goto L571d;
	f0aaa(g5224);
L571d:
	g4358 = -2;
	f55dc();
	if (l8) goto L5749;
#asm
	db 0b8h,000h,000h,050h,08bh,046h,004h,0d1h,0e0h,0d1h,0e0h,003h,046h,0feh,08bh,0d8h
	db 08ah,087h,0c4h,000h,02ah,0e4h,08bh,0c8h,058h,02bh,0c1h,0ebh,012h
#endasm
L5749:
	;
#asm
l5749:
	db 08bh,046h,004h,0d1h,0e0h,0d1h,0e0h,003h,046h,0feh,08bh,0d8h,08ah,087h,0c4h,000h
	db 02ah,0e4h
#endasm
L575b:
	;
#asm
l575b:
	db 089h,046h,0fah,050h,0b8h,000h,000h,050h,050h
	call f49db_
	db 083h,0c4h,006h
#endasm
	g4358 = 0;
L5770:
	f55dc();
	if (g4358 != -2) goto L5770;
	l2++;
#asm
	db 08bh,046h,0feh,03dh,004h,000h,07dh,003h
#endasm
	goto L56fa;
L5788:
	;
}
