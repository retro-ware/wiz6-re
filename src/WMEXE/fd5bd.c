#asm
	extrn test_bit_:near
#endasm
fd5bd(p4, p6, p8, p10)
{
	register int rsi;
	rsi = p10;
	goto Ld621;
Ld5c6:
	;
#asm
ld5c6:
	db 08bh,01eh,0a8h,04fh,08ah,080h,010h,005h,02ah,0e4h,03bh,046h,008h,074h,008h
#endasm
	return -1;
Ld5dd:
	;
#asm
ld5dd:
	db 08ah,080h,0f0h,003h,02ah,0e4h,03bh,046h,004h,075h,038h,08ah,080h,080h,004h,02ah
	db 0e4h,03bh,046h,006h,075h,02dh,080h,0b8h,060h,003h,000h,076h,026h,08ah,080h,0a0h
	db 005h,02ah,0e4h,050h,0a1h,03ch,036h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h
	db 0e0h,005h,0ech,04eh,050h
	call test_bit_
	db 083h,0c4h,004h,085h,0c0h,075h,004h
#endasm
	return rsi;
Ld620:
	rsi++;
Ld621:
	if (rsi < 144) goto Ld5c6;
	return -1;
}
