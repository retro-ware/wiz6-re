extern int g438c;
extern int g4fb0;
extern int g5262;
extern int g5264;
extern int main_window;
/* NPC encounter: set up windows, run the NPC interaction menu, then clean up. */
run_npc_encounter()
{
	g5264 = 0;
	g5262 = 4;
	init_npc_encounter();
	f97c6();
	fb805();
	fd46f();
	erase_window(main_window, 0);
	defer_window_draw(g4fb0);
	g438c = create_window(20, 19, 20, 5, 10, -1, 0, 0);
	f5488(g438c);
	fb344();
	destroy_window(g438c, 0);
	erase_window(main_window, 0);
	resume_window_draw(g4fb0);
	fba00();
}
