extern int menu_clicked;
extern int mouse_present;
/* Menu of consecutive messages with enabled flags laid out in columns; returns the chosen item index. */
menu_select(win, first_msg, enabled, x0, y0, col_width, rows, color, sel)
char *win;
char *enabled;
{
	int item;
	int n;
	char labels[405];
	int x;
	int y;
	char x413[1];
	n = 0;
	item = 0;
L4812:
	if (*(int *)(enabled + (item << 1)) == -1) goto L4945;
	if (*(int *)(enabled + (item << 1)) == 1) {
	x = (((n / rows) * col_width) + x0);
	y = ((n % rows) + y0);
	set_cursor(win, x, y);
	get_message((first_msg + item), ((n * 25) + labels));
	if ((!mouse_present) && (sel == n)) {
	print_string(win, ((n * 25) + labels), (0 - color));
	} else {
	print_string_hi(win, ((n * 25) + labels), 3);
	}
	*(int *)(labels + ((n << 1) + 375)) = item;
	set_click_region(n, ((unsigned char)win[2] + x), ((unsigned char)win[3] + y), (((strlen(((n * 25) + labels)) + (unsigned char)win[2]) + x) - 1), ((unsigned char)win[3] + y));
	n++;
	}
	item++;
	goto L4812;
L4945:
	set_click_region(n, 255, 0, 0, 0);
L4958:
	if (!mouse_present) {
	set_cursor(win, (((sel / rows) * col_width) + x0), ((sel % rows) + y0));
	print_string(win, ((sel * 25) + labels), (0 - color));
	}
	item = get_menu_input(21534, 13720);
	if (menu_clicked != 1) goto L49cc;
	sel = item;
	item = 5;
	goto L4b53;
L49cc:
	switch (item) {
case 1:
	if ((sel - rows) >= 0) {
	set_cursor(win, (((sel / rows) * col_width) + x0), ((sel % rows) + y0));
	print_string_hi(win, ((sel * 25) + labels), 3);
	sel -= rows;
	}
	goto L4b53;
case 2:
	if ((sel % rows) > 0) {
	set_cursor(win, (((sel / rows) * col_width) + x0), ((sel % rows) + y0));
	print_string_hi(win, ((sel * 25) + labels), 3);
	sel--;
	}
	goto L4b53;
case 3:
	if ((sel + rows) < n) {
	set_cursor(win, (((sel / rows) * col_width) + x0), ((sel % rows) + y0));
	print_string_hi(win, ((sel * 25) + labels), 3);
	sel += rows;
	}
	goto L4b53;
case 4:
	if (((sel % rows) < (rows - 1)) && ((sel + 1) < n)) {
	set_cursor(win, (((sel / rows) * col_width) + x0), ((sel % rows) + y0));
	print_string_hi(win, ((sel * 25) + labels), 3);
	sel++;
	}
	goto L4b53;
	}
L4b53:
	if (item != 5) goto L4958;
	return *(int *)(labels + ((sel << 1) + 375));
}
