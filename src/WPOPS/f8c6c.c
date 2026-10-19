find_sprite_slot()
{
	register int rsi;
#asm
$20004 equ 1
#endasm
#asm
	db 08bh,01eh,0aah,04fh,08bh,076h,004h,08ah,080h,0e0h,001h,02ah,0e4h,03bh,046h,006h
	db 07fh,022h,005h,007h,000h,03bh,046h,006h,07ch,01ah,08ah,080h,0ech,001h,02ah,0e4h
	db 03bh,046h,008h,07fh,00fh,005h,007h,000h,03bh,046h,008h,07ch,007h
#endasm
	return rsi;
L8ca4:
	return -1;
}
