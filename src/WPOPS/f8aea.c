extern char g019d[];
extern int blink_state;
extern int bottom_line_win;
extern int g438a;
extern int g438c;
extern int g43b4;
extern int g4fae;
extern int game_state;
extern int main_window;
extern int party_picture_win;
extern int picture_win;
extern int view_anim_state;
/* Combat round start: set up windows, get party and monster actions, set game state 13. */
start_combat_round()
{
	char x0[2];
	blink_state = -1;
	resume_window_draw(main_window);
	resume_window_draw(bottom_line_win);
	draw_monster_groups(g438c, 0);
	resume_window_draw(g438a);
	resume_window_draw(g438c);
	f0a42(main_window, 0);
	f0a42(bottom_line_win, 0);
	if ((unsigned)g019d[g43b4] > 0) {
	destroy_window(picture_win, 0);
	picture_win = create_window(9, 4, 22, 12, 2, -1, 2, 0);
	g4fae = create_window(9, 16, 22, 2, 16, -1, 0, 0);
	draw_ally_group();
	}
	choose_party_actions(g438a);
	if (!g4fae) goto L8c15;
	destroy_window(g4fae, 0);
	g4fae = 0;
	destroy_window(picture_win, 0);
	picture_win = create_window(9, 4, 22, 14, 2, -1, 2, 0);
	view_anim_state = -2;
L8c0b:
	animate_combat_step();
	if (view_anim_state != -3) goto L8c0b;
L8c15:
	defer_window_draw(g438a);
	defer_window_draw(g438c);
	erase_window(main_window, 0);
	erase_window(bottom_line_win, 0);
	clear_window(party_picture_win, 0);
	choose_monster_actions();
	defer_window_draw(main_window);
	defer_window_draw(bottom_line_win);
	game_state = 13;
}
