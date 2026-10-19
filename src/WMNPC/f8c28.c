#asm
	extrn f030b_:near
	extrn f083f_:near
#endasm
extern int g0004[];
f8c28(p4, p6, p8, p10, p12)
char *p4;
{
	register int rsi;
	register int rdi;
	f88c7(p4, 0);
	f3118(p4);
	rsi = -2;
L8c44:
	if ((p10 + rsi) < 0) goto L8ccb;
#asm
l8c4e:
	db 03bh,046h,00eh,07ch,003h
#endasm
	goto L8ccb;
L8c56:
	;
#asm
l8c56:
	db 08bh,0c6h,040h,040h,050h,0b8h,002h,000h,050h,0ffh,076h,004h
	call f030b_
	db 083h,0c4h,006h,083h,07eh,00ch,001h,075h,011h
#endasm
	if (rsi) goto L8c7f;
#asm
	db 08bh,046h,008h,0d1h,0e0h,08bh,0d8h,08bh,087h,004h,000h,0ebh,003h
#endasm
L8c7f:
	;
#asm
l8c7f:
	db 0b8h,012h,000h
#endasm
L8c82:
	;
#asm
l8c82:
	db 050h,0ffh,076h,004h,08bh,046h,00ah,003h,0c6h,0d1h,0e0h,08bh,0f8h,08bh,05eh,010h
	db 08bh,001h,005h,0a0h,00fh,050h
	call f083f_
	db 083h,0c4h,006h
#endasm
	if (p12 != 1) goto L8ccb;
	if (rsi) goto L8ccb;
L8ca8:
	if ((unsigned)p4[6] >= 17) goto L8ccb;
	f22b7(p4, 32, g0004[p8]);
	goto L8ca8;
L8ccb:
	rsi++;
#asm
	db 083h,0feh,002h,07fh,003h
#endasm
	goto L8c44;
L8cd4:
	f31d1(p4);
	f2b19(p4);
}
