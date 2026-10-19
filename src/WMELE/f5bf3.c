extern char *monster_groups;
extern char g458c[];
extern char pc_condition[];
extern int pc_hp[];
extern int pc_stamina[];
/* Copy party member i's stats into its combat group entry. */
copy_member_to_combatant(p4)
{
	register int rsi;
	rsi = (44 * p4);
	*(int *)((char *)pc_hp + (432 * p4)) = *(int *)((monster_groups + rsi) + 2);
	*(int *)((char *)pc_stamina + (432 * p4)) = *(int *)((monster_groups + rsi) + 6);
	pc_condition[(432 * p4)] = (monster_groups + rsi)[34];
	movmem(((monster_groups + rsi) + 14), ((432 * p4) + 17674), 10);
	rsi = (44 * p4);
	g458c[(432 * p4)] = (monster_groups + rsi)[35];
}
