extern char g019d[];
extern int monster_groups[];
find_most_wounded(monster, group)
char *monster;
{
	int l2;
	int best_damage;
	register int rsi;
	best_damage = 0;
	l2 = 0;
	goto L841d;
L83be:
	rsi = (44 * l2);
	if ((*(int *)(((char *)monster_groups[group] + rsi) + 4) - *(int *)(((char *)monster_groups[group] + rsi) + 2)) <= best_damage) goto L841a;
	if (random(2)) goto L841a;
	monster[31] = *(char *)&group;
	monster[32] = *(char *)&l2;
	rsi = (44 * l2);
	best_damage = (*(int *)(((char *)monster_groups[group] + rsi) + 4) - *(int *)(((char *)monster_groups[group] + rsi) + 2));
L841a:
	l2++;
L841d:
	if ((unsigned char)g019d[monster_groups[group]] > l2) goto L83be;
	return best_damage;
}
