extern char *monster_groups;
extern char g458c[];
extern char pc_condition[];
extern int pc_hp[];
extern int pc_stamina[];
f5f19(p4)
{
	*(int *)((char *)pc_hp + (432 * p4)) = *(int *)((monster_groups + (44 * p4)) + 2);
	*(int *)((char *)pc_stamina + (432 * p4)) = *(int *)((monster_groups + (44 * p4)) + 6);
	pc_condition[(432 * p4)] = (monster_groups + (44 * p4))[34];
	movmem(((monster_groups + (44 * p4)) + 14), ((432 * p4) + 17674), 10);
	g458c[(432 * p4)] = (monster_groups + (44 * p4))[35];
}
