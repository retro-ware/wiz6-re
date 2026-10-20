/* Print a long right-aligned in a field of the given width. */
print_long(win, value, p8, width, color)
{
	char buf[80];
	long_to_string(value, p8, buf);
L051d:
	if ((strlen(buf) - width) >= 0) goto L055b;
	if (color >= 16) {
	put_char_hi(win, 32, (color + -15));
	} else {
	put_char(win, 32, color);
	}
	width--;
	goto L051d;
L055b:
	if (color < 16) goto L0584;
	print_string_hi(win, ((strlen(buf) - width) + buf), (color + -15));
	goto L05a1;
L0584:
	print_string(win, ((strlen(buf) - width) + buf), color);
L05a1:
	;
}
