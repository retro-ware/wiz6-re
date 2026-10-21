extern int group_monster_rec[];
extern int monster_groups[];
struct s44 { int w[22]; };
/* Update every combatant of group g for the end of a round. */
update_group(g)
{
	int l2;
	int i;
	l2 = 0;
	for (i = 0; (unsigned char)(*(char **)((char *)monster_groups + (g << 1)))[413] > i; i++) {
	if (((unsigned)((char *)monster_groups[g] + (44 * i))[34] >= 3) || (update_combatant(g, i, (unsigned char)(*(char **)((char *)group_monster_rec + (g << 1)))[215], 0) != 1)) goto L541f;
L541f:
	if ((unsigned)((char *)monster_groups[g] + (44 * i))[34] < 3) {
	*(struct s44 *)((char *)monster_groups[g] + (44 * l2)) = *(struct s44 *)((char *)monster_groups[g] + (44 * i));
	l2++;
	}
	}
	(*(char **)((char *)monster_groups + (g << 1)))[413] = l2;
}
