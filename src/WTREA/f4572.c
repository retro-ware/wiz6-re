extern int g501c;
extern int g501e;
extern int g5020;
extern int g5022;
extern int game_state;
ovmain()
{
	g501c = -1;
	g501e = 0;
	g5020 = -1;
	g5022 = -1;
	if (game_state != 15) goto L459c;
	game_state = 22;
	treasure_after_combat();
	goto L45b4;
L459c:
	if (game_state != 21) goto L45ae;
	game_state = 22;
	treasure_found();
	goto L45b4;
L45ae:
	game_state = 22;
L45b4:
	return 0;
}
