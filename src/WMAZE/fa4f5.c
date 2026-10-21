extern char g450c[];
extern char g450d[];
extern char g4527[];
extern char pc_condition[];
extern int g4ed0;
extern int g4ed2;
extern int g4f86;
extern int game_state_arg;
extern int party_count;
check_secret_detect()
{
	int l2;
	int l4;
	int l16[6];
	if ((g4ed0 > 0) && (random(100) < g4ed2)) {
	g4f86 = 1;
	}
	for (l2 = 0; l2 < party_count; l2++) {
	l16[l2] = 0;
	}
	l2 = 0;
	goto La5bf;
La53f:
	do {
	l4 = random(party_count);
	} while (l16[l4]);
	l16[l4] = 1;
	if (((!pc_condition[(432 * l4)]) && (!g450c[(432 * l4)])) && (!g450d[(432 * l4)])) goto La586;
	goto La5bc;
La586:
	if (random(((game_state_arg * 10) + 110)) >= (unsigned char)g4527[(432 * l4)]) goto La5bc;
	show_member_notice(l4);
	return;
La5bc:
	l2++;
La5bf:
	if (l2 < party_count) goto La53f;
	return;
}
