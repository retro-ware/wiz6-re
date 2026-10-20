/* Print a long right-aligned in a field of the given width. */
#asm
	public print_long_
	extrn long_to_string_:near
	extrn print_string_:near
	extrn print_string_hi_:near
	extrn put_char_:near
	extrn put_char_hi_:near
	extrn strlen_:near
print_long_:
	db 055h,08bh,0ech,083h,0c4h,0b0h,08dh,046h,0b0h,050h,0ffh,076h,008h,0ffh,076h,006h
	call long_to_string_
	db 083h,0c4h,006h
l051d:
	db 08dh,046h,0b0h,050h
	call strlen_
	db 059h,02bh,046h,00ah,07dh,031h,083h,07eh,00ch,010h,07ch,016h,08bh,046h,00ch,005h
	db 0f1h,0ffh,050h,0b8h,020h,000h,050h,0ffh,076h,004h
	call put_char_hi_
	db 083h,0c4h,006h,0ebh,010h
l0546:
	db 0ffh,076h,00ch,0b8h,020h,000h,050h,0ffh,076h,004h
	call put_char_
	db 083h,0c4h,006h
l0556:
	db 0ffh,04eh,00ah,0ebh,0c2h
l055b:
	db 083h,07eh,00ch,010h,07ch,023h,08bh,046h,00ch,005h,0f1h,0ffh,050h,08dh,046h,0b0h
	db 050h
	call strlen_
	db 059h,02bh,046h,00ah,08dh,04eh,0b0h,003h,0c1h,050h,0ffh,076h,004h
	call print_string_hi_
	db 083h,0c4h,006h,0ebh,01dh
l0584:
	db 0ffh,076h,00ch,08dh,046h,0b0h,050h
	call strlen_
	db 059h,02bh,046h,00ah,08dh,04eh,0b0h,003h,0c1h,050h,0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h
l05a1:
	db 08bh,0e5h,05dh,0c3h
#endasm
