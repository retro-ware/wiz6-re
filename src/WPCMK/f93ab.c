/* Full character creation sequence for a new name, saving it into a roster slot. */
#asm
	public create_character_
	extrn access_roster_record_:near
	extrn choose_class_:near
	extrn choose_portrait_:near
	extrn choose_race_:near
	extrn choose_sex_:near
	extrn choose_starting_spell_:near
	extrn clear_name_rows_:near
	extrn close_:near
	extrn distribute_bonus_points_:near
	extrn draw_character_sheet_:near
	extrn draw_stats_:near
	extrn f7e92_:near
	extrn fill_window_:near
	extrn give_class_items_:near
	extrn init_new_character_:near
	extrn make_data_path_:near
	extrn menu_select_:near
	extrn open_:near
	extrn print_message_:near
	extrn random_:near
	extrn refresh_window_:near
	extrn roll_karma_:near
	extrn set_cursor_:near
	extrn setmem_:near
	extrn skill_points_screen_:near
	extrn stop_sound_:near
	extrn strcpy_:near
	extrn write_:near
create_character_:
	db 055h,08bh,0ech,083h,0c4h,0d2h,0b8h,000h,000h,050h,0b8h,0b0h,001h,050h,0b8h,070h
	db 054h,050h
	call setmem_
	db 083h,0c4h,006h,0ffh,076h,004h,0b8h,070h,054h,050h
	call strcpy_
	db 083h,0c4h,004h
	call clear_name_rows_
	call draw_character_sheet_
	db 0c7h,006h,0ach,056h,0ffh,0ffh
	call draw_stats_
	call choose_race_
	call choose_sex_
	db 0b8h,006h,000h,050h
	call random_
	db 059h,005h,005h,000h,0a3h,0ach,056h,0b8h,014h,000h,050h
	call random_
	db 059h,085h,0c0h,075h,005h,083h,006h,0ach,056h,008h
l9404:
	db 0b8h,014h,000h,050h
	call random_
	db 059h,085h,0c0h,075h,005h,083h,006h,0ach,056h,008h
l9415:
	db 083h,03eh,0ceh,056h,001h,075h,006h,0c7h,006h,0ach,056h,015h,000h
l9422:
	call draw_stats_
	call choose_class_
	call distribute_bonus_points_
	call init_new_character_
	call roll_karma_
	call f7e92_
	db 0c6h,006h,00ch,056h,000h
	call choose_portrait_
	call give_class_items_
	call draw_character_sheet_
	db 080h,03eh,018h,056h,000h,076h,008h,0ffh,036h,0cah,056h
	call skill_points_screen_
	db 059h
l9451:
	db 0c7h,046h,0feh,000h,000h
l9456:
	db 08bh,05eh,0feh,080h,0bfh,088h,055h,000h,076h,011h,053h,0ffh,036h,0cah,056h,0ffh
	db 036h,06eh,054h
	call choose_starting_spell_
	db 083h,0c4h,006h,0ebh,0e5h
l9471:
	db 0ffh,046h,0feh,08bh,046h,0feh,03dh,004h,000h,07ch,0dah,0b8h,000h,000h,050h,0b8h
	db 003h,000h,050h,0b8h,020h,000h,050h,0ffh,036h,0cah,056h
	call fill_window_
	db 083h,0c4h,008h,0ffh,036h,0cah,056h
	call refresh_window_
	db 059h,0c7h,046h,0d2h,001h,000h,0c7h,046h,0d4h,001h,000h,0c7h,046h,0d6h,0ffh,0ffh
	db 0b8h,001h,000h,050h,0b8h,006h,000h,050h,0ffh,036h,0cah,056h
	call set_cursor_
	db 083h,0c4h,006h,0b8h,012h,000h,050h,0ffh,036h,0cah,056h,0b8h,04fh,004h,050h
	call print_message_
	db 083h,0c4h,006h,0b8h,000h,000h,050h,0b8h,005h,000h,050h,0b8h,001h,000h,050h,0b8h
	db 004h,000h,050h,0b8h,001h,000h,050h,08bh,01eh,0cah,056h,08ah,047h,006h,02ah,0e4h
	db 040h,050h,08dh,046h,0d2h,050h,0b8h,05ah,004h,050h,053h
	call menu_select_
	db 083h,0c4h,012h,089h,046h,0fch,083h,07eh,0fch,000h,075h,050h,0b8h,001h,000h,050h
	db 0ffh,076h,006h,0b8h,070h,054h,050h
	call access_roster_record_
	db 083h,0c4h,006h,08bh,05eh,006h,0c6h,087h,0d8h,04fh,001h
	call stop_sound_
	db 0b8h,002h,000h,050h,0b8h,000h,000h,050h,0b8h,0feh,053h,050h
	call make_data_path_
	db 083h,0c4h,004h,050h
	call open_
	db 083h,0c4h,004h,089h,046h,0fah,0b8h,018h,000h,050h,0b8h,0d0h,04fh,050h,0ffh,076h
	db 0fah
	call write_
	db 083h,0c4h,006h,0ffh,076h,0fah
	call close_
	db 059h
l9554:
	db 08bh,0e5h,05dh,0c3h
#endasm
