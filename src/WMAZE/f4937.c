extern char *g4fa8;
extern char g4eea;
extern char g4eeb;
extern int cell_event_index;
extern int g4eca;
extern int g4f8a;
extern int game_state;
extern int game_state_arg;
extern int maze_data;
extern int party_level;
extern int return_cmd;
load_maze_level(p4)
{
	int l2;
	int l4;
	char x4[4];
	register int rsi;
	register int rdi;
	game_state_arg = p4;
	ensure_disk_for(2, game_state_arg);
	if (game_state_arg >= 0) goto L4963;
	game_state = 7;
	return;
L4963:
	g4eeb = 1;
	g4eea = 1;
	alloc_maze_buffers();
	movmem(((game_state_arg * 10) + 13304), ((game_state_arg * 10) + 20204), 10);
	return_cmd = 5;
	g4f8a = -1;
	setmem(20072, 96, 0);
	cell_event_index = (unsigned char)(g4fa8 + party_level)[1728];
	rsi = 0;
L49cf:
	rdi = (unsigned char)(g4fa8 + rsi)[1728];
L49db:
	if ((rdi >= 144) || ((unsigned char)(g4fa8 + rdi)[1296] != rsi)) goto L4a2f;
	if ((unsigned)(g4fa8 + rdi)[864] <= 0) goto L4a2c;
	set_bit(20072, (((rsi << 6) + ((unsigned char)(g4fa8 + rdi)[1152] << 3)) + (unsigned char)(g4fa8 + rdi)[1008]), 1);
L4a2c:
	rdi++;
	goto L49db;
L4a2f:
	rsi++;
	if (rsi < 12) goto L49cf;
	setmem(19976, 96, 0);
	rdi = 0;
L4a4a:
	rsi = 0;
L4a4d:
	l2 = get_bitfield((maze_data + 1274), ((rsi * 5) + rdi), 3);
	l4 = get_bitfield((maze_data + 1298), ((rsi * 5) + rdi), 3);
	if ((l4 + l2) <= 0) goto L4aa5;
	flood_mark_cells(rsi, l2, l4, 1);
L4aa5:
	rsi++;
	if (rsi < 12) goto L4a4d;
	rdi++;
	if (rdi < 5) goto L4a4a;
	if (game_state_arg == 8) goto L4abe;
	g4eca = 0;
L4abe:
	game_state = 5;
	return;
}
