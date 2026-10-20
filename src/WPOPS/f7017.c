#asm
	extrn defer_window_draw_:near
#endasm
extern char pc_item_count[];
extern char pc_item_icon[];
draw_item_list(win, member, pos, highlight, p12, p14)
char *win;
char *p12;
char *p14;
{
	register int rsi;
	draw_combat_list_box(win, 0);
#asm
	db 0ffh,076h,004h
	call defer_window_draw_
	db 059h,0beh,0feh,0ffh
#endasm
L7033:
	if (((pos + rsi) < 0) || ((unsigned char)pc_item_count[(432 * member)] <= (pos + rsi))) goto L71a1;
	set_cursor(win, 2, (rsi + 2));
	if ((highlight != 1) || (rsi)) goto L7102;
	print_string(win, (p12 + ((pos + rsi) << 4)), 3);
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
	print_string_hi(win, (p12 + ((pos + rsi) << 4)), 3);
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
