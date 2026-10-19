#asm
	extrn strncpy_:near
#endasm
fbbfa(p4, p6)
char *p6;
{
	int l2;
	l2 = char_index(((p4 * 20) + 22746), 37);
#asm
	db 03dh,000h,000h,07ch,029h,050h,08bh,046h,004h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h
	db 0c2h,0d1h,0e0h,0d1h,0e0h,005h,0dah,058h,050h,0ffh,076h,006h
	call strncpy_
	db 083h,0c4h,006h
#endasm
	*(p6 + l2) = 0;
	goto Lbce7;
Lbc4f:
	l2 = char_index(((p4 * 20) + 22746), 64);
#asm
	db 03dh,000h,000h,07ch,028h,050h,08bh,046h,004h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h
	db 0c2h,0d1h,0e0h,0d1h,0e0h,005h,0dah,058h,050h,0ffh,076h,006h
	call strncpy_
	db 083h,0c4h,006h
#endasm
	*(p6 + l2) = 0;
	goto Lbce7;
	if ((l2 = char_index(((p4 * 20) + 22746), 94)) < 0) goto Lbce7;
	strncpy(p6, ((p4 * 20) + 22746), l2);
	*(p6 + l2) = 0;
Lbce7:
	;
}
