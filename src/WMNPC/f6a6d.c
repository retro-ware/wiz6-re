extern int g433a;
extern int g522c;
extern int g5274;
ovmain()
{
	g522c = -1;
	g5274 = g433a;
	run_npc_encounter();
	return 0;
}
