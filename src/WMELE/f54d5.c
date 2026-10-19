extern char g019c[];
extern char g4515[];
extern char g4533[];
extern int game_state_arg;
extern int monster_group_count;
extern int monster_groups[];
extern int party_count;
/* Roll for each monster group whether the party notices it (surprise). */
check_group_surprise()
{
	int g;
	int member;
	int roll;
	g = 1;
	goto L5564;
L54e3:
	member = 0;
	goto L5558;
L54ea:
	roll = random(100);
	if (g019c[monster_groups[g]] != 1) goto L5555;
	if (((unsigned char)g4533[(432 * member)] - (game_state_arg * 3)) > roll) goto L5534;
	if ((unsigned char)g4515[(432 * member)] <= roll) goto L5555;
L5534:
	g019c[monster_groups[g]] = 0;
	maybe_raise_skill(member, 23, 0);
L5555:
	member++;
L5558:
	if (member < party_count) goto L54ea;
	g++;
L5564:
	if (g <= monster_group_count) goto L54e3;
}
