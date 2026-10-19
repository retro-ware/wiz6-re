#asm
	extrn strncpy_:near
#endasm
extern char g58da[];
extern char g58db[];
fbcec(p4, p6)
char *p6;
{
	int l2;
	int l4;
	int l6;
	l6 = char_index(((p4 * 20) + 22746), 37);
#asm
	db 03dh,000h,000h,07ch,034h,040h,050h,08bh,046h,004h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h
	db 003h,0c2h,0d1h,0e0h,0d1h,0e0h,005h,0dah,058h,050h,0ffh,076h,006h
	call strncpy_
	db 083h,0c4h,006h
#endasm
	*(p6 + l6) = 83;
	(p6 + l6)[1] = 0;
	goto Lbe75;
	if ((l6 = char_index(((p4 * 20) + 22746), 64)) < 0) goto Lbd9a;
	strncpy(p6, ((p4 * 20) + 22746), l6);
	*(p6 + l6) = 0;
#asm
	db 0e9h,0dbh,000h
#endasm
Lbd9a:
	l6 = char_index(((p4 * 20) + 22746), 94);
	if (l6 < 0) goto Lbe75;
	l4 = ((unsigned char)g58db[((p4 * 20) + l6)] + -48);
	strncpy(p6, ((p4 * 20) + 22746), (l6 - l4));
	*(p6 + (l6 - l4)) = 0;
	l2 = (l6 + 2);
	goto Lbe59;
Lbe22:
	l4 = strlen(p6);
	*(p6 + l4) = g58da[((p4 * 20) + l2)];
	(p6 + l4)[1] = 0;
	l2++;
Lbe59:
	if (strlen(((p4 * 20) + 22746)) > l2) goto Lbe22;
Lbe75:
	;
}
