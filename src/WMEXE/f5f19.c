#asm
	extrn movmem_:near
#endasm
f5f19(p4)
{
	register int rsi;
	rsi = (44 * p4);
#asm
	db 08bh,01eh,0a8h,043h,08bh,040h,002h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h
	db 058h,089h,087h,000h,044h,08bh,01eh,0a8h,043h,08bh,040h,006h,050h,0b8h,0b0h,001h
	db 0f7h,06eh,004h,08bh,0d8h,058h,089h,087h,004h,044h,08bh,01eh,0a8h,043h,08ah,040h
	db 022h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,058h,088h,087h,089h,045h,0b8h
	db 00ah,000h,050h,081h,0c3h,00ah,045h,08bh,0c3h,050h,0a1h,0a8h,043h,003h,0c6h,005h
	db 00eh,000h,050h
	call movmem_
	db 083h,0c4h,006h
#endasm
	rsi = (44 * p4);
#asm
	db 08bh,01eh,0a8h,043h,08ah,040h,023h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h
	db 058h,088h,087h,08ch,045h
#endasm
}
