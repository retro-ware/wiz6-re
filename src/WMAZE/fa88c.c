#asm
	extrn extract_bits_:near
	extrn set_bit_:near
	extrn test_bit_:near
#endasm
extern char *g4fa8;
extern int cell_event_index;
extern int game_state_arg;
set_flag_event()
{
	int l2;
	int l4;
	int l6;
	int l8;
	if ((unsigned)(g4fa8 + cell_event_index)[1584] <= 0) goto La8ad;
	play_sound((unsigned char)(g4fa8 + cell_event_index)[1584]);
La8ad:
	l2 = *(int *)((g4fa8 + (cell_event_index << 1)) + 576);
	l6 = extract_bits(l2, 15, 1);
	if (test_bit(((game_state_arg * 10) + 20204), *(int *)(g4fa8 + (cell_event_index << 1))) != l6) goto La92f;
	if (test_bit(((game_state_arg * 10) + 20204), *(int *)((g4fa8 + (cell_event_index << 1)) + 288)) == l6) goto La934;
La92f:
	return;
La934:
	l4 = extract_bits(l2, 0, 8);
	l8 = extract_bits(l2, 8, 4);
#asm
	db 0b8h,002h,000h,050h,0b8h,00ch,000h,050h,0ffh,076h,0feh
	call extract_bits_
	db 083h,0c4h,006h,0e9h,080h,000h
#endasm
#asm
la970:
	db 0b8h,000h,000h,050h,0ffh,076h,0fch,08bh,046h,0f8h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h
	db 003h,0c2h,0d1h,0e0h,005h,0ech,04eh,050h
	call set_bit_
	db 083h,0c4h,006h,0ebh,072h
#endasm
#asm
la990:
	db 0b8h,001h,000h,050h,0ffh,076h,0fch,08bh,046h,0f8h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h
	db 003h,0c2h,0d1h,0e0h,005h,0ech,04eh,050h
	call set_bit_
	db 083h,0c4h,006h,0ebh,052h
#endasm
#asm
la9b0:
	db 0ffh,076h,0fch,08bh,046h,0f8h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h
	db 005h,0ech,04eh,050h
	call test_bit_
	db 083h,0c4h,004h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c2h,050h,0ffh,076h,0fch
	db 08bh,046h,0f8h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h,0ech,04eh
	db 050h
	call set_bit_
	db 083h,0c4h,006h,0ebh,012h
#endasm
La9f0:
	;
#asm
la9f0:
	db 03dh,000h,000h,075h,003h,0e9h,078h,0ffh
la9f8:
	db 03dh,001h,000h,074h,093h,03dh,002h,000h,074h,0aeh
#endasm
Laa02:
	if (extract_bits(l2, 14, 1) != 1) goto Laa4d;
	set_bit(((l8 * 10) + 13304), l4, test_bit(((l8 * 10) + 20204), l4));
Laa4d:
	return;
}
