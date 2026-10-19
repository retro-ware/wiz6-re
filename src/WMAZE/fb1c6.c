#asm
	extrn extract_bits_:near
	extrn f467b_:near
	extrn set_event_flags_:near
#endasm
extern int cell_event_index;
extern int g4338;
extern int g4354;
extern int game_state;
encounter_event()
{
	register int rsi;
#asm
	db 0b8h,001h,000h,050h,0b8h,003h,000h,050h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh
	db 01eh,0a8h,04fh,0ffh,0b0h,040h,002h
	call extract_bits_
	db 083h,0c4h,006h,03dh,001h,000h,075h,01bh
#endasm
	rsi = cell_event_index;
#asm
	db 08bh,01eh,0a8h,04fh,08ah,080h,030h,006h,02ah,0e4h,050h
	call f467b_
	db 059h,08bh,01eh,084h,04fh,089h,007h
#endasm
	goto Lb218;
Lb204:
	;
#asm
lb204:
	db 08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h,030h,006h,02ah,0e4h,08bh,01eh
	db 084h,04fh,089h,007h
#endasm
Lb218:
	g4338 = 1;
	g4354 = 1;
	game_state = 10;
#asm
	db 0b8h,002h,000h,050h,0b8h,004h,000h,050h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh
	db 01eh,0a8h,04fh,0ffh,0b0h,040h,002h
	call extract_bits_
	db 083h,0c4h,006h,050h
	call set_event_flags_
	db 059h
#endasm
	cell_event_index++;
}
