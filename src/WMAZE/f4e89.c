extern int anim_phase;
extern int g363e;
extern int g5032;
extern int g5034;
extern int g5036;
extern int party_count;
init_maze_screen()
{
	int l2;
	get_message(2000, 20510);
	get_message(2001, 20520);
	for (l2 = 0; l2 < party_count; l2++) {
	draw_member_status_m(l2);
	}
	g5032 = 1;
	g5034 = 1;
	g5036 = 0;
	anim_phase = 0;
	g363e = 0;
}
