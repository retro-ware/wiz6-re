extern char *g4fa8;
extern int bottom_line_win;
extern int cell_event_index;
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
	l6 = *(int *)((g4fa8 + (cell_event_index << 1)) + 576);
	if (extract_bits(l6, 11, 1) != 1) goto Lc1d1;
	g4f8a = extract_bits(l6, 9, 2);
	if (g4f8a == party_facing) goto Lc1d1;
	return;
Lc1d1:
	show_message_text_m(*(int *)(g4fa8 + (cell_event_index << 1)), 0);
	l172 = extract_bits(l6, 8, 1);
	l8 = (extract_bits(l6, 0, 8) + *(int *)(g4fa8 + (cell_event_index << 1)));
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
	if (string_index(&reply, accepted) != -1) {
	wrong = 0;
	}
	goto Lc2ff;
Lc2e6:
	if (strcmp(&reply, accepted)) goto Lc2ff;
	wrong = 0;
Lc2ff:
	l8++;
	get_message(l8, accepted);
	goto Lc2ac;
Lc312:
	swap_level_flags(*(int *)((g4fa8 + (cell_event_index << 1)) + 288), (unsigned char)(g4fa8 + cell_event_index)[1584], wrong);
	if (!wrong) {
	set_event_flags((l172 + 1));
	}
	destroy_window(g522a, 0);
	resume_window_draw(main_window);
	resume_window_draw(bottom_line_win);
	return;
}
