#asm
	extrn show_error_msg_:near
#endasm
extern char *prompt_win;
extern int sheet_win;
rename_character(slot)
{
	char x0[8];
	int name;
	int l12;
	int l14;
	load_and_show_character(slot);
	set_cursor(prompt_win, 1, 1);
	print_message(1128, prompt_win, 18);
	l12 = (unsigned char)prompt_win[6];
	l14 = (unsigned char)prompt_win[7];
	clear_window_area(prompt_win, l12, l14, (l12 + 7), l14);
	set_cursor(prompt_win, l12, l14);
	input_text(prompt_win, &name, 7, 5, 0);
	if (!*(char *)&name) goto L9982;
	if (is_name_taken(&name) != -1) goto L9943;
#asm
	db 0b8h,002h,000h,050h,0b8h,006h,000h,050h,0b8h,04eh,004h,050h
	call show_error_msg_
	db 083h,0c4h,006h,0ebh,03fh
#endasm
L9943:
	strcpy(21616, &name);
	access_roster_record(21616, slot, 1);
	clear_window_area(sheet_win, 4, 1, 11, 1);
	draw_sex_race_class();
	wait_for_key();
L9982:
	;
}
