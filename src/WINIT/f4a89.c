/* Read SCENARIO.HDR, load fonts and maze graphics for the video mode, open the header and DBS files. */
#asm
	public init_game_data_
	extrn alloc_far_:near
	extrn close_:near
	extrn drv_op_96_:near
	extrn exit_game_:near
	extrn f45a3_:near
	extrn f45e5_:near
	extrn f46e4_:near
	extrn init_video_:near
	extrn load_sounds_:near
	extrn make_data_path_:near
	extrn open_:near
	extrn read_:near
	extrn read_file_bytes_:near
	extrn show_credits_:near
	extrn start_sound_:near
	extrn stop_sound_:near
init_game_data_:
	db 055h,08bh,0ech,081h,0c4h,0e6h,0f3h,0c7h,006h,0beh,04fh,000h,000h,0c7h,006h,042h
	db 033h,000h,000h,0c7h,006h,0cch,04fh,000h,000h,0b8h,000h,000h,050h,0b8h,01ch,050h
	db 050h
	call open_
	db 083h,0c4h,004h,0a3h,0eah,04fh,03dh,0ffh,0ffh,075h,008h,0b8h,001h,000h,050h
	call exit_game_
	db 059h
l4ac0:
	db 0b8h,09eh,001h,050h,0b8h,0f8h,033h,050h,0ffh,036h,0eah,04fh
	call read_
	db 083h,0c4h,006h,0ffh,036h,0eah,04fh
	call close_
	db 059h,0c7h,006h,0cah,04fh,010h,000h,0a0h,091h,035h,02ah,0e4h,0a3h,0c8h,04fh,0a0h
	db 095h,035h,02ah,0e4h,0ebh,075h,0b8h,002h,000h,050h
	call exit_game_
	db 059h,0e9h,081h,000h,0c7h,046h,0feh,001h,000h,0e9h,079h,000h,0c7h,046h,0feh,001h
	db 000h,0ebh,072h,0c7h,046h,0feh,002h,000h,0ebh,06bh,0c7h,046h,0feh,008h,000h,0ebh
	db 064h,0c7h,046h,0feh,004h,000h,0ebh,05dh,0c7h,046h,0feh,001h,000h,0ebh,056h,0c7h
	db 046h,0feh,002h,000h,0ebh,04fh,0c7h,046h,0feh,001h,000h,0ebh,048h,0c7h,046h,0feh
	db 001h,000h,0ebh,041h,000h,000h,001h,000h,002h,000h,003h,000h,004h,000h,005h,000h
	db 006h,000h,007h,000h,008h,000h,0ffh,000h,0fah,04ah,002h,04bh,009h,04bh,010h,04bh
	db 017h,04bh,01eh,04bh,025h,04bh,02ch,04bh,033h,04bh,0efh,04ah,07bh,04bh
l4b64:
	db 006h,08ch,0c9h,08eh,0c1h,057h,0bfh,03ah,04bh,0b9h,00bh,000h,0fch,0f2h,0afh,026h
	db 08bh,04dh,012h,05fh,007h,0ffh,0e1h
l4b7b:
	call stop_sound_
	db 0a0h,068h,035h,02ah,0e4h,089h,046h,0f6h,0b8h,000h,000h,083h,07eh,0f6h,000h,074h
	db 014h,0a0h,069h,035h,02ah,0e4h,086h,0e0h,02ah,0c0h,050h,0a0h,06ah,035h,02ah,0e4h
	db 08bh,0c8h,058h,003h,0c1h
l4ba3:
	db 089h,046h,0f4h,08bh,046h,0f6h,086h,0e0h,02ah,0c0h,005h,0ffh,000h,050h,0b8h,000h
	db 000h,050h,0ffh,076h,0f4h,0b8h,0ffh,0ffh,050h
	call start_sound_
	db 083h,0c4h,008h,0ffh,076h,0feh
	call init_video_
	db 059h,0a3h,0c6h,04fh
	call stop_sound_
	db 0a3h,0c2h,04fh,0f7h,006h,0c6h,04fh,000h,010h,074h,012h,080h,03eh,094h,035h,001h
	db 075h,00bh
	call drv_op_96_
	db 0c7h,006h,046h,008h,001h,000h,0ebh,006h
l4bec:
	db 0c7h,006h,046h,008h,000h,000h
l4bf2:
	db 0c7h,006h,096h,035h,000h,000h,0f7h,006h,0c6h,04fh,001h,000h,074h,051h,0b8h,000h
	db 000h,050h,0b8h,029h,050h,050h
	call f45a3_
	db 083h,0c4h,004h,0b8h,001h,000h,050h,0b8h,034h,050h,050h
	call f45a3_
	db 083h,0c4h,004h,0b8h,002h,000h,050h,0b8h,03fh,050h,050h
	call f45a3_
	db 083h,0c4h,004h,0b8h,003h,000h,050h,0b8h,04ah,050h,050h
	call f45a3_
	db 083h,0c4h,004h,0b8h,004h,000h,050h,0b8h,055h,050h,050h
	call f45a3_
	db 083h,0c4h,004h,0b8h,060h,050h,050h
	call f45e5_
	db 059h,0e9h,0b8h,000h
l4c51:
	db 0f7h,006h,0c6h,04fh,006h,000h,074h,050h,0b8h,000h,000h,050h,0b8h,06dh,050h,050h
	call f45a3_
	db 083h,0c4h,004h,0b8h,001h,000h,050h,0b8h,078h,050h,050h
	call f45a3_
	db 083h,0c4h,004h,0b8h,002h,000h,050h,0b8h,083h,050h,050h
	call f45a3_
	db 083h,0c4h,004h,0b8h,003h,000h,050h,0b8h,08eh,050h,050h
	call f45a3_
	db 083h,0c4h,004h,0b8h,004h,000h,050h,0b8h,099h,050h,050h
	call f45a3_
	db 083h,0c4h,004h,0b8h,0a4h,050h,050h
	call f45e5_
	db 059h,0ebh,060h
l4ca9:
	db 0f7h,006h,0c6h,04fh,008h,000h,074h,050h,0b8h,000h,000h,050h,0b8h,0b1h,050h,050h
	call f45a3_
	db 083h,0c4h,004h,0b8h,001h,000h,050h,0b8h,0bch,050h,050h
	call f45a3_
	db 083h,0c4h,004h,0b8h,002h,000h,050h,0b8h,0c7h,050h,050h
	call f45a3_
	db 083h,0c4h,004h,0b8h,003h,000h,050h,0b8h,0d2h,050h,050h
	call f45a3_
	db 083h,0c4h,004h,0b8h,004h,000h,050h,0b8h,0ddh,050h,050h
	call f45a3_
	db 083h,0c4h,004h,0b8h,0e8h,050h,050h
	call f45e5_
	db 059h,0ebh,008h
l4d01:
	db 0b8h,005h,000h,050h
	call exit_game_
	db 059h
l4d09:
	call show_credits_
	db 0b8h,042h,000h,050h,0b8h,000h,033h,050h,0b8h,0f5h,050h,050h
	call read_file_bytes_
	db 083h,0c4h,006h,0b8h,0bch,002h,050h,0b8h,044h,030h,050h,0b8h,000h,051h,050h
	call read_file_bytes_
	db 083h,0c4h,006h,0b8h,0eeh,013h,050h,0b8h,048h,008h,050h,0b8h,009h,051h,050h
	call read_file_bytes_
	db 083h,0c4h,006h,0b8h,018h,000h,050h,0b8h,0d0h,04fh,050h,0b8h,011h,051h,050h
	call read_file_bytes_
	db 083h,0c4h,006h,0b8h,01ch,051h,050h
	call f46e4_
	db 059h,0b8h,000h,000h,050h,050h,0b8h,025h,051h,050h
	call make_data_path_
	db 083h,0c4h,004h,050h
	call open_
	db 083h,0c4h,004h,0a3h,044h,008h,03dh,0ffh,0ffh,075h,008h,0b8h,007h,000h,050h
	call exit_game_
	db 059h
l4d82:
	db 0c7h,006h,03eh,030h,0ffh,0ffh,0c7h,006h,040h,030h,000h,000h
l4d8e:
	db 0a1h,040h,030h,0d1h,0e0h,08bh,0d8h,0c7h,087h,036h,01ch,0ffh,0ffh,0ffh,006h,040h
	db 030h,0a1h,040h,030h,03dh,004h,000h,07ch,0e7h,0c7h,006h,040h,030h,000h,000h,0b8h
	db 000h,000h,050h,050h,0b8h,02dh,051h,050h
	call make_data_path_
	db 083h,0c4h,004h,050h
	call open_
	db 083h,0c4h,004h,0a3h,042h,008h,03dh,0ffh,0ffh,075h,008h,0b8h,008h,000h,050h
	call exit_game_
	db 059h
l4dd3:
	db 0b8h,00eh,000h,050h
	call load_sounds_
	db 059h,0c7h,046h,0fah,000h,000h
l4de0:
	db 0b8h,042h,005h,050h
	call alloc_far_
	db 059h,08bh,04eh,0fah,0d1h,0e1h,0d1h,0e1h,08bh,0d9h,089h,097h,0d4h,007h,089h,087h
	db 0d2h,007h,083h,0bfh,0d4h,007h,000h,075h,005h,083h,0bfh,0d2h,007h,000h
l4e05:
	db 075h,00ah,0b8h,014h,000h,050h
	call exit_game_
	db 059h,0ebh,02fh
l4e11:
	db 0b8h,0cch,006h,050h
	call alloc_far_
	db 059h,08bh,04eh,0fah,0d1h,0e1h,0d1h,0e1h,08bh,0d9h,089h,097h,00ch,008h,089h,087h
	db 00ah,008h,083h,0bfh,00ch,008h,000h,075h,005h,083h,0bfh,00ah,008h,000h
l4e36:
	db 075h,008h,0b8h,014h,000h,050h
	call exit_game_
	db 059h
l4e40:
	db 0ffh,046h,0fah,08bh,046h,0fah,03dh,00eh,000h,07ch,095h,0c7h,006h,0c0h,04fh,000h
	db 000h,0c7h,006h,03ah,036h,001h,000h,08bh,0e5h,05dh,0c3h
#endasm
