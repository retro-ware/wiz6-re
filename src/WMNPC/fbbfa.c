#asm
	extrn strncpy_:near
#endasm
fbbfa(p4)
{
	int l2;
	register int rsi;
	l2 = f3350(((p4 * 20) + 22746), 37);
	if (l2 < 0) goto Lbc4f;
#asm
	db 050h,08bh,046h,004h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,0d1h,0e0h
	db 005h,0dah,058h,050h,0ffh,076h,006h
	call strncpy_
	db 083h,0c4h,006h,08bh,05eh,006h,08bh,076h,0feh,0c6h,000h,000h,0e9h,098h,000h
#endasm
Lbc4f:
	l2 = f3350(((p4 * 20) + 22746), 64);
	if (l2 < 0) goto Lbc9c;
#asm
	db 050h,08bh,046h,004h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,0d1h,0e0h
	db 005h,0dah,058h,050h,0ffh,076h,006h
	call strncpy_
	db 083h,0c4h,006h,08bh,05eh,006h,08bh,076h,0feh,0c6h,000h,000h,0ebh,04bh
#endasm
Lbc9c:
	l2 = f3350(((p4 * 20) + 22746), 94);
	if (l2 < 0) goto Lbce7;
#asm
	db 050h,08bh,046h,004h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,0d1h,0e0h
	db 005h,0dah,058h,050h,0ffh,076h,006h
	call strncpy_
	db 083h,0c4h,006h,08bh,05eh,006h,08bh,076h,0feh,0c6h,000h,000h
#endasm
Lbce7:
	;
}
