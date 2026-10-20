/* Print a string centered on a 40-column row. */
print_centered(win, str, row, color)
{
	set_cursor(win, (20 - ((strlen(str) + 1) / 2)), row);
	if (color < 16) goto L0bbe;
	print_string_hi(win, str, (color + -15));
	goto L0bcd;
L0bbe:
	print_string(win, str, color);
L0bcd:
	;
}
