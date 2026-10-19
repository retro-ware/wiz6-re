#asm
	extrn print_message_:near
	extrn set_cursor_:near
#endasm
extern int realm_colors[];
/* Draw the scrolling spell list of a realm. */
draw_spell_list(win, member, realm, sel, highlight)
char *win;
{
	register int row;
	register int rdi;
	draw_list_frame_dopt(win, 0);
	defer_window_draw(win);
	row = -2;
L6b59:
	if ((sel + row) < 0) goto L6be0;
#asm
l6b63:
	db 03bh,046h,00eh,07ch,003h
#endasm
	goto L6be0;
L6b6b:
	;
#asm
l6b6b:
	db 08bh,0c6h,040h,040h,050h,0b8h,002h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,083h,07eh,00ch,001h,075h,011h
#endasm
	if (row) goto L6b94;
#asm
	db 08bh,046h,008h,0d1h,0e0h,08bh,0d8h,08bh,087h,004h,000h,0ebh,003h
#endasm
L6b94:
	;
#asm
l6b94:
	db 0b8h,012h,000h
#endasm
L6b97:
	;
#asm
l6b97:
	db 050h,0ffh,076h,004h,08bh,046h,00ah,003h,0c6h,0d1h,0e0h,08bh,0f8h,08bh,05eh,010h
	db 08bh,001h,005h,0a0h,00fh,050h
	call print_message_
	db 083h,0c4h,006h
#endasm
	if (highlight != 1) goto L6be0;
	if (row) goto L6be0;
L6bbd:
	if ((unsigned)win[6] >= 17) goto L6be0;
	put_char(win, 32, realm_colors[realm]);
	goto L6bbd;
L6be0:
	row++;
#asm
	db 083h,0feh,002h,07fh,003h
#endasm
	goto L6b59;
L6be9:
	resume_window_draw(win);
	refresh_window(win);
}
