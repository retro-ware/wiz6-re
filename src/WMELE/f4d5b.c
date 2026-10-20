/* Copy the party members into combat group 0. */
#asm
	public fill_party_group_
	extrn movmem_:near
fill_party_group_:
	db 057h,056h,0bfh,000h,000h,0a0h,0ceh,043h,08bh,0cfh,0d1h,0e1h,08bh,0d9h,08bh,09fh
	db 0a8h,043h,088h,087h,09dh,001h,08bh,0f7h
l4d73:
	db 08bh,0c7h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,080h,08ch,001h,000h,046h
	db 083h,0feh,006h,07ch,0ebh,083h,03eh,0d8h,04eh,000h,07eh,011h,0a0h,0dah,04eh,08bh
	db 0cfh,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h,087h,090h,001h
l4da0:
	db 0beh,000h,000h
l4da3:
	db 08bh,0c7h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,080h,092h,001h,000h,046h
	db 083h,0feh,004h,07ch,0ebh,0beh,000h,000h,0e9h,038h,001h
l4dbe:
	db 0b8h,0b0h,001h,0f7h,0eeh,08bh,0d8h,08bh,087h,00ch,044h,050h,0b8h,02ch,000h,0f7h
	db 0eeh,08bh,0d0h,08bh,0c7h,0d1h,0e0h,08bh,0d8h,08bh,08fh,0a8h,043h,003h,0cah,08bh
	db 0d9h,058h,089h,007h,0b8h,0b0h,001h,0f7h,0eeh,08bh,0d8h,08bh,087h,002h,044h,050h
	db 0b8h,02ch,000h,0f7h,0eeh,08bh,0d0h,08bh,0c7h,0d1h,0e0h,08bh,0d8h,08bh,08fh,0a8h
	db 043h,003h,0cah,08bh,0d9h,058h,089h,047h,004h,0b8h,0b0h,001h,0f7h,0eeh,08bh,0d8h
	db 08bh,087h,000h,044h,050h,0b8h,02ch,000h,0f7h,0eeh,08bh,0d0h,08bh,0c7h,0d1h,0e0h
	db 08bh,0d8h,08bh,08fh,0a8h,043h,003h,0cah,08bh,0d9h,058h,089h,047h,002h,0b8h,0b0h
	db 001h,0f7h,0eeh,08bh,0d8h,08bh,087h,006h,044h,050h,0b8h,02ch,000h,0f7h,0eeh,08bh
	db 0d0h,08bh,0c7h,0d1h,0e0h,08bh,0d8h,08bh,08fh,0a8h,043h,003h,0cah,08bh,0d9h,058h
	db 089h,047h,008h,0b8h,0b0h,001h,0f7h,0eeh,08bh,0d8h,08bh,087h,004h,044h,050h,0b8h
	db 02ch,000h,0f7h,0eeh,08bh,0d0h,08bh,0c7h,0d1h,0e0h,08bh,0d8h,08bh,08fh,0a8h,043h
	db 003h,0cah,08bh,0d9h,058h,089h,047h,006h,0b8h,0b0h,001h,0f7h,0eeh,08bh,0d8h,08ah
	db 087h,089h,045h,050h,0b8h,02ch,000h,0f7h,0eeh,08bh,0d0h,08bh,0c7h,0d1h,0e0h,08bh
	db 0d8h,08bh,08fh,0a8h,043h,003h,0cah,08bh,0d9h,058h,088h,047h,022h,0b8h,00ah,000h
	db 050h,08bh,0c7h,0d1h,0e0h,08bh,0d8h,08bh,087h,0a8h,043h,003h,0c2h,005h,00eh,000h
	db 050h,0b8h,0b0h,001h,0f7h,0eeh,005h,00ah,045h,050h
	call movmem_
	db 083h,0c4h,006h,0b8h,0b0h,001h,0f7h,0eeh,08bh,0d8h,08ah,087h,08ch,045h,050h,0b8h
	db 02ch,000h,0f7h,0eeh,08bh,0d0h,08bh,0c7h,0d1h,0e0h,08bh,0d8h,08bh,08fh,0a8h,043h
	db 003h,0cah,08bh,0d9h,058h,088h,047h,023h,08bh,0c7h,0d1h,0e0h,08bh,0d8h,08bh,087h
	db 0a8h,043h,003h,0c2h,08bh,0d8h,0c6h,047h,02ah,0ffh,046h
l4ef6:
	db 03bh,036h,0ceh,043h,07dh,003h,0e9h,0bfh,0feh
l4eff:
	db 05eh,05fh,0c3h
#endasm
