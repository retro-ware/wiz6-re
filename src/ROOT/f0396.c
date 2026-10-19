/* Print spaces until the cursor reaches the given column. */
pad_to_column(win, col, color)
char *win;
{
	if (color < 16) goto L03c2;
L039f:
	if ((unsigned char)win[6] >= col) goto L03c0;
	put_char_hi(win, 32, (color + -15));
	goto L039f;
L03c0:
	goto L03e0;
L03c2:
	if ((unsigned char)win[6] >= col) goto L03e0;
	put_char(win, 32, 1);
	goto L03c2;
L03e0:
	;
}
