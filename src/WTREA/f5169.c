extern char *main_window;
extern int menu_clicked;
extern int mouse_present;
chest_menu_select(win, first_msg, enabled, x0, y0, col_width, rows, color, with_cancel)
char *win;
char *enabled;
{
	int key;
	int n;
	int sel;
	char labels[255];
	char x261[8];
	int l271;
	char x271[8];
	int l281;
	int l283;
	int l285;
	int l287;
	int l289;
	char x289[1];
	if (with_cancel != 1) goto L51dd;
	l283 = (unsigned char)main_window[6];
	l285 = (unsigned char)main_window[7];
	get_message(2027, &l271);
	get_message(2028, &l281);
	if (mouse_present != 1) goto L51c7;
	print_string_hi(main_window, &l271, 3);
	goto L51dd;
L51c7:
	print_string(main_window, &l281, (0 - color));
L51dd:
	n = 0;
	key = 0;
L51e7:
	if (*(int *)(enabled + (key << 1)) == -1) goto L530e;
	if (*(int *)(enabled + (key << 1)) != 1) goto L5308;
	l287 = (((n / rows) * col_width) + x0);
	l289 = ((n % rows) + y0);
	set_cursor(win, l287, l289);
	get_message((first_msg + key), ((n * 15) + labels));
	if (((mouse_present) || (with_cancel)) || (n)) goto L5286;
	print_string(win, ((n * 15) + labels), (0 - color));
	goto L52a5;
L5286:
	print_string_hi(win, ((n * 15) + labels), 3);
L52a5:
	*(int *)(labels + ((n << 1) + 225)) = key;
	set_click_region(n, ((unsigned char)win[2] + l287), ((unsigned char)win[3] + l289), (((strlen(((n * 15) + labels)) + (unsigned char)win[2]) + l287) - 1), ((unsigned char)win[3] + l289));
	n++;
L5308:
	key++;
	goto L51e7;
L530e:
	set_click_region(n, 255, 0, 0, 0);
	if (with_cancel != 1) goto L5382;
	set_click_region(n, ((unsigned char)main_window[2] + l283), ((unsigned char)main_window[3] + l285), (((strlen(&l281) + (unsigned char)main_window[2]) + l283) - 1), ((unsigned char)main_window[3] + l285));
	set_click_region((n + 1), 255, 0, 0, 0);
L5382:
	sel = (with_cancel == 1 ? -1 : 0);
L5391:
	if (mouse_present) goto L540e;
	if (sel != -1) goto L53c8;
	set_cursor(main_window, l283, l285);
	print_string(main_window, &l281, (0 - color));
	goto L540e;
L53c8:
	set_cursor(win, (((sel / rows) * col_width) + x0), ((sel % rows) + y0));
	print_string(win, ((sel * 15) + labels), (0 - color));
L540e:
	key = get_chest_input(20670, 13720);
	if (menu_clicked != 1) goto L543e;
	sel = (key < n ? key : -1);
	key = 5;
	goto L55df;
L543e:
	switch (key) {
case 1:
	if ((sel == -1) || ((sel - rows) < 0)) goto L5482;
	print_option_cell(win, sel, col_width, rows, x0, y0, ((sel * 15) + labels));
	sel -= rows;
L5482:
	goto L55df;
case 2:
	if (sel == -1) goto L54fd;
	if ((sel % rows) <= 0) goto L54c8;
	print_option_cell(win, sel, col_width, rows, x0, y0, ((sel * 15) + labels));
	sel--;
	goto L54fd;
L54c8:
	if (with_cancel != 1) goto L54fd;
	print_option_cell(win, sel, col_width, rows, x0, y0, ((sel * 15) + labels));
	sel = -1;
L54fd:
	goto L55df;
case 3:
	if ((sel == -1) || ((sel + rows) >= n)) goto L5541;
	print_option_cell(win, sel, col_width, rows, x0, y0, ((sel * 15) + labels));
	sel += rows;
L5541:
	goto L55df;
case 4:
	if (sel != -1) goto L5576;
	set_cursor(main_window, l283, l285);
	print_string_hi(main_window, &l271, 3);
	sel = 0;
	goto L55bd;
L5576:
	if (((sel % rows) >= (rows - 1)) || ((sel + 1) >= n)) goto L55bd;
	print_option_cell(win, sel, col_width, rows, x0, y0, ((sel * 15) + labels));
	sel++;
L55bd:
	goto L55df;
	}
L55df:
	if (key != 5) goto L5391;
	if (sel != -1) goto L55f6;
	return -1;
L55f6:
	return *(int *)(labels + ((sel << 1) + 225));
}
