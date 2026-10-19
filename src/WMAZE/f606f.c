#asm
	public reorder_party_
	extrn choose_party_member_m_:near
	extrn draw_member_status_m_:near
reorder_party_:
	db 055h,08bh,0ech,081h,0c4h,0c2h,0f5h,057h,056h,0a1h,0ceh,043h,089h,086h,0c2h,0f5h
	db 0c7h,086h,0c4h,0f5h,000h,000h,0e9h,0b8h,000h
l6088:
	db 0b8h,000h,000h,050h,0b8h,0f5h,007h,050h
	call choose_party_member_m_
	db 083h,0c4h,004h,0a3h,0cch,043h,0b9h,0b0h,001h,0f7h,0e9h,08bh,0f0h,005h,0e8h,043h
	db 08bh,0f0h,08bh,086h,0c4h,0f5h,0f7h,0e9h,08bh,0f8h,08dh,08eh,0deh,0f5h,003h,0c1h
	db 08bh,0f8h,08ch,0d9h,08eh,0c1h,0b9h,0d8h,000h,0f3h,0a5h,0a1h,0cch,043h,0d1h,0e0h
	db 08bh,0d8h,08bh,087h,0dch,043h,08bh,08eh,0c4h,0f5h,0d1h,0e1h,08bh,0d9h,003h,0ddh
	db 089h,087h,0d2h,0f5h,0a1h,0cch,043h,0d1h,0e0h,08bh,0d8h,08bh,087h,0d0h,043h,08bh
	db 0d9h,003h,0ddh,089h,087h,0c6h,0f5h,0ffh,00eh,0ceh,043h,0a1h,0cch,043h,089h,046h
	db 0feh,0ebh,03dh
l60f6:
	db 0b8h,0b0h,001h,0f7h,06eh,0feh,08bh,0f0h,005h,098h,045h,08bh,0f0h,0b8h,0b0h,001h
	db 0f7h,06eh,0feh,08bh,0f8h,005h,0e8h,043h,08bh,0f8h,08ch,0d9h,08eh,0c1h,0b9h,0d8h
	db 000h,0f3h,0a5h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,08bh,087h,0deh,043h,089h,087h
	db 0dch,043h,08bh,087h,0d2h,043h,089h,087h,0d0h,043h,0ffh,046h,0feh
l6133:
	db 08bh,046h,0feh,03bh,006h,0ceh,043h,07ch,0bah,0ffh,086h,0c4h,0f5h
l6140:
	db 08bh,086h,0c2h,0f5h,048h,03bh,086h,0c4h,0f5h,07eh,003h,0e9h,03ah,0ffh
l614e:
	db 0beh,0e8h,043h,0b8h,0b0h,001h,0f7h,0aeh,0c2h,0f5h,08bh,0f8h,08dh,08eh,02eh,0f4h
	db 003h,0c1h,08bh,0f8h,08ch,0d9h,08eh,0c1h,0b9h,0d8h,000h,0f3h,0a5h,0a1h,0dch,043h
	db 08bh,08eh,0c2h,0f5h,0d1h,0e1h,08bh,0d9h,003h,0ddh,089h,087h,0d0h,0f5h,0a1h,0d0h
	db 043h,08bh,0d9h,003h,0ddh,089h,087h,0c4h,0f5h,08bh,086h,0c2h,0f5h,0a3h,0ceh,043h
	db 0c7h,046h,0feh,000h,000h,0ebh,054h
l6195:
	db 0b8h,0b0h,001h,0f7h,06eh,0feh,08bh,0f0h,08dh,08eh,0deh,0f5h,003h,0c1h,08bh,0f0h
	db 0b8h,0b0h,001h,0f7h,06eh,0feh,08bh,0f8h,005h,0e8h,043h,08bh,0f8h,08ch,0d9h,08eh
	db 0c1h,0b9h,0d8h,000h,0f3h,0a5h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh
	db 087h,0d2h,0f5h,08bh,04eh,0feh,0d1h,0e1h,08bh,0d9h,089h,087h,0dch,043h,003h,0ddh
	db 08bh,087h,0c6h,0f5h,08bh,0d9h,089h,087h,0d0h,043h,0ffh,076h,0feh
	call draw_member_status_m_
	db 059h,0ffh,046h,0feh
l61e9:
	db 08bh,046h,0feh,03bh,006h,0ceh,043h,07ch,0a3h,05eh,05fh,08bh,0e5h,05dh,0c3h
#endasm
