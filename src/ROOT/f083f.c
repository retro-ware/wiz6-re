/* Fetch message N and print it into a window with a color. */
print_message(msg, win, color)
{
	char x0[78];
	int buf;
	get_message(msg, &buf);
	if (color < 16) goto L086e;
	print_string_hi(win, &buf, (color + -15));
	goto L087e;
L086e:
	print_string(win, &buf, color);
L087e:
	;
}
