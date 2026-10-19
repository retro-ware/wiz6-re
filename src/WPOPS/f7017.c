#asm
	extrn print_string_:near
	extrn print_string_hi_:near
#endasm
extern char pc_item_count[];
extern char pc_item_icon[];
draw_item_list(win, member, pos, highlight, p12, p14)
char *win;
char *p14;
{
	register int rsi;
	draw_combat_list_box(win, 0);
	defer_window_draw(win);
	rsi = -2;
L7033:
	if (((pos + rsi) < 0) || ((unsigned char)pc_item_count[(432 * member)] <= (pos + rsi))) goto L71a1;
	set_cursor(win, 2, (rsi + 2));
	if ((highlight != 1) || (rsi)) goto L7102;
#asm
l707b:
	db 0b8h,003h,000h,050h,08bh,046h,008h,003h,0c6h,0b9h,004h,000h,0d3h,0e0h,08bh,0c8h
	db 08bh,046h,00ch,003h,0c1h,050h,0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h
#endasm
	if (*(int *)(p14 + ((pos + rsi) << 1)) <= 0) goto L70e6;
L70ab:
	if ((unsigned)win[6] >= 15) goto L70c5;
	put_char(win, 32, 3);
	goto L70ab;
L70c5:
	print_int(win, *(int *)(p14 + ((pos + rsi) << 1)), 3, 1);
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
	db 083h,0c4h,006h
#endasm
	if (*(int *)(p14 + ((pos + rsi) << 1)) <= 0) goto L7163;
	set_cursor(win, 15, (rsi + 2));
	print_int(win, *(int *)(p14 + ((pos + rsi) << 1)), 3, 18);
L7163:
	set_cursor(win, 18, (rsi + 2));
	put_char_hi(win, (unsigned char)(((unsigned char)pc_item_icon[((432 * member) + ((pos + rsi) << 3))] + 1)), 4);
L71a1:
	rsi++;
	if (rsi <= 2) goto L7033;
	resume_window_draw(win);
	refresh_window(win);
}
