extern char g4326[];
extern char g433e[];
extern char g4348[];
extern int bottom_line_win;
extern int g4352;
extern int g438a;
extern int g438c;
extern int g43b8;
extern int g4fae;
extern int g4fb0;
extern int g500e;
extern int g5010;
extern int g5012;
extern int game_state;
extern int group_monster_rec[];
extern int main_window;
extern int monster_group_count;
extern int monster_groups[];
extern int party_picture_win;
extern int return_cmd;
extern int sprite_list[];
f72d1()
{
	int l2;
	int l4;
	char x4[662];
	g5012 = 1;
	g4352 = 0;
	for (l2 = 0; l2 < 7; l2++) {
	group_monster_rec[l2] = malloc(222);
	monster_groups[l2] = malloc(416);
	}
	l2 = 0;
L731f:
	((char *)(sprite_list[l2] = malloc(24)))[20] = -1;
	l2++;
	if (l2 < 12) goto L731f;
	for (l2 = 0; l2 < 3; l2++) {
	g4326[l2] = 0;
	}
	for (l2 = 0; l2 < 1; l2++) {
	for (l4 = 0; l4 < 5; l4++) {
	g4348[((l2 * 5) + l4)] = 0;
	g433e[((l2 * 5) + l4)] = 0;
	}
	}
	defer_window_draw(g4fb0);
	g438a = create_window(0, 19, 19, 5, 11, -4, 0, 0);
	g438c = create_window(20, 19, 20, 5, 10, -1, 0, 0);
	g4fae = 0;
	defer_window_draw(g438c);
	defer_window_draw(g438a);
	clear_window(party_picture_win, 0);
	start_encounter();
	g500e = (return_cmd == 18 ? 0 : 1);
	g5010 = (return_cmd == 18 ? 1 : 0);
	if ((return_cmd == 18) && (monster_group_count > 1)) {
	defer_window_draw(main_window);
	defer_window_draw(bottom_line_win);
	clear_window(party_picture_win, 0);
	refresh_all_windows();
	wait_animating_view(1);
	strcpy(20500, g43b8);
	get_message(3512, 20580);
	set_cursor(party_picture_win, (20 - (((strlen(20500) + strlen(20580)) + 1) / 2)), 0);
	print_string(party_picture_win, 20500, 6);
	print_string(party_picture_win, 20580, 14);
	play_sound(0);
	}
	update_party_after_round();
	game_state = 11;
}
