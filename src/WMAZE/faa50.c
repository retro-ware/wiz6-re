#asm
	public print_member_message_
	extrn clear_window_:near
	extrn print_string_:near
	extrn refresh_all_windows_:near
	extrn set_cursor_:near
	extrn strlen_:near
print_member_message_:
	db 055h,08bh,0ech,083h,0c4h,0feh,0b8h,000h,000h,050h,0ffh,036h,02ah,052h
	call clear_window_
	db 083h,0c4h,004h
	call refresh_all_windows_
	db 08bh,05eh,006h,080h,03fh,000h,074h,005h,0b8h,001h,000h,0ebh,003h
laa74:
	db 0b8h,000h,000h
laa77:
	db 08bh,05eh,008h,080h,03fh,000h,074h,005h,0b9h,001h,000h,0ebh,003h
laa84:
	db 0b9h,000h,000h
laa87:
	db 003h,0c1h,08bh,05eh,00ah,080h,03fh,000h,074h,005h,0b9h,001h,000h,0ebh,003h
laa96:
	db 0b9h,000h,000h
laa99:
	db 003h,0c1h,040h,089h,046h,0feh,0b8h,001h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,004h
	db 005h,0e8h,043h,050h
	call strlen_
	db 059h,050h,0ffh,076h,006h
	call strlen_
	db 059h,08bh,0c8h,058h,003h,0c1h,050h,0ffh,076h,008h
	call strlen_
	db 059h,08bh,0c8h,058h,003h,0c1h,050h,0ffh,076h,00ah
	call strlen_
	db 059h,08bh,0c8h,058h,003h,0c1h,003h,046h,0feh,0b9h,002h,000h,099h,0f7h,0f9h,08bh
	db 0c8h,0b8h,014h,000h,02bh,0c1h,050h,0ffh,036h,02ah,052h
	call set_cursor_
	db 083h,0c4h,006h,0ffh,076h,00ch,0b8h,0b0h,001h,0f7h,06eh,004h,005h,0e8h,043h,050h
	db 0ffh,036h,02ah,052h
	call print_string_
	db 083h,0c4h,006h,08bh,01eh,02ah,052h,0feh,047h,006h,08bh,05eh,006h,080h,03fh,000h
	db 074h,015h,0ffh,076h,00eh,053h,0ffh,036h,02ah,052h
	call print_string_
	db 083h,0c4h,006h,08bh,01eh,02ah,052h,0feh,047h,006h
lab2e:
	db 08bh,05eh,008h,080h,03fh,000h,074h,015h,0ffh,076h,010h,053h,0ffh,036h,02ah,052h
	call print_string_
	db 083h,0c4h,006h,08bh,01eh,02ah,052h,0feh,047h,006h
lab4b:
	db 08bh,05eh,00ah,080h,03fh,000h,074h,015h,0ffh,076h,012h,053h,0ffh,036h,02ah,052h
	call print_string_
	db 083h,0c4h,006h,08bh,01eh,02ah,052h,0feh,047h,006h
lab68:
	db 08bh,0e5h,05dh,0c3h
#endasm
