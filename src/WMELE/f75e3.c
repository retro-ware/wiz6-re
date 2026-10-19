#asm
	extrn f28af_:near
#endasm
f75e3(p4, p6, p8, p10)
{
	register int rsi;
	rsi = p10;
	goto L7647;
L75ec:
	;
#asm
l75ec:
	db 08bh,01eh,0a8h,04fh,08ah,080h,010h,005h,02ah,0e4h,03bh,046h,008h,074h,008h
#endasm
	return -1;
L7603:
	;
#asm
l7603:
	db 08ah,080h,0f0h,003h,02ah,0e4h,03bh,046h,004h,075h,038h,08ah,080h,080h,004h,02ah
	db 0e4h,03bh,046h,006h,075h,02dh,080h,0b8h,060h,003h,000h,076h,026h,08ah,080h,0a0h
	db 005h,02ah,0e4h,050h,0a1h,03ch,036h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h
	db 0e0h,005h,0ech,04eh,050h
	call f28af_
	db 083h,0c4h,004h,085h,0c0h,075h,004h
#endasm
	return rsi;
L7646:
	rsi++;
L7647:
	if (rsi < 144) goto L75ec;
	return -1;
}
