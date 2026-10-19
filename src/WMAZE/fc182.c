#asm
	extrn extract_bits_:near
	extrn show_message_text_m_:near
	extrn swap_level_flags_:near
#endasm
extern int bottom_line_win;
extern int g4f8a;
extern int g522a;
extern int main_window;
extern int msg_not_found;
extern int party_facing;
/* Ask the player for a word and compare it with the accepted answers; sets event flags on a match. */
riddle_event()
{
	char x0[4];
	int l6;
	int l8;
	char x8[78];
	int reply;
	char accepted[80];
	int wrong;
	int l172;
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0fah
#endasm
	if (extract_bits(l6, 11, 1) != 1) goto Lc1d1;
	g4f8a = extract_bits(l6, 9, 2);
	if (g4f8a == party_facing) goto Lc1d1;
	return;
Lc1d1:
	;
#asm
lc1d1:
	db 0b8h,000h,000h,050h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,0ffh
	db 030h
	call show_message_text_m_
	db 083h,0c4h,004h
#endasm
	l172 = extract_bits(l6, 8, 1);
#asm
	db 0b8h,008h,000h,050h,0b8h,000h,000h,050h,0ffh,076h,0fah
	call extract_bits_
	db 083h,0c4h,006h,08bh,00eh,0e8h,04eh,0d1h,0e1h,08bh,0f1h,08bh,01eh,0a8h,04fh,08bh
	db 008h,003h,0c1h,089h,046h,0f8h
#endasm
	defer_window_draw(main_window);
	defer_window_draw(bottom_line_win);
	g522a = create_window(0, 19, 40, 5, 20, -1, 0, 0);
	refresh_all_windows();
	set_cursor(g522a, 2, 0);
	print_message(2039, g522a, 1);
	input_text_m(g522a, &reply, 20, 6, 0);
	wrong = 1;
	get_message(l8, accepted);
Lc2ac:
	if (msg_not_found) goto Lc312;
	if (accepted[0] != 36) goto Lc2e6;
	strcpy(accepted, ((char *)accepted + 1));
	if (string_index(&reply, accepted) == -1) goto Lc2e4;
	wrong = 0;
Lc2e4:
	goto Lc2ff;
Lc2e6:
	if (strcmp(&reply, accepted)) goto Lc2ff;
	wrong = 0;
Lc2ff:
	l8++;
	get_message(l8, accepted);
	goto Lc2ac;
Lc312:
	;
#asm
lc312:
	db 0ffh,0b6h,056h,0ffh,08bh,036h,0e8h,04eh,08bh,01eh,0a8h,04fh,08ah,080h,030h,006h
	db 02ah,0e4h,050h,0d1h,0e6h,0ffh,0b0h,020h,001h
	call swap_level_flags_
	db 083h,0c4h,006h
#endasm
	if (wrong) goto Lc342;
	set_event_flags((l172 + 1));
Lc342:
	destroy_window(g522a, 0);
	resume_window_draw(main_window);
	resume_window_draw(bottom_line_win);
	return;
}
