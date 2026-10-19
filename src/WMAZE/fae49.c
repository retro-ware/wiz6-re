extern char *g4fa8;
extern char g4518[];
extern char g453a[];
extern int bottom_line_win;
extern int cell_event_index;
extern int cur_sound;
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
	l6 = *(int *)((g4fa8 + (cell_event_index << 1)) + 576);
	if (extract_bits(l6, 8, 4) != 4) goto Lae8b;
	kill_party(10000, 4);
	return;
Lae8b:
	event_screen_dirty = 1;
	if ((unsigned)(g4fa8 + cell_event_index)[1584] <= 0) goto Laed5;
	if ((unsigned)(g4fa8 + cell_event_index)[1584] < 14) goto Laec2;
	if ((unsigned char)(g4fa8 + cell_event_index)[1584] == cur_sound) goto Laeb8;
	load_sound_bank((unsigned char)(g4fa8 + cell_event_index)[1584]);
Laeb8:
	play_sound(14);
	goto Laed5;
Laec2:
	play_sound((unsigned char)(g4fa8 + cell_event_index)[1584]);
Laed5:
	if (*(int *)(g4fa8 + (cell_event_index << 1)) <= 0) goto Laef1;
	show_message_text_m(*(int *)(g4fa8 + (cell_event_index << 1)), 0);
Laef1:
	defer_window_draw(main_window);
	defer_window_draw(bottom_line_win);
	g522a = create_window(0, 19, 40, 5, 20, -1, 0, 0);
	l4 = extract_bits(l6, 8, 4);
	l10 = extract_bits(l6, 0, 4);
	l8 = extract_bits(l6, 4, 4);
	l16 = extract_bits(l6, 12, 1);
	l14 = extract_bits(l6, 15, 1);
	if ((!l16) || (g4edc <= 0)) goto Lb000;
	l14 = 1;
	get_message(2056, &l96);
	clear_window(g522a, 0);
	refresh_all_windows();
	set_cursor(g522a, (20 - ((strlen(&l96) + 1) / 2)), 1);
	print_string(g522a, &l96, 6);
	play_sound(0);
	wait_animating_m(message_delay);
Lb000:
	l12 = *(int *)((g4fa8 + (cell_event_index << 1)) + 288);
	l2 = 0;
	goto Lb0d4;
Lb01a:
	if (random(54) <= ((unsigned char)g4518[(432 * l2)] - l8)) goto Lb0d1;
	if ((l14) || ((l12) && (random(100) <= ((unsigned char)g453a[((432 * l2) + l12)] - (l8 * 3))))) goto Lb089;
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
	set_event_flags(extract_bits(*(int *)((g4fa8 + (cell_event_index << 1)) + 576), 13, 2));
	destroy_window(g522a, 0);
	resume_window_draw(main_window);
	resume_window_draw(bottom_line_win);
	return;
}
