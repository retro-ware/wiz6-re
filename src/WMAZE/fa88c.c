#asm
	extrn extract_bits_:near
	extrn play_sound_:near
	extrn set_bit_:near
	extrn test_bit_:near
#endasm
set_flag_event()
{
	int l2;
	int l4;
	int l6;
	int l8;
	register int rsi;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,080h,0b8h,030h,006h,000h,076h,00bh,08ah
	db 080h,030h,006h,02ah,0e4h,050h
	call play_sound_
	db 059h
#endasm
La8ad:
	;
#asm
la8ad:
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0feh
#endasm
	l6 = extract_bits(l2, 15, 1);
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,0ffh,030h,0a1h,03ch,036h
	db 08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h,0ech,04eh,050h
	call test_bit_
	db 083h,0c4h,004h,08bh,0c8h,08bh,046h,0fah,03bh,0c8h,075h,02fh,0a1h,0e8h,04eh,0d1h
	db 0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,0ffh,0b0h,020h,001h,0a1h,03ch,036h,08bh,0d0h
	db 0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h,0ech,04eh,050h
	call test_bit_
	db 083h,0c4h,004h,08bh,0c8h,08bh,046h,0fah,03bh,0c8h,074h,005h
#endasm
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
