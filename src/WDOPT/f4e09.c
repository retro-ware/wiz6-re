/* Remove item slot from member's inventory, unequipping it and shifting the rest. */
#asm
	public remove_item_
	extrn clear_weapon_slot_:near
remove_item_:
	db 055h,08bh,0ech,083h,0c4h,0fch,057h,056h,083h,07eh,006h,00ah,07ch,003h,0e9h,032h
	db 001h
l4e1a:
	db 0c7h,046h,0fch,000h,000h
l4e1f:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,003h,046h,0fch,08bh,0d8h,08ah,087h,0f8h,044h,02ah
	db 0e4h,03bh,046h,006h,075h,064h,08bh,046h,0fch,0ebh,042h,0ffh,076h,0fch,0ffh,076h
	db 004h
	call clear_weapon_slot_
	db 083h,0c4h,004h,0ebh,041h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,0c6h,087h,04ah
	db 045h,000h,0ebh,032h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,048h,045h
	db 003h,05eh,0fch,088h,087h,048h,045h,0ebh,01dh,03ah,04eh,03ah,04eh,048h,04eh,057h
	db 04eh,057h,04eh,057h,04eh,057h,04eh,057h,04eh
l4e7c:
	db 03dh,008h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,06ch,04eh
l4e89:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,003h,046h,0fch,08bh,0d8h,0c6h,087h,0f8h,044h,0ffh
l4e99:
	db 0ffh,046h,0fch,08bh,046h,0fch,03dh,008h,000h,07dh,003h,0e9h,078h,0ffh
l4ea7:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,04eh,006h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h
	db 0c1h,08bh,0d8h,0c7h,087h,028h,044h,000h,000h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh
	db 0d8h,0feh,08fh,094h,045h,08bh,046h,006h,089h,046h,0feh,0ebh,063h
l4ed4:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,04eh,0feh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h
	db 0c1h,08bh,0f0h,005h,030h,044h,08bh,0f0h,0b8h,0b0h,001h,0f7h,06eh,004h,003h,0c1h
	db 08bh,0f8h,005h,028h,044h,08bh,0f8h,08ch,0d9h,08eh,0c1h,0b9h,004h,000h,0f3h,0a5h
	db 0c7h,046h,0fch,000h,000h
l4f09:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,003h,046h,0fch,08bh,0d8h,08ah,087h,0f8h,044h,02ah
	db 0e4h,08bh,04eh,0feh,041h,03bh,0c1h,075h,007h,08ah,046h,0feh,088h,087h,0f8h,044h
l4f29:
	db 0ffh,046h,0fch,08bh,046h,0fch,03dh,008h,000h,07ch,0d5h,0ffh,046h,0feh
l4f37:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,094h,045h,02ah,0e4h,03bh,046h
	db 0feh,07fh,08ah,0ebh,05dh
l4f4c:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,0feh,08fh,095h,045h,08bh,046h,006h,089h
	db 046h,0feh,0ebh,033h
l4f60:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,04eh,0feh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h
	db 0c1h,08bh,0f0h,005h,030h,044h,08bh,0f0h,0b8h,0b0h,001h,0f7h,06eh,004h,003h,0c1h
	db 08bh,0f8h,005h,028h,044h,08bh,0f8h,08ch,0d9h,08eh,0c1h,0b9h,004h,000h,0f3h,0a5h
	db 0ffh,046h,0feh
l4f93:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,095h,045h,02ah,0e4h,005h,00ah
	db 000h,03bh,046h,0feh,07fh,0b7h
l4fa9:
	db 05eh,05fh,08bh,0e5h,05dh,0c3h
#endasm
