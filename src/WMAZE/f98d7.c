extern int far_buffers_a[];
extern int far_buffers_b[];
extern int g07d4[];
extern int g080c[];
extern int g3304;
extern int g3306;
extern int g4fa8;
extern int game_state_arg;
extern int maze_data;
save_level_flags()
{
	movmem(((game_state_arg * 10) + 20204), ((game_state_arg * 10) + 13304), 10);
	copy_far((char far *)(char *)maze_data, *(int *)((char *)far_buffers_a + (game_state_arg << 2)), *(int *)((char *)g07d4 + (game_state_arg << 2)), g3304);
	copy_far((char far *)(char *)g4fa8, *(int *)((char *)far_buffers_b + (game_state_arg << 2)), *(int *)((char *)g080c + (game_state_arg << 2)), g3306);
}
