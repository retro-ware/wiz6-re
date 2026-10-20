extern char pc_item_count[];
extern char pc_swag_count[];
extern int item_row_color[];
extern int menu_clicked;
extern int mouse_present;
/* Let the player pick an item from the inventory (p12 0) or swag (p12 1) list; -1 for none. */
choose_item(sheet, win, title_msg, member, swag)
char *sheet;
char *win;
{
	int l2;
	char x2[2];
	int l6;
	int sel;
	char x8[78];
	int l88;
	char x88[8];
	int l98;
	int l100;
	int l102;
	char x102[74];
	int count;
	if (!swag) {
	draw_inventory_panel(sheet, member);
	count = (unsigned char)pc_item_count[(432 * member)];
	} else {
	count = (unsigned char)pc_swag_count[(432 * member)];
	}
	fill_window(win, 32, 3, 0);
	refresh_window(win);
	get_message(title_msg, &l88);
	get_message(401, &l98);
	set_cursor(win, 2, 1);
	print_string_hi(win, &l88, 3);
	win[6]++;
	l100 = (unsigned char)win[6];
	l102 = (unsigned char)win[7];
	if (mouse_present == 1) {
	print_string_hi(win, &l98, 3);
	} else {
	print_string(win, &l98, -5);
	}
	sel = -1;
	l2 = 0;
	goto L6108;
L6092:
	if (!swag) {
	set_click_region(l2, ((unsigned char)sheet[2] + 22), (((unsigned char)sheet[3] + l2) + 9), ((unsigned char)sheet[2] + 37), (((unsigned char)sheet[3] + l2) + 9));
	} else {
	set_click_region(l2, ((unsigned char)sheet[2] + 2), (((unsigned char)sheet[3] + l2) + 3), ((unsigned char)sheet[2] + 17), (((unsigned char)sheet[3] + l2) + 3));
	}
	l2++;
L6108:
	if (l2 < count) goto L6092;
	set_click_region(count, ((unsigned char)win[2] + l100), ((unsigned char)win[3] + l102), (((strlen(&l98) + (unsigned char)win[2]) + l100) - 1), ((unsigned char)win[3] + l102));
	set_click_region((count + 1), 255, 0, 0, 0);
L6167:
	if (mouse_present) goto L61fb;
	if (sel != -1) goto L6199;
	set_cursor(win, l100, l102);
	print_string(win, &l98, -5);
	goto L61fb;
L6199:
	if (swag) goto L61ce;
	set_cursor(sheet, 22, (sel + 9));
	print_string(sheet, ((sel << 4) + 21982), -5);
	goto L61fb;
L61ce:
	set_cursor(sheet, 2, (sel + 3));
	print_string(sheet, ((sel << 4) + 22162), -5);
L61fb:
	l6 = get_menu_input(21822, 13720);
	if (menu_clicked != 1) goto L622c;
	sel = (l6 < count ? l6 : -1);
	l6 = 5;
	goto L62f5;
L622c:
	switch (l6) {
case 2:
	if (sel != -1) goto L625f;
	set_cursor(win, l100, l102);
	print_string_hi(win, &l98, 3);
	sel = 0;
	goto L6289;
L625f:
	unhighlight_item_row(sheet, sel, item_row_color[sel], swag);
	if ((sel - 1) < 0) goto L6284;
	sel--;
	goto L6289;
L6284:
	sel = -1;
L6289:
	goto L62f5;
case 4:
	if (sel != -1) goto L62b8;
	set_cursor(win, l100, l102);
	print_string_hi(win, &l98, 3);
	sel = 0;
	goto L62e6;
L62b8:
	unhighlight_item_row(sheet, sel, item_row_color[sel], swag);
	if ((sel + 1) >= count) goto L62e1;
	sel++;
	goto L62e6;
L62e1:
	sel = -1;
L62e6:
	goto L62f5;
	}
L62f5:
	if (l6 != 5) goto L6167;
	if (!swag) {
	draw_inventory_panel(sheet, member);
	}
	return sel;
}
