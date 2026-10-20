/* Inspect result: reveal correct letters of the trap name or add misleading letters. */
#asm
	public reveal_trap_letters_
	extrn char_index_:near
	extrn clear_window_area_:near
	extrn defer_window_draw_:near
	extrn print_string_:near
	extrn put_char_:near
	extrn random_:near
	extrn refresh_window_:near
	extrn resume_window_draw_:near
	extrn set_cursor_:near
	extrn strlen_:near
reveal_trap_letters_:
	db 055h,08bh,0ech,083h,0c4h,0f6h,0c7h,046h,0fch,000h,000h,0ebh,069h
l673a:
	db 08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,083h,0bfh,094h,051h,000h,075h,058h,0b8h,064h
	db 000h,050h
	call random_
	db 059h,03dh,032h,000h,07eh,04bh,0b8h,064h,000h,050h
	call random_
	db 059h,03bh,046h,00ah,07dh,03bh,08bh,05eh,0fch,08ah,087h,0bch,051h,02ah,0e4h,050h
	db 0b8h,0deh,050h,050h
	call char_index_
	db 083h,0c4h,004h,089h,046h,0f8h,03dh,000h,000h,07ch,017h,08bh,046h,0fch,0d1h,0e0h
	db 08bh,0d8h,0c7h,087h,094h,051h,001h,000h,08bh,05eh,0f8h,0c6h,087h,0deh,050h,024h
	db 0ebh,008h
l6795:
	db 08bh,05eh,0fch,0c6h,087h,0bch,051h,02ah
l679d:
	db 0ffh,04eh,008h
l67a0:
	db 0ffh,046h,0fch
l67a3:
	db 08bh,046h,0fch,03bh,006h,0d0h,051h,07dh,006h,083h,07eh,008h,000h,07fh,088h
l67b2:
	db 083h,07eh,008h,000h,07fh,003h,0e9h,0c1h,000h
l67bb:
	db 0c7h,046h,0f6h,000h,000h,0c7h,046h,0feh,000h,000h,0ebh,010h
l67c7:
	db 08bh,05eh,0feh,080h,0bfh,0deh,050h,024h,074h,003h,0ffh,046h,0f6h
l67d4:
	db 0ffh,046h,0feh
l67d7:
	db 0b8h,0deh,050h,050h
	call strlen_
	db 059h,03bh,046h,0feh,07fh,0e3h,0b8h,064h,000h,050h
	call random_
	db 059h,03bh,046h,00ah,07dh,04ch,083h,07eh,0f6h,000h,07eh,044h,083h,03eh,0d0h,051h
	db 012h,07dh,03dh
l67fe:
	db 0b8h,0deh,050h,050h
	call strlen_
	db 059h,050h
	call random_
	db 059h,089h,046h,0fch,08bh,05eh,0fch,080h,0bfh,0deh,050h,024h,074h,0e6h,08bh,05eh
	db 0fch,08ah,087h,0deh,050h,08bh,01eh,0d0h,051h,088h,087h,0bch,051h,0d1h,0e3h,0c7h
	db 087h,094h,051h,001h,000h,0ffh,006h,0d0h,051h,08bh,05eh,0fch,0c6h,087h,0deh,050h
	db 024h
l683b:
	db 0ebh,039h
l683d:
	db 083h,07eh,0f6h,000h,07eh,033h,0b8h,064h,000h,050h
	call random_
	db 059h,03dh,032h,000h,07eh,026h,083h,03eh,0d0h,051h,012h,07dh,01fh,0b8h,01ah,000h
	db 050h
	call random_
	db 059h,005h,041h,000h,08bh,01eh,0d0h,051h,088h,087h,0bch,051h,0d1h,0e3h,0c7h,087h
	db 094h,051h,000h,000h,0ffh,006h,0d0h,051h
l6876:
	db 0ffh,04eh,008h,0e9h,036h,0ffh
l687c:
	db 0ffh,076h,004h
	call defer_window_draw_
	db 059h,0b8h,002h,000h,050h,0b8h,012h,000h,050h,0b8h,002h,000h,050h,0b8h,001h,000h
	db 050h,0ffh,076h,004h
	call clear_window_area_
	db 083h,0c4h,00ah,0b8h,002h,000h,050h,0b8h,001h,000h,050h,0ffh,076h,004h
	call set_cursor_
	db 083h,0c4h,006h,083h,03eh,092h,051h,000h,075h,013h,0b8h,006h,000h,050h,0b8h,0cah
	db 050h,050h,0ffh,076h,004h
	call print_string_
	db 083h,0c4h,006h,0ebh,040h
l68c7:
	db 0c7h,046h,0feh,000h,000h,0ebh,030h
l68ce:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,083h,0bfh,094h,051h,001h,075h,005h,0b8h,006h
	db 000h,0ebh,003h
l68e1:
	db 0b8h,00ch,000h
l68e4:
	db 089h,046h,0fah,050h,08bh,05eh,0feh,08ah,087h,0bch,051h,02ah,0e4h,050h,0ffh,076h
	db 004h
	call put_char_
	db 083h,0c4h,006h,0ffh,046h,0feh
l68fe:
	db 08bh,046h,0feh,03bh,006h,0d0h,051h,07ch,0c7h
l6907:
	db 0ffh,076h,004h
	call resume_window_draw_
	db 059h,0ffh,076h,004h
	call refresh_window_
	db 059h,08bh,0e5h,05dh,0c3h
#endasm
