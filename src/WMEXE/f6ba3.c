extern int group_monster_rec[];
extern int monster_groups[];
get_combatant_name(p4, p6, p8)
{
	if (p6) goto L6bc1;
	strcpy(p4, ((432 * p8) + 17384));
	goto L6bed;
L6bc1:
	strcpy(p4, ((char *)group_monster_rec[p6] + ((unsigned char)(*(char **)((char *)monster_groups + (p6 << 1)))[412] << 5)));
L6bed:
	;
}
