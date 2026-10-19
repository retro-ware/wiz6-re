/* Redraw menu entry item in its normal colour. */
redraw_menu_item(win, item, row_step, cols, x0, y0, text)
{
	set_cursor(win, (((item / cols) * row_step) + x0), ((item % cols) + y0));
	print_string_hi(win, text, 3);
}
