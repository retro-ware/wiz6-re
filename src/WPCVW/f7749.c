#asm
	extrn print_message_:near
	extrn set_cursor_:near
#endasm
extern int realm_colors[];
draw_spell_list(p4, p6, p8, p10, p12)
char *p4;
{
	register int rsi;
	register int rdi;
	draw_spell_list_frame(p4, 0);
	defer_window_draw(p4);
	rsi = -3;
L7765:
	if ((p10 + rsi) < 0) goto L77ed;
#asm
l776f:
	db 03bh,046h,00eh,07ch,003h
#endasm
	goto L77ed;
L7777:
	;
#asm
l7777:
	db 08bh,0c6h,040h,040h,040h,050h,0b8h,001h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,083h,07eh,00ch,001h,075h,011h
#endasm
	if (rsi) goto L77a1;
#asm
	db 08bh,046h,008h,0d1h,0e0h,08bh,0d8h,08bh,087h,004h,000h,0ebh,003h
#endasm
L77a1:
	;
#asm
l77a1:
	db 0b8h,012h,000h
#endasm
L77a4:
	;
#asm
l77a4:
	db 050h,0ffh,076h,004h,08bh,046h,00ah,003h,0c6h,0d1h,0e0h,08bh,0f8h,08bh,05eh,010h
	db 08bh,001h,005h,0a0h,00fh,050h
	call print_message_
	db 083h,0c4h,006h
#endasm
	if (p12 != 1) goto L77ed;
	if (rsi) goto L77ed;
L77ca:
	if ((unsigned)p4[6] >= 18) goto L77ed;
	put_char(p4, 32, realm_colors[p8]);
	goto L77ca;
L77ed:
	rsi++;
#asm
	db 083h,0feh,003h,07fh,003h
#endasm
	goto L7765;
L77f6:
	resume_window_draw(p4);
	refresh_window(p4);
}
