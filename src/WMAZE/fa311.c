extern char *g4fa8;
extern int cell_event_index;
extern int g503e;
extern int message_delay;
do_teleport_event()
{
	int l2;
	l2 = *(int *)(g4fa8 + (cell_event_index << 1));
	switch (l2) {
case 0:
case 1:
	teleport_party();
	break;
case 2:
	show_maze_message(2052);
	play_sound(8);
	wait_animating_m((message_delay / 4));
	g503e = 1;
	teleport_party();
	break;
case 4:
case 5:
case 6:
	play_sound(8);
	teleport_party();
	break;
	}
}
