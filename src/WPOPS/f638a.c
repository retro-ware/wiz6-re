#asm
	extrn print_message_:near
	extrn set_cursor_:near
#endasm
extern int realm_colors[];
draw_combat_spell_list(p4, p6, p8, p10, p12)
char *p4;
{
	register int rsi;
	register int rdi;
	draw_combat_list_box(p4, 0);
	defer_window_draw(p4);
	rsi = -2;
L63a6:
	if ((p10 + rsi) < 0) goto L642d;
#asm
l63b0:
	db 03bh,046h,00eh,07ch,003h
#endasm
	goto L642d;
L63b8:
	;
#asm
l63b8:
	db 08bh,0c6h,040h,040h,050h,0b8h,002h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,083h,07eh,00ch,001h,075h,011h
#endasm
	if (rsi) goto L63e1;
#asm
	db 08bh,046h,008h,0d1h,0e0h,08bh,0d8h,08bh,087h,004h,000h,0ebh,003h
#endasm
L63e1:
	;
#asm
l63e1:
	db 0b8h,012h,000h
#endasm
L63e4:
	;
#asm
l63e4:
	db 050h,0ffh,076h,004h,08bh,046h,00ah,003h,0c6h,0d1h,0e0h,08bh,0f8h,08bh,05eh,010h
	db 08bh,001h,005h,0a0h,00fh,050h
	call print_message_
	db 083h,0c4h,006h
#endasm
	if (p12 != 1) goto L642d;
	if (rsi) goto L642d;
L640a:
	if ((unsigned)p4[6] >= 17) goto L642d;
	put_char(p4, 32, realm_colors[p8]);
	goto L640a;
L642d:
	rsi++;
#asm
	db 083h,0feh,002h,07fh,003h
#endasm
	goto L63a6;
L6436:
	resume_window_draw(p4);
	refresh_window(p4);
}
