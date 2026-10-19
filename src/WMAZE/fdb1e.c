#asm
	extrn check_locked_door_at_:near
	extrn extract_bits_:near
#endasm
extern int party_cell_x;
extern int party_cell_y;
extern int party_level;
handle_locked_door()
{
	int l2;
	register int rsi;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,036h,09ch,04fh,08ah,080h,0c0h,006h,02ah,0e4h,089h,046h
	db 0feh
#endasm
Ldb36:
	l2 = f7bd2(party_cell_x, party_cell_y, party_level, l2);
#asm
	db 03dh,0ffh,0ffh,075h,003h,0e9h,078h,000h
#endasm
Ldb56:
	;
#asm
ldb56:
	db 08bh,01eh,0a8h,04fh,08bh,0f0h,080h,0b8h,060h,003h,003h,075h,00fh,050h
	call check_locked_door_at_
	db 059h,03dh,001h,000h,075h,005h
#endasm
	return;
Ldb72:
	;
#asm
ldb72:
	db 08bh,01eh,0a8h,04fh,08bh,076h,0feh,080h,0b8h,060h,003h,007h,075h,048h,0b8h,002h
	db 000h,050h,0a1h,09ah,04fh,0d1h,0e0h,050h,0d1h,0e6h,0ffh,0b0h,040h,002h
	call extract_bits_
	db 083h,0c4h,006h,03dh,001h,000h,074h,024h,0b8h,002h,000h,050h,0a1h,09ah,04fh,0d1h
	db 0e0h,050h,08bh,046h,0feh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,0ffh,0b0h,040h
	db 002h
	call extract_bits_
	db 083h,0c4h,006h,03dh,002h,000h,075h,009h
#endasm
Ldbbf:
	locked_door_menu(l2);
	return;
Ldbc8:
	l2++;
	goto Ldb36;
Ldbce:
	return;
}
