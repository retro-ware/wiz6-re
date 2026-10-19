#asm
	extrn extract_bits_:near
	extrn load_sound_bank_:near
	extrn play_sound_:near
	extrn set_event_flags_:near
	extrn show_message_text_m_:near
#endasm
extern char g4518[];
extern char g453a[];
extern int bottom_line_win;
extern int event_screen_dirty;
extern int g4edc;
extern int g522a;
extern int main_window;
extern int message_delay;
extern int party_count;
trap_event()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	int l16;
	char x16[78];
	int l96;
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0fah
#endasm
	if (extract_bits(l6, 8, 4) != 4) goto Lae8b;
	kill_party(10000, 4);
	return;
Lae8b:
	event_screen_dirty = 1;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,080h,0b8h,030h,006h,000h,076h,035h,080h
	db 0b8h,030h,006h,00eh,072h,01bh,08ah,080h,030h,006h,02ah,0e4h,03bh,006h,036h,043h
	db 074h,005h,050h
	call load_sound_bank_
	db 059h
#endasm
Laeb8:
	play_sound(14);
	goto Laed5;
Laec2:
	;
#asm
laec2:
	db 08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h,030h,006h,02ah,0e4h,050h
	call play_sound_
	db 059h
#endasm
Laed5:
	;
#asm
laed5:
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,083h,038h,000h,07eh,00ch
	db 0b8h,000h,000h,050h,0ffh,030h
	call show_message_text_m_
	db 083h,0c4h,004h
#endasm
Laef1:
	defer_window_draw(main_window);
	defer_window_draw(bottom_line_win);
	g522a = create_window(0, 19, 40, 5, 20, -1, 0, 0);
	l4 = extract_bits(l6, 8, 4);
	l10 = extract_bits(l6, 0, 4);
	l8 = extract_bits(l6, 4, 4);
	l16 = extract_bits(l6, 12, 1);
	l14 = extract_bits(l6, 15, 1);
	if (!l16) goto Lb000;
	if (g4edc <= 0) goto Lb000;
	l14 = 1;
	get_message(2056, &l96);
	clear_window(g522a, 0);
	refresh_all_windows();
	set_cursor(g522a, (20 - ((strlen(&l96) + 1) / 2)), 1);
	print_string(g522a, &l96, 6);
	play_sound(0);
	wait_animating_m(message_delay);
Lb000:
	;
#asm
lb000:
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,020h,001h,089h
	db 046h,0f4h
#endasm
	l2 = 0;
	goto Lb0d4;
Lb01a:
	if (random(54) <= ((unsigned char)g4518[(432 * l2)] - l8)) goto Lb0d1;
	if (l14) goto Lb089;
	if (!l12) goto Lb07a;
	if (random(100) <= ((unsigned char)g453a[((432 * l2) + l12)] - (l8 * 3))) goto Lb089;
Lb07a:
	trap_damage_member(l2, l8, l10);
Lb089:
	if (l4 <= 0) goto Lb0d1;
	if (l4 >= 6) goto Lb0ad;
	inflict_condition(l2, (l4 + 5261), l12, l4);
	goto Lb0d1;
Lb0ad:
	inflict_status(l2, (l4 + 5244), l12, (l4 + -6), l8, 10, l8);
Lb0d1:
	l2++;
Lb0d4:
	if (l2 < party_count) goto Lb01a;
#asm
lb0e0:
	db 0b8h,002h,000h,050h,0b8h,00dh,000h,050h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh
	db 01eh,0a8h,04fh,0ffh,0b0h,040h,002h
	call extract_bits_
	db 083h,0c4h,006h,050h
	call set_event_flags_
	db 059h
#endasm
	destroy_window(g522a, 0);
	resume_window_draw(main_window);
	resume_window_draw(bottom_line_win);
	return;
}
