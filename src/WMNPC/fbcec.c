#asm
	extrn strncpy_:near
#endasm
extern char g58db[];
fbcec(p4, p6)
{
	int l2;
	int l4;
	int l6;
	register int rsi;
	l6 = f3350(((p4 * 20) + 22746), 37);
	if (l6 < 0) goto Lbd4c;
#asm
	db 040h,050h,08bh,046h,004h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,0d1h
	db 0e0h,005h,0dah,058h,050h,0ffh,076h,006h
	call strncpy_
	db 083h,0c4h,006h,08bh,05eh,006h,08bh,076h,0fah,0c6h,000h,053h,08bh,05eh,006h,08bh
	db 076h,0fah,0c6h,040h,001h,000h,0e9h,029h,001h
#endasm
Lbd4c:
	l6 = f3350(((p4 * 20) + 22746), 64);
	if (l6 < 0) goto Lbd9a;
#asm
	db 050h,08bh,046h,004h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,0d1h,0e0h
	db 005h,0dah,058h,050h,0ffh,076h,006h
	call strncpy_
	db 083h,0c4h,006h,08bh,05eh,006h,08bh,076h,0fah,0c6h,000h,000h,0e9h,0dbh,000h
#endasm
Lbd9a:
	l6 = f3350(((p4 * 20) + 22746), 94);
	if (l6 < 0) goto Lbe75;
	l4 = ((unsigned char)g58db[((p4 * 20) + l6)] + -48);
#asm
	db 08bh,04eh,0fah,02bh,0c8h,08bh,0c1h,050h,08bh,046h,004h,08bh,0d0h,0d1h,0e0h,0d1h
	db 0e0h,003h,0c2h,0d1h,0e0h,0d1h,0e0h,005h,0dah,058h,050h,0ffh,076h,006h
	call strncpy_
	db 083h,0c4h,006h,08bh,046h,0fah,02bh,046h,0fch,08bh,0f0h,08bh,05eh,006h,0c6h,000h
	db 000h
#endasm
	l2 = (l6 + 2);
	goto Lbe59;
Lbe22:
	l4 = strlen(p6);
#asm
	db 08bh,046h,004h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,0d1h,0e0h,003h
	db 046h,0feh,08bh,0d8h,08ah,087h,0dah,058h,08bh,05eh,006h,08bh,076h,0fch,088h,000h
	db 08bh,05eh,006h,08bh,076h,0fch,0c6h,040h,001h,000h
#endasm
	l2++;
Lbe59:
	if (strlen(((p4 * 20) + 22746)) > l2) goto Lbe22;
Lbe75:
	;
}
