extern char g019c[];
extern int group_monster_rec[];
extern int monster_groups[];
get_combatant_name(p4, p6, p8)
{
	if (p6) goto L6bc1;
	strcpy(p4, ((432 * p8) + 17384));
	goto L6bed;
L6bc1:
	strcpy(p4, ((char *)group_monster_rec[p6] + ((unsigned char)g019c[monster_groups[p6]] << 5)));
L6bed:
	;
}
