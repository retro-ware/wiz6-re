#asm
	public remove_swag_item_
	extrn strcpy_:near
remove_swag_item_:
	db 055h,08bh,0ech,083h,0c4h,0fah,057h,056h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h
	db 0feh,08fh,095h,045h,08bh,046h,006h,089h,046h,0feh,0ebh,057h
l5ee3:
	db 08bh,046h,0feh,005h,00ah,000h,089h,046h,0fah,0b8h,0b0h,001h,0f7h,06eh,004h,08bh
	db 04eh,0fah,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0f0h,005h,030h,044h,08bh
	db 0f0h,0b8h,0b0h,001h,0f7h,06eh,004h,003h,0c1h,08bh,0f8h,005h,028h,044h,08bh,0f8h
	db 08ch,0d9h,08eh,0c1h,0b9h,004h,000h,0f3h,0a5h,08bh,046h,0feh,0b9h,004h,000h,0d3h
	db 0e0h,005h,0a2h,056h,050h,08bh,046h,0feh,0d3h,0e0h,005h,092h,056h,050h
	call strcpy_
	db 083h,0c4h,004h,0ffh,046h,0feh
l5f3a:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,095h,045h,02ah,0e4h,03bh,046h
	db 0feh,07fh,096h,05eh,05fh,08bh,0e5h,05dh,0c3h
#endasm
