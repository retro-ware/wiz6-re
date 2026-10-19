#asm
	extrn extract_bits_:near
#endasm
extern int party_cell_x;
extern int party_cell_y;
extern int party_level;
/* Find a lock event at the party position and facing; -1 if none. */
find_lock_event()
{
	int ev;
	register int rsi;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,036h,09ch,04fh,08ah,080h,0c0h,006h,02ah,0e4h,089h,046h
	db 0feh
#endasm
L5100:
	if ((ev = find_maze_event(party_cell_x, party_cell_y, party_level, ev)) == -1) goto L5176;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,0f0h,080h,0b8h,060h,003h,007h,075h,047h,0b8h,002h,000h
	db 050h,0a1h,09ah,04fh,0d1h,0e0h,050h,0d1h,0e6h,0ffh,0b0h,040h,002h
	call extract_bits_
	db 083h,0c4h,006h,03dh,001h,000h,074h,024h,0b8h,002h,000h,050h,0a1h,09ah,04fh,0d1h
	db 0e0h,050h,08bh,046h,0feh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,0ffh,0b0h,040h
	db 002h
	call extract_bits_
	db 083h,0c4h,006h,03dh,002h,000h,075h,008h
#endasm
L5169:
	return ev;
L5171:
	ev++;
	goto L5100;
L5176:
	return -1;
}
