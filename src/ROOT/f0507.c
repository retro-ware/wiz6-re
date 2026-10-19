#asm
	extrn print_string_hi_:near
	extrn strlen_:near
#endasm
/* Print a long right-aligned in a field of the given width. */
print_long(win, value, p8, width, color)
{
	char buf[80];
	long_to_string(value, p8, buf);
L051d:
	if ((strlen(buf) - width) >= 0) goto L055b;
	if (color < 16) goto L0546;
	put_char_hi(win, 32, (color + -15));
	goto L0556;
L0546:
	put_char(win, 32, color);
L0556:
	width--;
	goto L051d;
L055b:
	if (color < 16) goto L0584;
#asm
	db 08bh,046h,00ch,005h,0f1h,0ffh,050h,08dh,046h,0b0h,050h
	call strlen_
	db 059h,02bh,046h,00ah,08dh,04eh,0b0h,003h,0c1h,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,0ebh,01dh
#endasm
L0584:
	print_string(win, ((strlen(buf) - width) + buf), color);
L05a1:
	;
}
