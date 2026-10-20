extern char pc_condition[];
extern char pc_sex[];
extern int game_state;
extern int main_window;
extern int message_delay;
extern int party_count;
extern int pc_hp[];
extern int pc_stamina[];
kill_party(p4)
{
	int l2;
	redraw_maze_view();
	show_maze_message(p4);
	for (l2 = 0; l2 < party_count; l2++) {
	if ((unsigned)pc_condition[(432 * l2)] < 3) {
	play_sound(((unsigned char)pc_sex[(432 * l2)] + 8));
	}
	pc_condition[(432 * l2)] = 3;
	*(int *)((char *)pc_hp + (432 * l2)) = 0;
	*(int *)((char *)pc_stamina + (432 * l2)) = 0;
	draw_member_status_m(l2);
	wait_animating_m(2);
	}
	wait_animating_m((message_delay << 1));
	erase_window(main_window, 1);
	game_state = 8;
}
