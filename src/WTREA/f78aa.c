#asm
	extrn print_message_:near
	extrn set_cursor_:near
#endasm
extern int realm_colors[];
draw_chest_spell_list(p4, p6, p8, p10, p12)
char *p4;
{
	register int rsi;
	register int rdi;
	draw_chest_list_box(p4, 0);
	defer_window_draw(p4);
	rsi = -2;
L78c6:
	if ((p10 + rsi) < 0) goto L794d;
#asm
l78d0:
	db 03bh,046h,00eh,07ch,003h
#endasm
	goto L794d;
L78d8:
	;
#asm
l78d8:
	db 08bh,0c6h,040h,040h,050h,0b8h,002h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,083h,07eh,00ch,001h,075h,011h
#endasm
	if (rsi) goto L7901;
#asm
	db 08bh,046h,008h,0d1h,0e0h,08bh,0d8h,08bh,087h,004h,000h,0ebh,003h
#endasm
L7901:
	;
#asm
l7901:
	db 0b8h,012h,000h
#endasm
L7904:
	;
#asm
l7904:
	db 050h,0ffh,076h,004h,08bh,046h,00ah,003h,0c6h,0d1h,0e0h,08bh,0f8h,08bh,05eh,010h
	db 08bh,001h,005h,0a0h,00fh,050h
	call print_message_
	db 083h,0c4h,006h
#endasm
	if (p12 != 1) goto L794d;
	if (rsi) goto L794d;
L792a:
	if ((unsigned)p4[6] >= 17) goto L794d;
	put_char(p4, 32, realm_colors[p8]);
	goto L792a;
L794d:
	rsi++;
#asm
	db 083h,0feh,002h,07fh,003h
#endasm
	goto L78c6;
L7956:
	resume_window_draw(p4);
	refresh_window(p4);
}
