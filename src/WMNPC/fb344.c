#asm
	public fb344_
	extrn create_window_:near
	extrn destroy_window_:near
	extrn do_npc_pilfer_:near
	extrn f5382_:near
	extrn f541a_:near
	extrn f56a1_:near
	extrn f5c61_:near
	extrn f5d9b_:near
	extrn f5e0c_:near
	extrn f62ee_:near
	extrn f7038_:near
	extrn f7f76_:near
	extrn f9e1e_:near
	extrn f9edb_:near
	extrn fa645_:near
	extrn faeb5_:near
	extrn fb2fd_:near
	extrn fd674_:near
	extrn fill_window_:near
	extrn get_message_:near
	extrn play_sound_:near
	extrn random_:near
	extrn refresh_all_windows_:near
fb344_:
	db 055h,08bh,0ech,083h,0c4h,0cah,0c7h,006h,076h,052h,000h,000h,0c7h,006h,092h,058h
	db 000h,000h,0c7h,046h,0fah,000h,000h
lb35b:
	db 08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,003h,0ddh,0c7h,047h,0e6h,001h,000h,0ffh,046h
	db 0fah,08bh,046h,0fah,03dh,007h,000h,07eh,0e7h,0c7h,046h,0f6h,0ffh,0ffh,0c7h,046h
	db 0fah,000h,000h,08dh,046h,0d0h,050h,0b8h,0e6h,005h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,050h,0b8h,0fch,0ffh,050h,0b8h,012h,000h,050h
	db 0b8h,005h,000h,050h,0b8h,013h,000h,050h,050h,0b8h,000h,000h,050h
	call create_window_
	db 083h,0c4h,010h,089h,046h,0e4h,083h,03eh,0b0h,051h,000h,07eh,00eh,0b8h,000h,000h
	db 050h,0ffh,036h,0b0h,051h
	call f5c61_
	db 083h,0c4h,004h
lb3c4:
	db 0c7h,046h,0ceh,000h,000h
lb3c9:
	db 0c7h,006h,07ah,052h,000h,000h,083h,03eh,024h,052h,000h,07eh,008h,0ffh,036h,024h
	db 052h
	call play_sound_
	db 059h
lb3de:
	db 0c7h,046h,0feh,000h,000h
lb3e3:
	db 08bh,05eh,0feh,080h,0bfh,0c4h,051h,000h,076h,035h,08ah,087h,0c4h,051h,02ah,0e4h
	db 050h,0ffh,076h,0ceh
	call f7038_
	db 083h,0c4h,004h,03dh,001h,000h,075h,020h,083h,03eh,076h,052h,001h,075h,008h,0b8h
	db 001h,000h,050h
	call f56a1_
	db 059h
lb411:
	db 0b8h,000h,000h,050h,0ffh,076h,0e4h
	call destroy_window_
	db 083h,0c4h,004h
lb41e:
	db 08bh,0e5h,05dh,0c3h
lb422:
	db 0ffh,046h,0feh,08bh,046h,0feh,03dh,008h,000h,07ch,0b6h,0b8h,000h,000h,050h,0b8h
	db 003h,000h,050h,0b8h,020h,000h,050h,0ffh,076h,0e4h
	call fill_window_
	db 083h,0c4h,008h,0b8h,000h,000h,050h,08dh,046h,0d0h,050h
	call f541a_
	db 083h,0c4h,004h,0c7h,046h,0ceh,0ffh,0ffh
	call refresh_all_windows_
	db 0b8h,000h,000h,050h,050h,0b8h,005h,000h,050h,0b8h,003h,000h,050h,0b8h,006h,000h
	db 050h,0b8h,001h,000h,050h,050h,08dh,046h,0e6h,050h,0b8h,0fah,005h,050h,0ffh,076h
	db 0e4h
	call f5e0c_
	db 083h,0c4h,014h,089h,046h,0fah,0e9h,01ah,002h,0b8h,001h,000h,050h,0b8h,0e8h,005h
	db 050h
	call f62ee_
	db 083h,0c4h,004h,089h,046h,0ceh,03dh,000h,000h,07ch,045h,050h
	call fb2fd_
	db 059h,085h,0c0h,074h,03ch,0b8h,0b0h,001h,0f7h,06eh,0ceh,003h,006h,074h,052h,08bh
	db 0d8h,08ah,087h,050h,045h,098h,050h,0b8h,0b0h,001h,0f7h,06eh,0ceh,08bh,0d8h,08ah
	db 087h,01ah,045h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,003h,006h,0d0h,052h,07eh,009h
	db 0ffh,076h,0ceh
	call fd674_
	db 059h,0ebh,008h
lb4d8:
	db 0b8h,004h,006h,050h
	call fa645_
	db 059h
lb4e0:
	db 0e9h,0c9h,001h,0b8h,001h,000h,050h,0b8h,0ddh,005h,050h
	call f62ee_
	db 083h,0c4h,004h,089h,046h,0ceh,03dh,000h,000h,07ch,045h,050h
	call fb2fd_
	db 059h,085h,0c0h,074h,03ch,0b8h,0b0h,001h,0f7h,06eh,0ceh,003h,006h,074h,052h,08bh
	db 0d8h,08ah,087h,050h,045h,098h,050h,0b8h,0b0h,001h,0f7h,06eh,0ceh,08bh,0d8h,08ah
	db 087h,01ah,045h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,003h,006h,0d0h,052h,07eh,009h
	db 0ffh,076h,0ceh
	call faeb5_
	db 059h,0ebh,008h
lb536:
	db 0b8h,004h,006h,050h
	call fa645_
	db 059h
lb53e:
	db 0e9h,06bh,001h,0b8h,001h,000h,050h,0b8h,0eah,005h,050h
	call f62ee_
	db 083h,0c4h,004h,089h,046h,0ceh,03dh,000h,000h,07ch,015h,050h
	call fb2fd_
	db 059h,085h,0c0h,074h,00ch,0ffh,076h,0ceh,0ffh,076h,0e4h
	call f9edb_
	db 083h,0c4h,004h
lb56c:
	db 0e9h,03dh,001h,0b8h,001h,000h,050h,0b8h,0ebh,005h,050h
	call f62ee_
	db 083h,0c4h,004h,089h,046h,0ceh,03dh,000h,000h,07ch,015h,050h
	call fb2fd_
	db 059h,085h,0c0h,074h,00ch,0ffh,076h,0ceh,0ffh,076h,0e4h
	call f9e1e_
	db 083h,0c4h,004h
lb59a:
	db 0e9h,00fh,001h,0b8h,001h,000h,050h,0b8h,0efh,005h,050h
	call f62ee_
	db 083h,0c4h,004h,089h,046h,0ceh,03dh,000h,000h,07ch,010h,050h
	call fb2fd_
	db 059h,085h,0c0h,074h,007h,0ffh,076h,0ceh
	call f5382_
	db 059h
lb5c3:
	db 0e9h,0e6h,000h,0b8h,001h,000h,050h,0b8h,0e7h,005h,050h
	call f62ee_
	db 083h,0c4h,004h,089h,046h,0ceh,03dh,000h,000h,07ch,010h,050h
	call fb2fd_
	db 059h,085h,0c0h,074h,007h,0ffh,076h,0ceh
	call do_npc_pilfer_
	db 059h
lb5ec:
	db 0e9h,0bdh,000h,0c7h,046h,0feh,000h,000h,0ebh,05bh
lb5f6:
	db 0b8h,0b0h,001h,0f7h,06eh,0feh,003h,006h,074h,052h,08bh,0d8h,080h,0bfh,050h,045h
	db 00ah,07eh,00fh,08ah,087h,050h,045h,098h,0b9h,005h,000h,099h,0f7h,0f9h,088h,087h
	db 050h,045h
lb618:
	db 0b8h,005h,000h,050h
	call random_
	db 059h,08bh,0c8h,005h,005h,000h,08bh,0c8h,0b8h,0b0h,001h,0f7h,06eh,0feh,003h,006h
	db 074h,052h,08bh,0d8h,08ah,087h,050h,045h,098h,02bh,0c1h,089h,046h,0fch,03dh,09ch
	db 0ffh,07dh,005h,0c7h,046h,0fch,09ch,0ffh
lb647:
	db 08ah,046h,0fch,088h,087h,050h,045h,0ffh,046h,0feh
lb651:
	db 08bh,046h,0feh,03bh,006h,0ceh,043h,07ch,09ch,0a0h,0cch,051h,02ah,0e4h,0a3h,03ah
	db 043h,0c7h,006h,038h,043h,001h,000h,0c7h,006h,054h,043h,000h,000h,0c7h,006h,076h
	db 052h,000h,000h,0c7h,006h,03ah,036h,00ah,000h,0c7h,006h,0ceh,04fh,012h,000h,0c7h
	db 046h,0fah,007h,000h,0ebh,025h,0c7h,006h,076h,052h,001h,000h,0ebh,01dh,085h,0b4h
	db 0e3h,0b4h,041h,0b5h,06fh,0b5h,09dh,0b5h,0c6h,0b5h,0efh,0b5h,087h,0b6h
lb69f:
	db 03dh,008h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,08fh,0b6h
lb6ac:
	db 083h,07eh,0ceh,000h,07ch,015h,0a1h,0ceh,043h,048h,03bh,046h,0ceh,07ch,00ch,0b8h
	db 004h,000h,050h
	call random_
	db 059h,085h,0c0h,075h,00bh
lb6c7:
	db 0ffh,036h,0ceh,043h
	call random_
	db 059h,089h,046h,0ceh
lb6d2:
	db 0b8h,0b0h,001h,0f7h,06eh,0ceh,003h,006h,074h,052h,08bh,0d8h,08ah,087h,050h,045h
	db 098h,050h,0b8h,0b0h,001h,0f7h,06eh,0ceh,08bh,0d8h,08ah,087h,01ah,045h,02ah,0e4h
	db 08bh,0c8h,058h,003h,0c1h,003h,006h,0d0h,052h,07ch,003h,0e9h,0ach,000h
lb700:
	db 0a0h,0d3h,051h,02ah,0e4h,0a9h,010h,000h,074h,000h
lb70a:
	db 0b8h,064h,000h,050h
	call random_
	db 059h,050h,0b8h,0b0h,001h,0f7h,06eh,0ceh,08bh,0d8h,08ah,087h,01ah,045h,02ah,0e4h
	db 08bh,0c8h,058h,003h,0c1h,003h,006h,0d0h,052h,003h,01eh,074h,052h,080h,0bfh,050h
	db 045h,000h,07dh,00fh,050h,08ah,087h,050h,045h,098h,08bh,0c8h,0f7h,0d8h,08bh,0c8h
	db 058h,0ebh,009h
lb744:
	db 050h,08ah,087h,050h,045h,098h,08bh,0c8h,058h
lb74d:
	db 03bh,0c1h,07dh,05bh,0b8h,002h,000h,050h
	call random_
	db 059h,03dh,001h,000h,075h,035h,0b8h,001h,000h,050h,0b8h,005h,006h,050h
	call f5d9b_
	db 083h,0c4h,004h,0a0h,0cch,051h,02ah,0e4h,0a3h,03ah,043h,0c7h,006h,038h,043h,001h
	db 000h,0c7h,006h,054h,043h,000h,000h,0c7h,006h,03ah,036h,00ah,000h,0c7h,006h,0ceh
	db 04fh,012h,000h,0c7h,046h,0fah,007h,000h,0ebh,019h
lb793:
	db 0b8h,000h,000h,050h,0b8h,006h,006h,050h
	call f5d9b_
	db 083h,0c4h,004h,0c7h,006h,076h,052h,001h,000h,0c7h,046h,0fah,007h,000h
lb7ac:
	db 083h,07eh,0fah,007h,074h,003h,0e9h,014h,0fch
lb7b5:
	db 083h,03eh,03ah,036h,00ah,075h,016h,0b8h,000h,000h,050h,050h,050h,0b8h,006h,000h
	db 050h,0b8h,000h,000h,050h
	call f7f76_
	db 083h,0c4h,00ah,0ebh,014h
lb7d2:
	db 0b8h,000h,000h,050h,050h,050h,0b8h,007h,000h,050h,0b8h,000h,000h,050h
	call f7f76_
	db 083h,0c4h,00ah
lb7e6:
	db 083h,03eh,076h,052h,001h,075h,008h,0b8h,001h,000h,050h
	call f56a1_
	db 059h
lb7f5:
	db 0b8h,000h,000h,050h,0ffh,076h,0e4h
	call destroy_window_
	db 083h,0c4h,004h,0e9h,019h,0fch
#endasm
