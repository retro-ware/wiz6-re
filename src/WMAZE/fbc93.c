#asm
	extrn show_message_text_m_:near
#endasm
extern int bottom_line_win;
extern int event_screen_dirty;
extern int g522a;
extern int game_state_arg;
extern int main_window;
/* Multi-choice puzzle from message text; correct answer sequence sets level flags. */
puzzle_event()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int choices;
	int steps;
	int l16;
	int l18;
	int l20;
	int l22;
	int failed;
	int l26;
	int l28;
	char answer[80];
	char x108[78];
	int l188;
	int enabled[16];
	int l222;
	register int rsi;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,080h,0b8h,030h,006h,000h,076h,01fh,0b8h
	db 000h,000h,050h,0d1h,0e6h,08bh,000h,050h,08bh,036h,0e8h,04eh,08ah,080h,030h,006h
	db 02ah,0e4h,08bh,0c8h,058h,003h,0c1h,050h
	call show_message_text_m_
	db 083h,0c4h,004h
#endasm
Lbcc9:
	;
#asm
lbcc9:
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0f8h
#endasm
	choices = extract_bits(l8, 0, 4);
	steps = extract_bits(l8, 4, 4);
	l16 = extract_bits(l8, 8, 4);
	l18 = extract_bits(l8, 12, 1);
	l20 = extract_bits(l8, 13, 1);
	l22 = extract_bits(l8, 14, 1);
	l28 = extract_bits(l8, 15, 1);
	event_screen_dirty = 1;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,000h,089h,046h,0f6h
#endasm
	erase_window(main_window, 0);
	defer_window_draw(main_window);
	if (l20 != 1) goto Lbda6;
	get_message(2038, answer);
	goto Lbdb6;
Lbda6:
	get_message(l10, answer);
	l10++;
Lbdb6:
	set_cursor(main_window, (20 - ((strlen(answer) + 1) / 2)), 0);
	print_string_hi(main_window, answer, 3);
	resume_window_draw(main_window);
	g522a = create_window(0, 19, 40, 5, 20, -1, 0, 0);
	fill_window(g522a, 32, 3, 0);
	erase_window(bottom_line_win, 0);
	refresh_all_windows();
	get_message(l10, answer);
	l10++;
	l2 = 0;
	goto Lbe6b;
Lbe59:
	enabled[l2] = 1;
	l2++;
Lbe6b:
	if (l2 < choices) goto Lbe59;
	enabled[choices] = -1;
	if (l20 != 1) goto Lbf2d;
	get_message(l10, &l188);
	l6 = maze_menu_select(g522a, l10, enabled, (20 - ((strlen(&l188) + 1) / 2)), 1, 20, 4, 5, 0);
	if ((l222 = ((((unsigned char)answer[(l6 << 1)] * 10) + (unsigned char)answer[((l6 << 1) + 1)]) + -528)) <= 0) goto Lbf2a;
	if (l222 >= 80) goto Lbf2a;
	set_bit(((game_state_arg * 10) + 20204), l222, 0);
Lbf2a:
	goto Lc090;
Lbf2d:
	failed = 0;
	l26 = 0;
	l2 = 0;
	goto Lc043;
Lbf3f:
	fill_window(g522a, 32, 3, 0);
	refresh_window(g522a);
	get_message(l10, &l188);
	l6 = maze_menu_select(g522a, l10, enabled, (20 - (((strlen(&l188) << 1) + 4) / 2)), 1, (strlen(&l188) + 3), (((choices - 1) / 2) + 1), 5, 0);
	if (l22 != 1) goto Lbfd3;
	enabled[l6] = 0;
Lbfd3:
	if ((choices - 1) != l6) goto Lbfef;
	l2 = steps;
	if (failed) goto Lbfed;
	l26 = 1;
Lbfed:
	goto Lc040;
Lbfef:
	if (l16 <= 0) goto Lbffc;
	play_sound(l16);
Lbffc:
	if ((l4 = char_index(answer, (unsigned char)((l6 + 48)))) == -1) goto Lc02f;
	if (l18) goto Lc040;
	if (((unsigned char)answer[l2] + -48) == l6) goto Lc040;
Lc02f:
	failed = 1;
	if (l28 != 1) goto Lc040;
	l2 = steps;
Lc040:
	l2++;
Lc043:
	if (l2 < steps) goto Lbf3f;
	if (l26) goto Lc090;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,020h,001h,089h
	db 046h,0f8h
#endasm
	swap_level_flags(extract_bits(l8, 0, 8), extract_bits(l8, 8, 8), failed);
Lc090:
	erase_window(main_window, 0);
	destroy_window(g522a, 0);
	f0a42(bottom_line_win, 0);
}
