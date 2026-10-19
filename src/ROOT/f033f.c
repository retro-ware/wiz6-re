clear_window_area(win, col1, row1, col2, row2)
{
	char blanks[80];
	setmem(blanks, 80, 32);
	blanks[((col2 - col1) + 1)] = 0;
	goto L038a;
L0367:
	set_cursor(win, col1, row1);
	print_string(win, blanks, 0);
	row1++;
L038a:
	if (row1 <= row2) goto L0367;
}
