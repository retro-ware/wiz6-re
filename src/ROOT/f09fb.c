#asm
	extrn fill_window_:near
#endasm
erase_window(win, no_defer)
{
	if (no_defer) goto L0a0b;
	defer_window_draw(win);
L0a0b:
	;
#asm
l0a0b:
	db 0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b0h,01eh,08bh,04eh,004h,03bh,00eh,042h
	db 033h,075h,002h,0b0h,01ch
#endasm
L0a20:
	;
#asm
l0a20:
	db 02ah,0e4h,050h,051h
	call fill_window_
	db 083h,0c4h,008h
#endasm
	refresh_window(win);
	if (no_defer) goto L0a3e;
	resume_window_draw(win);
L0a3e:
	;
}
