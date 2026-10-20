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
	for (g = 1; g <= monster_group_count; g++) {
	member = 0;
	goto L5558;
L54ea:
	roll = random(100);
	if (((*(char **)((char *)monster_groups + (g << 1)))[412] == 1) && ((((unsigned char)g4533[(432 * member)] - (game_state_arg * 3)) > roll) || ((unsigned char)g4515[(432 * member)] > roll))) {
	(*(char **)((char *)monster_groups + (g << 1)))[412] = 0;
	maybe_raise_skill(member, 23, 0);
	}
	member++;
L5558:
	if (member < party_count) goto L54ea;
	}
}
