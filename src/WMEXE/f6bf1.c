#asm
	extrn window_newline_:near
#endasm
extern char *party_picture_win;
/* Print text word-wrapped into the combat message window g4fb6. */
print_wrapped(p4, p6)
{
	int l2;
	char x2[80];
	int l84;
	char *l86;
	register int rsi;
	strcpy(&l84, p4);
	l86 = &l84;
L6c0b:
	if (strlen(l86) <= 0) goto L6cbe;
	l2 = char_index(l86, 32);
#asm
	db 050h,03dh,000h,000h,058h,07dh,007h
#endasm
	strlen(l86);
L6c38:
	;
#asm
l6c38:
	db 089h,046h,0fch,08bh,01eh,0b6h,04fh,08ah,047h,006h,02ah,0e4h,08bh,0c8h,08bh,046h
	db 0fch,003h,0c8h,08bh,0c1h,040h,050h,08ah,007h,02ah,0e4h,08bh,0c8h,058h,03bh,0c1h
	db 07eh,005h,053h
	call window_newline_
	db 059h
#endasm
L6c5f:
	if (party_picture_win[6]) goto L6c6c;
	party_picture_win[6]++;
L6c6c:
	if (l2 < 0) goto L6c9e;
#asm
	db 08bh,05eh,0aah,08bh,076h,0feh,0c6h,000h,000h
#endasm
	print_string(party_picture_win, l86, p6);
	party_picture_win[6]++;
	l86 += l2;
	l86 += 1;
	goto L6cbb;
L6c9e:
	print_string(party_picture_win, l86, p6);
	party_picture_win[6]++;
	*l86 = 0;
L6cbb:
	goto L6c0b;
L6cbe:
	;
}
