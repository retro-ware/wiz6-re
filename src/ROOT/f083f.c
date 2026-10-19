#asm
	extrn print_string_hi_:near
#endasm
/* Fetch message N and print it into a window with a color. */
print_message(msg, win, color)
{
	char x0[78];
	int buf;
	get_message(msg, &buf);
	if (color < 16) goto L086e;
#asm
	db 08bh,046h,008h,005h,0f1h,0ffh,050h,08dh,046h,0b0h,050h,0ffh,076h,006h
	call print_string_hi_
	db 083h,0c4h,006h,0ebh,010h
#endasm
L086e:
	print_string(win, &buf, color);
L087e:
	;
}
