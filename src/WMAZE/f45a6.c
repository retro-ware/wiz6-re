extern char *maze_data;
extern char g4eea;
extern char g4eeb;
extern int far_buffers_a[];
extern int far_buffers_b[];
extern int g07d4[];
extern int g080c[];
extern int g3304;
extern int g3306;
extern int g4fa8;
extern int game_state_arg;
extern int party_cell_x;
extern int party_cell_y;
extern int party_level;
extern int party_x;
extern int party_y;
alloc_maze_buffers()
{
	if (!maze_data) {
	maze_data = malloc(g3304);
	g4eeb = 1;
	}
	if (!g4fa8) {
	g4fa8 = malloc(g3306);
	g4eea = 1;
	}
	if (g4eeb == 1) {
	copy_far(*(int *)((char *)far_buffers_a + (game_state_arg << 2)), *(int *)((char *)g07d4 + (game_state_arg << 2)), (char far *)(char *)maze_data, g3304);
	}
	if (g4eea == 1) {
	copy_far(*(int *)((char *)far_buffers_b + (game_state_arg << 2)), *(int *)((char *)g080c + (game_state_arg << 2)), (char far *)(char *)g4fa8, g3306);
	}
	g4eeb = 0;
	g4eea = 0;
	party_x = ((unsigned char)(maze_data + party_level)[480] + party_cell_x);
	party_y = ((unsigned char)(maze_data + party_level)[492] + party_cell_y);
}
