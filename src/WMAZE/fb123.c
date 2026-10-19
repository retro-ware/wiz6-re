#asm
	extrn extract_bits_:near
	extrn set_event_flags_:near
	extrn show_message_text_m_:near
#endasm
extern int g4f8a;
extern int party_facing;
fb123()
{
	int l2;
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0feh
#endasm
	if (extract_bits(l2, 6, 1) != 1) goto Lb171;
	g4f8a = extract_bits(l2, 4, 2);
	if (g4f8a == party_facing) goto Lb171;
	return;
Lb171:
	;
#asm
lb171:
	db 0b8h,001h,000h,050h,0b8h,002h,000h,050h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh
	db 01eh,0a8h,04fh,0ffh,0b0h,040h,002h
	call extract_bits_
	db 083h,0c4h,006h,050h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,0ffh
	db 030h
	call show_message_text_m_
	db 083h,0c4h,004h,0b8h,002h,000h,050h,0b8h,000h,000h,050h,0a1h,0e8h,04eh,0d1h,0e0h
	db 08bh,0f0h,08bh,01eh,0a8h,04fh,0ffh,0b0h,040h,002h
	call extract_bits_
	db 083h,0c4h,006h,050h
	call set_event_flags_
	db 059h
#endasm
	return;
}
