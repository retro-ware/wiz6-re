#asm
	extrn print_int_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn set_cursor_:near
#endasm
extern char pc_item_count[];
extern char pc_item_icon[];
draw_item_list(win, member, pos, highlight)
char *win;
{
	register int rsi;
	register int rdi;
	draw_combat_list_box(win, 0);
	defer_window_draw(win);
	rsi = -2;
L7033:
	if ((pos + rsi) < 0) goto L71a1;
	if ((unsigned char)pc_item_count[(432 * member)] <= (pos + rsi)) goto L71a1;
	set_cursor(win, 2, (rsi + 2));
	if (highlight != 1) goto L7102;
	if (rsi) goto L7102;
#asm
l707b:
	db 0b8h,003h,000h,050h,08bh,046h,008h,003h,0c6h,0b9h,004h,000h,0d3h,0e0h,08bh,0c8h
	db 08bh,046h,00ch,003h,0c1h,050h,0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h,08bh,046h,008h,003h,0c6h,0d1h,0e0h,08bh,0f8h,08bh,05eh,00eh,083h
	db 039h,000h,07eh,03bh
#endasm
L70ab:
	if ((unsigned)win[6] >= 15) goto L70c5;
	put_char(win, 32, 3);
	goto L70ab;
L70c5:
	;
#asm
l70c5:
	db 0b8h,001h,000h,050h,0b8h,003h,000h,050h,08bh,046h,008h,003h,0c6h,0d1h,0e0h,08bh
	db 0f8h,08bh,05eh,00eh,0ffh,031h,0ffh,076h,004h
	call print_int_
	db 083h,0c4h,008h
#endasm
	goto L7100;
L70e6:
	if ((unsigned)win[6] >= 18) goto L7100;
	put_char(win, 32, 3);
	goto L70e6;
L7100:
	goto L7163;
L7102:
	;
#asm
l7102:
	db 0b8h,003h,000h,050h,08bh,046h,008h,003h,0c6h,0b9h,004h,000h,0d3h,0e0h,08bh,0c8h
	db 08bh,046h,00ch,003h,0c1h,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,08bh,046h,008h,003h,0c6h,0d1h,0e0h,08bh,0f8h,08bh,05eh,00eh,083h
	db 039h,000h,07eh,031h,08bh,0c6h,040h,040h,050h,0b8h,00fh,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,012h,000h,050h,0b8h,003h,000h,050h,08bh,046h,008h,003h,0c6h
	db 0d1h,0e0h,08bh,0f8h,08bh,05eh,00eh,0ffh,031h,0ffh,076h,004h
	call print_int_
	db 083h,0c4h,008h
#endasm
L7163:
	set_cursor(win, 18, (rsi + 2));
	put_char_hi(win, (unsigned char)(((unsigned char)pc_item_icon[((432 * member) + ((pos + rsi) << 3))] + 1)), 4);
L71a1:
	rsi++;
	if (rsi <= 2) goto L7033;
	resume_window_draw(win);
	refresh_window(win);
}
