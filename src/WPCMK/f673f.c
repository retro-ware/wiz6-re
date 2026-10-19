#asm
	extrn print_message_:near
	extrn set_cursor_:near
#endasm
extern int realm_colors[];
draw_spell_list(p4, p6, p8, p10)
char *p4;
{
	register int rsi;
	register int rdi;
	draw_list_box(p4, 0);
	defer_window_draw(p4);
	rsi = -3;
L675b:
	if ((p8 + rsi) < 0) goto L67e3;
#asm
l6765:
	db 03bh,046h,00ch,07ch,003h
#endasm
	goto L67e3;
L676d:
	;
#asm
l676d:
	db 08bh,0c6h,040h,040h,040h,050h,0b8h,001h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,083h,07eh,00ah,001h,075h,011h
#endasm
	if (rsi) goto L6797;
#asm
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,087h,004h,000h,0ebh,003h
#endasm
L6797:
	;
#asm
l6797:
	db 0b8h,012h,000h
#endasm
L679a:
	;
#asm
l679a:
	db 050h,0ffh,076h,004h,08bh,046h,008h,003h,0c6h,0d1h,0e0h,08bh,0f8h,08bh,05eh,00eh
	db 08bh,001h,005h,0a0h,00fh,050h
	call print_message_
	db 083h,0c4h,006h
#endasm
	if (p10 != 1) goto L67e3;
	if (rsi) goto L67e3;
L67c0:
	if ((unsigned)p4[6] >= 18) goto L67e3;
	put_char(p4, 32, realm_colors[p6]);
	goto L67c0;
L67e3:
	rsi++;
#asm
	db 083h,0feh,003h,07fh,003h
#endasm
	goto L675b;
L67ec:
	resume_window_draw(p4);
	refresh_window(p4);
}
