#asm
	extrn show_message_text_m_:near
#endasm
extern int g4f8a;
extern int game_state;
extern int party_facing;
do_message_event()
{
	int l2;
	char x2[2];
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0feh
#endasm
	if (extract_bits(l2, 14, 1) != 1) goto La3d4;
	g4f8a = extract_bits(l2, 12, 2);
	if (g4f8a == party_facing) goto La3d4;
	return;
La3d4:
	;
#asm
la3d4:
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,083h,038h,000h,07eh,00ch
	db 0b8h,000h,000h,050h,0ffh,030h
	call show_message_text_m_
	db 083h,0c4h,004h
#endasm
La3f0:
	if (extract_bits(l2, 8, 1) != 1) goto La408;
	return;
La408:
	;
#asm
la408:
	db 08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h,030h,006h,02ah,0e4h,0a3h,0c4h
	db 043h
#endasm
	game_state = 21;
	return;
}
