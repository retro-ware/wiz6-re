extern int g4fac;
extern int menu_clicked;
extern int mouse_present;
extern int picture_win;
/* Draw a grid menu of messages from msgbase where enabled, let the player pick, return the item. */
run_menu(win, msgbase, enabled, x0, y0, row_step, cols, color, sel)
char *win;
{
	int item;
	int count;
	char texts[330];
	int x;
	int y;
	register int rsi;
	defer_window_draw(win);
	count = 0;
	item = 0;
L47d9:
	;
#asm
l47d9:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f0h,08bh,05eh,008h,083h,038h,0ffh,075h,003h
#endasm
	goto L48d5;
L47eb:
	;
#asm
l47eb:
	db 083h,038h,001h,074h,003h
#endasm
	goto L48cf;
L47f3:
	x = (((count / cols) * row_step) + x0);
	y = ((count % cols) + y0);
	set_cursor(win, x, y);
	get_message((msgbase + item), ((count * 20) + texts));
	print_string_hi(win, ((count * 20) + texts), 3);
	*(int *)(texts + ((count << 1) + 300)) = item;
	set_click_region(count, ((unsigned char)win[2] + x), ((unsigned char)win[3] + y), (((strlen(((count * 20) + texts)) + (unsigned char)win[2]) + x) - 1), ((unsigned char)win[3] + y));
	count++;
L48cf:
	item++;
	goto L47d9;
L48d5:
	set_click_region(count, 255, 0, 0, 0);
	resume_window_draw(win);
	refresh_all_windows();
	drv_op_c2(g4fac);
	drv_op_c2(picture_win);
L4902:
	if (mouse_present) goto L4953;
	set_cursor(win, (((sel / cols) * row_step) + x0), ((sel % cols) + y0));
	print_string(win, ((sel * 20) + texts), (0 - color));
L4953:
	item = get_menu_choice_animated(20582, 13720);
	if (menu_clicked != 1) goto L4976;
	sel = item;
	item = 5;
	goto L4aa8;
L4976:
	switch (item) {
case 1:
	if ((sel - cols) < 0) goto L49b8;
	redraw_menu_item(win, sel, row_step, cols, x0, y0, ((sel * 20) + texts));
	sel -= cols;
L49b8:
	goto L4aa8;
case 2:
	if ((sel % cols) <= 0) goto L49fa;
	redraw_menu_item(win, sel, row_step, cols, x0, y0, ((sel * 20) + texts));
	sel--;
L49fa:
	goto L4aa8;
case 3:
	if ((sel + cols) >= count) goto L4a3c;
	redraw_menu_item(win, sel, row_step, cols, x0, y0, ((sel * 20) + texts));
	sel += cols;
L4a3c:
	goto L4aa8;
case 4:
	if ((sel % cols) >= (cols - 1)) goto L4a89;
	if ((sel + 1) >= count) goto L4a89;
	redraw_menu_item(win, sel, row_step, cols, x0, y0, ((sel * 20) + texts));
	sel++;
L4a89:
	goto L4aa8;
	}
L4aa8:
	if (item != 5) goto L4902;
	return *(int *)(texts + ((sel << 1) + 300));
}
