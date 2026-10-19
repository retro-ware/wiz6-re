#asm
	extrn set_bit_:near
	extrn show_message_text_:near
#endasm
extern int game_state_arg;
mark_chest_opened()
{
	int l2;
	int l4;
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0feh,083h,0b8h,020h,001h,000h,07eh,00eh,0b8h,000h,000h,050h,0ffh,0b0h,020h
	db 001h
	call show_message_text_
	db 083h,0c4h,004h
#endasm
L8faf:
	l4 = extract_bits(l2, 0, 8);
	set_bit(((game_state_arg * 10) + 20204), l4, 0);
	if (extract_bits(l2, 11, 1) != 1) goto L9015;
	set_bit(((game_state_arg * 10) + 13304), l4, 0);
L9015:
	if ((l4 = extract_bits(l2, 9, 2)) <= 0) goto L9088;
#asm
	db 0b8h,001h,000h,050h,08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h,0a0h,005h
	db 02ah,0e4h,050h,0a1h,03ch,036h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h
	db 005h,0ech,04eh,050h
	call set_bit_
	db 083h,0c4h,006h
#endasm
	if (l4 <= 1) goto L9088;
#asm
	db 0b8h,001h,000h,050h,08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h,0a0h,005h
	db 02ah,0e4h,050h,0a1h,03ch,036h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h
	db 005h,0f8h,033h,050h
	call set_bit_
	db 083h,0c4h,006h
#endasm
L9088:
	;
}
