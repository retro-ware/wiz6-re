extern char *g4fa8;
extern int cell_event_index;
extern int event_screen_dirty;
extern int g4f8a;
extern int g5034;
extern int g5232;
extern int game_state;
extern int party_cell_x;
extern int party_cell_y;
extern int party_level;
/* Run each event record attached to the party's cell while still in maze state. */
run_cell_events()
{
	g4f8a = -1;
	event_screen_dirty = 0;
Lc8f8:
	cell_event_index = f7bd2(party_cell_x, party_cell_y, party_level, cell_event_index);
	if (cell_event_index == -1) goto Lca26;
	g5232 = 1;
	switch ((unsigned char)(g4fa8 + cell_event_index)[864]) {
case 1:
	do_teleport_event();
	goto Lca0f;
case 2:
	if (g5034) {
	f9f8c();
	}
	goto Lca0f;
case 3:
	do_message_event();
	goto Lca0f;
case 4:
	encounter_event();
	goto Lca0f;
case 5:
	npc_event();
	goto Lca0f;
case 6:
	check_party_item_event();
	goto Lca0f;
case 7:
	fa5cd();
	goto Lca0f;
case 8:
	if (*(int *)(g4fa8 + (cell_event_index << 1)) > 0) {
	show_message_text_m(*(int *)(g4fa8 + (cell_event_index << 1)), 0);
	} else {
	check_secret_detect();
	}
	goto Lca0f;
case 9:
	trap_event();
	goto Lca0f;
case 10:
	change_walls_event();
	goto Lca0f;
case 11:
	set_flag_event();
	goto Lca0f;
case 12:
	puzzle_event();
	goto Lca0f;
case 13:
	riddle_event();
	goto Lca0f;
case 14:
case 15:
	goto Lca0f;
case 16:
	fb123();
	goto Lca0f;
case 17:
	fa68d();
	goto Lca0f;
case 18:
	fa385();
	goto Lca0f;
case 19:
	goto Lca0f;
case 20:
	goto Lca0f;
case 21:
	fb53d();
	goto Lca0f;
case 22:
	fb9a2();
	goto Lca0f;
case 23:
	fbaed();
	goto Lca0f;
case 24:
	fc363();
	goto Lca0f;
case 25:
	apply_member_effects();
	goto Lca0f;
	}
Lca0f:
	if (game_state == 5) goto Lca18;
	return;
Lca18:
	if (g5232 == 1) {
	cell_event_index++;
	}
	goto Lc8f8;
Lca26:
	if (event_screen_dirty == 1) {
	refresh_all_windows();
	}
	return;
}
