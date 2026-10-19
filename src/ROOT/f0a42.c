#asm
	extrn put_char_hi_:near
	extrn set_cursor_:near
#endasm
f0a42(p4, p6)
{
	if (p6) goto L0a52;
	defer_window_draw(p4);
L0a52:
	;
#asm
l0a52:
	db 0b8h,000h,000h,050h,0b8h,013h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,003h,000h,050h,0b0h,01fh,08bh,04eh,004h,03bh,00eh,042h,033h
	db 075h,002h,0b0h,01dh
#endasm
L0a74:
	;
#asm
l0a74:
	db 02ah,0e4h,050h,051h
	call put_char_hi_
	db 083h,0c4h,006h
#endasm
	if (p6) goto L0a8b;
	resume_window_draw(p4);
L0a8b:
	;
}
