#asm
	extrn f030b_:near
	extrn f23e3_:near
#endasm
f0a42(p4, p6)
{
	if (p6) goto L0a52;
	f3118(p4);
L0a52:
	;
#asm
l0a52:
	db 0b8h,000h,000h,050h,0b8h,013h,000h,050h,0ffh,076h,004h
	call f030b_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b0h,01fh,08bh,04eh,004h,03bh,00eh,042h,033h
	db 075h,002h,0b0h,01dh
#endasm
L0a74:
	;
#asm
l0a74:
	db 02ah,0e4h,050h,051h
	call f23e3_
	db 083h,0c4h,006h
#endasm
	if (p6) goto L0a8b;
	f31d1(p4);
L0a8b:
	;
}
