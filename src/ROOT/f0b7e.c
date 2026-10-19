#asm
	extrn print_string_hi_:near
#endasm
/* Print a string centered on a 40-column row. */
print_centered(win, str, row, color)
{
	set_cursor(win, (20 - ((strlen(str) + 1) / 2)), row);
	if (color < 16) goto L0bbe;
#asm
	db 08bh,046h,00ah,005h,0f1h,0ffh,050h,0ffh,076h,006h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,0ebh,00fh
#endasm
L0bbe:
	print_string(win, str, color);
L0bcd:
	;
}
