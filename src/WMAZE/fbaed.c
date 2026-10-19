#asm
	extrn play_sound_:near
	extrn set_bitfield_:near
#endasm
extern int cell_event_index;
fbaed()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0fch
#endasm
	l6 = extract_bits(l4, 0, 3);
	l8 = extract_bits(l4, 3, 3);
	l10 = extract_bits(l4, 6, 4);
	l2 = (((l10 << 6) + (l8 << 3)) + l6);
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,0ffh,030h,0b8h,004h,000h
	db 050h,0ffh,076h,0feh,0a1h,0aah,04fh,005h,0f8h,001h,050h
	call set_bitfield_
	db 083h,0c4h,008h
#endasm
	rsi = cell_event_index;
#asm
	db 08bh,01eh,0a8h,04fh,08ah,080h,030h,006h,02ah,0e4h,050h,0b8h,002h,000h,050h,0ffh
	db 076h,0feh,0a1h,0aah,04fh,005h,078h,003h,050h
	call set_bitfield_
	db 083h,0c4h,008h
#endasm
	if (extract_bits(l4, 10, 1) != 1) goto Lbbb2;
	redraw_maze_view();
Lbbb2:
	;
#asm
lbbb2:
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,083h,0b8h,020h,001h,000h
	db 07eh,008h,0ffh,0b0h,020h,001h
	call play_sound_
	db 059h
#endasm
Lbbcc:
	set_event_flags(extract_bits(l4, 11, 2));
}
