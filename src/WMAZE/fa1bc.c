#asm
	extrn set_bit_:near
#endasm
set_event_flags(p4)
{
	register int rsi;
	if (p4 <= 0) goto La227;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,080h,0b8h,0a0h,005h,000h,076h,052h,0b8h
	db 001h,000h,050h,08ah,080h,0a0h,005h,02ah,0e4h,050h,0a1h,03ch,036h,08bh,0d0h,0d1h
	db 0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,005h,0ech,04eh,050h
	call set_bit_
	db 083h,0c4h,006h
#endasm
	if (p4 <= 1) goto La227;
#asm
	db 0b8h,001h,000h,050h,08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h,0a0h,005h
	db 02ah,0e4h,050h,0a1h,03ch,036h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h
	db 005h,0f8h,033h,050h
	call set_bit_
	db 083h,0c4h,006h
#endasm
La227:
	;
}
