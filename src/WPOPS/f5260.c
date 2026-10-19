extern int menu_clicked;
extern int mouse_present;
combat_menu_select(win, first_msg, enabled, x0, y0, col_width, rows, color, sel)
char *win;
char *enabled;
{
	int item;
	int n;
	char labels[330];
	int x;
	int y;
	n = 0;
	item = 0;
L5272:
	if (*(int *)(enabled + (item << 1)) == -1) goto L53a5;
	if (*(int *)(enabled + (item << 1)) != 1) goto L539f;
	x = (((n / rows) * col_width) + x0);
	y = ((n % rows) + y0);
	set_cursor(win, x, y);
	get_message((first_msg + item), ((n * 20) + labels));
	if ((mouse_present) || (sel != n)) goto L5315;
	print_string(win, ((n * 20) + labels), (0 - color));
	goto L5338;
L5315:
	print_string_hi(win, ((n * 20) + labels), 3);
L5338:
	*(int *)(labels + ((n << 1) + 300)) = item;
	set_click_region(n, ((unsigned char)win[2] + x), ((unsigned char)win[3] + y), (((strlen(((n * 20) + labels)) + (unsigned char)win[2]) + x) - 1), ((unsigned char)win[3] + y));
	n++;
L539f:
	item++;
	goto L5272;
L53a5:
	set_click_region(n, 255, 0, 0, 0);
L53b8:
	if (mouse_present) goto L5409;
	set_cursor(win, (((sel / rows) * col_width) + x0), ((sel % rows) + y0));
	print_string(win, ((sel * 20) + labels), (0 - color));
L5409:
	item = get_combat_input(17270, 13720);
	if (menu_clicked != 1) goto L542c;
	sel = item;
	item = 5;
	goto L55b3;
L542c:
	switch (item) {
case 1:
	if ((sel - rows) < 0) goto L5487;
	set_cursor(win, (((sel / rows) * col_width) + x0), ((sel % rows) + y0));
	print_string_hi(win, ((sel * 20) + labels), 3);
	sel -= rows;
L5487:
	goto L55b3;
case 2:
	if ((sel % rows) <= 0) goto L54d9;
	set_cursor(win, (((sel / rows) * col_width) + x0), ((sel % rows) + y0));
	print_string_hi(win, ((sel * 20) + labels), 3);
	sel--;
L54d9:
	goto L55b3;
case 3:
	if ((sel + rows) >= n) goto L5534;
	set_cursor(win, (((sel / rows) * col_width) + x0), ((sel % rows) + y0));
	print_string_hi(win, ((sel * 20) + labels), 3);
	sel += rows;
L5534:
	goto L55b3;
case 4:
	if (((sel % rows) >= (rows - 1)) || ((sel + 1) >= n)) goto L5594;
	set_cursor(win, (((sel / rows) * col_width) + x0), ((sel % rows) + y0));
	print_string_hi(win, ((sel * 20) + labels), 3);
	sel++;
L5594:
	goto L55b3;
	}
L55b3:
	if (item != 5) goto L53b8;
	return *(int *)(labels + ((sel << 1) + 300));
}
