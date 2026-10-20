#asm
	public apply_member_effects_
	extrn choose_party_member_m_:near
	extrn clamp_value_:near
	extrn draw_member_status_m_:near
	extrn extract_bits_:near
	extrn format_dice_:near
	extrn play_sound_:near
	extrn random_:near
	extrn refresh_all_windows_:near
	extrn roll_dice_:near
	extrn show_centered_notice_:near
	extrn show_message_text_m_:near
apply_member_effects_:
	db 055h,08bh,0ech,083h,0c4h,0eeh,057h,056h,08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh
	db 08ah,080h,030h,006h,02ah,0e4h,0a3h,08ah,04fh,03bh,006h,09ah,04fh,074h,006h
lc496:
	db 05eh,05fh,08bh,0e5h,05dh,0c3h
lc49c:
	db 0d1h,0e6h,083h,038h,000h,07eh,00ch,0b8h,000h,000h,050h,0ffh,030h
	call show_message_text_m_
	db 083h,0c4h,004h
lc4af:
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0f8h,08bh,080h,020h,001h,0b9h,010h,000h,099h,0f7h,0f9h,089h,046h,0f6h,08bh
	db 080h,020h,001h,099h,0f7h,0f9h,089h,056h,0f4h
lc4d8:
	db 0b8h,001h,000h,050h,0b8h,0ffh,007h,050h
	call choose_party_member_m_
	db 083h,0c4h,004h,089h,046h,0fah,03dh,0ffh,0ffh,075h,003h,0e9h,0f4h,003h
lc4f1:
	db 0c7h,046h,0f0h,000h,000h,0c7h,046h,0eeh,000h,000h,0b9h,0b0h,001h,0f7h,0e9h,08bh
	db 0d8h,080h,0bfh,089h,045h,003h,072h,003h,0e9h,0c1h,003h
lc50c:
	db 0ffh,076h,0f6h,0ffh,076h,0f4h,0ffh,076h,0f6h
	call format_dice_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_
	db 083h,0c4h,004h,089h,046h,0f2h,0c7h,046h,0feh,000h,000h
lc53a:
	db 0b8h,001h,000h,050h,0ffh,076h,0feh,0ffh,076h,0f8h
	call extract_bits_
	db 083h,0c4h,006h,03dh,001h,000h,074h,003h,0e9h,06dh,003h
lc552:
	db 083h,07eh,0feh,007h,07dh,005h,0c7h,046h,0f0h,001h,000h
lc55d:
	db 08bh,046h,0feh,03dh,007h,000h,07eh,00ah,03dh,00fh,000h,07dh,005h,0c7h,046h,0eeh
	db 002h,000h
lc56f:
	db 0e9h,040h,003h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,0ffh,0b7h,006h,044h,0b8h
	db 000h,000h,050h,08bh,087h,004h,044h,003h,046h,0f2h,050h
	call clamp_value_
	db 083h,0c4h,006h,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,058h,089h,087h,004h
	db 044h,0e9h,01eh,003h,0c7h,046h,0fch,000h,000h
lc5a6:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,04eh,0fch,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh
	db 0d8h,0ffh,0b7h,012h,044h,0b8h,000h,000h,050h,0ffh,076h,0f6h,0ffh,076h,0f4h,0ffh
	db 076h,0f6h
	call format_dice_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_
	db 083h,0c4h,004h,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0c8h,08bh,056h,0fch,0d1h
	db 0e2h,0d1h,0e2h,003h,0c2h,08bh,0d8h,058h,003h,087h,010h,044h,050h
	call clamp_value_
	db 083h,0c4h,006h,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0c8h,08bh,056h,0fch,0d1h
	db 0e2h,0d1h,0e2h,003h,0c2h,08bh,0d8h,058h,089h,087h,010h,044h,0ffh,046h,0fch,08bh
	db 046h,0fch,03dh,006h,000h,07dh,003h,0e9h,07ah,0ffh
lc62c:
	db 0e9h,090h,002h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,0ffh,0b7h,002h,044h,0b8h
	db 000h,000h,050h,08bh,087h,000h,044h,003h,046h,0f2h,050h
	call clamp_value_
	db 083h,0c4h,006h,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,058h,089h,087h,000h
	db 044h,0e9h,061h,002h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,0c6h,087h,08ch,045h
	db 000h,0c6h,087h,00fh,045h,000h,0e9h,04ch,002h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh
	db 0d8h,0c6h,087h,00dh,045h,000h,0e9h,03ch,002h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh
	db 0d8h,080h,0bfh,089h,045h,002h,075h,005h,0c6h,087h,089h,045h,000h
lc697:
	db 0e9h,025h,002h,0c7h,046h,0fch,001h,000h
lc69f:
	db 08bh,046h,0fch,03dh,001h,000h,074h,014h,03dh,002h,000h,074h,00fh,03dh,004h,000h
	db 074h,00ah,03dh,008h,000h,074h,005h,03dh,009h,000h,075h,014h
lc6bb:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0c8h,08bh,046h,0fch,003h,0c8h,08bh,0d9h,0c6h
	db 087h,00ah,045h,000h
lc6cf:
	db 0ffh,046h,0fch,08bh,046h,0fch,03dh,009h,000h,07eh,0c5h,0e9h,0e2h,001h,0b8h,0b0h
	db 001h,0f7h,06eh,0fah,08bh,0d8h,0ffh,0b7h,006h,044h,0b8h,000h,000h,050h,08bh,087h
	db 004h,044h,02bh,046h,0f2h,050h
	call clamp_value_
	db 083h,0c4h,006h,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,058h,089h,087h,004h
	db 044h,03dh,000h,000h,07fh,025h,08ah,087h,00ch,045h,02ah,0e4h,08bh,0c8h,051h,0b8h
	db 006h,000h,050h
	call random_
	db 059h,059h,003h,0c1h,005h,006h,000h,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h
	db 058h,088h,087h,00ch,045h
lc733:
	db 0e9h,089h,001h,0c7h,046h,0fch,000h,000h
lc73b:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,04eh,0fch,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh
	db 0d8h,0ffh,0b7h,012h,044h,0b8h,000h,000h,050h,0ffh,076h,0f6h,0ffh,076h,0f4h,0ffh
	db 076h,0f6h
	call format_dice_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_
	db 083h,0c4h,004h,08bh,0c8h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,056h,0fch,0d1h,0e2h
	db 0d1h,0e2h,003h,0c2h,08bh,0d8h,08bh,087h,010h,044h,02bh,0c1h,050h
	call clamp_value_
	db 083h,0c4h,006h,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0c8h,08bh,056h,0fch,0d1h
	db 0e2h,0d1h,0e2h,003h,0c2h,08bh,0d8h,058h,089h,087h,010h,044h,0ffh,046h,0fch,08bh
	db 046h,0fch,03dh,006h,000h,07dh,003h,0e9h,07ah,0ffh
lc7c1:
	db 0e9h,0fbh,000h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,0ffh,0b7h,002h,044h,0b8h
	db 000h,000h,050h,08bh,087h,000h,044h,02bh,046h,0f2h,050h
	call clamp_value_
	db 083h,0c4h,006h,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,058h,089h,087h,000h
	db 044h,03dh,000h,000h,07fh,01fh,0c6h,087h,089h,045h,003h,0c7h,087h,000h,044h,000h
	db 000h,0c7h,087h,004h,044h,000h,000h,08ah,087h,086h,045h,02ah,0e4h,005h,008h,000h
	db 050h
	call play_sound_
	db 059h
lc814:
	db 0e9h,0a8h,000h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,08ah,087h,08ch,045h,02ah
	db 0e4h,03bh,046h,0f6h,07dh,007h,08ah,046h,0f6h,088h,087h,08ch,045h
lc831:
	db 08ah,087h,00fh,045h,02ah,0e4h,03bh,046h,0f2h,07dh,007h,08ah,046h,0f2h,088h,087h
	db 00fh,045h
lc843:
	db 0e9h,079h,000h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,08ah,087h,00dh,045h,02ah
	db 0e4h,03bh,046h,0f2h,07dh,007h,08ah,046h,0f2h,088h,087h,00dh,045h
lc860:
	db 0ebh,05dh,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,080h,0bfh,089h,045h,002h,073h
	db 005h,0c6h,087h,089h,045h,002h
lc876:
	db 0ebh,047h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,08ah,087h,00ch,045h,02ah,0e4h
	db 03bh,046h,0f2h,07dh,007h,08ah,046h,0f2h,088h,087h,00ch,045h
lc892:
	db 0ebh,02bh,072h,0c5h,0a1h,0c5h,02fh,0c6h,05eh,0c6h,073h,0c6h,083h,0c6h,09ah,0c6h
	db 0bfh,0c8h,0ddh,0c6h,036h,0c7h,0c4h,0c7h,017h,0c8h,046h,0c8h,062h,0c8h,078h,0c8h
lc8b2:
	db 03dh,00fh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,094h,0c8h
lc8bf:
	db 0ffh,046h,0feh,08bh,046h,0feh,03dh,010h,000h,07dh,003h,0e9h,06dh,0fch
lc8cd:
	db 0ffh,076h,0fah
	call draw_member_status_m_
	db 059h,08bh,046h,0f0h,003h,046h,0eeh,005h,000h,008h,050h
	call show_centered_notice_
	db 059h,0e9h,0f3h,0fbh
lc8e5:
	call refresh_all_windows_
	db 0e9h,0abh,0fbh
#endasm
