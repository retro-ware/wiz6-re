extern int cell_event_index;
extern int g4f8c;
extern int g4f98;
extern int game_state;
extern int game_state_arg;
extern int main_window;
extern int message_delay;
extern int party_cell_x;
extern int party_cell_y;
extern int party_facing;
extern int party_level;
extern int return_cmd;
/* Make the party flee a number of steps away (game state 23). */
flee_party(p4)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	char x10[94];
	int l106;
	setmem(&l106, 96, 0);
	return_cmd = 23;
	game_state = 5;
	erase_window(main_window, 0);
	l6 = 0;
	set_bit(&l106, (((party_level << 6) + (party_cell_y << 3)) + party_cell_x), 1);
	l2 = party_facing;
	if (game_state_arg == g4f98) {
	l2 = ((g4f8c + 2) % 4);
	}
	l4 = (((party_facing + 3) % 4) == l2 ? 3 : 1);
L7901:
	if (party_facing == l2) goto L792f;
	party_facing = ((party_facing + l4) % 4);
	redraw_maze_view();
	if (!l6) {
	l6 = show_fleeing_msg();
	}
	wait_animating_m(2);
	goto L7901;
L792f:
	l8 = -1;
	do {
	l10 = 0;
	save_position();
	if ((l8 == -1) || (random(4))) goto L79ba;
	party_facing = ((party_facing + l8) % 4);
	if (try_step(&l106)) goto L7983;
	if (!l6) {
	l6 = show_fleeing_msg();
	}
	show_prev_position();
	l10 = 1;
	goto L79ba;
L7983:
	party_facing = ((party_facing + 2) % 4);
	if (try_step(&l106)) goto L79b4;
	if (!l6) {
	l6 = show_fleeing_msg();
	}
	show_prev_position();
	l10 = 1;
	goto L79ba;
L79b4:
	party_facing = g4f8c;
L79ba:
	if ((l10) || (try_step(&l106) != 1)) goto L7a3b;
	party_facing = (((!random(2) ? 1 : 3) + party_facing) % 4);
	if (try_step(&l106)) goto L7a03;
	show_prev_position();
	goto L7a3b;
L7a03:
	party_facing = ((party_facing + 2) % 4);
	if (try_step(&l106)) goto L7a23;
	show_prev_position();
	goto L7a3b;
L7a23:
	party_facing = g4f8c;
	erase_window(main_window, 1);
	return;
L7a3b:
	set_bit(&l106, (((party_level << 6) + (party_cell_y << 3)) + party_cell_x), 1);
	redraw_maze_view();
	if (!l6) {
	l6 = show_fleeing_msg();
	}
	wait_animating_m(2);
	l8 = (random(2) ? 1 : 3);
	p4--;
	} while ((p4 > 0) && (f7bd2(party_cell_x, party_cell_y, party_level, cell_event_index) == -1));
	tick_effect_timers(2);
	wait_animating_m((message_delay / 4));
	erase_window(main_window, 1);
	return;
}
