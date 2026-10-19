extern int g4f8c;
extern int g4f8e;
extern int g4f90;
extern int g4f92;
extern int g4f94;
extern int g4f96;
extern int g4f98;
extern int game_state_arg;
extern int party_cell_x;
extern int party_cell_y;
extern int party_facing;
extern int party_level;
extern int party_x;
extern int party_y;
save_position()
{
	g4f96 = party_x;
	g4f94 = party_y;
	g4f92 = party_cell_x;
	g4f90 = party_cell_y;
	g4f8e = party_level;
	g4f98 = game_state_arg;
	g4f8c = party_facing;
}
