#asm
	extrn f030b_:near
	extrn f083f_:near
#endasm
f6a40(p4, p6, p8)
char *p4;
{
	register int rsi;
	register int rdi;
	f7549(p4, 0);
	f3118(p4);
	rsi = -2;
#asm
l6a5c:
	db 08bh,046h,006h,003h,0c6h,07ch,069h,03bh,046h,00ah,07dh,064h,08bh,0c6h,040h,040h
	db 050h,0b8h,002h,000h,050h,0ffh,076h,004h
	call f030b_
	db 083h,0c4h,006h,083h,07eh,008h,001h,075h,009h
#endasm
	if (rsi) goto L6a89;
#asm
	db 0b8h,006h,000h,0ebh,003h
#endasm
L6a89:
	;
#asm
l6a89:
	db 0b8h,012h,000h
#endasm
L6a8c:
	;
#asm
l6a8c:
	db 050h,0ffh,076h,004h,08bh,046h,006h,003h,0c6h,0d1h,0e0h,08bh,0f8h,08bh,05eh,00ch
	db 08bh,001h,005h,0b4h,014h,050h
	call f083f_
	db 083h,0c4h,006h
#endasm
	if (p8 != 1) goto L6acc;
	if (rsi) goto L6acc;
L6ab2:
	if ((unsigned)p4[6] >= 17) goto L6acc;
	f22b7(p4, 32, 6);
	goto L6ab2;
L6acc:
	rsi++;
#asm
	db 083h,0feh,002h,07eh,08ah
#endasm
	f31d1(p4);
	f2b19(p4);
}
